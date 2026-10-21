#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80832D10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80832D10u);
    goto loc_80832D10;

loc_80832D10:
{
    MemoryInline::FlatWriteRam32((r1 + -544), r1);
    r1 = (r1 + -544);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 548), r0);
    r11 = (r1 + 480);
    MemoryInline::FlatWriteRamFloat64((r1 + 528), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 536);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 512), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 520);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 496), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 504);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 480), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 488);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r0 = MemoryInline::FlatRead32((r3 + 212));
    r31 = 0x80840000u;
    r30 = r3;
}

loc_80832D54:
{
    r31 = (r31 + 18680);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808333EC;
    }
}

loc_80832D5C:
{
    r0 = MemoryInline::FlatRead32((r3 + 224));
}

loc_80832D64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808333EC;
    }
}

loc_80832D68:
{
    r0 = MemoryInline::FlatRead32((r3 + 40));
}

loc_80832D70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80832D78;
    }
}

loc_80832D74:
{
    goto loc_808333EC;
}

loc_80832D78:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80832D88u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    ctr = ctx->ctr;
    r3 = (r1 + 312);
    ctx->lr = 0x80832D90u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8083DD90u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = MemoryInline::FlatRead32((r30 + 224));
    r3 = (r1 + 312);
    // inline leaf 0x80837270 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32((r3 + 72), r4);
    // end of inlined leaf 0x80837270
    f1.d = MemoryInline::FlatReadFloat32((r30 + 228));
    r3 = (r1 + 312);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 232));
    ctx->lr = 0x80832DACu;
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
    ctx->gpr[12] = r12;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x808382F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 236));
    r3 = (r1 + 312);
    // inline leaf 0x8083DF80 (2 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 80), f1.d);
    // end of inlined leaf 0x8083DF80
    f1.d = MemoryInline::FlatReadFloat32((r30 + 240));
    r3 = (r1 + 312);
    // inline leaf 0x8083DF90 (2 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 76), f1.d);
    // end of inlined leaf 0x8083DF90
    r0 = MemoryInline::FlatRead32((r30 + 216));
    r3 = (r1 + 48);
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r4 = (r1 + 40);
    r5 = MemoryInline::FlatRead8((r30 + 206));
    // inline leaf 0x8082A240 (15 guest instruction(s))
}

loc_inl4_0x8082A240:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_inl4_0x8082A248:
{
    MemoryInline::FlatWriteRam32(r3, r0);
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x8082A250:
{
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r4 = 0x80810000u;
    r4 = (r4 + -32639);
    r0 = (r0 * r5);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(r0) >> 7);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 + r4);
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_inl4_cont_8082A240;
}

loc_inl4_return:
{
}

loc_inl4_cont_8082A240:
{
    // end of inlined leaf 0x8082A240
    r0 = MemoryInline::FlatRead32((r30 + 220));
    r3 = (r1 + 44);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r1 + 36);
    r5 = MemoryInline::FlatRead8((r30 + 206));
    // inline leaf 0x8082A240 (15 guest instruction(s))
}

loc_inl5_0x8082A240:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_inl5_0x8082A248:
{
    MemoryInline::FlatWriteRam32(r3, r0);
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(255))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x8082A250:
{
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r4 = 0x80810000u;
    r4 = (r4 + -32639);
    r0 = (r0 * r5);
    r4 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(r0) >> 7);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r0 = (r0 + r4);
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    goto loc_inl5_cont_8082A240;
}

loc_inl5_return:
{
}

loc_inl5_cont_8082A240:
{
    // end of inlined leaf 0x8082A240
    r5 = MemoryInline::FlatRead32((r1 + 48));
    r3 = (r1 + 312);
    r0 = MemoryInline::FlatRead32((r1 + 44));
    r4 = 0;
}

loc_80832E08:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_80832E10;
    }
}

loc_80832E0C:
{
    r4 = 2;
}

loc_80832E10:
{
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
    InvokeDirectCpu<0x80837E40u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r5 = MemoryInline::FlatRead32((r1 + 48));
    r3 = (r1 + 312);
    r0 = MemoryInline::FlatRead32((r1 + 44));
    r4 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    r5 = (r1 + 28);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
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
    InvokeDirectCpu<0x80838100u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r0 = MemoryInline::FlatRead32((r3 + 36));
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead16((r1 + 80));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
}

