#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80823C30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80823C30;

loc_80823C30:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    r5 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r31 = 0x80840000u;
    r31 = (r31 + 17656);
    r30 = r3;
    r28 = r4;
    r0 = MemoryInline::FlatRead32((r3 + 20));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r5);
}

loc_80823C7C:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8082444C;
    }
}

loc_80823C84:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 684));
    // inline leaf 0x8081D0E0 (1 guest instruction(s))
    // end of inlined leaf 0x8081D0E0
    f3.d = MemoryInline::FlatReadFloat32((r31 + 832));
    r29 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 836));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f3.d = PpcFmulsInline(f3.d, f2.d);
    r0 = MemoryInline::FlatRead8((r30 + 143));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 796));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80823CBC:
{
    f1.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = PpcFmulsInline(f0.d, f2.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80823CDC;
    }
}

loc_80823CC8:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = PpcFmulsInline(f3.d, f0.d);
}

loc_80823CDC:
{
    r3 = MemoryInline::FlatRead32((r30 + 592));
    f2.d = (-(f3.d));
    r4 = r28;
    r8 = r29;
    r12 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r29 + 16));
    r12 = MemoryInline::FlatRead32((r12 + 48));
    r6 = MemoryInline::FlatRead32((r29 + 20));
    r7 = MemoryInline::FlatRead32((r29 + 24));
    ctr = r12;
    ctx->lr = 0x80823D08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r0 = (r3 & 32768);
}

loc_80823D10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80823E7C;
    }
}

loc_80823D14:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
}

loc_80823D1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80823E7C;
    }
}

loc_80823D20:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_80823D28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80823DE0;
    }
}

loc_80823D2C:
{
    r3 = MemoryInline::FlatRead32((r30 + 592));
    r4 = r28;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 736));
    r5 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r6 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 840));
    r7 = 0;
    r12 = MemoryInline::FlatRead32((r12 + 48));
    r8 = 0;
    ctr = r12;
    ctx->lr = 0x80823D5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = MemoryInline::FlatRead32((r30 + 1064));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl1_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x8081AA24;
    }
}

loc_inl1_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl1_0x8081AA28;
}

loc_inl1_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl1_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl1_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r31 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r31);
    r0 = 2;
    MemoryInline::FlatWrite32((r30 + 24), r0);
    r29 = MemoryInline::FlatRead32((r30 + 1056));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl2_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl2_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x8081AA24;
    }
}

loc_inl2_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl2_0x8081AA28;
}

loc_inl2_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl2_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl2_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    MemoryInline::FlatWrite32((r29 + 20), r31);
    r29 = MemoryInline::FlatRead32((r30 + 1092));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl3_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl3_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl3_0x8081AA24;
    }
}

loc_inl3_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl3_0x8081AA28;
}

loc_inl3_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl3_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl3_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    MemoryInline::FlatWrite32((r29 + 20), r31);
    r3 = 10;
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r3);
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWrite32(r30, r0);
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80823DB8:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80823DCC;
    }
}

loc_80823DBC:
{
    r3 = 5;
    r4 = 8;
    ctr = r12;
    ctx->lr = 0x80823DCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80823DCC:
{
}

loc_80823DD0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808244A4;
    }
}

loc_80823DD4:
{
    r3 = 8;
    ctx->lr = 0x80823DDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808244A4;
}

loc_80823DE0:
{
}

loc_80823DE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808244A4;
    }
}

loc_80823DE8:
{
    r3 = MemoryInline::FlatRead32((r30 + 1060));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80823DF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80823E00;
    }
}

loc_80823DF8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_80823E00:
{
    r3 = MemoryInline::FlatRead32((r30 + 1096));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80823E0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80823E18;
    }
}

loc_80823E10:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_80823E18:
{
    r3 = 0;
    r0 = 4;
    MemoryInline::FlatWrite32((r30 + 184), r3);
    MemoryInline::FlatWrite32((r30 + 24), r0);
    r29 = MemoryInline::FlatRead32((r30 + 1064));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl4_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl4_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl4_0x8081AA24;
    }
}

loc_inl4_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl4_0x8081AA28;
}

loc_inl4_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl4_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl4_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    r0 = 14;
    r3 = 0;
    MemoryInline::FlatWrite32((r30 + 20), r0);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80823E54:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80823E68;
    }
}

loc_80823E58:
{
    r3 = 5;
    r4 = 1;
    ctr = r12;
    ctx->lr = 0x80823E68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80823E68:
{
}

loc_80823E6C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808244A4;
    }
}

