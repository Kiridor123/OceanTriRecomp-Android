#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004B02C(CpuContext* ctx);
extern "C" uint64_t func_8004B02C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004BA64(CpuContext* ctx);
extern "C" uint64_t func_8004BA64_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004BC50(CpuContext* ctx);
extern "C" uint64_t func_8004BC50_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801ED4C8_ra128_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addze_src_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[8] = arg_r8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801ED4C8;

loc_801ED4C8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 5));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    r29 = (r0 & 255);
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = MemoryInline::FlatRead16((r28 + 34));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    ctx->lr = 0x801ED504u;
    if constexpr (KnownRegArgsCpuCall<0x8004B02Cu>(&func_8004B02C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8004B02C_81F = func_8004B02C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004B02C_81F);
        r4 = static_cast<uint32_t>(regargs_result_8004B02C_81F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8004B02Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r30 & 65535);
    r5 = MemoryInline::FlatRead16((r28 + 32));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = r29;
    r7 = 1;
    ctx->lr = 0x801ED520u;
    if constexpr (KnownRegArgsCpuCall<0x8004BC50u>(&func_8004BC50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8004BC50_D20 = func_8004BC50_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BC50_D20);
        r4 = static_cast<uint32_t>(regargs_result_8004BC50_D20 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8004BC50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r30 & 65535);
    r0 = MemoryInline::FlatRead16((r28 + 32));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (0 - r0);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6 = MemoryInline::FlatRead8((r28 + 5));
    r7 = 1;
    ctx->lr = 0x801ED540u;
    if constexpr (KnownRegArgsCpuCall<0x8004BC50u>(&func_8004BC50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8004BC50_12F1 = func_8004BC50_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BC50_12F1);
        r4 = static_cast<uint32_t>(regargs_result_8004BC50_12F1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8004BC50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r3 = r29;
    // inline leaf 0x8004AF70 (5 guest instruction(s))
}

loc_inl0_0x8004AF70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl0_0x8004AF74:
{
    r3 = 24;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8004AF7C:
{
    r3 = 32;
    goto loc_inl0_cont_8004AF70;
}

loc_inl0_return:
{
}

loc_inl0_cont_8004AF70:
{
    // end of inlined leaf 0x8004AF70
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = r29;
    // inline leaf 0x8004AFC4 (6 guest instruction(s))
}

loc_inl1_0x8004AFC4:
{
}

loc_inl1_0x8004AFC8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x8004AFD4;
    }
}

loc_inl1_0x8004AFCC:
{
    r3 = (r3 + 256);
    goto loc_inl1_cont_8004AFC4;
}

loc_inl1_0x8004AFD4:
{
    r3 = (r3 + 160);
}

loc_inl1_cont_8004AFC4:
{
    // end of inlined leaf 0x8004AFC4
    r4 = r3;
    r3 = (r30 & 65535);
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8004BA64u>(&func_8004BA64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        const auto regargs_result_8004BA64_1B5E = func_8004BA64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BA64_1B5E);
        r4 = static_cast<uint32_t>(regargs_result_8004BA64_1B5E >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->xer = xer;
        InvokeDirectCpu<0x8004BA64u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWrite16((r28 + 34), static_cast<uint16_t>(r0));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(3) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 3);
    r0_addze_src_0 = r0;
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_addze_src_0 + r0_ca_0);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r28 + 26), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801ED4C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801ED4C8_ra128_0_18_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[8]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000212A gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801ED4C8 func_801ED4C8 preserves=true fpr_mask=0x00000000
