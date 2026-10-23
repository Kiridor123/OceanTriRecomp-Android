#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045AA6C(CpuContext* ctx);
extern "C" uint64_t func_8045AA6C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80460068_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint32_t r25_addr_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_21 = 0;
    uint32_t r3_addr_22 = 0;
    uint32_t r3_addr_23 = 0;
    uint32_t r3_addr_24 = 0;
    uint32_t r3_addr_25 = 0;
    uint32_t r3_addr_26 = 0;
    uint32_t r3_addr_27 = 0;
    uint32_t r3_addr_28 = 0;
    uint32_t r3_addr_29 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_30 = 0;
    uint32_t r3_addr_31 = 0;
    uint32_t r3_addr_32 = 0;
    uint32_t r3_addr_33 = 0;
    uint32_t r3_addr_34 = 0;
    uint32_t r3_addr_35 = 0;
    uint32_t r3_addr_36 = 0;
    uint32_t r3_addr_37 = 0;
    uint32_t r3_addr_38 = 0;
    uint32_t r3_addr_39 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_40 = 0;
    uint32_t r3_addr_41 = 0;
    uint32_t r3_addr_42 = 0;
    uint32_t r3_addr_43 = 0;
    uint32_t r3_addr_44 = 0;
    uint32_t r3_addr_45 = 0;
    uint32_t r3_addr_46 = 0;
    uint32_t r3_addr_47 = 0;
    uint32_t r3_addr_48 = 0;
    uint32_t r3_addr_49 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_50 = 0;
    uint32_t r3_addr_51 = 0;
    uint32_t r3_addr_52 = 0;
    uint32_t r3_addr_53 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80460068;

loc_80460068:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -240), 0, 248u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 244u, (r1 + 244), r0);
    r11 = (r1 + 240);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r8 = 0x80610000u;
    r31 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 104u, (r1 + 104), r31);
    r17 = r4;
    r8 = MemoryInline::FlatRead32((r8 + -2880));
    r18 = r5;
    MemoryInline::WriteResolved32(guest_range_2, 108u, (r1 + 108), r31);
    r0 = 0;
    r12 = r17;
    r19 = r7;
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 8), r3);
    r3 = r18;
    r16 = 1;
    r29 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 156u, (r1 + 156), r0);
    r0 = 0;
    r14 = 0;
    r28 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 152u, (r1 + 152), r0);
    r0 = 0;
    r27 = 0;
    r24 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 112u, (r1 + 112), r31);
    r22 = 0;
    r30 = 1;
    r4 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 116u, (r1 + 116), r31);
    r5 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 120u, (r1 + 120), r31);
        MemoryInline::WriteResolved32(guest_range_2, 124u, (r1 + 124), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 128u, (r1 + 128), r31);
        MemoryInline::WriteResolved32(guest_range_2, 132u, (r1 + 132), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 136u, (r1 + 136), r31);
        MemoryInline::WriteResolved32(guest_range_2, 140u, (r1 + 140), r31);
    }
    MemoryInline::WriteResolved16(guest_range_2, 144u, (r1 + 144), static_cast<uint16_t>(r31));
    r26 = MemoryInline::FlatRead8(r8);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 12), r6);
    MemoryInline::WriteResolved32(guest_range_2, 148u, (r1 + 148), r0);
    MemoryInline::FlatWrite32(r7, r31);
    ctr = r12;
    ctx->lr = 0x80460120u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r8 = 0x80570000u;
    r8 = (r8 + 13120);
    r7 = MemoryInline::FlatRead32(r8);
    r5 = MemoryInline::FlatRead32((r2 + -4248));
    r4 = r3;
    r6 = MemoryInline::FlatRead32((r8 + 4));
    r15 = 0x80610000u;
    r3 = MemoryInline::FlatRead8((r8 + 8));
    r15 = (r15 + -2448);
    r0 = MemoryInline::FlatRead8((r2 + -4244));
    MemoryInline::FlatWriteRam32((r1 + 48), r7);
    MemoryInline::FlatWriteRam32((r1 + 52), r6);
    MemoryInline::FlatWriteRam8((r1 + 56), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    goto loc_80461010;
}

loc_8046015C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(128));
}

loc_80460160:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80460930;
    }
}

loc_80460164:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804601C0;
    }
}

loc_80460168:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(8));
}

loc_8046016C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80460720;
    }
}

loc_80460170:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8046019C;
    }
}

loc_80460174:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(3));
}

loc_80460178:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80461010;
    }
}

loc_8046017C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80460190;
    }
}

loc_80460180:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(1));
}

loc_80460184:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80460210;
    }
}

loc_80460188:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80460600;
    }
}

loc_8046018C:
{
    goto loc_80461010;
}

loc_80460190:
{
}

loc_80460194:
{
    if ((static_cast<int32_t>(r16) >= static_cast<int32_t>(5))) {
        goto loc_80461010;
    }
}

loc_80460198:
{
    goto loc_804606EC;
}

loc_8046019C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(32));
}

loc_804601A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8046082C;
    }
}

loc_804601A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804601B4;
    }
}

loc_804601A8:
{
}

loc_804601AC:
{
    if ((static_cast<int32_t>(r16) == static_cast<int32_t>(16))) {
        goto loc_804607E0;
    }
}

loc_804601B0:
{
    goto loc_80461010;
}

loc_804601B4:
{
}

