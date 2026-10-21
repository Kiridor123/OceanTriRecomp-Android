#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80832A20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    PPC_FPR f8 = ctx->fpr[8];
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
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80832A20u);
    goto loc_80832A20;

loc_80832A20:
{
    MemoryInline::FlatWriteRam32((r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 308), r0);
    r11 = (r1 + 304);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r31 = 0x80840000u;
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = (r31 + 18680);
    r3 = (r1 + 120);
    ctx->lr = 0x80832A50u;
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
    ctx->cr = cr;
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
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32((r29 + 224));
    r3 = (r1 + 120);
    // inline leaf 0x80837270 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32((r3 + 72), r4);
    // end of inlined leaf 0x80837270
    f1.d = MemoryInline::FlatReadFloat32((r29 + 228));
    r3 = (r1 + 120);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 232));
    ctx->lr = 0x80832A6Cu;
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
    ctx->fpr[8] = f8;
    ctx->cr = cr;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 236));
    r3 = (r1 + 120);
    // inline leaf 0x8083DF80 (2 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 80), f1.d);
    // end of inlined leaf 0x8083DF80
    f1.d = MemoryInline::FlatReadFloat32((r29 + 240));
    r3 = (r1 + 120);
    // inline leaf 0x8083DF90 (2 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 76), f1.d);
    // end of inlined leaf 0x8083DF90
    r4 = MemoryInline::FlatRead32((r29 + 244));
}

loc_80832A8C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80832A98;
    }
}

loc_80832A90:
{
    r3 = (r1 + 120);
    // inline leaf 0x8083E000 (2 guest instruction(s))
    MemoryInline::FlatWriteRam32((r3 + 92), r4);
    // end of inlined leaf 0x8083E000
}

loc_80832A98:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = (r1 + 120);
    MemoryInline::FlatWriteFloat32(r28, f1.d);
    f2.d = f1.d;
    MemoryInline::FlatWriteFloat32((r28 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 12), f1.d);
    // inline leaf 0x80838870 (3 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 48), f2.d);
    // end of inlined leaf 0x80838870
    r15 = MemoryInline::FlatRead32((r1 + 204));
    r3 = r28;
    MemoryInline::FlatWriteRam32((r1 + 224), r15);
    r4 = (r1 + 24);
    r15 = MemoryInline::FlatRead32((r1 + 208));
    MemoryInline::FlatWriteRam32((r1 + 216), r15);
    r15 = MemoryInline::FlatRead32((r1 + 212));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 76));
    r6 = MemoryInline::FlatRead16((r29 + 250));
    r5 = MemoryInline::FlatRead32((r29 + 212));
    r0 = MemoryInline::FlatRead8((r1 + 187));
    MemoryInline::FlatWriteRam8((r1 + 91), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 224));
    r16 = MemoryInline::FlatRead32((r1 + 120));
    r17 = MemoryInline::FlatRead32((r1 + 124));
    r18 = MemoryInline::FlatRead32((r1 + 128));
    r19 = MemoryInline::FlatRead32((r1 + 132));
    r20 = MemoryInline::FlatRead32((r1 + 136));
    r21 = MemoryInline::FlatRead32((r1 + 140));
    r22 = MemoryInline::FlatRead32((r1 + 144));
    r23 = MemoryInline::FlatRead32((r1 + 148));
    r24 = MemoryInline::FlatRead32((r1 + 152));
    r25 = MemoryInline::FlatRead32((r1 + 156));
    r26 = MemoryInline::FlatRead32((r1 + 160));
    r27 = MemoryInline::FlatRead32((r1 + 164));
    r12 = MemoryInline::FlatRead32((r1 + 168));
    r11 = MemoryInline::FlatRead32((r1 + 172));
    r10 = MemoryInline::FlatRead32((r1 + 176));
    r9 = MemoryInline::FlatRead32((r1 + 180));
    r8 = MemoryInline::FlatRead16((r1 + 184));
    r7 = MemoryInline::FlatRead8((r1 + 186));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 188));
    r14 = MemoryInline::FlatRead32((r1 + 192));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 196));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 200));
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    r0 = MemoryInline::FlatRead32((r1 + 216));
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    r0 = r15;
    MemoryInline::FlatWriteRam32((r1 + 220), r15);
    MemoryInline::FlatWriteRam32((r1 + 24), r16);
    MemoryInline::FlatWriteRam32((r1 + 28), r17);
    MemoryInline::FlatWriteRam32((r1 + 32), r18);
    MemoryInline::FlatWriteRam32((r1 + 36), r19);
    MemoryInline::FlatWriteRam32((r1 + 40), r20);
    MemoryInline::FlatWriteRam32((r1 + 44), r21);
    MemoryInline::FlatWriteRam32((r1 + 48), r22);
    MemoryInline::FlatWriteRam32((r1 + 52), r23);
    MemoryInline::FlatWriteRam32((r1 + 56), r24);
    MemoryInline::FlatWriteRam32((r1 + 60), r25);
    MemoryInline::FlatWriteRam32((r1 + 64), r26);
    MemoryInline::FlatWriteRam32((r1 + 68), r27);
    MemoryInline::FlatWriteRam32((r1 + 72), r12);
    MemoryInline::FlatWriteRam32((r1 + 76), r11);
    MemoryInline::FlatWriteRam32((r1 + 80), r10);
    MemoryInline::FlatWriteRam32((r1 + 84), r9);
    MemoryInline::FlatWriteRam16((r1 + 88), static_cast<uint16_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 90), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f3.d);
    MemoryInline::FlatWriteRam32((r1 + 96), r14);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 104), f0.d);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    ctx->lr = 0x80832BB8u;
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
    ctx->fpr[8] = f8;
    ctx->cr = cr;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r3 = (r1 + 24);
    r4 = -1;
    ctx->lr = 0x80832BC4u;
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
    ctx->fpr[8] = f8;
    ctx->cr = cr;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x808314C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r5 = 1431633920;
    r6 = MemoryInline::FlatRead8((r29 + 252));
    r0 = (r5 + 21846);
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0 = (r5 + r0);
    r0 = (r0 * 3);
    r0 = (r6 - r0);
    r0 = (r0 & 255);
}

