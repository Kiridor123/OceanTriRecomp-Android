#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083AAC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_8083AAC0;

loc_8083AAC0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    r11 = (r1 + 64);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
}

loc_8083AAE8:
{
    r27 = r4;
    r28 = r6;
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(10))) {
        goto loc_8083AB00;
    }
}

loc_8083AAF4:
{
}

loc_8083AAF8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(9))) {
        goto loc_8083ABA8;
    }
}

loc_8083AAFC:
{
    goto loc_8083ACC8;
}

loc_8083AB00:
{
    r30 = MemoryInline::FlatRead32(r6);
    r3 = r30;
    // inline leaf 0x80838940 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    // end of inlined leaf 0x80838940
    MemoryInline::FlatWriteFloat32((r27 + 8), f1.d);
    r3 = r30;
    // inline leaf 0x80838950 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    // end of inlined leaf 0x80838950
    MemoryInline::FlatWriteFloat32((r27 + 4), f1.d);
    r31 = MemoryInline::FlatRead32(r28);
    f30.d = MemoryInline::FlatReadFloat32((r28 + 8));
    r3 = r31;
    ctx->lr = 0x8083AB2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x8083B530u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f31.d = f1.d;
    r3 = r31;
    // inline leaf 0x80838950 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    // end of inlined leaf 0x80838950
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f31.d));
    r3 = r31;
    f1.d = f30.d;
    // inline leaf 0x80838870 (3 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f2.d);
    // end of inlined leaf 0x80838870
    r3 = r30;
    // inline leaf 0x80838940 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    // end of inlined leaf 0x80838940
    MemoryInline::FlatWriteFloat32(r27, f1.d);
    r3 = MemoryInline::FlatRead32(r28);
    ctx->lr = 0x8083AB5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x808384B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f31.d = f1.d;
    r3 = r30;
    // inline leaf 0x80838950 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    // end of inlined leaf 0x80838950
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f31.d));
    f6.d = MemoryInline::FlatReadFloat32((r27 + 4));
    f7.d = MemoryInline::FlatReadFloat32(r27);
    r3 = 3;
    f5.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    f1.d = PPC_Fsel(f2.d, f0.d, f6.d);
    f4.d = PPC_Fsel(f3.d, f5.d, f7.d);
    f3.d = PPC_Fsel(f3.d, f7.d, f5.d);
    MemoryInline::FlatWriteFloat32((r27 + 4), f1.d);
    f0.d = PPC_Fsel(f2.d, f6.d, f0.d);
    MemoryInline::FlatWriteFloat32(r27, f4.d);
    MemoryInline::FlatWriteFloat32((r27 + 8), f3.d);
    MemoryInline::FlatWriteFloat32((r27 + 12), f0.d);
    goto loc_8083ACCC;
}

loc_8083ABA8:
{
    r29 = MemoryInline::FlatRead32(r6);
    r3 = r29;
    // inline leaf 0x80838940 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    // end of inlined leaf 0x80838940
    MemoryInline::FlatWriteFloat32(r27, f1.d);
    r30 = MemoryInline::FlatRead32(r28);
    r3 = r30;
    // inline leaf 0x8083B610 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 84));
    // end of inlined leaf 0x8083B610
}

loc_8083ABC8:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8083AC68;
    }
}

loc_8083ABD0:
{
    r3 = r30;
    // inline leaf 0x80838670 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 67));
    // end of inlined leaf 0x80838670
}

loc_8083ABDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8083ABF0;
    }
}

loc_8083ABE0:
{
    r3 = r30;
    // inline leaf 0x80838690 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 68));
    // end of inlined leaf 0x80838690
    f31.d = f1.d;
    goto loc_8083ABFC;
}

loc_8083ABF0:
{
    r3 = r30;
    ctx->lr = 0x8083ABF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x80838440u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f31.d = f1.d;
}

loc_8083ABFC:
{
    r3 = r30;
    // inline leaf 0x80838940 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    // end of inlined leaf 0x80838940
    r0 = 1127219200;
    r3 = (r31 ^ -2147483648);
    stackword7 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r4 = 0x80840000u;
    f2.d = MemoryInline::FlatReadFloat64((r4 + 18808));
    r3 = r30;
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f3.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r4 = fctiwzword0;
    r0 = (r4 + 1);
    r0 = (r0 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword10));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    // inline leaf 0x808388E0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x808388E0
}

loc_8083AC68:
{
    r3 = r29;
    // inline leaf 0x80838940 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    // end of inlined leaf 0x80838940
    MemoryInline::FlatWriteFloat32((r27 + 8), f1.d);
    r3 = r29;
    // inline leaf 0x80838950 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    // end of inlined leaf 0x80838950
    MemoryInline::FlatWriteFloat32((r27 + 4), f1.d);
    r3 = r29;
    ctx->lr = 0x8083AC88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    InvokeDirectCpu<0x808384B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f2.d = MemoryInline::FlatReadFloat32((r27 + 4));
    r3 = 1;
    f6.d = MemoryInline::FlatReadFloat32(r27);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f4.d = MemoryInline::FlatReadFloat32((r27 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f5.d = PPC_Fsel(f1.d, f4.d, f6.d);
    f4.d = PPC_Fsel(f1.d, f6.d, f4.d);
    f1.d = PPC_Fsel(f3.d, f0.d, f2.d);
    MemoryInline::FlatWriteFloat32(r27, f5.d);
    f0.d = PPC_Fsel(f3.d, f2.d, f0.d);
    MemoryInline::FlatWriteFloat32((r27 + 8), f4.d);
    MemoryInline::FlatWriteFloat32((r27 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r27 + 12), f0.d);
    goto loc_8083ACCC;
}

loc_8083ACC8:
{
    r3 = 0;
}

loc_8083ACCC:
{
    r11 = (r1 + 64);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 44), 0, 60u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 36u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r1 + 64));
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8083AAC0 func_8083AAC0 preserves=true fpr_mask=0x00000000
