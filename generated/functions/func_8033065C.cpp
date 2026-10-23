#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8033065C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80330E38_loc_0 = 0;
    uint32_t addr_psqx_80330E44_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t stackword22 = 0;
    uint32_t stackword23 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
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
    const uint32_t r14_entry = r14;
    const uint32_t r15_entry = r15;
    const uint32_t r16_entry = r16;
    const uint32_t r17_entry = r17;
    const uint32_t r18_entry = r18;
    const uint32_t r19_entry = r19;
    const uint32_t r20_entry = r20;
    const uint32_t r21_entry = r21;
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8033065C;

loc_8033065C:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 160);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r15 = r3;
    r3 = (r1 + 68);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 56);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r19 = MemoryInline::FlatRead32((r15 + 56));
    r16 = (r19 + 4);
    r3 = r15;
    r4 = MemoryInline::FlatRead8((r15 + 7));
    ctx->lr = 0x803306C0u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_803306C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803306E0;
    }
}

loc_803306C8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r15 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r15 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r15 + 5), static_cast<uint8_t>(r0));
    goto loc_80330E34;
}

loc_803306E0:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_803306EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80330E34;
    }
}

loc_803306F0:
{
    r17 = 1;
    r0 = MemoryInline::FlatRead8((r15 + 7));
}

loc_803306FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033070C;
    }
}

loc_80330700:
{
}

loc_80330704:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803308EC;
    }
}

loc_80330708:
{
    goto loc_80330AA0;
}

loc_8033070C:
{
    r14 = MemoryInline::FlatRead32((r15 + 48));
    r0 = MemoryInline::FlatRead8((r14 + 1));
    MemoryInline::FlatWrite8((r15 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r14 + 22));
    MemoryInline::FlatWrite8((r15 + 68), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 8));
}

loc_80330728:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80330E34;
    }
}

loc_8033072C:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r15 + 68));
}

loc_8033073C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80330E34;
    }
}

loc_80330740:
{
    ctx->lr = 0x80330744u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80330748:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80330E34;
    }
}

loc_8033074C:
{
    r3 = r14;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80330758:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80330768;
    }
}

loc_8033075C:
{
    r3 = r14;
    ctx->lr = 0x80330764u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F93E4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r17 = (r3 | 1);
}

loc_80330768:
{
    r3 = MemoryInline::FlatRead32((r14 + 316));
    r3 = (r3 + 4);
    r4 = 0;
    r5 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r15 + 24);
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32((r14 + 316));
    r3 = (r3 + 4);
    r4 = 14;
    r5 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 20);
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r14 + 9));
}

loc_803307B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_803307C8;
    }
}

loc_803307B4:
{
    f1.d = MemoryInline::FlatReadFloat32((r15 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10384));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    goto loc_80330880;
}

loc_803307C8:
{
}

loc_803307CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803307F8;
    }
}

loc_803307D0:
{
    r3 = MemoryInline::FlatRead32((r14 + 316));
    r3 = (r3 + 4);
    r4 = 14;
    r5 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10384));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    goto loc_80330880;
}

loc_803307F8:
{
    r3 = MemoryInline::FlatRead32((r14 + 316));
    r3 = (r3 + 4);
    r4 = 20;
    r5 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r14 + 316));
    r3 = (r3 + 4);
    r4 = 17;
    r5 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10380));
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10376));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80330844:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80330870;
    }
}

loc_80330848:
{
    r3 = MemoryInline::FlatRead32((r14 + 316));
    r3 = (r3 + 4);
    r4 = 14;
    r5 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10384));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    goto loc_80330880;
}

loc_80330870:
{
    f1.d = MemoryInline::FlatReadFloat32((r15 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10372));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
}

loc_80330880:
{
    r0 = MemoryInline::FlatRead32((r14 + 984));
    r0 = (r0 & 80);
}

loc_80330888:
{
}

loc_8033088C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_803308AC;
    }
}

loc_80330890:
{
}

loc_80330894:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(64))) {
        goto loc_803308B8;
    }
}

loc_80330898:
{
}

loc_8033089C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(80))) {
        goto loc_803308C4;
    }
}

loc_803308A0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r15 + 6), static_cast<uint8_t>(r0));
    goto loc_803308CC;
}

loc_803308AC:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r15 + 6), static_cast<uint8_t>(r0));
    goto loc_803308CC;
}

loc_803308B8:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r15 + 6), static_cast<uint8_t>(r0));
    goto loc_803308CC;
}

loc_803308C4:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r15 + 6), static_cast<uint8_t>(r0));
}