loc_80832C04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80832C18;
    }
}

loc_80832C08:
{
}

loc_80832C0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80832C20;
    }
}

loc_80832C10:
{
    f8.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_80832C24;
}

loc_80832C18:
{
    f8.d = MemoryInline::FlatReadFloat32((r31 + 16));
    goto loc_80832C24;
}

loc_80832C20:
{
    f8.d = MemoryInline::FlatReadFloat32((r31 + 20));
}

loc_80832C24:
{
    r3 = 1431633920;
    r0 = (r3 + 21846);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r3 + r0);
    r0 = (r0 & 255);
}

loc_80832C40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80832C54;
    }
}

loc_80832C44:
{
}

loc_80832C48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80832C5C;
    }
}

loc_80832C4C:
{
    f5.d = MemoryInline::FlatReadFloat32(r31);
    goto loc_80832C60;
}

loc_80832C54:
{
    f5.d = MemoryInline::FlatReadFloat32((r31 + 16));
    goto loc_80832C60;
}

loc_80832C5C:
{
    f5.d = MemoryInline::FlatReadFloat32((r31 + 20));
}

loc_80832C60:
{
    f3.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 80));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 76));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f6.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 64));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f7.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f5.d = PpcFmulsInline(f4.d, f5.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f3.d = PpcFmulsInline(f3.d, f8.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80832CB0:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    MemoryInline::FlatWriteFloat32((r28 + 4), f4.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f6.d));
    MemoryInline::FlatWriteFloat32(r28, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f7.d));
    MemoryInline::FlatWriteFloat32((r28 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_80832CD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80832CE8;
    }
}

loc_80832CD8:
{
    f1.d = (-(f4.d));
    f0.d = (-(f2.d));
    MemoryInline::FlatWriteFloat32((r28 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 12), f0.d);
}

loc_80832CE8:
{
    r3 = (r1 + 120);
    r4 = -1;
    ctx->lr = 0x80832CF4u;
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
    ctx->fpr[8] = f8;
    ctx->cr = cr;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    r11 = (r1 + 304);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
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
    ctx->fpr[8] = f8;
    ctx->cr = cr;
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00003FFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80832A20 func_80832A20 preserves=true fpr_mask=0x00000000