loc_804601B8:
{
    if ((static_cast<int32_t>(r16) == static_cast<int32_t>(64))) {
        goto loc_804608CC;
    }
}

loc_804601BC:
{
    goto loc_80461010;
}

loc_804601C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(8192));
}

loc_804601C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80460428;
    }
}

loc_804601C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804601F0;
    }
}

loc_804601CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(512));
}

loc_804601D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80460A10;
    }
}

loc_804601D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804601E4;
    }
}

loc_804601D8:
{
}

loc_804601DC:
{
    if ((static_cast<int32_t>(r16) == static_cast<int32_t>(256))) {
        goto loc_80460994;
    }
}

loc_804601E0:
{
    goto loc_80461010;
}

loc_804601E4:
{
}

loc_804601E8:
{
    if ((static_cast<int32_t>(r16) == static_cast<int32_t>(1024))) {
        goto loc_80460A44;
    }
}

loc_804601EC:
{
    goto loc_80461010;
}

loc_804601F0:
{
    r3 = 65536;
    r0 = (r3 + -32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(r0));
}

loc_804601FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80460AC8;
    }
}

loc_80460200:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80461010;
    }
}

loc_80460204:
{
}

loc_80460208:
{
    if ((static_cast<int32_t>(r16) == static_cast<int32_t>(16384))) {
        goto loc_80460348;
    }
}

loc_8046020C:
{
    goto loc_80461010;
}

loc_80460210:
{
}

loc_80460214:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80460220;
    }
}

loc_8046021C:
{
    r0 = 0;
}

loc_80460220:
{
}

loc_80460224:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80460230;
    }
}

loc_80460228:
{
    r0 = 0;
    goto loc_80460244;
}

loc_80460230:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_4);
    r0 = (r0 & 256);
}

loc_80460244:
{
}

loc_80460248:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80460270;
    }
}

loc_8046024C:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x80460264u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r29 = (r29 + 1);
    goto loc_80461010;
}

loc_80460270:
{
}

loc_80460274:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80460280;
    }
}

loc_8046027C:
{
    r0 = 0;
}

loc_80460280:
{
}

loc_80460284:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80460290;
    }
}

loc_80460288:
{
    r0 = r4;
    goto loc_8046029C;
}

loc_80460290:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_6 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_6);
}

loc_8046029C:
{
}

loc_804602A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(45))) {
        goto loc_804602C0;
    }
}

loc_804602A4:
{
}

loc_804602A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(43))) {
        goto loc_804602C4;
    }
}

loc_804602AC:
{
}

loc_804602B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(73))) {
        goto loc_804602F0;
    }
}

loc_804602B4:
{
}

loc_804602B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(78))) {
        goto loc_80460318;
    }
}

loc_804602BC:
{
    goto loc_80460340;
}

loc_804602C0:
{
    r14 = 1;
}

loc_804602C4:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x804602E0u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 152), r0);
    r4 = r3;
    goto loc_80461010;
}

loc_804602F0:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x8046030Cu;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r16 = 16384;
    goto loc_80461010;
}

loc_80460318:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460334u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r16 = 8192;
    goto loc_80461010;
}

loc_80460340:
{
    r16 = 2;
    goto loc_80461010;
}

loc_80460348:
{
    r5 = MemoryInline::FlatRead32((r1 + 48));
    r16 = (r1 + 61);
    r3 = MemoryInline::FlatRead32((r1 + 52));
    r20 = 1;
    r0 = MemoryInline::FlatRead8((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 60), r5);
    MemoryInline::FlatWriteRam32((r1 + 64), r3);
    MemoryInline::FlatWriteRam8((r1 + 68), static_cast<uint8_t>(r0));
    goto loc_80460394;
}

loc_8046036C:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r16 = (r16 + 1);
    r20 = (r20 + 1);
    r30 = (r30 + 1);
    ctx->lr = 0x80460390u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
}

loc_80460394:
{
}

loc_80460398:
{
    if ((static_cast<int32_t>(r20) >= static_cast<int32_t>(8))) {
        goto loc_804603D8;
    }
}

loc_8046039C:
{
}

loc_804603A0:
{
    r3 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_804603AC;
    }
}

loc_804603A8:
{
    r3 = 0;
}

loc_804603AC:
{
    r0 = MemoryInline::FlatRead8(r16);
}

loc_804603B4:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804603C4;
    }
}

loc_804603BC:
{
    r0 = r4;
    goto loc_804603D0;
}

loc_804603C4:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_21 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_21);
}

loc_804603D0:
{
}

loc_804603D4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_8046036C;
    }
}

loc_804603D8:
{
}

loc_804603DC:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(3))) {
        goto loc_804603E8;
    }
}

loc_804603E0:
{
}

loc_804603E4:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(8))) {
        goto loc_80460420;
    }
}

loc_804603E8:
{
}

loc_804603EC:
{
    if ((static_cast<int32_t>(r14) == static_cast<int32_t>(0))) {
        goto loc_80460400;
    }
}

loc_804603F0:
{
    r3 = 0x80790000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 25020));
    f1.d = (-(f0.d));
    goto loc_80460408;
}

loc_80460400:
{
    r3 = 0x80790000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 25020));
}

loc_80460408:
{
    r0 = MemoryInline::FlatRead32((r1 + 152));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 + r29);
    r0 = (r20 + r0);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80461374;
}

loc_80460420:
{
    r16 = 4096;
    goto loc_80461010;
}