loc_803308CC:
{
    r0 = MemoryInline::FlatRead32((r14 + 988));
    r0 = (r0 & 1015808);
}

loc_803308D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80330AA0;
    }
}

loc_803308DC:
{
    r0 = MemoryInline::FlatRead8((r15 + 6));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite8((r15 + 6), static_cast<uint8_t>(r0));
    goto loc_80330AA0;
}

loc_803308EC:
{
    r14 = MemoryInline::FlatRead32((r15 + 48));
    r0 = MemoryInline::FlatRead8((r14 + 1));
    MemoryInline::FlatWrite8((r15 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r14 + 420));
    MemoryInline::FlatWrite8((r15 + 68), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r15 + 8));
}

loc_80330908:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_80330E34;
    }
}

loc_8033090C:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r15 + 68));
}

loc_8033091C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80330E34;
    }
}

loc_80330920:
{
    ctx->lr = 0x80330924u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80330928:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80330E34;
    }
}

loc_8033092C:
{
    r0 = MemoryInline::FlatRead8((r14 + 369));
}

loc_80330934:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80330950;
    }
}

loc_80330938:
{
    r0 = MemoryInline::FlatRead16((r14 + 370));
}

loc_80330940:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(83))) {
        goto loc_80330E34;
    }
}

loc_80330944:
{
}

loc_80330948:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(85))) {
        goto loc_80330950;
    }
}

loc_8033094C:
{
    goto loc_80330E34;
}

loc_80330950:
{
    r3 = (r14 + 8);
    r4 = 0;
    r5 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r15 + 24);
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r14 + 8);
    r4 = 3;
    r5 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 20);
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r14 + 368));
}

loc_80330990:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803309A0;
    }
}

loc_80330994:
{
}

loc_80330998:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803309B4;
    }
}

loc_8033099C:
{
    goto loc_803309D8;
}

loc_803309A0:
{
    f1.d = MemoryInline::FlatReadFloat32((r15 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10368));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    goto loc_80330A54;
}

loc_803309B4:
{
    r3 = (r14 + 8);
    r4 = 3;
    r5 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10368));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    goto loc_80330A54;
}

loc_803309D8:
{
    r3 = (r14 + 8);
    r4 = 20;
    r5 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r14 + 8);
    r4 = 18;
    r5 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10380));
    f2.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10376));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80330A1C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80330A44;
    }
}

loc_80330A20:
{
    r3 = (r14 + 8);
    r4 = 3;
    r5 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10368));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    goto loc_80330A54;
}

loc_80330A44:
{
    f1.d = MemoryInline::FlatReadFloat32((r15 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -10372));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
}

loc_80330A54:
{
    r0 = MemoryInline::FlatRead32((r14 + 524));
    r0 = (r0 & 80);
}

loc_80330A5C:
{
}

loc_80330A60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_80330A80;
    }
}

loc_80330A64:
{
}

loc_80330A68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(64))) {
        goto loc_80330A8C;
    }
}

loc_80330A6C:
{
}

loc_80330A70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(80))) {
        goto loc_80330A98;
    }
}

loc_80330A74:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r15 + 6), static_cast<uint8_t>(r0));
    goto loc_80330AA0;
}

loc_80330A80:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r15 + 6), static_cast<uint8_t>(r0));
    goto loc_80330AA0;
}

loc_80330A8C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r15 + 6), static_cast<uint8_t>(r0));
    goto loc_80330AA0;
}

loc_80330A98:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r15 + 6), static_cast<uint8_t>(r0));
}

loc_80330AA0:
{
    r18 = 0;
    r20 = 0;
    r21 = 1;
    r25 = 0x805E0000u;
    r27 = 0x805E0000u;
    r28 = 0x805E0000u;
    r29 = 0x805E0000u;
    r30 = 255;
    r26 = (r13 + -24816);
    r24 = (r13 + -24820);
    r23 = (r13 + -24824);
    r31 = 0x805E0000u;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -10360));
    r14 = 1127219200;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -10368));
    r22 = 0x805E0000u;
    goto loc_80330E28;
}

loc_80330AE4:
{
    r3 = MemoryInline::FlatRead8((r15 + 6));
    r0 = (r3 + -17);
}

loc_80330AF0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80330B64;
    }
}

loc_80330AF4:
{
    r0 = (r3 + -1);
}

loc_80330AFC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80330B2C;
    }
}

loc_80330B00:
{
}

loc_80330B04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80330B1C;
    }
}

loc_80330B08:
{
}

loc_80330B0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(16))) {
        goto loc_80330B2C;
    }
}

loc_80330B10:
{
}

loc_80330B14:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_80330B64;
    }
}

