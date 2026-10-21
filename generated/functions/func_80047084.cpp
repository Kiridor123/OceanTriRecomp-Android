#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80047084(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x80047084u);
    goto loc_80047084;

loc_80047084:
{
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    MemoryInline::FlatWriteRam8((r3 + 26), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r3 + 27), static_cast<uint8_t>(r0));
    r0 = 8;
    MemoryInline::FlatWriteRam8((r3 + 80), static_cast<uint8_t>(r0));
    r0 = 16;
    MemoryInline::FlatWriteRam8((r3 + 81), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32568));
    MemoryInline::FlatWriteRamFloat32((r3 + 76), f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 72), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80047084_statefree(uint32_t native_r2, PPC_FPR native_f0)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r2 = native_r2;
    uint32_t cached_r3 = 0;
    PPC_FPR cached_f0 = PPC_FPR{};

    MKW_GUEST_ENTER(0x80047084u);
    goto loc_80047084;

loc_80047084:
{
    cached_r0 = 0;
    cached_r3 = 0x80660000u;
    cached_r3 = (cached_r3 + -19268);
    MemoryInline::FlatWriteRam8((cached_r3 + 26), static_cast<uint8_t>(cached_r0));
    cached_r0 = 255;
    MemoryInline::FlatWriteRam8((cached_r3 + 27), static_cast<uint8_t>(cached_r0));
    cached_r0 = 8;
    MemoryInline::FlatWriteRam8((cached_r3 + 80), static_cast<uint8_t>(cached_r0));
    cached_r0 = 16;
    MemoryInline::FlatWriteRam8((cached_r3 + 81), static_cast<uint8_t>(cached_r0));
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r2 + -32568));
    MemoryInline::FlatWriteRamFloat32((cached_r3 + 76), cached_f0.d);
    MemoryInline::FlatWriteRamFloat32((cached_r3 + 72), cached_f0.d);

return cached_f0.raw;
}


    return cached_f0.raw;
}
// RECOMP_STATE_FREE_ABI address=0x80047084 symbol=func_80047084_statefree gpr_in=0x00000004 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000001 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000004 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80047084 func_80047084 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80047084_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80047084(ctx);
    return ctx->gpr[3];
}
