#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80553850_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t ctr = ctx->ctr;

    goto loc_80553850;

loc_80553850:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 164u, (r1 + 164), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 112u, (r1 + 112), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r0 = 1127219200;
}

loc_805538A4:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r30 = r3;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -1012));
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_805539A0;
    }
}

loc_805538C0:
{
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r26 = 0;
    f29.d = MemoryInline::FlatReadFloat64((r2 + -1000));
    r27 = MemoryInline::FlatRead32((r3 + 156));
    f28.d = MemoryInline::FlatReadFloat32((r2 + -1008));
    goto loc_80553994;
}

loc_805538D8:
{
    r0 = MemoryInline::FlatRead32((r30 + 472));
    r4 = MemoryInline::FlatRead32((r30 + 508));
    r3 = (r26 + r0);
    r0 = (r3 + -1);
    r0 = (r0 * 122);
    r0 = (r4 + r0);
    r29 = (r0 + 4);
}

loc_805538F4:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80553900;
    }
}

loc_805538F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_80553988;
}

loc_80553900:
{
    r3 = r27;
    // inline leaf 0x8052E2B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 228));
    // end of inlined leaf 0x8052E2B0
    f26.d = MemoryInline::FlatReadFloat32((r27 + 232));
    r28 = r3;
    f25.d = MemoryInline::FlatReadFloat32((r27 + 244));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_8055394C;
}

loc_8055391C:
{
    r12 = MemoryInline::FlatRead32(r28);
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f25.d));
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x80553934u;
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
    ctr = ctx->ctr;
    r0 = (r3 ^ -2147483648);
    r29 = (r29 + 2);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
}

loc_8055394C:
{
    r4 = MemoryInline::FlatRead16(r29);
}

loc_80553954:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8055391C;
    }
}

loc_80553958:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8055396Cu;
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
    ctr = ctx->ctr;
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f26.d / f0.d));
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f0.d));
}

loc_80553988:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f30.d));
    r26 = (r26 + -1);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
}

loc_80553994:
{
}

loc_80553998:
{
    if ((static_cast<int32_t>(r26) > static_cast<int32_t>(r31))) {
        goto loc_805538D8;
    }
}

loc_8055399C:
{
    goto loc_80553A78;
}

loc_805539A0:
{
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r26 = 0;
    f28.d = MemoryInline::FlatReadFloat64((r2 + -1000));
    r27 = MemoryInline::FlatRead32((r3 + 156));
    f29.d = MemoryInline::FlatReadFloat32((r2 + -1008));
    goto loc_80553A70;
}

loc_805539B8:
{
    r0 = MemoryInline::FlatRead32((r30 + 472));
    r3 = MemoryInline::FlatRead32((r30 + 508));
    r0 = (r0 + r26);
    r0 = (r0 * 122);
    r0 = (r3 + r0);
    r28 = (r0 + 4);
}

loc_805539D0:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_805539DC;
    }
}

loc_805539D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_80553A64;
}

loc_805539DC:
{
    r3 = r27;
    // inline leaf 0x8052E2B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 228));
    // end of inlined leaf 0x8052E2B0
    f27.d = MemoryInline::FlatReadFloat32((r27 + 232));
    r29 = r3;
    f25.d = MemoryInline::FlatReadFloat32((r27 + 244));
    f26.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    goto loc_80553A28;
}

loc_805539F8:
{
    r12 = MemoryInline::FlatRead32(r29);
    f26.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f25.d));
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x80553A10u;
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
    ctr = ctx->ctr;
    r0 = (r3 ^ -2147483648);
    r28 = (r28 + 2);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f0.d));
}

loc_80553A28:
{
    r4 = MemoryInline::FlatRead16(r28);
}

loc_80553A30:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_805539F8;
    }
}

loc_80553A34:
{
    r12 = MemoryInline::FlatRead32(r29);
    r3 = r29;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80553A48u;
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
    ctr = ctx->ctr;
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f27.d / f0.d));
    f0.d = PpcFmulsInline(f26.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f0.d));
}

loc_80553A64:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f30.d));
    r26 = (r26 + 1);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
}

loc_80553A70:
{
}

loc_80553A74:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r31))) {
        goto loc_805539B8;
    }
}

loc_80553A78:
{
}

loc_80553A7C:
{
    r4 = r30;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80553A88;
    }
}

loc_80553A84:
{
    r4 = (r30 + 20);
}

loc_80553A88:
{
    r12 = MemoryInline::FlatRead32((r30 + 24));
    f2.d = (-(f31.d));
    r3 = (r30 + 24);
    r5 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1024));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -984));
    ctr = r12;
    ctx->lr = 0x80553AACu;
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
    ctr = ctx->ctr;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 144u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 120u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 104u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 88u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 72u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 56u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 48);
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 48));
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_1, 140u, (r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80553850(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80553850_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFE003FFF fpr_write=0xFE003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80553850 func_80553850 preserves=true fpr_mask=0x00000000
