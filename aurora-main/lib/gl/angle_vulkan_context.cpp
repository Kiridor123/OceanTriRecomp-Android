#include "angle_vulkan_context.hpp"
#if defined(AURORA_ANGLE_VULKAN) && defined(_WIN32)
#ifndef NOMINMAX
#define NOMINMAX
#endif
#include <windows.h>
#include <EGL/egl.h>
#include <EGL/eglext.h>
#include <SDL3/SDL_properties.h>
#include <SDL3/SDL_video.h>
#include <sstream>
#include <utility>
#include <new>

#ifndef EGL_PLATFORM_ANGLE_ANGLE
#define EGL_PLATFORM_ANGLE_ANGLE 0x3202
#endif
#ifndef EGL_PLATFORM_ANGLE_TYPE_ANGLE
#define EGL_PLATFORM_ANGLE_TYPE_ANGLE 0x3203
#endif
#ifndef EGL_PLATFORM_ANGLE_TYPE_VULKAN_ANGLE
#define EGL_PLATFORM_ANGLE_TYPE_VULKAN_ANGLE 0x3450
#endif
#ifndef EGL_PLATFORM_ANGLE_DEVICE_TYPE_ANGLE
#define EGL_PLATFORM_ANGLE_DEVICE_TYPE_ANGLE 0x3209
#endif
#ifndef EGL_PLATFORM_ANGLE_DEVICE_TYPE_HARDWARE_ANGLE
#define EGL_PLATFORM_ANGLE_DEVICE_TYPE_HARDWARE_ANGLE 0x320A
#endif
#ifndef EGL_OPENGL_ES3_BIT_KHR
#define EGL_OPENGL_ES3_BIT_KHR 0x0040
#endif

namespace aurora::gl {
namespace {
using GetProcAddressFn = __eglMustCastToProperFunctionPointerType (EGLAPIENTRY *)(const char*);
using GetPlatformDisplayFn = EGLDisplay (EGLAPIENTRY *)(EGLenum, void*, const EGLint*);
using InitializeFn = EGLBoolean (EGLAPIENTRY *)(EGLDisplay, EGLint*, EGLint*);
using ChooseConfigFn = EGLBoolean (EGLAPIENTRY *)(EGLDisplay, const EGLint*, EGLConfig*, EGLint, EGLint*);
using BindApiFn = EGLBoolean (EGLAPIENTRY *)(EGLenum);
using CreateWindowSurfaceFn = EGLSurface (EGLAPIENTRY *)(EGLDisplay, EGLConfig, EGLNativeWindowType, const EGLint*);
using CreateContextFn = EGLContext (EGLAPIENTRY *)(EGLDisplay, EGLConfig, EGLContext, const EGLint*);
using MakeCurrentFn = EGLBoolean (EGLAPIENTRY *)(EGLDisplay, EGLSurface, EGLSurface, EGLContext);
using SwapBuffersFn = EGLBoolean (EGLAPIENTRY *)(EGLDisplay, EGLSurface);
using SwapIntervalFn = EGLBoolean (EGLAPIENTRY *)(EGLDisplay, EGLint);
using DestroyContextFn = EGLBoolean (EGLAPIENTRY *)(EGLDisplay, EGLContext);
using DestroySurfaceFn = EGLBoolean (EGLAPIENTRY *)(EGLDisplay, EGLSurface);
using TerminateFn = EGLBoolean (EGLAPIENTRY *)(EGLDisplay);
using GetErrorFn = EGLint (EGLAPIENTRY *)();
}

struct AngleVulkanContext::Impl {
    HMODULE module = nullptr;
    EGLDisplay display = EGL_NO_DISPLAY;
    EGLSurface surface = EGL_NO_SURFACE;
    EGLContext context = EGL_NO_CONTEXT;
    GetProcAddressFn getProcAddress = nullptr;
    InitializeFn initialize = nullptr;
    ChooseConfigFn chooseConfig = nullptr;
    BindApiFn bindApi = nullptr;
    CreateWindowSurfaceFn createWindowSurface = nullptr;
    CreateContextFn createContext = nullptr;
    MakeCurrentFn makeCurrent = nullptr;
    SwapBuffersFn swapBuffers = nullptr;
    SwapIntervalFn swapInterval = nullptr;
    DestroyContextFn destroyContext = nullptr;
    DestroySurfaceFn destroySurface = nullptr;
    TerminateFn terminate = nullptr;
    GetErrorFn getError = nullptr;
    std::string errorText;