loc_80460428:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r20 = 0;
    r0 = MemoryInline::FlatRead8((r1 + 20));
    r16 = (r1 + 33);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 32), r3);
    r21 = 1;
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r1 + 36), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 72), r20);
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 76), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 80), r20);
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 84), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 88), r20);
        MemoryInline::WriteResolved32(guest_range_3, 60u, (r1 + 92), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_3, 64u, (r1 + 96), r20);
        MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 100), r20);
    }
    goto loc_80460490;
}

loc_80460468:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r16 = (r16 + 1);
    r21 = (r21 + 1);
    r30 = (r30 + 1);
    ctx->lr = 0x8046048Cu;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
}

loc_80460490:
{
}

loc_80460494:
{
    if ((static_cast<int32_t>(r21) >= static_cast<int32_t>(4))) {
        goto loc_804604D4;
    }
}

loc_80460498:
{
}

loc_8046049C:
{
    r3 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_804604A8;
    }
}

loc_804604A4:
{
    r3 = 0;
}

loc_804604A8:
{
    r0 = MemoryInline::FlatRead8(r16);
}

loc_804604B0:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804604C0;
    }
}

loc_804604B8:
{
    r0 = r4;
    goto loc_804604CC;
}

loc_804604C0:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_39 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_39);
}

loc_804604CC:
{
}

loc_804604D0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_80460468;
    }
}

loc_804604D4:
{
    r0 = (r21 + -3);
}

loc_804604DC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_804605F8;
    }
}

loc_804604E0:
{
}

loc_804604E4:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(4))) {
        goto loc_804605B8;
    }
}

loc_804604E8:
{
    r16 = (r1 + 72);
    goto loc_8046051C;
}

loc_804604F0:
{
    r12 = r17;
    MemoryInline::FlatWrite8(r16, static_cast<uint8_t>(r4));
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r20 = (r20 + 1);
    r16 = (r16 + 1);
    r30 = (r30 + 1);
    ctx->lr = 0x80460518u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
}

loc_8046051C:
{
}

loc_80460520:
{
    if ((static_cast<int32_t>(r20) >= static_cast<int32_t>(32))) {
        goto loc_804605A4;
    }
}

loc_80460524:
{
}

loc_80460528:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80460534;
    }
}

loc_80460530:
{
    r0 = 0;
}

loc_80460534:
{
}

loc_80460538:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80460544;
    }
}

loc_8046053C:
{
    r0 = 0;
    goto loc_80460558;
}

loc_80460544:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_29 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_43 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_43);
    r0 = (r0 & 8);
}

loc_80460558:
{
}

loc_8046055C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804604F0;
    }
}

loc_80460560:
{
}

loc_80460564:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80460570;
    }
}

loc_8046056C:
{
    r0 = 0;
}

loc_80460570:
{
}

loc_80460574:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80460580;
    }
}

loc_80460578:
{
    r0 = 0;
    goto loc_80460594;
}

loc_80460580:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_32 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_46 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_46);
    r0 = (r0 & 1);
}

loc_80460594:
{
}

loc_80460598:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804604F0;
    }
}

loc_8046059C:
{
}

loc_804605A0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r26))) {
        goto loc_804604F0;
    }
}

loc_804605A4:
{
}

loc_804605A8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(41))) {
        goto loc_804605B4;
    }
}

loc_804605AC:
{
    r16 = 4096;
    goto loc_80461010;
}

loc_804605B4:
{
    r20 = (r20 + 1);
}

loc_804605B8:
{
}

loc_804605BC:
{
    r3 = (r1 + 72);
    r0 = 0;
    r3_addr_50 = (r3 + r20);
    MemoryInline::FlatWrite8(r3_addr_50, static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r14) == static_cast<int32_t>(0))) {
        goto loc_804605D8;
    }
}

loc_804605CC:
{
    // inline leaf 0x80468844 (1 guest instruction(s))
    // end of inlined leaf 0x80468844
    f1.d = (-(f1.d));
    goto loc_804605DC;
}

loc_804605D8:
{
    // inline leaf 0x80468844 (1 guest instruction(s))
    // end of inlined leaf 0x80468844
}

loc_804605DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 152));
    r3 = (r0 + r21);
    r0 = (r20 + r29);
    r0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80461374;
}

loc_804605F8:
{
    r16 = 4096;
    goto loc_80461010;
}

loc_80460600:
{
}

loc_80460604:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r26))) {
        goto loc_80460630;
    }
}

loc_80460608:
{
    r12 = r17;
    r3 = r18;
    r16 = 16;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460628u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460630:
{
}

loc_80460634:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80460640;
    }
}

loc_8046063C:
{
    r0 = 0;
}

loc_80460640:
{
}

loc_80460644:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80460650;
    }
}

loc_80460648:
{
    r0 = 0;
    goto loc_80460664;
}

loc_80460650:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r0 & 8);
}

loc_80460664:
{
}

loc_80460668:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80460674;
    }
}

loc_8046066C:
{
    r16 = 4096;
    goto loc_80461010;
}

loc_80460674:
{
}

loc_80460678:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(48))) {
        goto loc_804606E4;
    }
}

loc_8046067C:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460698u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8046069C:
{
    r4 = r3;
    r0 = 1;
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(255))) {
        goto loc_804606AC;
    }
}

loc_804606A8:
{
    r0 = 0;
}

loc_804606AC:
{
}

