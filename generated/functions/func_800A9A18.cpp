#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A8A6C(CpuContext* ctx);
extern "C" uint32_t func_800A8A6C_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800A9A18_ra38_fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7)
{
    uint32_t addr_psqx_800A9FDC_loc_0 = 0;
    uint32_t addr_psqx_800A9FE8_loc_0 = 0;
    uint32_t addr_psqx_800A9FF4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800A9A18;

loc_800A9A18:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -288), 0, 296u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 292u, (r1 + 292), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 272u, (r1 + 272), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 256u, (r1 + 256), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 240u, (r1 + 240), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 240);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r4;
    r28 = r5;
    r29 = r7;
    r30 = r8;
    r31 = r9;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800A9A7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9A94;
    }
}

loc_800A9A80:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A9A8C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9A94;
    }
}

loc_800A9A90:
{
    r10 = 0;
}

loc_800A9A94:
{
}

loc_800A9A98:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A9AB0;
    }
}

loc_800A9A9C:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A9AA8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9AB0;
    }
}

loc_800A9AAC:
{
    r9 = 0;
}

loc_800A9AB0:
{
}

loc_800A9AB4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A9AC8;
    }
}

loc_800A9AB8:
{
    r0 = (r11 + 1073741824);
}

loc_800A9AC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9AC8;
    }
}

loc_800A9AC4:
{
    r8 = 0;
}

loc_800A9AC8:
{
}

loc_800A9ACC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A9AE4;
    }
}

loc_800A9AD0:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A9ADC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9AE4;
    }
}

loc_800A9AE0:
{
    r7 = 0;
}

loc_800A9AE4:
{
}

loc_800A9AE8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A9B00;
    }
}

loc_800A9AEC:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A9AF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9B00;
    }
}

loc_800A9AFC:
{
    r6 = 0;
}

loc_800A9B00:
{
}

loc_800A9B04:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A9B1C;
    }
}

loc_800A9B08:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A9B14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9B1C;
    }
}

loc_800A9B18:
{
    r5 = 0;
}

loc_800A9B1C:
{
}

loc_800A9B20:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A9B44;
    }
}

loc_800A9B24:
{
    r3 = 0x80590000u;
    r3 = (r3 + 13456);
    r4 = 48;
    r5 = 0x80590000u;
    r5 = (r5 + 13476);
    r6 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A9B44u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800A9B44:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r28 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800A9B68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9B80;
    }
}

loc_800A9B6C:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A9B78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9B80;
    }
}

loc_800A9B7C:
{
    r9 = 0;
}

loc_800A9B80:
{
}

loc_800A9B84:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A9B9C;
    }
}

loc_800A9B88:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A9B94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9B9C;
    }
}

loc_800A9B98:
{
    r8 = 0;
}

loc_800A9B9C:
{
}

loc_800A9BA0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A9BB4;
    }
}

loc_800A9BA4:
{
    r0 = (r10 + 1073741824);
}

loc_800A9BAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9BB4;
    }
}

loc_800A9BB0:
{
    r7 = 0;
}

loc_800A9BB4:
{
}

loc_800A9BB8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A9BD0;
    }
}

loc_800A9BBC:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A9BC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9BD0;
    }
}

loc_800A9BCC:
{
    r6 = 0;
}

loc_800A9BD0:
{
}

loc_800A9BD4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A9BEC;
    }
}

loc_800A9BD8:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A9BE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9BEC;
    }
}

loc_800A9BE8:
{
    r5 = 0;
}

loc_800A9BEC:
{
}

loc_800A9BF0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A9C08;
    }
}

loc_800A9BF4:
{
    r3 = (r28 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A9C00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A9C08;
    }
}

loc_800A9C04:
{
    r4 = 0;
}

loc_800A9C08:
{
}

loc_800A9C0C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A9C30;
    }
}

loc_800A9C10:
{
    r3 = 0x80590000u;
    r3 = (r3 + 13456);
    r4 = 49;
    r5 = 0x80590000u;
    r5 = (r5 + 13532);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A9C30u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800A9C30:
{
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31344));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 104));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800A9C44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A9C58;
    }
}

loc_800A9C48:
{
    r3 = r27;
    r4 = r30;
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, f0.d);
    // end of inlined leaf 0x80051488
    goto loc_800A9C64;
}

loc_800A9C58:
{
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
}

loc_800A9C64:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31344));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 108));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800A9C70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A9C90;
    }
}