loc_80832E50:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80832E5C;
    }
}

loc_80832E54:
{
    r0 = 0;
    goto loc_80832E6C;
}

loc_80832E5C:
{
}

loc_80832E60:
{
    r0 = 255;
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(255))) {
        goto loc_80832E6C;
    }
}

loc_80832E68:
{
    r0 = r3;
}

loc_80832E6C:
{
    r3 = MemoryInline::FlatRead16((r1 + 82));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
}

loc_80832E78:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80832E84;
    }
}

loc_80832E7C:
{
    r0 = 0;
    goto loc_80832E94;
}

loc_80832E84:
{
}

loc_80832E88:
{
    r0 = 255;
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(255))) {
        goto loc_80832E94;
    }
}

loc_80832E90:
{
    r0 = r3;
}

loc_80832E94:
{
    r3 = MemoryInline::FlatRead16((r1 + 84));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
}

loc_80832EA0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80832EAC;
    }
}

loc_80832EA4:
{
    r0 = 0;
    goto loc_80832EBC;
}

loc_80832EAC:
{
}

loc_80832EB0:
{
    r0 = 255;
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(255))) {
        goto loc_80832EBC;
    }
}

loc_80832EB8:
{
    r0 = r3;
}

loc_80832EBC:
{
    r3 = MemoryInline::FlatRead16((r1 + 86));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
}

loc_80832EC8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80832ED4;
    }
}

loc_80832ECC:
{
    r0 = 0;
    goto loc_80832EE4;
}

loc_80832ED4:
{
}

loc_80832ED8:
{
    r0 = 255;
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(255))) {
        goto loc_80832EE4;
    }
}

loc_80832EE0:
{
    r0 = r3;
}

loc_80832EE4:
{
    r3 = MemoryInline::FlatRead32((r30 + 40));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 44));
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    r0 = MemoryInline::FlatRead32((r3 + 48));
    r4 = MemoryInline::FlatRead16((r1 + 72));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
}

loc_80832F04:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80832F14;
    }
}

loc_80832F0C:
{
    r3 = 0;
    goto loc_80832F24;
}

loc_80832F14:
{
}

loc_80832F18:
{
    r3 = 255;
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(255))) {
        goto loc_80832F24;
    }
}

loc_80832F20:
{
    r3 = r4;
}

loc_80832F24:
{
    r4 = MemoryInline::FlatRead16((r1 + 74));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
}

loc_80832F30:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80832F3C;
    }
}

loc_80832F34:
{
    r3 = 0;
    goto loc_80832F4C;
}

loc_80832F3C:
{
}

loc_80832F40:
{
    r3 = 255;
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(255))) {
        goto loc_80832F4C;
    }
}

loc_80832F48:
{
    r3 = r4;
}

loc_80832F4C:
{
    r4 = MemoryInline::FlatRead16((r1 + 76));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r3));
}

loc_80832F58:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80832F64;
    }
}

loc_80832F5C:
{
    r3 = 0;
    goto loc_80832F74;
}

loc_80832F64:
{
}

loc_80832F68:
{
    r3 = 255;
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(255))) {
        goto loc_80832F74;
    }
}

loc_80832F70:
{
    r3 = r4;
}

loc_80832F74:
{
    r4 = MemoryInline::FlatRead16((r1 + 78));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r3));
}

loc_80832F80:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80832F8C;
    }
}

loc_80832F84:
{
    r3 = 0;
    goto loc_80832F9C;
}

loc_80832F8C:
{
}

loc_80832F90:
{
    r3 = 255;
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(255))) {
        goto loc_80832F9C;
    }
}

loc_80832F98:
{
    r3 = r4;
}

loc_80832F9C:
{
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r3));
    r3 = (r1 + 312);
    r4 = (r1 + 24);
    r5 = (r1 + 20);
    r6 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    // inline leaf 0x80837BE0 (17 guest instruction(s))
    r11 = MemoryInline::FlatRead8(r4);
    r10 = MemoryInline::FlatRead8((r4 + 1));
    r9 = MemoryInline::FlatRead8((r4 + 2));
    r8 = MemoryInline::FlatRead8((r4 + 3));
    r7 = MemoryInline::FlatRead8(r5);
    r6 = MemoryInline::FlatRead8((r5 + 1));
    r4 = MemoryInline::FlatRead8((r5 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, r3, static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 1), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 2), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r3 + 3), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r3 + 4), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r3 + 5), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r3 + 6), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r3 + 7), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80837BE0
    r4 = MemoryInline::FlatRead32((r30 + 244));
}

