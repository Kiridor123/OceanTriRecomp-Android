#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B510C(CpuContext* ctx);
extern "C" uint32_t func_803B510C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_803668A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803668A4;

loc_803668A4:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r0 = (r3 & 255);
}

loc_803668B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803668C0;
    }
}

loc_803668B4:
{
}

loc_803668B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803668F4;
    }
}

loc_803668BC:
{
    goto loc_803669E8;
}

loc_803668C0:
{
    r3 = 0;
    ctx->lr = 0x803668C8u;
    if constexpr (KnownRegArgsCpuCall<0x803B510Cu>(&func_803B510C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B510C_4F3 = func_803B510C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B510C_4F3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B510Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_803668CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803668DC;
    }
}

loc_803668D0:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_803668E4;
}

loc_803668DC:
{
    r0 = 8;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_803668E4:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_803669EC;
}

loc_803668F4:
{
    r3 = 0;
    ctx->lr = 0x803668FCu;
    if constexpr (KnownRegArgsCpuCall<0x803B510Cu>(&func_803B510C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B510C_8FD = func_803B510C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B510C_8FD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803B510Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80366900:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80366910;
    }
}

loc_80366904:
{
    r0 = 6;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_80366918;
}

loc_80366910:
{
    r0 = 8;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_80366918:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_803669EC;
}

loc_803669E8:
{
    r3 = 0;
}

loc_803669EC:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0000003 gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803668A4 func_803668A4 preserves=true fpr_mask=0x00000000