loc_80823E70:
{
    r3 = 1;
    ctx->lr = 0x80823E78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808244A4;
}

loc_80823E7C:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_80823E84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_808244A4;
    }
}

loc_80823E88:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
}

loc_80823E90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_808244A4;
    }
}

loc_80823E94:
{
    r0 = (r3 & 4096);
}

loc_80823E98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8082416C;
    }
}

loc_80823E9C:
{
    r3 = MemoryInline::FlatRead32((r30 + 132));
}

loc_80823EA4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80824134;
    }
}

loc_80823EA8:
{
    r3 = (r3 + -1);
    r0 = 37;
    MemoryInline::FlatWrite32((r30 + 132), r3);
    r3 = (r3 + 21);
    r5 = (r31 + 104);
    r4 = 0;
    ctr = r0;
    // nop
}

loc_80823EC8:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80823ED0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80823EE4;
    }
}

loc_80823ED4:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80823EDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80823EE4;
    }
}

loc_80823EE0:
{
    goto loc_80823F14;
}

loc_80823EE4:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_80823EF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80823F04;
    }
}

loc_80823EF4:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80823EFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80823F04;
    }
}

loc_80823F00:
{
    goto loc_80823F14;
}

loc_80823F04:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80823EC8;
    }
}

loc_80823F10:
{
    r4 = -1;
}

loc_80823F14:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = 0;
    r3 = (r30 + r0);
    r6 = (r31 + 104);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r0 = 37;
    r5 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r4);
    r3 = MemoryInline::FlatRead32((r30 + 132));
    r3 = (r3 + 21);
    ctr = r0;
}

loc_80823F40:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_80823F48:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80823F5C;
    }
}

loc_80823F4C:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
}

loc_80823F54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_80823F5C;
    }
}

loc_80823F58:
{
    goto loc_80823F8C;
}

loc_80823F5C:
{
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r5 = (r5 + 1);
}

loc_80823F68:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80823F7C;
    }
}

loc_80823F6C:
{
    r0 = MemoryInline::FlatRead32((r6 + 12));
}

loc_80823F74:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_80823F7C;
    }
}

loc_80823F78:
{
    goto loc_80823F8C;
}

loc_80823F7C:
{
    r6 = (r6 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80823F40;
    }
}

loc_80823F88:
{
    r5 = -1;
}

loc_80823F8C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl5_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl5_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl5_0x8081AA24;
    }
}

loc_inl5_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl5_0x8081AA28;
}

loc_inl5_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl5_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl5_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 37;
    r3 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r3);
    r4 = (r31 + 104);
    r3 = 0;
    ctr = r0;
}

loc_80823FB8:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80823FC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_80823FD4;
    }
}

loc_80823FC4:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_80823FCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_80823FD4;
    }
}

loc_80823FD0:
{
    goto loc_80824004;
}

loc_80823FD4:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r3 = (r3 + 1);
}

loc_80823FE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_80823FF4;
    }
}

loc_80823FE4:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80823FEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_80823FF4;
    }
}

loc_80823FF0:
{
    goto loc_80824004;
}

loc_80823FF4:
{
    r4 = (r4 + 16);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80823FB8;
    }
}

loc_80824000:
{
    r3 = -1;
}

loc_80824004:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl6_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl6_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl6_0x8081AA24;
    }
}

loc_inl6_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl6_0x8081AA28;
}

loc_inl6_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl6_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl6_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    r0 = MemoryInline::FlatRead32((r30 + 132));
}

loc_80824028:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808240B0;
    }
}

loc_8082402C:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8082403C:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80824050;
    }
}

loc_80824040:
{
    r3 = 5;
    r4 = 12;
    ctr = r12;
    ctx->lr = 0x80824050u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80824050:
{
}

loc_80824054:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80824060;
    }
}

loc_80824058:
{
    r3 = 12;
    ctx->lr = 0x80824060u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80824060:
{
    f31.d = MemoryInline::FlatReadFloat64((r31 + 784));
    r29 = r30;
    f30.d = MemoryInline::FlatReadFloat32((r31 + 780));
    r31 = 0;
}

loc_80824070:
{
    r0 = MemoryInline::FlatRead32((r30 + 132));
    r3 = MemoryInline::FlatRead32((r29 + 684));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    // inline leaf 0x8081CC30 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x8081CC30
    r3 = MemoryInline::FlatRead32((r29 + 684));
    r4 = 1;
    ctx->lr = 0x8082409Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081CC50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r31 = (r31 + 1);
    r29 = (r29 + 4);
}

loc_808240A8:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(4))) {
        goto loc_80824070;
    }
}