loc_80832FC4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80832FD0;
    }
}

loc_80832FC8:
{
    r3 = (r1 + 312);
    // inline leaf 0x8083E000 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32((r3 + 92), r4);
    // end of inlined leaf 0x8083E000
}

loc_80832FD0:
{
    r3 = (r1 + 312);
    ctx->lr = 0x80832FD8u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80837290u>(ctx);
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
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    ctr = ctx->ctr;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = (r1 + 312);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f1.d);
    f2.d = f1.d;
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f1.d);
    // inline leaf 0x80838870 (3 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 48), f2.d);
    // end of inlined leaf 0x80838870
    f1.d = MemoryInline::FlatReadFloat32((r30 + 76));
    r3 = (r1 + 104);
    r6 = MemoryInline::FlatRead16((r30 + 250));
    r4 = (r1 + 216);
    r5 = MemoryInline::FlatRead32((r30 + 212));
    r15 = MemoryInline::FlatRead32((r1 + 312));
    r16 = MemoryInline::FlatRead32((r1 + 316));
    r17 = MemoryInline::FlatRead32((r1 + 320));
    r18 = MemoryInline::FlatRead32((r1 + 324));
    r19 = MemoryInline::FlatRead32((r1 + 328));
    r20 = MemoryInline::FlatRead32((r1 + 332));
    r21 = MemoryInline::FlatRead32((r1 + 336));
    r22 = MemoryInline::FlatRead32((r1 + 340));
    r23 = MemoryInline::FlatRead32((r1 + 344));
    r24 = MemoryInline::FlatRead32((r1 + 348));
    r25 = MemoryInline::FlatRead32((r1 + 352));
    r26 = MemoryInline::FlatRead32((r1 + 356));
    r27 = MemoryInline::FlatRead32((r1 + 360));
    r28 = MemoryInline::FlatRead32((r1 + 364));
    r29 = MemoryInline::FlatRead32((r1 + 368));
    r12 = MemoryInline::FlatRead32((r1 + 372));
    r11 = MemoryInline::FlatRead16((r1 + 376));
    r10 = MemoryInline::FlatRead8((r1 + 378));
    r9 = MemoryInline::FlatRead8((r1 + 379));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 380));
    r8 = MemoryInline::FlatRead32((r1 + 384));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 388));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 392));
    r7 = MemoryInline::FlatRead32((r1 + 396));
    r0 = MemoryInline::FlatRead32((r1 + 400));
    r14 = MemoryInline::FlatRead32((r1 + 404));
    MemoryInline::FlatWriteRam32((r1 + 216), r15);
    MemoryInline::FlatWriteRam32((r1 + 220), r16);
    MemoryInline::FlatWriteRam32((r1 + 224), r17);
    MemoryInline::FlatWriteRam32((r1 + 228), r18);
    MemoryInline::FlatWriteRam32((r1 + 232), r19);
    MemoryInline::FlatWriteRam32((r1 + 236), r20);
    MemoryInline::FlatWriteRam32((r1 + 240), r21);
    MemoryInline::FlatWriteRam32((r1 + 244), r22);
    MemoryInline::FlatWriteRam32((r1 + 248), r23);
    MemoryInline::FlatWriteRam32((r1 + 252), r24);
    MemoryInline::FlatWriteRam32((r1 + 256), r25);
    MemoryInline::FlatWriteRam32((r1 + 260), r26);
    MemoryInline::FlatWriteRam32((r1 + 264), r27);
    MemoryInline::FlatWriteRam32((r1 + 268), r28);
    MemoryInline::FlatWriteRam32((r1 + 272), r29);
    MemoryInline::FlatWriteRam32((r1 + 276), r12);
    MemoryInline::FlatWriteRam16((r1 + 280), static_cast<uint16_t>(r11));
    MemoryInline::FlatWriteRam8((r1 + 282), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 283), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRamFloat32((r1 + 284), f3.d);
    MemoryInline::FlatWriteRam32((r1 + 288), r8);
    MemoryInline::FlatWriteRamFloat32((r1 + 292), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 296), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 300), r7);
    MemoryInline::FlatWriteRam32((r1 + 304), r0);
    MemoryInline::FlatWriteRam32((r1 + 308), r14);
    ctx->lr = 0x808330E0u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80833F60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    r3 = (r1 + 216);
    r4 = -1;
    ctx->lr = 0x808330ECu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8083DDF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    ctr = ctx->ctr;
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x808314C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r5 = 1431633920;
    r6 = MemoryInline::FlatRead8((r30 + 252));
    r0 = (r5 + 21846);
    MemoryInline::FlatWriteRam32((r1 + 68), r4);
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    MemoryInline::FlatWriteRam32((r1 + 64), r3);
    MemoryInline::FlatWriteRam32((r1 + 56), r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWriteRam32((r1 + 60), r4);
    r0 = (r5 + r0);
    r0 = (r0 * 3);
    r0 = (r6 - r0);
    r0 = (r0 & 255);
}