    template<class T> bool load(T& target, const char* name) noexcept {
        target = reinterpret_cast<T>(GetProcAddress(module, name));
        return target != nullptr;
    }
    void setError(const char* message) noexcept {
        std::ostringstream out;
        out << message;
        if (getError) out << " (EGL error 0x" << std::hex << getError() << ")";
        errorText = out.str();
    }
    void cleanup() noexcept {
        if (display != EGL_NO_DISPLAY && makeCurrent)
            makeCurrent(display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
        if (display != EGL_NO_DISPLAY && context != EGL_NO_CONTEXT && destroyContext)
            destroyContext(display, context);
        context = EGL_NO_CONTEXT;
        if (display != EGL_NO_DISPLAY && surface != EGL_NO_SURFACE && destroySurface)
            destroySurface(display, surface);
        surface = EGL_NO_SURFACE;
        if (display != EGL_NO_DISPLAY && terminate) terminate(display);
        display = EGL_NO_DISPLAY;
        if (module) FreeLibrary(module);
        module = nullptr;
    }
};

AngleVulkanContext::AngleVulkanContext() : impl_(new (std::nothrow) Impl()) {}
AngleVulkanContext::~AngleVulkanContext() { shutdown(); }

bool AngleVulkanContext::initialize(SDL_Window* window) noexcept {
    if (!impl_) {
        impl_.reset(new (std::nothrow) Impl());
        if (!impl_) return false;
    }
    Impl& e = *impl_;
    if (e.module) { e.errorText = "ANGLE EGL context is already initialized"; return false; }

    const SDL_PropertiesID properties = SDL_GetWindowProperties(window);
    HWND hwnd = static_cast<HWND>(SDL_GetPointerProperty(properties, SDL_PROP_WINDOW_WIN32_HWND_POINTER, nullptr));
    if (!hwnd) { e.errorText = "SDL did not provide a Win32 HWND"; return false; }

    e.module = LoadLibraryW(L"libEGL.dll");
    if (!e.module) { e.errorText = "Could not load libEGL.dll from the application directory"; return false; }
    if (!e.load(e.getProcAddress, "eglGetProcAddress") ||
        !e.load(e.initialize, "eglInitialize") || !e.load(e.chooseConfig, "eglChooseConfig") ||
        !e.load(e.bindApi, "eglBindAPI") || !e.load(e.createWindowSurface, "eglCreateWindowSurface") ||
        !e.load(e.createContext, "eglCreateContext") || !e.load(e.makeCurrent, "eglMakeCurrent") ||
        !e.load(e.swapBuffers, "eglSwapBuffers") || !e.load(e.destroyContext, "eglDestroyContext") ||
        !e.load(e.destroySurface, "eglDestroySurface") || !e.load(e.terminate, "eglTerminate") ||
        !e.load(e.getError, "eglGetError")) {
        e.setError("libEGL.dll is missing required EGL entry points"); e.cleanup(); return false;
    }
    e.load(e.swapInterval, "eglSwapInterval");

    auto getPlatformDisplay = reinterpret_cast<GetPlatformDisplayFn>(e.getProcAddress("eglGetPlatformDisplayEXT"));
    if (!getPlatformDisplay)
        getPlatformDisplay = reinterpret_cast<GetPlatformDisplayFn>(e.getProcAddress("eglGetPlatformDisplay"));
    if (!getPlatformDisplay) {
        e.setError("ANGLE does not expose eglGetPlatformDisplayEXT"); e.cleanup(); return false;
    }
    const EGLint displayAttributes[] = {
        EGL_PLATFORM_ANGLE_TYPE_ANGLE, EGL_PLATFORM_ANGLE_TYPE_VULKAN_ANGLE,
        EGL_PLATFORM_ANGLE_DEVICE_TYPE_ANGLE, EGL_PLATFORM_ANGLE_DEVICE_TYPE_HARDWARE_ANGLE,
        EGL_NONE
    };
    e.display = getPlatformDisplay(EGL_PLATFORM_ANGLE_ANGLE, EGL_DEFAULT_DISPLAY, displayAttributes);
    if (e.display == EGL_NO_DISPLAY) {
        e.setError("ANGLE could not create a Vulkan EGL display (Vulkan backend unavailable)"); e.cleanup(); return false;
    }
    EGLint major = 0, minor = 0;
    if (e.initialize(e.display, &major, &minor) != EGL_TRUE) {
        e.setError("eglInitialize failed for ANGLE/Vulkan"); e.cleanup(); return false;
    }
    const EGLint configAttributes[] = {
        EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
        EGL_RENDERABLE_TYPE, EGL_OPENGL_ES3_BIT_KHR,
        EGL_RED_SIZE, 8, EGL_GREEN_SIZE, 8, EGL_BLUE_SIZE, 8, EGL_ALPHA_SIZE, 8,
        EGL_DEPTH_SIZE, 0, EGL_STENCIL_SIZE, 0, EGL_NONE
    };
    EGLConfig config = nullptr;
    EGLint configCount = 0;
    if (e.chooseConfig(e.display, configAttributes, &config, 1, &configCount) != EGL_TRUE || configCount < 1) {
        e.setError("ANGLE/Vulkan has no compatible GLES 3 window configuration"); e.cleanup(); return false;
    }
    if (e.bindApi(EGL_OPENGL_ES_API) != EGL_TRUE) {
        e.setError("eglBindAPI(EGL_OPENGL_ES_API) failed"); e.cleanup(); return false;
    }
    const EGLint surfaceAttributes[] = { EGL_NONE };
    e.surface = e.createWindowSurface(e.display, config, reinterpret_cast<EGLNativeWindowType>(hwnd), surfaceAttributes);
    if (e.surface == EGL_NO_SURFACE) {
        e.setError("eglCreateWindowSurface failed for the MH3 window"); e.cleanup(); return false;
    }
    const EGLint contextAttributes[] = { EGL_CONTEXT_CLIENT_VERSION, 3, EGL_NONE };
    e.context = e.createContext(e.display, config, EGL_NO_CONTEXT, contextAttributes);
    if (e.context == EGL_NO_CONTEXT) {
        e.setError("eglCreateContext failed for GLES 3 on ANGLE/Vulkan"); e.cleanup(); return false;
    }
    if (e.makeCurrent(e.display, e.surface, e.surface, e.context) != EGL_TRUE) {
        e.setError("eglMakeCurrent failed for ANGLE/Vulkan"); e.cleanup(); return false;
    }
    if (e.swapInterval) e.swapInterval(e.display, 1);
    e.errorText.clear();
    return true;
}

void AngleVulkanContext::shutdown() noexcept {
    if (impl_) { impl_->cleanup(); impl_.reset(); }
}
bool AngleVulkanContext::make_current(bool current) noexcept {
    if (!impl_ || !impl_->makeCurrent || impl_->display == EGL_NO_DISPLAY) return false;
    const EGLSurface surface = current ? impl_->surface : EGL_NO_SURFACE;
    const EGLContext context = current ? impl_->context : EGL_NO_CONTEXT;
    if (impl_->makeCurrent(impl_->display, surface, surface, context) == EGL_TRUE) return true;
    impl_->setError(current ? "Could not make ANGLE/Vulkan context current" : "Could not release ANGLE/Vulkan context");
    return false;
}
bool AngleVulkanContext::swap_buffers() noexcept {
    if (!impl_ || !impl_->swapBuffers || impl_->display == EGL_NO_DISPLAY || impl_->surface == EGL_NO_SURFACE) return false;
    if (impl_->swapBuffers(impl_->display, impl_->surface) == EGL_TRUE) return true;
    impl_->setError("eglSwapBuffers failed on ANGLE/Vulkan");
    return false;
}
bool AngleVulkanContext::set_swap_interval(bool enabled) noexcept {
    if (!impl_ || !impl_->swapInterval || impl_->display == EGL_NO_DISPLAY) return false;
    if (impl_->swapInterval(impl_->display, enabled ? 1 : 0) == EGL_TRUE) return true;
    impl_->setError("eglSwapInterval failed on ANGLE/Vulkan");
    return false;
}
const char* AngleVulkanContext::error() const noexcept {
    return impl_ && !impl_->errorText.empty() ? impl_->errorText.c_str() : "Unknown ANGLE/Vulkan EGL error";
}
}
#endif
