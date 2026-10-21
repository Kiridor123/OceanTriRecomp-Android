#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F87EC(CpuContext* ctx);
extern "C" uint64_t func_800F87EC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803BEE68(CpuContext* ctx);
extern "C" uint32_t func_803BEE68_ra0_0_8_0(CpuContext*);

extern "C" uint64_t func_80106C18_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t addr_psqx_80106E0C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80106C18u);
    goto loc_80106C18;

loc_80106C18:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r24 = r3;
    r25 = r4;
    r26 = r5;
    f31.d = f1.d;
    r27 = r6;
    ctx->lr = 0x80106C4Cu;
    if constexpr (KnownRegArgsCpuCall<0x803BEE68u>(&func_803BEE68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803BEE68_B19 = func_803BEE68_ra0_0_8_0(ctx);
        r3 = regargs_result_803BEE68_B19;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803BEE68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_80106C54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80106C60;
    }
}

loc_80106C58:
{
}

loc_80106C5C:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(3))) {
        goto loc_80106E08;
    }
}

loc_80106C60:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r27 + 15));
}

loc_80106C70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80106E08;
    }
}

loc_80106C74:
{
}

loc_80106C78:
{
    if ((static_cast<uint32_t>(r25) <= static_cast<uint32_t>(2))) {
        goto loc_80106C88;
    }
}

loc_80106C7C:
{
    r0 = (r25 + -4);
}

loc_80106C84:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80106CA0;
    }
}

loc_80106C88:
{
    r0 = MemoryInline::FlatRead8((r27 + 48));
}

loc_80106C90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80106CA0;
    }
}

loc_80106C94:
{
    r0 = MemoryInline::FlatRead8((r27 + 6));
}

loc_80106C9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80106E08;
    }
}

loc_80106CA0:
{
    r3 = 16;
    ctx->lr = 0x80106CA8u;
    if constexpr (KnownRegArgsCpuCall<0x800F87ECu>(&func_800F87EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800F87EC_12EE = func_800F87EC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F87EC_12EE);
        r4 = static_cast<uint32_t>(regargs_result_800F87EC_12EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F87ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r31 = r3;
}

loc_80106CB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80106E08;
    }
}

loc_80106CB4:
{
    r28 = 0;
    MemoryInline::FlatWriteRam32((r3 + 48), r28);
    r30 = MemoryInline::FlatRead32((r3 + 56));
    r29 = 1;
    MemoryInline::FlatWrite32(r30, r29);
    MemoryInline::FlatWriteFloat32((r30 + 4), f31.d);
    r0 = 12;
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = (r25 & 255);
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r3 = (r3 + 24);
    r4 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32(r26);
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 7), 0, 62u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 29u, (r31 + 36), r0);
    r0 = MemoryInline::FlatRead32((r26 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 33u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 33u, (r31 + 40), r0);
        MemoryInline::WriteResolved32(guest_range_1, 37u, (r31 + 44), r28);
    }
    r3 = r31;
    r4 = 0;
    r5 = 0;
    // inline leaf 0x800F9E58 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x800F9E58
    r0 = MemoryInline::FlatRead8((r27 + 15));
    MemoryInline::WriteResolved8(guest_range_1, 61u, (r31 + 68), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r27 + 48));
}

loc_80106D1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80106DDC;
    }
}

loc_80106D20:
{
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 8), static_cast<uint8_t>(r29));
    r4 = MemoryInline::FlatRead32((r27 + 44));
    r3 = MemoryInline::FlatRead8((r4 + 3));
    r0 = (r3 + -26);
}

loc_80106D34:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(13))) {
        goto loc_80106DC8;
    }
}

loc_80106D38:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -3368);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80106D50u:
        goto loc_80106D50;
        break;
    case 0x80106DC8u:
        goto loc_80106DC8;
        break;
    case 0x80106D84u:
        goto loc_80106D84;
        break;
    case 0x80106D74u:
        goto loc_80106D74;
        break;
    case 0x80106DB4u:
        goto loc_80106DB4;
        break;
    case 0x80106D64u:
        goto loc_80106D64;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80106D50:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29440));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 7), static_cast<uint8_t>(r0));
    goto loc_80106DF0;
}

loc_80106D64:
{
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 7), static_cast<uint8_t>(r28));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29440));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    goto loc_80106DF0;
}

loc_80106D74:
{
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 7), static_cast<uint8_t>(r29));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29440));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    goto loc_80106DF0;
}

loc_80106D84:
{
    r3 = MemoryInline::FlatRead8((r4 + 10));
    r0 = (r3 + -3);
}

loc_80106D90:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80106DA0;
    }
}

loc_80106D94:
{
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 7), static_cast<uint8_t>(r0));
    goto loc_80106DA8;
}

loc_80106DA0:
{
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 7), static_cast<uint8_t>(r0));
}

loc_80106DA8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29436));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    goto loc_80106DF0;
}

loc_80106DB4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29436));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 7), static_cast<uint8_t>(r0));
    goto loc_80106DF0;
}

loc_80106DC8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29436));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 7), static_cast<uint8_t>(r0));
    goto loc_80106DF0;
}

loc_80106DDC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29436));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r31 + 7), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r31 + 8), static_cast<uint8_t>(r28));
}

loc_80106DF0:
{
    r3 = 0x80100000u;
    r0 = (r3 + 28488);
    MemoryInline::WriteResolved32(guest_range_1, 57u, (r31 + 64), r0);
    r3 = 0x80100000u;
    r0 = (r3 + 28548);
    MemoryInline::WriteResolved32(guest_range_1, 45u, (r31 + 52), r0);
}

loc_80106E08:
{
    r0 = 56;
    addr_psqx_80106E0C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80106E0C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80106C18(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80106C18_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000001 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80106C18 func_80106C18 preserves=true fpr_mask=0x00000000