loc_804606B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804606B8;
    }
}

loc_804606B4:
{
    goto loc_804606C4;
}

loc_804606B8:
{
    r5 = MemoryInline::FlatRead32((r15 + 56));
    r5 = MemoryInline::FlatRead32((r5 + 12));
    r5_addr_2 = (r5 + r3);
    r3 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_804606C4:
{
}

loc_804606C8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(88))) {
        goto loc_804606DC;
    }
}

loc_804606CC:
{
    r3 = 65536;
    r31 = 1;
    r16 = (r3 + -32768);
    goto loc_80461010;
}

loc_804606DC:
{
    r16 = 4;
    goto loc_80461010;
}

loc_804606E4:
{
    r16 = 8;
    goto loc_80461010;
}

loc_804606EC:
{
}

loc_804606F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(48))) {
        goto loc_80460718;
    }
}

loc_804606F4:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460710u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460718:
{
    r16 = 8;
    goto loc_80461010;
}

loc_80460720:
{
}

loc_80460724:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80460730;
    }
}

loc_8046072C:
{
    r0 = 0;
}

loc_80460730:
{
}

loc_80460734:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80460740;
    }
}

loc_80460738:
{
    r0 = 0;
    goto loc_80460754;
}

loc_80460740:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_14 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_14);
    r0 = (r0 & 8);
}

loc_80460754:
{
}

loc_80460758:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80460794;
    }
}

loc_8046075C:
{
}

loc_80460760:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r26))) {
        goto loc_8046078C;
    }
}

loc_80460764:
{
    r12 = r17;
    r3 = r18;
    r16 = 32;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460784u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_8046078C:
{
    r16 = 64;
    goto loc_80461010;
}

loc_80460794:
{
    r5 = MemoryInline::FlatRead8((r1 + 108));
}

loc_8046079C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(20))) {
        goto loc_804607B8;
    }
}

loc_804607A0:
{
    r0 = (r1 + 104);
    r3 = (r0 + r5);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r4));
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam8((r1 + 108), static_cast<uint8_t>(r0));
    goto loc_804607BC;
}

loc_804607B8:
{
    r27 = (r27 + 1);
}

loc_804607BC:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x804607D8u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_804607E0:
{
}

loc_804607E4:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_804607F0;
    }
}

loc_804607EC:
{
    r0 = 0;
}

loc_804607F0:
{
}

loc_804607F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80460800;
    }
}

loc_804607F8:
{
    r0 = 0;
    goto loc_80460814;
}

loc_80460800:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_8);
    r0 = (r0 & 8);
}

loc_80460814:
{
}

loc_80460818:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80460824;
    }
}

loc_8046081C:
{
    r16 = 4096;
    goto loc_80461010;
}

loc_80460824:
{
    r16 = 32;
    goto loc_80461010;
}

loc_8046082C:
{
}

loc_80460830:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_8046083C;
    }
}

loc_80460838:
{
    r0 = 0;
}

loc_8046083C:
{
}

loc_80460840:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046084C;
    }
}

loc_80460844:
{
    r0 = 0;
    goto loc_80460860;
}

loc_8046084C:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_12 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_12);
    r0 = (r0 & 8);
}

loc_80460860:
{
}

loc_80460864:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80460870;
    }
}

loc_80460868:
{
    r16 = 64;
    goto loc_80461010;
}

loc_80460870:
{
    r0 = MemoryInline::FlatRead8((r1 + 108));
}

loc_80460878:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(20))) {
        goto loc_804608A8;
    }
}

loc_8046087C:
{
}

loc_80460880:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(48))) {
        goto loc_8046088C;
    }
}

loc_80460884:
{
}

loc_80460888:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804608A4;
    }
}

loc_8046088C:
{
    r5 = MemoryInline::FlatRead8((r1 + 108));
    r0 = (r1 + 104);
    r3 = (r0 + r5);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 108), static_cast<uint8_t>(r0));
}

loc_804608A4:
{
    r27 = (r27 + -1);
}

loc_804608A8:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x804608C4u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_804608CC:
{
}

loc_804608D0:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_804608DC;
    }
}

loc_804608D8:
{
    r0 = 0;
}

loc_804608DC:
{
}

loc_804608E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804608EC;
    }
}

loc_804608E4:
{
    r0 = r4;
    goto loc_804608F8;
}

loc_804608EC:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_10 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_10);
}

loc_804608F8:
{
}

loc_804608FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(69))) {
        goto loc_80460928;
    }
}

loc_80460900:
{
    r12 = r17;
    r3 = r18;
    r16 = 128;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460920u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460928:
{
    r16 = 2048;
    goto loc_80461010;
}

loc_80460930:
{
}

loc_80460934:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(43))) {
        goto loc_8046095C;
    }
}

loc_80460938:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460954u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_8046098C;
}

loc_8046095C:
{
}

loc_80460960:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(45))) {
        goto loc_8046098C;
    }
}

loc_80460964:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460980u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 156), r0);
    r4 = r3;
}

loc_8046098C:
{
    r16 = 256;
    goto loc_80461010;
}

loc_80460994:
{
}

loc_80460998:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_804609A4;
    }
}

loc_804609A0:
{
    r0 = 0;
}

loc_804609A4:
{
}

loc_804609A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804609B4;
    }
}

loc_804609AC:
{
    r0 = 0;
    goto loc_804609C8;
}