loc_800A9C74:
{
    r3 = (r1 + 44);
    r4 = r31;
    // inline leaf 0x80051488 (7 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    PpcSetPairedFprInline(f0, PPC_PsMuls0Inline(f0.d, PPC_PsFromScalarInline(f1.d)));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_3, f0.d);
    // end of inlined leaf 0x80051488
    r3 = r27;
    r4 = r27;
    r5 = (r1 + 44);
    // inline leaf 0x80051430 (9 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r5));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r5_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsAddInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, f0.d);
    // end of inlined leaf 0x80051430
}

loc_800A9C90:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31344));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 112));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800A9C9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A9DA8;
    }
}

loc_800A9CA0:
{
    r3 = (r28 + 236);
    ctx->lr = 0x800A9CA8u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_38B0 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_38B0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800A8A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31336));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31340));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    r3 = (r28 + 236);
    ctx->lr = 0x800A9CC0u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_3D1F = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_3D1F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800A8A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31336));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31340));
    f30.d = PpcFmulsInline(f0.d, f1.d);
    r3 = (r28 + 236);
    ctx->lr = 0x800A9CD8u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_418E = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_418E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800A8A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31336));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31340));
    f29.d = PpcFmulsInline(f0.d, f1.d);
    r3 = (r1 + 28);
    r4 = (r1 + 24);
    f1.d = f31.d;
    ctx->lr = 0x800A9CF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009C7C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = (r1 + 20);
    r4 = (r1 + 16);
    f1.d = f30.d;
    ctx->lr = 0x800A9D08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009C7C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    f1.d = f29.d;
    ctx->lr = 0x800A9D18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009C7C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 24u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 12u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 24));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r1 + 20));
        }
    }
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 8));
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r1 + 28));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 112));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32(r27);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 12u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 24));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r1 + 20));
        }
    }
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 12));
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r1 + 28));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 112));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 112));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r1 + 24));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r1 + 16));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
}

loc_800A9DA8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31344));
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 116), 0, 28u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r28 + 116));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800A9DB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A9DFC;
    }
}

loc_800A9DB8:
{
    f0.d = MemoryInline::FlatReadFloat32(r29);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32(r27);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r28 + 116));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r28 + 116));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
}

loc_800A9DFC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31344));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r28 + 124));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800A9E08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800A9F58;
    }
}

loc_800A9E0C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r28 + 128));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800A9E14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A9EA4;
    }
}

loc_800A9E18:
{
    r3 = (r1 + 152);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 152);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r28 + 132));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r28 + 136));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r28 + 140));
    ctx->lr = 0x800A9E34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009CA94u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31344));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31332));
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 32);
    r4 = (r1 + 152);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r27);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
    goto loc_800A9F58;
}

loc_800A9EA4:
{
    r3 = (r1 + 104);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r28 + 236);
    ctx->lr = 0x800A9EB4u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_6F55 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_6F55;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800A8A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31336));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31340));
    f31.d = PpcFmulsInline(f0.d, f1.d);
    r3 = (r28 + 236);
    ctx->lr = 0x800A9ECCu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_73C4 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_73C4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800A8A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = MemoryInline::FlatReadFloat32((r28 + 128));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    r3 = (r1 + 104);
    f2.d = f31.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -31344));
    ctx->lr = 0x800A9EE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009CA94u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = (r1 + 56);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 56);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 132));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 136));
    f3.d = MemoryInline::FlatReadFloat32((r28 + 140));
    ctx->lr = 0x800A9F00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009CA94u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = (r1 + 104);
    r4 = (r1 + 56);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 124));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r27);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 124));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 140));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 124));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
}

loc_800A9F58:
{
    r0 = MemoryInline::FlatRead8((r28 + 102));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800A9F64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A9FD8;
    }
}

loc_800A9F68:
{
    r3 = (r28 + 236);
    ctx->lr = 0x800A9F70u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_8526 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_8526;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800A8A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31340));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -31332));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r0 = MemoryInline::FlatRead8((r28 + 102));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31320));
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    r0 = 1127219200;
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 200), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31328));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32(r27);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32(r27, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r27 + 8), f0.d);
}

loc_800A9FD8:
{
    r0 = 280;
    addr_psqx_800A9FDC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800A9FDC_loc_0));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 220), 0, 76u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 52u, (r1 + 272));
    r0 = 264;
    addr_psqx_800A9FE8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800A9FE8_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 36u, (r1 + 256));
    r0 = 248;
    addr_psqx_800A9FF4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800A9FF4_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 20u, (r1 + 240));
    r11 = (r1 + 240);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_3, 72u, (r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800A9A18(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800A9A18_ra38_fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A9A18 func_800A9A18 preserves=true fpr_mask=0x00000000