loc_8083312C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80833140;
    }
}

loc_80833130:
{
}

loc_80833134:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80833148;
    }
}

loc_80833138:
{
    f6.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_8083314C;
}

loc_80833140:
{
    f6.d = MemoryInline::FlatReadFloat32((r31 + 16));
    goto loc_8083314C;
}

loc_80833148:
{
    f6.d = MemoryInline::FlatReadFloat32((r31 + 20));
}

loc_8083314C:
{
    r3 = 1431633920;
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r3 + r0);
    r0 = (r0 & 255);
}

loc_80833168:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8083317C;
    }
}

loc_8083316C:
{
}

loc_80833170:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80833184;
    }
}

loc_80833174:
{
    f7.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_80833188;
}

loc_8083317C:
{
    f7.d = MemoryInline::FlatReadFloat32((r31 + 16));
    goto loc_80833188;
}

loc_80833184:
{
    f7.d = MemoryInline::FlatReadFloat32((r31 + 20));
}

loc_80833188:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 116));
    r3 = 1431633920;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 108));
    r0 = (r3 + 21846);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 80));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f3.d = PpcFmulsInline(f3.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f6.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 108), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 116), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 112), f1.d);
    r4 = MemoryInline::FlatRead8((r30 + 252));
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 3);
    r0 = (r4 - r0);
    r0 = (r0 & 255);
}

loc_80833208:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8083321C;
    }
}

loc_8083320C:
{
}

loc_80833210:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80833224;
    }
}

loc_80833214:
{
    f28.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_80833228;
}

loc_8083321C:
{
    f28.d = MemoryInline::FlatReadFloat32((r31 + 16));
    goto loc_80833228;
}

loc_80833224:
{
    f28.d = MemoryInline::FlatReadFloat32((r31 + 20));
}

loc_80833228:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 112));
    r3 = (r1 + 312);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 104));
    r14 = MemoryInline::FlatRead32((r30 + 212));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 108));
    // inline leaf 0x80838870 (3 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 48), f2.d);
    // end of inlined leaf 0x80838870
    r15 = MemoryInline::FlatRead16((r30 + 250));
}

loc_80833250:
{
    if ((static_cast<int32_t>(r15) <= static_cast<int32_t>(0))) {
        goto loc_808333E0;
    }
}

loc_80833254:
{
    f31.d = MemoryInline::FlatReadFloat32(r31);
    r16 = 0x80840000u;
    goto loc_808333D8;
}