loc_804609B4:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_16 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_16);
    r0 = (r0 & 8);
}

loc_804609C8:
{
}

loc_804609CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804609D8;
    }
}

loc_804609D0:
{
    r16 = 4096;
    goto loc_80461010;
}

loc_804609D8:
{
}

loc_804609DC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(48))) {
        goto loc_80460A08;
    }
}

loc_804609E0:
{
    r12 = r17;
    r3 = r18;
    r16 = 512;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460A00u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460A08:
{
    r16 = 1024;
    goto loc_80461010;
}

loc_80460A10:
{
}

loc_80460A14:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(48))) {
        goto loc_80460A3C;
    }
}

loc_80460A18:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460A34u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460A3C:
{
    r16 = 1024;
    goto loc_80461010;
}

loc_80460A44:
{
}

loc_80460A48:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80460A54;
    }
}

loc_80460A50:
{
    r0 = 0;
}

loc_80460A54:
{
}

loc_80460A58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80460A64;
    }
}

loc_80460A5C:
{
    r0 = 0;
    goto loc_80460A78;
}

loc_80460A64:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_18 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_18);
    r0 = (r0 & 8);
}

loc_80460A78:
{
}

loc_80460A7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80460A88;
    }
}

loc_80460A80:
{
    r16 = 2048;
    goto loc_80461010;
}

loc_80460A88:
{
    r0 = (r28 * 10);
    r3 = (r4 + r0);
    r28 = (r3 + -48);
}

loc_80460A98:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(308))) {
        goto loc_80460AA4;
    }
}

loc_80460A9C:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r19, r0);
}

loc_80460AA4:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460AC0u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460AC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(16));
}

loc_80460ACC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80460E20;
    }
}

loc_80460AD0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80460B04;
    }
}

loc_80460AD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(4));
}

loc_80460AD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80460BAC;
    }
}

loc_80460ADC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80460AF8;
    }
}

loc_80460AE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_80460AE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80460B78;
    }
}

loc_80460AE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80461010;
    }
}

loc_80460AEC:
{
}

loc_80460AF0:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(1))) {
        goto loc_80460B34;
    }
}

loc_80460AF4:
{
    goto loc_80461010;
}

loc_80460AF8:
{
}

loc_80460AFC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(8))) {
        goto loc_80460D00;
    }
}

loc_80460B00:
{
    goto loc_80461010;
}

loc_80460B04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(128));
}

loc_80460B08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80460F5C;
    }
}

loc_80460B0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80460B28;
    }
}

loc_80460B10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(64));
}

loc_80460B14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80460EE0;
    }
}

loc_80460B18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80461010;
    }
}

loc_80460B1C:
{
}

loc_80460B20:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(32))) {
        goto loc_80460E84;
    }
}

loc_80460B24:
{
    goto loc_80461010;
}

loc_80460B28:
{
}

loc_80460B2C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(256))) {
        goto loc_80460F90;
    }
}

loc_80460B30:
{
    goto loc_80461010;
}

loc_80460B34:
{
    r3 = (r1 + 40);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r12 = r17;
    r3 = r18;
    r25 = (r1 + 40);
    r22 = 0;
    r23 = 0;
    r31 = 2;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460B70u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460B78:
{
}

loc_80460B7C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(48))) {
        goto loc_80460BA4;
    }
}

loc_80460B80:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460B9Cu;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460BA4:
{
    r31 = 4;
    goto loc_80461010;
}

loc_80460BAC:
{
}

loc_80460BB0:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80460BBC;
    }
}

loc_80460BB8:
{
    r0 = 0;
}

loc_80460BBC:
{
}

loc_80460BC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80460BCC;
    }
}

loc_80460BC4:
{
    r0 = 0;
    goto loc_80460BE0;
}

loc_80460BCC:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_20 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_28 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_28);
    r0 = (r0 & 1024);
}

loc_80460BE0:
{
}

loc_80460BE4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80460C20;
    }
}

loc_80460BE8:
{
}

loc_80460BEC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r26))) {
        goto loc_80460C18;
    }
}

loc_80460BF0:
{
    r12 = r17;
    r3 = r18;
    r31 = 8;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460C10u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460C18:
{
    r31 = 16;
    goto loc_80461010;
}

loc_80460C20:
{
    r0 = 14;
}

loc_80460C28:
{
    if ((static_cast<uint32_t>(r22) >= static_cast<uint32_t>(r0))) {
        goto loc_80460CDC;
    }
}

loc_80460C2C:
{
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r0 = (r0_rot_22 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_80460C34:
{
    r0 = (r0 + r23);
    r3 = 1;
    r0 = (static_cast<int32_t>(r0) >> 1);
    r22 = (r22 + 1);
    r25_addr_4 = (r25 + r0);
    r0 = MemoryInline::FlatRead8(r25_addr_4);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80460C50;
    }
}

loc_80460C4C:
{
    r3 = 0;
}

loc_80460C50:
{
}

loc_80460C54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80460C5C;
    }
}

loc_80460C58:
{
    goto loc_80460C68;
}

loc_80460C5C:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_30 = (r3 + r4);
    r4 = MemoryInline::FlatRead8(r3_addr_30);
}

loc_80460C68:
{
}

loc_80460C6C:
{
    r6 = (r4 + -48);
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(65))) {
        goto loc_80460C78;
    }
}

loc_80460C74:
{
    r6 = (r4 + -55);
}