loc_808240AC:
{
    goto loc_808244A4;
}

loc_808240B0:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_808240C0:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_808240D4;
    }
}

loc_808240C4:
{
    r3 = 5;
    r4 = 10;
    ctr = r12;
    ctx->lr = 0x808240D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808240D4:
{
}

loc_808240D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808240E4;
    }
}

loc_808240DC:
{
    r3 = 10;
    ctx->lr = 0x808240E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808240E4:
{
    f31.d = MemoryInline::FlatReadFloat64((r31 + 784));
    r29 = r30;
    f30.d = MemoryInline::FlatReadFloat32((r31 + 780));
    r31 = 0;
}

loc_808240F4:
{
    r0 = MemoryInline::FlatRead32((r30 + 132));
    r3 = MemoryInline::FlatRead32((r29 + 684));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    // inline leaf 0x8081CC30 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x8081CC30
    r3 = MemoryInline::FlatRead32((r29 + 684));
    r4 = 1;
    ctx->lr = 0x80824120u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081CC50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r31 = (r31 + 1);
    r29 = (r29 + 4);
}

loc_8082412C:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(4))) {
        goto loc_808240F4;
    }
}

loc_80824130:
{
    goto loc_808244A4;
}

loc_80824134:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80824144:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80824158;
    }
}

loc_80824148:
{
    r3 = 5;
    r4 = 13;
    ctr = r12;
    ctx->lr = 0x80824158u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80824158:
{
}

loc_8082415C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808244A4;
    }
}

loc_80824160:
{
    r3 = 13;
    ctx->lr = 0x80824168u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808244A4;
}

loc_8082416C:
{
    r0 = (r3 & 16);
}

loc_80824170:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808244A4;
    }
}

loc_80824174:
{
    r3 = MemoryInline::FlatRead32((r30 + 132));
}

loc_8082417C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(10))) {
        goto loc_80824414;
    }
}

loc_80824180:
{
    r0 = 37;
    r3 = (r3 + 21);
    r5 = (r31 + 104);
    r4 = 0;
    ctr = r0;
    // nop
}

loc_80824198:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_808241A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808241B4;
    }
}

loc_808241A4:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_808241AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_808241B4;
    }
}

loc_808241B0:
{
    goto loc_808241E4;
}

loc_808241B4:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_808241C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808241D4;
    }
}

loc_808241C4:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_808241CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_808241D4;
    }
}

loc_808241D0:
{
    goto loc_808241E4;
}

loc_808241D4:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80824198;
    }
}

loc_808241E0:
{
    r4 = -1;
}

loc_808241E4:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = 0;
    r3 = (r30 + r0);
    r6 = (r31 + 104);
    r3 = MemoryInline::FlatRead32((r3 + 752));
    r0 = 37;
    r5 = 0;
    MemoryInline::FlatWrite32((r3 + 20), r4);
    r3 = MemoryInline::FlatRead32((r30 + 132));
    r3 = (r3 + 21);
    ctr = r0;
}

loc_80824210:
{
    r0 = MemoryInline::FlatRead32(r6);
}

loc_80824218:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8082422C;
    }
}

loc_8082421C:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
}

loc_80824224:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_8082422C;
    }
}

loc_80824228:
{
    goto loc_8082425C;
}

loc_8082422C:
{
    r0 = MemoryInline::FlatRead32((r6 + 8));
    r5 = (r5 + 1);
}

loc_80824238:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8082424C;
    }
}

loc_8082423C:
{
    r0 = MemoryInline::FlatRead32((r6 + 12));
}

loc_80824244:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_8082424C;
    }
}

loc_80824248:
{
    goto loc_8082425C;
}

loc_8082424C:
{
    r6 = (r6 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80824210;
    }
}

loc_80824258:
{
    r5 = -1;
}

loc_8082425C:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl9_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl9_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl9_0x8081AA24;
    }
}

loc_inl9_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl9_0x8081AA28;
}

loc_inl9_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl9_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl9_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    r0 = 37;
    r5 = (r31 + 104);
    r3 = MemoryInline::FlatRead32((r30 + 132));
    r4 = 0;
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 132), r3);
    ctr = r0;
    // nop
}

