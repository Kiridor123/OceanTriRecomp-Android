#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804795E0(CpuContext* ctx);
extern "C" uint64_t func_804795E0_ra0_0_18_0(CpuContext*);
extern "C" void func_80479610(CpuContext* ctx);
extern "C" uint64_t func_80479610_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_804780F0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804780F0u);
    goto loc_804780F0;

loc_804780F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80610000u;
}

loc_80478100:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 + 13784);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80478188;
    }
}

loc_80478110:
{
    r31 = (r3 + -8);
    r0 = (r31 & 1);
}

loc_80478118:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80478124;
    }
}

loc_8047811C:
{
    r0 = 0;
    goto loc_80478150;
}

loc_80478124:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_8047812C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_8047814C;
    }
}

loc_80478130:
{
    r4 = 0x80710000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 4080);
    r4 = (r4 + -3456);
    r4 = (r4 + 196608);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r4 + -30232));
    goto loc_80478150;
}

loc_8047814C:
{
    r0 = 0;
}

loc_80478150:
{
    r4 = (r3 + r0);
    r0 = (r4 & 1);
}

loc_80478158:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80478164;
    }
}

loc_8047815C:
{
    r0 = 1;
    goto loc_80478180;
}

loc_80478164:
{
    r3 = -574947328;
    r4 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + -8774);
    r3 = (r0 - r4);
    r0 = (r4 - r0);
    r0 = (r3 | r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_80478180:
{
    r0 = (r0 & 255);
}

loc_80478184:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804781A0;
    }
}

loc_80478188:
{
    r3 = 65536;
    r4 = (r5 + 48);
    r0 = (r3 + -1);
    r3 = (r0 & 65535);
    // inline leaf 0x80479660 (1 guest instruction(s))
    // end of inlined leaf 0x80479660
    goto loc_8047824C;
}

loc_804781A0:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
}

loc_804781A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_804781C4;
    }
}

loc_804781AC:
{
    r3 = 65536;
    r4 = (r5 + 72);
    r0 = (r3 + -4);
    r3 = (r0 & 65535);
    // inline leaf 0x80479660 (1 guest instruction(s))
    // end of inlined leaf 0x80479660
    goto loc_8047824C;
}

loc_804781C4:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_804781CC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(9))) {
        goto loc_804781E8;
    }
}

loc_804781D0:
{
    r3 = 65536;
    r4 = (r5 + 92);
    r0 = (r3 + -3);
    r3 = (r0 & 65535);
    // inline leaf 0x80479660 (1 guest instruction(s))
    // end of inlined leaf 0x80479660
    goto loc_8047824C;
}

loc_804781E8:
{
    ctx->lr = 0x804781ECu;
    if constexpr (KnownRegArgsCpuCall<0x80479610u>(&func_80479610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80479610_F0B = func_80479610_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80479610_F0B);
        r4 = static_cast<uint32_t>(regargs_result_80479610_F0B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80479610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8((r31 + 4));
    r3 = 0x80710000u;
    r3 = (r3 + -3456);
    r3 = (r3 + 196608);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r4 + -30236));
}

loc_8047820C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80478218;
    }
}

loc_80478210:
{
    MemoryInline::FlatWrite32(r3, r31);
    goto loc_8047821C;
}

loc_80478218:
{
    MemoryInline::FlatWrite32((r4 + -30240), r31);
}

loc_8047821C:
{
    MemoryInline::FlatWrite32((r4 + -30236), r31);
    r3 = 0;
    r0 = 240;
    MemoryInline::FlatWrite32(r31, r3);
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r4 + -30228));
}

loc_8047823C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80478248;
    }
}

loc_80478240:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r4 + -30228), static_cast<uint16_t>(r0));
}

loc_80478248:
{
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804795E0_1674 = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_1674);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_1674 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804795E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8047824C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804780F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804780F0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804780F0 func_804780F0 preserves=true fpr_mask=0x00000000