loc_80460C78:
{
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    r3 = (r23 & 1);
    r4 = (r3 ^ r5);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r3 = (r3_rot_3 & 240);
    r4 = (r4 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    r3 = (r0 | r3);
    r4 = (r6 & 255);
    r5 = (r3 & 255);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80460CA4;
    }
}

loc_80460C9C:
{
    r0 = (r0 | r4);
    r5 = (r0 & 255);
}

loc_80460CA4:
{
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r0 = (r0_rot_23 & 1);
    r12 = r17;
    r0 = (r0 + r23);
    r3 = r18;
    r0 = (static_cast<int32_t>(r0) >> 1);
    r4 = 0;
    r25_addr_5 = (r25 + r0);
    MemoryInline::FlatWrite8(r25_addr_5, static_cast<uint8_t>(r5));
    r5 = 0;
    ctr = r12;
    r23 = (r23 + 1);
    r30 = (r30 + 1);
    ctx->lr = 0x80460CD4u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460CDC:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460CF8u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460D00:
{
}

loc_80460D04:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80460D10;
    }
}

loc_80460D0C:
{
    r0 = 0;
}

loc_80460D10:
{
}

loc_80460D14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80460D20;
    }
}

loc_80460D18:
{
    r0 = 0;
    goto loc_80460D34;
}

loc_80460D20:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_24 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_24);
    r0 = (r0 & 1024);
}

loc_80460D34:
{
}

loc_80460D38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80460D44;
    }
}

loc_80460D3C:
{
    r31 = 16;
    goto loc_80461010;
}

loc_80460D44:
{
    r0 = 14;
}

loc_80460D4C:
{
    if ((static_cast<uint32_t>(r22) >= static_cast<uint32_t>(r0))) {
        goto loc_80460DFC;
    }
}

loc_80460D50:
{
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r0 = (r0_rot_18 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_80460D58:
{
    r0 = (r0 + r23);
    r3 = 1;
    r0 = (static_cast<int32_t>(r0) >> 1);
    r25_addr_2 = (r25 + r0);
    r0 = MemoryInline::FlatRead8(r25_addr_2);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80460D70;
    }
}

loc_80460D6C:
{
    r3 = 0;
}

loc_80460D70:
{
}

loc_80460D74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80460D7C;
    }
}

loc_80460D78:
{
    goto loc_80460D88;
}

loc_80460D7C:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_26 = (r3 + r4);
    r4 = MemoryInline::FlatRead8(r3_addr_26);
}

loc_80460D88:
{
}

loc_80460D8C:
{
    r6 = (r4 + -48);
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(65))) {
        goto loc_80460D98;
    }
}

loc_80460D94:
{
    r6 = (r4 + -55);
}

loc_80460D98:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r3 = (r23 & 1);
    r4 = (r3 ^ r5);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r3 = (r3_rot_2 & 240);
    r4 = (r4 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    r3 = (r0 | r3);
    r4 = (r6 & 255);
    r5 = (r3 & 255);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80460DC4;
    }
}

loc_80460DBC:
{
    r0 = (r0 | r4);
    r5 = (r0 & 255);
}

loc_80460DC4:
{
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r0 = (r0_rot_19 & 1);
    r12 = r17;
    r0 = (r0 + r23);
    r3 = r18;
    r0 = (static_cast<int32_t>(r0) >> 1);
    r4 = 0;
    r25_addr_3 = (r25 + r0);
    MemoryInline::FlatWrite8(r25_addr_3, static_cast<uint8_t>(r5));
    r5 = 0;
    ctr = r12;
    r23 = (r23 + 1);
    r30 = (r30 + 1);
    ctx->lr = 0x80460DF4u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460DFC:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460E18u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460E20:
{
}

loc_80460E24:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80460E30;
    }
}

loc_80460E2C:
{
    r0 = 0;
}

loc_80460E30:
{
}

loc_80460E34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80460E40;
    }
}

loc_80460E38:
{
    r0 = r4;
    goto loc_80460E4C;
}

loc_80460E40:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_36 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_36);
}

loc_80460E4C:
{
}

loc_80460E50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(80))) {
        goto loc_80460E7C;
    }
}

loc_80460E54:
{
    r12 = r17;
    r3 = r18;
    r31 = 32;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460E74u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460E7C:
{
    r16 = 2048;
    goto loc_80461010;
}

loc_80460E84:
{
}

loc_80460E88:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(45))) {
        goto loc_80460E98;
    }
}

loc_80460E8C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 148), r0);
    goto loc_80460EB8;
}

loc_80460E98:
{
}

loc_80460E9C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(43))) {
        goto loc_80460EB8;
    }
}

loc_80460EA0:
{
    r12 = r17;
    r3 = r18;
    r5 = 1;
    ctr = r12;
    ctx->lr = 0x80460EB4u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + -1);
}

loc_80460EB8:
{
    r12 = r17;
    r3 = r18;
    r31 = 64;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460ED8u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460EE0:
{
}

loc_80460EE4:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80460EF0;
    }
}

loc_80460EEC:
{
    r0 = 0;
}

loc_80460EF0:
{
}

loc_80460EF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80460F00;
    }
}

loc_80460EF8:
{
    r0 = 0;
    goto loc_80460F14;
}

loc_80460F00:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_24 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_32 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_32);
    r0 = (r0 & 8);
}

loc_80460F14:
{
}

loc_80460F18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80460F24;
    }
}