loc_80824298:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_808242A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_808242B4;
    }
}

loc_808242A4:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_808242AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_808242B4;
    }
}

loc_808242B0:
{
    goto loc_808242E4;
}

loc_808242B4:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_808242C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_808242D4;
    }
}

loc_808242C4:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_808242CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_808242D4;
    }
}

loc_808242D0:
{
    goto loc_808242E4;
}

loc_808242D4:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80824298;
    }
}

loc_808242E0:
{
    r4 = -1;
}

loc_808242E4:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl10_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl10_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl10_0x8081AA24;
    }
}

loc_inl10_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl10_0x8081AA28;
}

loc_inl10_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl10_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl10_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    r0 = MemoryInline::FlatRead32((r30 + 132));
}

loc_80824308:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_80824390;
    }
}

loc_8082430C:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_8082431C:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80824330;
    }
}

loc_80824320:
{
    r3 = 5;
    r4 = 11;
    ctr = r12;
    ctx->lr = 0x80824330u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80824330:
{
}

loc_80824334:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80824340;
    }
}

loc_80824338:
{
    r3 = 11;
    ctx->lr = 0x80824340u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80824340:
{
    f31.d = MemoryInline::FlatReadFloat64((r31 + 784));
    r29 = r30;
    f30.d = MemoryInline::FlatReadFloat32((r31 + 780));
    r31 = 0;
}

loc_80824350:
{
    r0 = MemoryInline::FlatRead32((r30 + 132));
    r3 = MemoryInline::FlatRead32((r29 + 684));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    // inline leaf 0x8081CC30 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x8081CC30
    r3 = MemoryInline::FlatRead32((r29 + 684));
    r4 = 1;
    ctx->lr = 0x8082437Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081CC50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r31 = (r31 + 1);
    r29 = (r29 + 4);
}

loc_80824388:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(4))) {
        goto loc_80824350;
    }
}

loc_8082438C:
{
    goto loc_808244A4;
}

loc_80824390:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_808243A0:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_808243B4;
    }
}

loc_808243A4:
{
    r3 = 5;
    r4 = 9;
    ctr = r12;
    ctx->lr = 0x808243B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808243B4:
{
}

loc_808243B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808243C4;
    }
}

loc_808243BC:
{
    r3 = 9;
    ctx->lr = 0x808243C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_808243C4:
{
    f30.d = MemoryInline::FlatReadFloat64((r31 + 784));
    r29 = r30;
    f31.d = MemoryInline::FlatReadFloat32((r31 + 780));
    r31 = 0;
}

loc_808243D4:
{
    r0 = MemoryInline::FlatRead32((r30 + 132));
    r3 = MemoryInline::FlatRead32((r29 + 684));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    // inline leaf 0x8081CC30 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x8081CC30
    r3 = MemoryInline::FlatRead32((r29 + 684));
    r4 = 1;
    ctx->lr = 0x80824400u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8081CC50u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r31 = (r31 + 1);
    r29 = (r29 + 4);
}

loc_8082440C:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(4))) {
        goto loc_808243D4;
    }
}

loc_80824410:
{
    goto loc_808244A4;
}

loc_80824414:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = 0;
    r12 = MemoryInline::FlatRead32((r4 + 20));
}

loc_80824424:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80824438;
    }
}

loc_80824428:
{
    r3 = 5;
    r4 = 13;
    ctr = r12;
    ctx->lr = 0x80824438u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80824438:
{
}

loc_8082443C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_808244A4;
    }
}

loc_80824440:
{
    r3 = 13;
    ctx->lr = 0x80824448u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081E1F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_808244A4;
}

loc_8082444C:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80824454:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_808244A4;
    }
}

loc_80824458:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80824460:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(5))) {
        goto loc_808244A4;
    }
}

loc_80824464:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r5 = (r3 + r0);
    r5 = MemoryInline::FlatRead32((r5 + 1048));
    r0 = MemoryInline::FlatRead32((r5 + 20));
}

loc_8082447C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_808244A4;
    }
}

loc_80824480:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 684));
    // inline leaf 0x8081D0E0 (1 guest instruction(s))
    // end of inlined leaf 0x8081D0E0
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_80824498:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808244A4;
    }
}

loc_8082449C:
{
    r0 = MemoryInline::FlatRead32((r30 + 1564));
    MemoryInline::FlatWrite32((r30 + 28), r0);
}

loc_808244A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80823C30 func_80823C30 preserves=true fpr_mask=0x00000000