loc_80330B18:
{
    goto loc_80330B98;
}

loc_80330B1C:
{
    r3 = (r16 + 8);
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_80330B98;
}

loc_80330B2C:
{
    r3 = MemoryInline::FlatRead32((r16 + 20));
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32((r16 + 20), r0);
    r0 = MemoryInline::FlatRead8((r16 + 48));
}

loc_80330B40:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80330B54;
    }
}

loc_80330B44:
{
    r3 = MemoryInline::FlatRead32((r16 + 24));
    r0 = (r3 + 4);
    MemoryInline::FlatWrite32((r16 + 24), r0);
    goto loc_80330B98;
}

loc_80330B54:
{
    r3 = MemoryInline::FlatRead32((r16 + 24));
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32((r16 + 24), r0);
    goto loc_80330B98;
}

loc_80330B64:
{
    r3 = MemoryInline::FlatRead32((r16 + 20));
    r0 = (r3 + 4);
    MemoryInline::FlatWrite32((r16 + 20), r0);
    r0 = MemoryInline::FlatRead8((r16 + 48));
}

loc_80330B78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80330B8C;
    }
}

loc_80330B7C:
{
    r3 = MemoryInline::FlatRead32((r16 + 24));
    r0 = (r3 + 6);
    MemoryInline::FlatWrite32((r16 + 24), r0);
    goto loc_80330B98;
}

loc_80330B8C:
{
    r3 = MemoryInline::FlatRead32((r16 + 24));
    r0 = (r3 + 3);
    MemoryInline::FlatWrite32((r16 + 24), r0);
}

loc_80330B98:
{
    r0 = MemoryInline::FlatRead32((r16 + 20));
}

loc_80330BA0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(240))) {
        goto loc_80330BA8;
    }
}

loc_80330BA4:
{
    MemoryInline::FlatWrite32((r16 + 20), r20);
}

loc_80330BA8:
{
    r3 = (r16 + 8);
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32((r16 + 24));
}

loc_80330BBC:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(60))) {
        goto loc_80330BF8;
    }
}

loc_80330BC0:
{
    r3 = MemoryInline::FlatRead32((r15 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r15 + 16), r0);
}

loc_80330BD0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_80330BE0;
    }
}

loc_80330BD4:
{
    MemoryInline::FlatWrite32((r15 + 16), r20);
    MemoryInline::FlatWrite8((r16 + 48), static_cast<uint8_t>(r21));
    goto loc_80330BE4;
}

loc_80330BE0:
{
    MemoryInline::FlatWrite8((r16 + 48), static_cast<uint8_t>(r20));
}

loc_80330BE4:
{
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl9_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl9_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl9_0x800CEF40;
    }
}

loc_inl9_0x800CEF3C:
{
    r0 = 1;
}

loc_inl9_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_3 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl9_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite32((r16 + 32), r0);
    MemoryInline::FlatWrite32((r16 + 24), r20);
}

loc_80330BF8:
{
    r3 = MemoryInline::FlatRead32((r16 + 4));
    r4 = (r16 + 8);
    ctx->lr = 0x80330C04u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9744u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r15 + 6));
}

loc_80330C0C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(19))) {
        goto loc_80330D00;
    }
}

loc_80330C10:
{
    r3 = (r22 + 3492);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80330E20u:
        goto loc_80330E20;
        break;
    case 0x80330C24u:
        goto loc_80330C24;
        break;
    case 0x80330C44u:
        goto loc_80330C44;
        break;
    case 0x80330C64u:
        goto loc_80330C64;
        break;
    case 0x80330D00u:
        goto loc_80330D00;
        break;
    case 0x80330C84u:
        goto loc_80330C84;
        break;
    case 0x80330CA4u:
        goto loc_80330CA4;
        break;
    case 0x80330CC4u:
        goto loc_80330CC4;
        break;
    case 0x80330CE4u:
        goto loc_80330CE4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[14] = r14;
        ctx->gpr[15] = r15;
        ctx->gpr[16] = r16;
        ctx->gpr[17] = r17;
        ctx->gpr[18] = r18;
        ctx->gpr[19] = r19;
        ctx->gpr[20] = r20;
        ctx->gpr[21] = r21;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
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
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80330C24:
{
    r0 = MemoryInline::FlatRead8((r13 + -24824));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r23 + 1));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r23 + 2));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r30));
    goto loc_80330D00;
}

loc_80330C44:
{
    r0 = MemoryInline::FlatRead8((r13 + -24820));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 1));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r24 + 2));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r30));
    goto loc_80330D00;
}

