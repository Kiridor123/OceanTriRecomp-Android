#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80274158(CpuContext* ctx);
extern "C" uint64_t func_80274158_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80274504(CpuContext* ctx);
extern "C" uint64_t func_80274504_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802785F4(CpuContext* ctx);
extern "C" uint64_t func_802785F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80245FA4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80245FA4u);
    goto loc_80245FA4;

loc_80245FA4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80245FC0:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(3))) {
        goto loc_80245FDC;
    }
}

loc_80245FC4:
{
    r0 = (r4 + -4);
}

loc_80245FCC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80245FEC;
    }
}

loc_80245FD0:
{
    r0 = (r4 + -7);
}

loc_80245FD8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80245FFC;
    }
}

loc_80245FDC:
{
    r3 = r31;
    r4 = (r31 + 464);
    ctx->lr = 0x80245FE8u;
    if constexpr (KnownRegArgsCpuCall<0x80274158u>(&func_80274158)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80274158_6D7 = func_80274158_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80274158_6D7);
        r4 = static_cast<uint32_t>(regargs_result_80274158_6D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80274158u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_80245FFC;
}

loc_80245FEC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1386), static_cast<uint8_t>(r0));
    r0 = 150;
    MemoryInline::FlatWrite16((r3 + 1390), static_cast<uint16_t>(r0));
}

loc_80245FFC:
{
    r0 = MemoryInline::FlatRead16((r31 + 1390));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 1388), static_cast<uint16_t>(r0));
    r3 = r31;
    ctx->lr = 0x8024600Cu;
    if constexpr (KnownRegArgsCpuCall<0x802785F4u>(&func_802785F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802785F4_B39 = func_802785F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802785F4_B39);
        r4 = static_cast<uint32_t>(regargs_result_802785F4_B39 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802785F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite8((r31 + 1387), static_cast<uint8_t>(r3));
    r3 = r31;
    r4 = 255;
    r5 = 255;
    ctx->lr = 0x80246020u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8027AC90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = r31;
    ctx->lr = 0x80246028u;
    if constexpr (KnownRegArgsCpuCall<0x80274504u>(&func_80274504)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80274504_FC9 = func_80274504_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80274504_FC9);
        r4 = static_cast<uint32_t>(regargs_result_80274504_FC9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80274504u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80245FA4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80245FA4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80245FA4 func_80245FA4 preserves=true fpr_mask=0x00000000