loc_80460F1C:
{
    r16 = 4096;
    goto loc_80461010;
}

loc_80460F24:
{
}

loc_80460F28:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(48))) {
        goto loc_80460F54;
    }
}

loc_80460F2C:
{
    r12 = r17;
    r3 = r18;
    r31 = 128;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460F4Cu;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460F54:
{
    r31 = 256;
    goto loc_80461010;
}

loc_80460F5C:
{
}

loc_80460F60:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(48))) {
        goto loc_80460F88;
    }
}

loc_80460F64:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80460F80u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80461010;
}

loc_80460F88:
{
    r31 = 256;
    goto loc_80461010;
}

loc_80460F90:
{
}

loc_80460F94:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80460FA0;
    }
}

loc_80460F9C:
{
    r0 = 0;
}

loc_80460FA0:
{
}

loc_80460FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80460FB0;
    }
}

loc_80460FA8:
{
    r0 = 0;
    goto loc_80460FC4;
}

loc_80460FB0:
{
    r3 = MemoryInline::FlatRead32((r15 + 56));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_26 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_34 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_34);
    r0 = (r0 & 8);
}

loc_80460FC4:
{
}

loc_80460FC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80460FD4;
    }
}

loc_80460FCC:
{
    r16 = 2048;
    goto loc_80461010;
}

loc_80460FD4:
{
    r0 = (r24 * 10);
}

loc_80460FDC:
{
    r3 = (r4 + r0);
    r24 = (r3 + -48);
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(32767))) {
        goto loc_80460FF0;
    }
}

loc_80460FE8:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r19, r0);
}

loc_80460FF0:
{
    r12 = r17;
    r3 = r18;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x8046100Cu;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
}

loc_80461010:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80461018:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r0))) {
        goto loc_8046102C;
    }
}

loc_8046101C:
{
}

loc_80461020:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_8046102C;
    }
}

loc_80461024:
{
    r0 = (r16 & 6144);
}

loc_80461028:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046015C;
    }
}

loc_8046102C:
{
    r0 = (r16 + 0);
}

loc_80461034:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32768))) {
        goto loc_80461048;
    }
}

loc_80461038:
{
    r0 = (r16 & 3628);
}

loc_8046103C:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
    goto loc_80461064;
}

loc_80461048:
{
    r0 = (r30 + -1);
    r3 = 0;
}

loc_80461054:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_80461060;
    }
}

loc_80461058:
{
    r0 = (r31 & 398);
}

loc_8046105C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80461064;
    }
}

loc_80461060:
{
    r3 = 1;
}

loc_80461064:
{
}

loc_80461068:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8046107C;
    }
}

loc_8046106C:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_8046108C;
}

loc_8046107C:
{
    r3 = (r30 + r29);
    r0 = (r3 + -1);
    r3 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32(r3, r0);
}

loc_8046108C:
{
    r12 = r17;
    r3 = r18;
    r5 = 1;
    ctr = r12;
    ctx->lr = 0x804610A0u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_804610A4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_804611F4;
    }
}

loc_804610A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 156));
}

loc_804610B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804610B8;
    }
}

loc_804610B4:
{
    r28 = (0 - r28);
}

loc_804610B8:
{
    r3 = MemoryInline::FlatRead8((r1 + 108));
    r4 = (r1 + 109);
    r4 = (r4 + r3);
    goto loc_804610CC;
}

loc_804610C8:
{
    r27 = (r27 + 1);
}

loc_804610CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_804610D0:
{
    r3 = (r3 + -1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804610E4;
    }
}

loc_804610D8:
{
    r4 = (r4 + -1);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_804610E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(48))) {
        goto loc_804610C8;
    }
}

loc_804610E4:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 108), static_cast<uint8_t>(r0));
    r4 = (r0 & 255);
}

loc_804610F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80461108;
    }
}

loc_804610F4:
{
    r3 = (r1 + 109);
    r0 = 48;
    r3_addr_51 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_51, static_cast<uint8_t>(r0));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam8((r1 + 108), static_cast<uint8_t>(r0));
}

loc_80461108:
{
    r0 = (r28 + 308);
}

loc_80461110:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(616))) {
        goto loc_80461148;
    }
}

loc_80461114:
{
    r0 = MemoryInline::FlatRead32(r19);
}

loc_8046111C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80461140;
    }
}

loc_80461120:
{
    r0 = MemoryInline::FlatRead8((r1 + 109));
}

loc_80461128:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(48))) {
        goto loc_80461140;
    }
}

loc_8046112C:
{
    r0 = MemoryInline::FlatRead8((r1 + 110));
}

loc_80461134:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80461140;
    }
}

loc_80461138:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -4240));
    goto loc_80461374;
}

loc_80461140:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r19, r0);
}

loc_80461148:
{
    r0 = MemoryInline::FlatRead32(r19);
    r28 = (r28 + r27);
}

loc_80461154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461190;
    }
}

loc_80461158:
{
    r0 = MemoryInline::FlatRead32((r1 + 156));
}

loc_80461160:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046116C;
    }
}

loc_80461164:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -4240));
    goto loc_80461374;
}

loc_8046116C:
{
}

loc_80461170:
{
    if ((static_cast<int32_t>(r14) == static_cast<int32_t>(0))) {
        goto loc_80461184;
    }
}

loc_80461174:
{
    r3 = 0x80790000u;
    f0.d = MemoryInline::FlatReadFloat64((r3 + 25024));
    f1.d = (-(f0.d));
    goto loc_80461374;
}