loc_80330C64:
{
    r3 = (r25 + 3280);
    r4 = MemoryInline::FlatRead32((r16 + 20));
    r5 = (r1 + 16);
    r6 = (r1 + 17);
    r7 = (r1 + 18);
    ctx->lr = 0x80330C7Cu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800FA804u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r30));
    goto loc_80330D00;
}

loc_80330C84:
{
    r0 = MemoryInline::FlatRead8((r13 + -24816));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 1));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 2));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r30));
    goto loc_80330D00;
}

loc_80330CA4:
{
    r3 = (r27 + 3328);
    r4 = MemoryInline::FlatRead32((r16 + 20));
    r5 = (r1 + 16);
    r6 = (r1 + 17);
    r7 = (r1 + 18);
    ctx->lr = 0x80330CBCu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800FA804u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r30));
    goto loc_80330D00;
}

loc_80330CC4:
{
    r3 = (r28 + 3376);
    r4 = MemoryInline::FlatRead32((r16 + 20));
    r5 = (r1 + 16);
    r6 = (r1 + 17);
    r7 = (r1 + 18);
    ctx->lr = 0x80330CDCu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800FA804u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r30));
    goto loc_80330D00;
}

loc_80330CE4:
{
    r3 = (r29 + 3424);
    r4 = MemoryInline::FlatRead32((r16 + 20));
    r5 = (r1 + 16);
    r6 = (r1 + 17);
    r7 = (r1 + 18);
    ctx->lr = 0x80330CFCu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800FA804u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r30));
}

loc_80330D00:
{
    r3 = MemoryInline::FlatRead32((r16 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r16 + 44));
    ctx->lr = 0x80330D0Cu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9B24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r16 + 4));
    ctx->lr = 0x80330D14u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9984u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r16 + 4));
    r4 = (r16 + 8);
    r5 = (r1 + 12);
    ctx->lr = 0x80330D2Cu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r15;
    r4 = (r16 + 4);
    r5 = r17;
    r6 = 1;
    r7 = (r1 + 20);
    ctx->lr = 0x80330D44u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead8((r16 + 48));
}

loc_80330D4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80330E20;
    }
}

loc_80330D50:
{
    r3 = (r31 + 3480);
    r4 = MemoryInline::FlatRead32((r16 + 24));
    ctx->lr = 0x80330D5Cu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800FA95Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    MemoryInline::FlatWrite8((r16 + 43), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r16 + 40));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32(r16);
    r4 = 0;
    r5 = 4;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x80330D80u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    guest_range_2 = MemoryInline::ResolveRangeHost(r16, 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r16 + 44));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r16);
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r16 + 24));
    r0 = (r0 ^ -2147483648);
    stackword22 = r0;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    stackword23 = r14;
    MemoryInline::FlatWriteRam32((r1 + 80), r14);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword23), static_cast<uint32_t>(stackword22));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r16 + 44));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r16);
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r16 + 44));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r16);
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, r16);
    r3 = (r3 + 4);
    r4 = (r16 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32((r16 + 28));
    r3 = MemoryInline::FlatRead32(r16);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    r0 = MemoryInline::FlatRead32((r16 + 32));
    r3 = MemoryInline::FlatRead32(r16);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    r3 = MemoryInline::FlatRead32(r16);
    MemoryInline::FlatWrite32((r3 + 48), r20);
    r3 = MemoryInline::FlatRead32(r16);
    r4 = 0;
    ctx->lr = 0x80330E00u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800E078Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r17 = (r17 & -2);
    r17 = (r17 | 2);
    r3 = r15;
    r4 = r16;
    r5 = r17;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x80330E20u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_80330E20:
{
    r18 = (r18 + 1);
    r16 = (r16 + 52);
}

loc_80330E28:
{
    r0 = MemoryInline::FlatRead8(r19);
}

loc_80330E30:
{
    if ((static_cast<int32_t>(r18) < static_cast<int32_t>(r0))) {
        goto loc_80330AE4;
    }
}

loc_80330E34:
{
    r0 = 184;
    addr_psqx_80330E38_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80330E38_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r0 = 168;
    addr_psqx_80330E44_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80330E44_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r11 = (r1 + 160);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
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
    ctx->ctr = ctr;
    ctx->gpr[14] = r14_entry;
    ctx->gpr[15] = r15_entry;
    ctx->gpr[16] = r16_entry;
    ctx->gpr[17] = r17_entry;
    ctx->gpr[18] = r18_entry;
    ctx->gpr[19] = r19_entry;
    ctx->gpr[20] = r20_entry;
    ctx->gpr[21] = r21_entry;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8033065C func_8033065C preserves=true fpr_mask=0x00000000
