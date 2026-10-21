#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80833F60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80833F60u);
    goto loc_80833F60;

loc_80833F60:
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
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r30 = 0x80840000u;
    f30.d = f1.d;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 18680));
    r27 = r4;
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    r26 = r3;
    f2.d = f1.d;
    MemoryInline::FlatWriteFloat32((r3 + 8), f1.d);
    r28 = r5;
    r29 = r6;
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f1.d);
    r3 = r27;
    // inline leaf 0x80838870 (3 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 48), f2.d);
    // end of inlined leaf 0x80838870
    f31.d = MemoryInline::FlatReadFloat32((r30 + 18680));
    r31 = 0x80840000u;
}

loc_80833FC4:
{
    f1.d = f30.d;
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f31.d);
    r4 = r27;
    r5 = r28;
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f31.d);
    r6 = r29;
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f31.d);
    r3 = (r1 + 16);
    r7 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f31.d);
    ctx->lr = 0x80833FF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80833430u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r1 + 8));
    r30 = r3;
}

loc_80833FFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8083401C;
    }
}

loc_80834000:
{
    f1.d = f30.d;
    r4 = r27;
    r3 = (r1 + 16);
    r5 = (r31 + 26440);
    r7 = (r1 + 8);
    r6 = 1;
    ctx->lr = 0x8083401Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80833430u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_8083401C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    f0.d = MemoryInline::FlatReadFloat32(r26);
    r28 = (r28 + r0);
    r29 = (r29 - r30);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80834034:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8083403C;
    }
}

loc_80834038:
{
    goto loc_80834040;
}

loc_8083403C:
{
    f1.d = f0.d;
}

loc_80834040:
{
    MemoryInline::FlatWriteFloat32(r26, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 20));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80834050:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80834058;
    }
}

loc_80834054:
{
    goto loc_8083405C;
}

loc_80834058:
{
    f1.d = f0.d;
}

loc_8083405C:
{
    MemoryInline::FlatWriteFloat32((r26 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8083406C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80834074;
    }
}

loc_80834070:
{
    goto loc_80834078;
}

loc_80834074:
{
    f1.d = f0.d;
}

loc_80834078:
{
    MemoryInline::FlatWriteFloat32((r26 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80834088:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80834090;
    }
}

loc_8083408C:
{
    goto loc_80834094;
}

loc_80834090:
{
    f1.d = f0.d;
}

loc_80834094:
{
}

loc_80834098:
{
    MemoryInline::FlatWriteFloat32((r26 + 12), f1.d);
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(0))) {
        goto loc_80833FC4;
    }
}

loc_808340A0:
{
    r11 = (r1 + 64);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 64u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 40u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 24u, (r1 + 64));
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80833F60 func_80833F60 preserves=true fpr_mask=0x00000000
