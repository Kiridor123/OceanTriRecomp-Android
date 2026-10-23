#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800BAC94_ra38_f6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f4, double arg_f5, double arg_f6, double arg_f7)
{
    uint32_t addr_psqx_800BAFAC_loc_0 = 0;
    uint32_t addr_psqx_800BAFB8_loc_0 = 0;
    uint32_t addr_psqx_800BAFC4_loc_0 = 0;
    uint32_t addr_psqx_800BAFD0_loc_0 = 0;
    uint32_t addr_psqx_800BAFDC_loc_0 = 0;
    uint32_t addr_psqx_800BAFE8_loc_0 = 0;
    uint32_t addr_psqx_800BAFF4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800BAC94;

loc_800BAC94:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -224), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 228u, (r1 + 228), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 208u, (r1 + 208), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 192u, (r1 + 192), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 176u, (r1 + 176), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    r11 = (r1 + 112);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    f25.d = f1.d;
    f30.d = f2.d;
    f29.d = f4.d;
    f28.d = f5.d;
    f26.d = f6.d;
    f27.d = f7.d;
    r30 = r6;
    r31 = r7;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BAD30:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BAD48;
    }
}

loc_800BAD34:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BAD40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BAD48;
    }
}

loc_800BAD44:
{
    r10 = 0;
}

loc_800BAD48:
{
}

loc_800BAD4C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BAD64;
    }
}

loc_800BAD50:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BAD5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BAD64;
    }
}

loc_800BAD60:
{
    r9 = 0;
}

loc_800BAD64:
{
}

loc_800BAD68:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BAD7C;
    }
}

loc_800BAD6C:
{
    r0 = (r11 + 1073741824);
}

loc_800BAD74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BAD7C;
    }
}

loc_800BAD78:
{
    r8 = 0;
}

loc_800BAD7C:
{
}

loc_800BAD80:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BAD98;
    }
}

loc_800BAD84:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BAD90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BAD98;
    }
}

loc_800BAD94:
{
    r7 = 0;
}

loc_800BAD98:
{
}

loc_800BAD9C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BADB4;
    }
}

loc_800BADA0:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BADAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BADB4;
    }
}

loc_800BADB0:
{
    r6 = 0;
}

loc_800BADB4:
{
}

loc_800BADB8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BADD0;
    }
}

loc_800BADBC:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BADC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BADD0;
    }
}

loc_800BADCC:
{
    r5 = 0;
}

loc_800BADD0:
{
}

loc_800BADD4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BADF8;
    }
}

loc_800BADD8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18360);
    r4 = 380;
    r5 = 0x80590000u;
    r5 = (r5 + 18304);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BADF8u;
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

loc_800BADF8:
{
    r3 = (r1 + 64);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r28;
    r4 = (r1 + 64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B5518u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 52);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 52);
    r4 = r29;
    r5 = (r28 + 172);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80051560u>(ctx);
    f31.d = PpcFmulsInline(f30.d, f29.d);
    f30.d = PpcFmulsInline(f30.d, f28.d);
    f29.d = MemoryInline::FlatReadFloat32(r30);
    f28.d = MemoryInline::FlatReadFloat32((r30 + 4));
    r3 = (r1 + 40);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 28);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 16);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31052));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800BAE58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800BAF1C;
    }
}

loc_800BAE5C:
{
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    f1.d = (-(f0.d));
    ctx->lr = 0x800BAE6Cu;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PpcFmulsInline(f2.d, f26.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = PpcFmulsInline(f3.d, f26.d);
    f2.d = PpcFmulsInline(f2.d, f27.d);
    f5.d = PpcFmulsInline(f3.d, f27.d);
    f4.d = (-(f28.d));
    f3.d = PpcFmulsInline(f1.d, f29.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f3.d = PpcFmulsInline(f2.d, f28.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f3.d = PpcFmulsInline(f0.d, f29.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f3.d));
    f3.d = PpcFmulsInline(f5.d, f28.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f4.d = PpcFmulsInline(f25.d, f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 40), f3.d);
    f4.d = PpcFmulsInline(f31.d, f6.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 44), f3.d);
    f4.d = PpcFmulsInline(f30.d, f6.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 48), f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f3.d = PpcFmulsInline(f25.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 28), f3.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f3.d = PpcFmulsInline(f31.d, f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 32), f3.d);
    f3.d = PpcFmulsInline(f30.d, f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 36), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f5.d));
    f0.d = PpcFmulsInline(f25.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 16), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f31.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 20), f0.d);
    f0.d = PpcFmulsInline(f30.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 24), f0.d);
    goto loc_800BAF90;
}

loc_800BAF1C:
{
    f0.d = PpcFmulsInline(f29.d, f26.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f0.d));
    f1.d = PpcFmulsInline(f25.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r1 + 40), f0.d);
    f0.d = PpcFmulsInline(f28.d, f27.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f1.d = PpcFmulsInline(f31.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r1 + 44), f0.d);
    f1.d = PpcFmulsInline(f30.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r1 + 48), f0.d);
    f1.d = PpcFmulsInline(f25.d, f26.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r1 + 28), f1.d);
    f0.d = PpcFmulsInline(f31.d, f27.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r1 + 32), f0.d);
    f0.d = PpcFmulsInline(f30.d, f27.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r1 + 36), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 16), f1.d);
    f0.d = (-(f31.d));
    f0.d = PpcFmulsInline(f0.d, f27.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 20), f0.d);
    f0.d = (-(f30.d));
    f0.d = PpcFmulsInline(f0.d, f27.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 24), f0.d);
}

loc_800BAF90:
{
    r3 = r27;
    r4 = (r1 + 40);
    r5 = (r1 + 28);
    r6 = (r1 + 16);
    r7 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800BA798u>(ctx);
    r0 = 216;
    addr_psqx_800BAFAC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BAFAC_loc_0));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 140u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 116u, (r1 + 208));
    r0 = 200;
    addr_psqx_800BAFB8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BAFB8_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 100u, (r1 + 192));
    r0 = 184;
    addr_psqx_800BAFC4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BAFC4_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 84u, (r1 + 176));
    r0 = 168;
    addr_psqx_800BAFD0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BAFD0_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 68u, (r1 + 160));
    r0 = 152;
    addr_psqx_800BAFDC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BAFDC_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 52u, (r1 + 144));
    r0 = 136;
    addr_psqx_800BAFE8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BAFE8_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 36u, (r1 + 128));
    r0 = 120;
    addr_psqx_800BAFF4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BAFF4_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 20u, (r1 + 112));
    r11 = (r1 + 112);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_3, 136u, (r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800BAC94(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800BAC94_ra38_f6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFE003FFF fpr_write=0xFE003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800BAC94 func_800BAC94 preserves=true fpr_mask=0x00000000
