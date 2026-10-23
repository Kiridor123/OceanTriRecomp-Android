#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80139AC8(CpuContext* ctx);
extern "C" uint64_t func_80139AC8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80139AE0(CpuContext* ctx);
extern "C" uint64_t func_80139AE0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80139AFC(CpuContext* ctx);
extern "C" uint64_t func_80139AFC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802AD79C(CpuContext* ctx);
extern "C" uint64_t func_802AD79C_ra38_18_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_801399B8_ra38_18_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_801399B8;

loc_801399B8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r29 = r3;
    r31 = r4;
    r30 = r8;
    r3 = (r1 + 8);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r0 = MemoryInline::FlatRead8((r30 + 4));
}

loc_801399EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80139A0C;
    }
}

loc_801399F0:
{
}

loc_801399F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80139A0C;
    }
}

loc_801399F8:
{
}

loc_801399FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80139A4C;
    }
}

loc_80139A00:
{
}

loc_80139A04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80139A90;
    }
}

loc_80139A08:
{
    goto loc_80139AAC;
}

loc_80139A0C:
{
    r0 = MemoryInline::FlatRead8((r30 + 16));
}

loc_80139A14:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_80139AAC;
    }
}

loc_80139A18:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = (r0 * 132);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r30 + 8));
}

loc_80139A2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80139AAC;
    }
}

loc_80139A30:
{
    r0 = MemoryInline::FlatRead8((r4 + 1160));
}

loc_80139A38:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80139AAC;
    }
}

loc_80139A3C:
{
    r3 = r31;
    r4 = (r4 + 1204);
    ctx->lr = 0x80139A48u;
    if constexpr (KnownRegArgsCpuCall<0x80139AFCu>(&func_80139AFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_80139AFC_CB3 = func_80139AFC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80139AFC_CB3);
        r4 = static_cast<uint32_t>(regargs_result_80139AFC_CB3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80139AFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    goto loc_80139AAC;
}

loc_80139A4C:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
}

loc_80139A54:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(6))) {
        goto loc_80139AAC;
    }
}

loc_80139A58:
{
    r3 = r31;
    r4 = (r1 + 8);
    ctx->lr = 0x80139A64u;
    if constexpr (KnownRegArgsCpuCall<0x80139AE0u>(&func_80139AE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_80139AE0_116D = func_80139AE0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80139AE0_116D);
        r4 = static_cast<uint32_t>(regargs_result_80139AE0_116D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80139AE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 1858));
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800502E0u>(ctx);
    r3 = r31;
    r4 = (r1 + 8);
    ctx->lr = 0x80139A8Cu;
    if constexpr (KnownRegArgsCpuCall<0x80139AC8u>(&func_80139AC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_80139AC8_1722 = func_80139AC8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80139AC8_1722);
        r4 = static_cast<uint32_t>(regargs_result_80139AC8_1722 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80139AC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    goto loc_80139AAC;
}

loc_80139A90:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 * 144);
    r3 = (r3 + r0);
    r3 = (r3 + 1424);
    r4 = r31;
    ctx->lr = 0x80139AACu;
    if constexpr (KnownRegArgsCpuCall<0x802AD79Cu>(&func_802AD79C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AD79C_1B71 = func_802AD79C_ra38_18_18_0(ctx, r3, r4, r5, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802AD79C_1B71);
        r4 = static_cast<uint32_t>(regargs_result_802AD79C_1B71 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x802AD79Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_80139AAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801399B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801399B8_ra38_18_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000013F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0xC0000018 fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801399B8 func_801399B8 preserves=true fpr_mask=0x00000000
