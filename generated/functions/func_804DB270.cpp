#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CCDB0(CpuContext* ctx);
extern "C" uint64_t func_804CCDB0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CDCA0(CpuContext* ctx);
extern "C" uint64_t func_804CDCA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804DAEB4(CpuContext* ctx);
extern "C" uint64_t func_804DAEB4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804DB270_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r8_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804DB270;

loc_804DB270:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r0 = (r4 * 12);
    r31 = 0x80630000u;
    r8 = MemoryInline::FlatRead32((r3 + 76));
    r24 = r4;
    r7 = MemoryInline::FlatRead32((r3 + 84));
    r25 = r5;
    r6 = MemoryInline::FlatRead32((r3 + 56));
    r3 = (r8 + r0);
    r8_addr_0 = (r8 + r0);
    r4 = MemoryInline::FlatRead32(r8_addr_0);
    r31 = (r31 + -23472);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r29 = (r4 + r7);
    r26 = (r6 + r0);
    goto loc_804DB498;
}

loc_804DB2BC:
{
    r0 = (r3 & 255);
}

loc_804DB2C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(109))) {
        goto loc_804DB494;
    }
}

loc_804DB2C8:
{
    r28 = MemoryInline::FlatRead32(r26);
    r0 = (r28 & 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_804DB2D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DB2FC;
    }
}

loc_804DB2D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DB2E8;
    }
}

loc_804DB2DC:
{
}

loc_804DB2E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DB2F4;
    }
}

loc_804DB2E4:
{
    goto loc_804DB308;
}

loc_804DB2E8:
{
}

loc_804DB2EC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(4))) {
        goto loc_804DB308;
    }
}

loc_804DB2F0:
{
    goto loc_804DB304;
}

loc_804DB2F4:
{
    r28 = (r28 + 1);
    goto loc_804DB308;
}

loc_804DB2FC:
{
    r28 = (r28 + -1);
    goto loc_804DB308;
}

loc_804DB304:
{
    r28 = (r28 + -2);
}

loc_804DB308:
{
    r3 = r25;
    r4 = r29;
    ctx->lr = 0x804DB314u;
    if constexpr (KnownRegArgsCpuCall<0x804DAEB4u>(&func_804DAEB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804DAEB4_1277 = func_804DAEB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DAEB4_1277);
        r4 = static_cast<uint32_t>(regargs_result_804DAEB4_1277 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x804DAEB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804DB318:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_804DB324;
    }
}

loc_804DB31C:
{
    r30 = 0;
    goto loc_804DB330;
}

loc_804DB324:
{
    r4 = MemoryInline::FlatRead32((r25 + 64));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r30 = (r4 + r0);
}

loc_804DB330:
{
}

loc_804DB334:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804DB494;
    }
}

loc_804DB338:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_804DB340:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DB3D4;
    }
}

loc_804DB344:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DB36C;
    }
}

loc_804DB348:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_804DB34C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DB3D4;
    }
}

loc_804DB350:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DB360;
    }
}

loc_804DB354:
{
}

loc_804DB358:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(8))) {
        goto loc_804DB384;
    }
}

loc_804DB35C:
{
    goto loc_804DB448;
}

loc_804DB360:
{
}

loc_804DB364:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(11))) {
        goto loc_804DB384;
    }
}

loc_804DB368:
{
    goto loc_804DB424;
}

loc_804DB36C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(241));
}

loc_804DB370:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DB438;
    }
}

loc_804DB374:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DB448;
    }
}

loc_804DB378:
{
}

loc_804DB37C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(14))) {
        goto loc_804DB448;
    }
}

loc_804DB380:
{
    goto loc_804DB424;
}

loc_804DB384:
{
    r0 = MemoryInline::FlatRead8(r28);
    r3 = r25;
    r4 = (r31 + 216);
    r0 = (r0 & -32);
    r0 = (r0 | 13);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    ctx->lr = 0x804DB3A0u;
    if constexpr (KnownRegArgsCpuCall<0x804DAEB4u>(&func_804DAEB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804DAEB4_20C4 = func_804DAEB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DAEB4_20C4);
        r4 = static_cast<uint32_t>(regargs_result_804DAEB4_20C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x804DAEB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804DB3A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_804DB3B0;
    }
}

loc_804DB3A8:
{
    r3 = 0;
    goto loc_804DB3BC;
}

loc_804DB3B0:
{
    r4 = MemoryInline::FlatRead32((r25 + 64));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r3 = (r4 + r0);
}

loc_804DB3BC:
{
}

loc_804DB3C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804DB3CC;
    }
}

loc_804DB3C4:
{
    r26 = (r26 + 12);
    goto loc_804DB498;
}

loc_804DB3CC:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_804DB454;
}

loc_804DB3D4:
{
    r0 = MemoryInline::FlatRead8(r28);
    r3 = r25;
    r4 = (r31 + 228);
    r0 = (r0 & -32);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    ctx->lr = 0x804DB3F0u;
    if constexpr (KnownRegArgsCpuCall<0x804DAEB4u>(&func_804DAEB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804DAEB4_29B9 = func_804DAEB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804DAEB4_29B9);
        r4 = static_cast<uint32_t>(regargs_result_804DAEB4_29B9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x804DAEB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804DB3F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_804DB400;
    }
}

loc_804DB3F8:
{
    r3 = 0;
    goto loc_804DB40C;
}

loc_804DB400:
{
    r4 = MemoryInline::FlatRead32((r25 + 64));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0 = (r0_rot_7 & -16);
    r3 = (r4 + r0);
}

loc_804DB40C:
{
}

loc_804DB410:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804DB41C;
    }
}

loc_804DB414:
{
    r26 = (r26 + 12);
    goto loc_804DB498;
}

loc_804DB41C:
{
    r27 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_804DB454;
}

loc_804DB424:
{
    r0 = MemoryInline::FlatRead8(r28);
    r27 = 0;
    r0 = (r0 & 224);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    goto loc_804DB454;
}

loc_804DB438:
{
    r3 = (r31 + 240);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804DB444u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804CDCA0_3354 = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_3354);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_3354 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_804DB454;
}

loc_804DB448:
{
    r3 = (r31 + 240);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804DB454u;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804CDCA0_3C4A = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_3C4A);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_3C4A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_804DB454:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r3 = r28;
    r5 = MemoryInline::FlatRead32((r25 + 12));
    r4 = 32;
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    r7 = MemoryInline::FlatRead32((r26 + 8));
    r6 = MemoryInline::FlatRead32((r30 + 4));
    r5_addr_2 = (r5 + r0);
    r5 = MemoryInline::FlatRead32(r5_addr_2);
    r0 = (r7 + r6);
    r0 = (r5 + r0);
    r0 = (r0 - r27);
    MemoryInline::FlatWrite16((r28 + 1), static_cast<uint16_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804CCCC0_4619 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_4619);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_4619 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = r28;
    r4 = 32;
    if constexpr (KnownRegArgsCpuCall<0x804CCDB0u>(&func_804CCDB0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804CCDB0_490F = func_804CCDB0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCDB0_490F);
        r4 = static_cast<uint32_t>(regargs_result_804CCDB0_490F >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CCDB0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_804DB494:
{
    r26 = (r26 + 12);
}

loc_804DB498:
{
    r3 = MemoryInline::FlatRead32((r26 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 16777215);
}

loc_804DB4A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r24))) {
        goto loc_804DB2BC;
    }
}

loc_804DB4A8:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DB270(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DB270_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804DB270 func_804DB270 preserves=true fpr_mask=0x00000000