loc_80461184:
{
    r3 = 0x80790000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + 25024));
    goto loc_80461374;
}

loc_80461190:
{
    MemoryInline::FlatWriteRam16((r1 + 106), static_cast<uint16_t>(r28));
    r3 = (r1 + 104);
    ctx->lr = 0x8046119Cu;
    if constexpr (KnownRegArgsCpuCall<0x8045AA6Cu>(&func_8045AA6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045AA6C_17785 = func_8045AA6C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045AA6C_17785);
        r4 = static_cast<uint32_t>(regargs_result_8045AA6C_17785 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045AA6Cu>(ctx);
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
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    f0.d = MemoryInline::FlatReadFloat64((r2 + -4240));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_804611A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804611C0;
    }
}

loc_804611A8:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -4232));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804611B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804611C0;
    }
}

loc_804611B4:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r19, r0);
    goto loc_804611DC;
}

loc_804611C0:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -4224));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804611C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804611DC;
    }
}

loc_804611CC:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r19, r0);
    r3 = 0x80790000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + 25024));
}

loc_804611DC:
{
}

loc_804611E0:
{
    if ((static_cast<int32_t>(r14) == static_cast<int32_t>(0))) {
        goto loc_80461374;
    }
}

loc_804611E4:
{
    r0 = (r16 & 3628);
}

loc_804611E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461374;
    }
}

loc_804611EC:
{
    f1.d = (-(f1.d));
    goto loc_80461374;
}

loc_804611F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 148));
    r3 = (r1 + 24);
}

loc_80461200:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461208;
    }
}

loc_80461204:
{
    r24 = (0 - r24);
}

loc_80461208:
{
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r0 = (r0_rot_36 & -4);
    r5 = MemoryInline::FlatRead8((r1 + 40));
    r24 = (r24 + r0);
    r6 = 0;
    r4 = 128;
    goto loc_80461228;
}

loc_80461220:
{
    r6 = (r6 + 1);
    r24 = (r24 + -1);
}

loc_80461228:
{
}

loc_8046122C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(4))) {
        goto loc_8046123C;
    }
}

loc_80461230:
{
    r0 = PPC_Sraw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461220;
    }
}

loc_8046123C:
{
    r5 = (r6 + 1);
}

loc_80461240:
{
    r24 = (r24 + -1);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80461290;
    }
}

loc_80461248:
{
    r25 = (r1 + 47);
    r4 = (r1 + 40);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(r4));
}

loc_80461254:
{
    r7 = 0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80461290;
    }
}

loc_8046125C:
{
    r0 = (r25 + 1);
    r6 = (8 - r5);
    r0 = (r0 - r4);
    ctr = r0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80461290;
    }
}

loc_80461270:
{
    r0 = MemoryInline::FlatRead8(r25);
    r4 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r0 = PPC_Sraw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r4 = (r7 | r4);
    MemoryInline::FlatWrite8(r25, static_cast<uint8_t>(r4));
    r7 = (r0 & 255);
    r25 = (r25 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80461270;
    }
}

loc_80461290:
{
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 7;
    r4 = (r1 + 40);
    r3 = (r1 + 25);
    r9 = 0;
    r8 = 255;
    ctr = r0;
}

loc_804612B4:
{
    r0 = (r9 + 8);
    r6 = MemoryInline::FlatRead8(r4);
}

loc_804612C0:
{
    r5 = (r9 + 12);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(52))) {
        goto loc_804612D8;
    }
}

loc_804612C8:
{
    r0 = (52 - r9);
    r0 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r6 = (r6 & r0);
}

loc_804612D8:
{
    r10 = (r5 & 7);
    r6 = (r6 & 255);
    r0 = PPC_Sraw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r10));
    r7 = MemoryInline::FlatRead8(r3);
    r5 = (r0 & 255);
    r4 = (r4 + 1);
    r5 = (r7 | r5);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    r0 = (8 - r10);
    r9 = (r9 + 8);
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r3 = (r3 + 1);
    r5 = MemoryInline::FlatRead8(r3);
    r0 = (r0 & 255);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804612B4;
    }
}

loc_80461318:
{
    r3 = (r28 + r24);
    r24 = (r3 + 1023);
    r0 = (r24 & -2048);
}

loc_80461324:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80461338;
    }
}

loc_80461328:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r19, r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -4240));
    goto loc_80461374;
}

loc_80461338:
{
    r24_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(21));
    r24 = (r24_rot_1 & -2097152);
    r5 = MemoryInline::FlatRead8((r1 + 24));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(7));
    r4 = (r4_rot_1 & 127);
    r3 = MemoryInline::FlatRead8((r1 + 25));
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(15));
    r0 = (r0_rot_37 & 255);
}

loc_80461350:
{
    r4 = (r5 | r4);
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r4));
    r0 = (r3 | r0);
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r14) == static_cast<int32_t>(0))) {
        goto loc_80461370;
    }
}

loc_80461364:
{
    r0 = (r4 & 255);
    r0 = (r0 | 128);
    MemoryInline::FlatWriteRam8((r1 + 24), static_cast<uint8_t>(r0));
}

loc_80461370:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
}

loc_80461374:
{
    r11 = (r1 + 240);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80460068(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80460068_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80460068 func_80460068 preserves=true fpr_mask=0x00000000