loc_80833260:
{
    f30.d = MemoryInline::FlatReadFloat32((r30 + 76));
    f1.d = f31.d;
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 312), 0, 96u, true, false);
    r29 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 312));
    f2.d = f31.d;
    r28 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 316));
    r3 = (r1 + 120);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 320));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r1 + 324));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r1 + 328));
            r24 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 332));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r1 + 336));
            r22 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r1 + 340));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 344));
            r20 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r1 + 348));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r1 + 352));
            r18 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r1 + 356));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 48u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r1 + 360));
            r12 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r1 + 364));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 56u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_3, 56u, (r1 + 368));
            r10 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r1 + 372));
        }
    }
    r9 = MemoryInline::ReadResolved16(guest_range_3, 64u, (r1 + 376));
    r8 = MemoryInline::ReadResolved8(guest_range_3, 66u, (r1 + 378));
    r7 = MemoryInline::ReadResolved8(guest_range_3, 67u, (r1 + 379));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 68u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            r6 = resolved_pair.second;
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 68u, (r1 + 380));
            r6 = MemoryInline::ReadResolved32(guest_range_3, 72u, (r1 + 384));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 76u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 76u, (r1 + 388));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 80u, (r1 + 392));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 84u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 84u, (r1 + 396));
            r4 = MemoryInline::ReadResolved32(guest_range_3, 88u, (r1 + 400));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 92u, (r1 + 404));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 88), 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 88), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 92), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f31.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f31.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 96), f31.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 100), f31.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_4, 32u, (r1 + 120), r29);
        MemoryInline::WriteResolved32(guest_range_4, 36u, (r1 + 124), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_4, 40u, (r1 + 128), r27);
        MemoryInline::WriteResolved32(guest_range_4, 44u, (r1 + 132), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_4, 48u, (r1 + 136), r25);
        MemoryInline::WriteResolved32(guest_range_4, 52u, (r1 + 140), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_4, 56u, (r1 + 144), r23);
        MemoryInline::WriteResolved32(guest_range_4, 60u, (r1 + 148), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_4, 64u, (r1 + 152), r21);
        MemoryInline::WriteResolved32(guest_range_4, 68u, (r1 + 156), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_4, 72u, (r1 + 160), r19);
        MemoryInline::WriteResolved32(guest_range_4, 76u, (r1 + 164), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_4, 80u, (r1 + 168), r17);
        MemoryInline::WriteResolved32(guest_range_4, 84u, (r1 + 172), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_4, 88u, (r1 + 176), r11);
        MemoryInline::WriteResolved32(guest_range_4, 92u, (r1 + 180), r10);
    }
    MemoryInline::WriteResolved16(guest_range_4, 96u, (r1 + 184), static_cast<uint16_t>(r9));
    MemoryInline::WriteResolved8(guest_range_4, 98u, (r1 + 186), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 99u, (r1 + 187), static_cast<uint8_t>(r7));
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 100u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 100u, (r1 + 188), f4.d);
        MemoryInline::WriteResolved32(guest_range_4, 104u, (r1 + 192), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 108u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 108u, (r1 + 196), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 112u, (r1 + 200), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 116u, (r1 + 204), r5);
        MemoryInline::WriteResolved32(guest_range_4, 120u, (r1 + 208), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 124u, (r1 + 212), r0);
    // inline leaf 0x80838870 (3 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_4, 76u, (r3 + 44), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 80u, (r3 + 48), f2.d);
    }
    // end of inlined leaf 0x80838870
    f1.d = f30.d;
    r5 = r14;
    r6 = r15;
    r3 = (r1 + 88);
    r4 = (r1 + 120);
    r7 = (r1 + 8);
    ctx->lr = 0x80833370u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80833430u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 96));
    r17 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    r3 = (r1 + 120);
    r4 = -1;
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    ctx->lr = 0x8083338Cu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8083DDF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    ctr = ctx->ctr;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f30.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 104));
    r3 = (r1 + 312);
    f1.d = PpcFmulsInline(f28.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    // inline leaf 0x808388E0 (2 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x808388E0
    r4 = r14;
    r5 = r17;
    r3 = (r1 + 312);
    ctx->lr = 0x808333B4u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8083F2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_808333BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808333CC;
    }
}

loc_808333C0:
{
    r3 = (r1 + 312);
    r4 = (r16 + 26440);
    ctx->lr = 0x808333CCu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8083F430u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    ctr = ctx->ctr;
}

loc_808333CC:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r15 = (r15 - r17);
    r14 = (r14 + r0);
}

loc_808333D8:
{
}

loc_808333DC:
{
    if ((static_cast<int32_t>(r15) > static_cast<int32_t>(0))) {
        goto loc_80833260;
    }
}

loc_808333E0:
{
    r3 = (r1 + 312);
    r4 = -1;
    ctx->lr = 0x808333ECu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8083DDF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    ctr = ctx->ctr;
}

loc_808333EC:
{
    r11 = (r1 + 480);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 528));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 512));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 496));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 480));
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 548));
    ctx->lr = r0;
    r1 = (r1 + 544);
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00003FFF gpr_return=0x00000018 fpr_read=0xFF003FFF fpr_write=0xFF003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80832D10 func_80832D10 preserves=true fpr_mask=0x00000000
