#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80553AFC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
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

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80553AFC;

loc_80553AFC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r1 + 180), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    r11 = (r1 + 64);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = MemoryInline::FlatRead32((r3 + 472));
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r25));
}

loc_80553B5C:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r31 = r4;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -1012));
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80553C44;
    }
}

loc_80553B70:
{
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r27 = (r25 * 122);
    f29.d = MemoryInline::FlatReadFloat64((r2 + -1000));
    r26 = MemoryInline::FlatRead32((r3 + 156));
    f28.d = MemoryInline::FlatReadFloat32((r2 + -1008));
    goto loc_80553C38;
}

loc_80553B88:
{
    r0 = MemoryInline::FlatRead32((r30 + 508));
    r0 = (r0 + r27);
    r29 = (r0 + 4);
}

loc_80553B94:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80553BA0;
    }
}

loc_80553B98:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_80553C28;
}

loc_80553BA0:
{
    r3 = r26;
    // inline leaf 0x8052E2B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 228));
    // end of inlined leaf 0x8052E2B0
    f26.d = MemoryInline::FlatReadFloat32((r26 + 232));
    r28 = r3;
    f25.d = MemoryInline::FlatReadFloat32((r26 + 244));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_80553BEC;
}

loc_80553BBC:
{
    r12 = MemoryInline::FlatRead32(r28);
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f25.d));
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x80553BD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 ^ -2147483648);
    r29 = (r29 + 2);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
}

loc_80553BEC:
{
    r4 = MemoryInline::FlatRead16(r29);
}

loc_80553BF4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80553BBC;
    }
}

loc_80553BF8:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80553C0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f26.d / f0.d));
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f0.d));
}

loc_80553C28:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f30.d));
    r27 = (r27 + 122);
    r25 = (r25 + 1);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
}

loc_80553C38:
{
}

loc_80553C3C:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r31))) {
        goto loc_80553B88;
    }
}

loc_80553C40:
{
    goto loc_80553D1C;
}

loc_80553C44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80553D1C;
    }
}

loc_80553C48:
{
    r26 = (r25 + -1);
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r27 = (r26 * 122);
    f28.d = MemoryInline::FlatReadFloat64((r2 + -1000));
    r25 = MemoryInline::FlatRead32((r3 + 156));
    f29.d = MemoryInline::FlatReadFloat32((r2 + -1008));
    goto loc_80553D14;
}

loc_80553C64:
{
    r0 = MemoryInline::FlatRead32((r30 + 508));
    r0 = (r0 + r27);
    r28 = (r0 + 4);
}

loc_80553C70:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_80553C7C;
    }
}

loc_80553C74:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_80553D04;
}

loc_80553C7C:
{
    r3 = r25;
    // inline leaf 0x8052E2B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 228));
    // end of inlined leaf 0x8052E2B0
    f27.d = MemoryInline::FlatReadFloat32((r25 + 232));
    r29 = r3;
    f25.d = MemoryInline::FlatReadFloat32((r25 + 244));
    f26.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_80553CC8;
}

loc_80553C98:
{
    r12 = MemoryInline::FlatRead32(r29);
    f26.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f25.d));
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x80553CB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 ^ -2147483648);
    r28 = (r28 + 2);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f0.d));
}

loc_80553CC8:
{
    r4 = MemoryInline::FlatRead16(r28);
}

loc_80553CD0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80553C98;
    }
}

loc_80553CD4:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80553CE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f27.d / f0.d));
    f0.d = PpcFmulsInline(f26.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
}

loc_80553D04:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f30.d));
    r27 = (r27 + -122);
    r26 = (r26 + -1);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
}

loc_80553D14:
{
}

loc_80553D18:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(r31))) {
        goto loc_80553C64;
    }
}

loc_80553D1C:
{
    r0 = MemoryInline::FlatRead32((r30 + 472));
}

loc_80553D24:
{
    r4 = r30;
    r5 = (r31 - r0);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80553D34;
    }
}

loc_80553D30:
{
    r4 = (r30 + 20);
}

loc_80553D34:
{
    r12 = MemoryInline::FlatRead32((r30 + 24));
    f2.d = f31.d;
    r3 = (r30 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 476));
    r12 = MemoryInline::FlatRead32((r12 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -984));
    ctr = r12;
    ctx->lr = 0x80553D54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 148u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 124u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 108u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 92u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 76u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 60u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 64);
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 64));
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 144u, (r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80553AFC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80553AFC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFE003FFF fpr_write=0xFE003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80553AFC func_80553AFC preserves=true fpr_mask=0x00000000
