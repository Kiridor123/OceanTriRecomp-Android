#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021CC14(CpuContext* ctx);
extern "C" uint64_t func_8021CC14_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8021D60C(CpuContext* ctx);
extern "C" uint64_t func_8021D60C_ra188_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8038F53C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_8038F53C;

loc_8038F53C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r27 = r3;
    r26 = r4;
    r3 = 0x806B0000u;
    r25 = (r3 + -12348);
    r28 = MemoryInline::FlatRead32((r25 + 172));
    r3 = r28;
    r4 = 0;
    r5 = 8192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r28 + 232), r27);
    MemoryInline::FlatWrite32((r28 + 236), r26);
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8038F584:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8038F5C8;
    }
}

loc_8038F588:
{
    r0 = MemoryInline::FlatRead16((r27 + 182));
    r4 = (r0 & 255);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r3 = (r3_rot_1 & 1073741823);
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r25 + 329), static_cast<uint8_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = (r13 + -23112);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_0);
}

loc_8038F5AC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_8038F5BC;
    }
}

loc_8038F5B0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    goto loc_8038F5D0;
}

loc_8038F5BC:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    goto loc_8038F5D0;
}

loc_8038F5C8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
}

loc_8038F5D0:
{
    r26 = 0;
    r4 = 0x806B0000u;
    r3 = (r4 + -12348);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 340u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 322u, (r3 + 330), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved8(guest_range_0, 323u, (r3 + 331), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved16(guest_range_0, 326u, (r3 + 334), static_cast<uint16_t>(r26));
    MemoryInline::WriteResolved8(guest_range_0, 324u, (r3 + 332), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved16(guest_range_0, 328u, (r3 + 336), static_cast<uint16_t>(r26));
    MemoryInline::WriteResolved8(guest_range_0, 325u, (r3 + 333), static_cast<uint8_t>(r26));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 330u, ((static_cast<uint32_t>(static_cast<uint16_t>(r26)) << 16) | static_cast<uint16_t>(r26)))) {
        MemoryInline::WriteResolved16(guest_range_0, 330u, (r3 + 338), r26);
        MemoryInline::WriteResolved16(guest_range_0, 332u, (r3 + 340), r26);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 334u, ((static_cast<uint32_t>(static_cast<uint16_t>(r26)) << 16) | static_cast<uint16_t>(r26)))) {
        MemoryInline::WriteResolved16(guest_range_0, 334u, (r3 + 342), r26);
        MemoryInline::WriteResolved16(guest_range_0, 336u, (r3 + 344), r26);
    }
    MemoryInline::WriteResolved16(guest_range_0, 338u, (r3 + 346), static_cast<uint16_t>(r26));
    r0 = 17;
    MemoryInline::FlatWriteRam8((r4 + -12348), static_cast<uint8_t>(r0));
    r25 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 8), static_cast<uint8_t>(r25));
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_8038F620:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8038F674;
    }
}

loc_8038F624:
{
    r27 = 0;
    r3 = 20;
    ctx->lr = 0x8038F630u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_8038F634:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8038F644;
    }
}

loc_8038F638:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 2), static_cast<uint8_t>(r0));
    goto loc_8038F660;
}

loc_8038F644:
{
    r3 = 16;
    ctx->lr = 0x8038F64Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_8038F650:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8038F65C;
    }
}

loc_8038F654:
{
    MemoryInline::FlatWrite8((r28 + 2), static_cast<uint8_t>(r25));
    goto loc_8038F660;
}

loc_8038F65C:
{
    MemoryInline::FlatWrite8((r28 + 2), static_cast<uint8_t>(r26));
}

loc_8038F660:
{
    r3 = 2;
    ctx->lr = 0x8038F668u;
    if constexpr (KnownRegArgsCpuCall<0x8021CC14u>(&func_8021CC14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021CC14_25C0 = func_8021CC14_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021CC14_25C0);
        r4 = static_cast<uint32_t>(regargs_result_8021CC14_25C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8021CC14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = 0;
    ctx->lr = 0x8038F670u;
    if constexpr (KnownRegArgsCpuCall<0x8021D60Cu>(&func_8021D60C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        const auto regargs_result_8021D60C_2DEE = func_8021D60C_ra188_1fe_18_0(ctx, r3, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8021D60C_2DEE);
        r4 = static_cast<uint32_t>(regargs_result_8021D60C_2DEE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8021D60Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8038F6B0;
}

loc_8038F674:
{
    r27 = 1;
    r3 = 33;
    ctx->lr = 0x8038F680u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_8038F684:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8038F694;
    }
}

loc_8038F688:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 2), static_cast<uint8_t>(r0));
    goto loc_8038F6B0;
}

loc_8038F694:
{
    r3 = 31;
    ctx->lr = 0x8038F69Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_8038F6A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8038F6AC;
    }
}

loc_8038F6A4:
{
    MemoryInline::FlatWrite8((r28 + 2), static_cast<uint8_t>(r25));
    goto loc_8038F6B0;
}

loc_8038F6AC:
{
    MemoryInline::FlatWrite8((r28 + 2), static_cast<uint8_t>(r26));
}

loc_8038F6B0:
{
    r26 = 0;
    r25 = 0;
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 54));
    r27 = 0;
    r29 = 0;
    r4 = 1431633920;
    r30 = (r4 + 21846);
    r31 = 1;
}

loc_8038F6E0:
{
    r3 = (r3 & 65535);
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl3_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl3_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x800CEF8C;
    }
}

loc_inl3_0x800CEF88:
{
    r0 = 1;
}

loc_inl3_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl3_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r0 = (r3 & 65535);
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r30)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_3 & 1);
    r4 = (r5 + r4);
    r4 = (r4 * 3);
    r4 = (r0 - r4);
    r9 = (r4 & 65535);
    r6 = (r28 + r25);
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r30)) * static_cast<int64_t>(static_cast<int32_t>(r9))) >> 32));
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_4 & 1);
    r4 = (r5 + r4);
    r4 = (r4 * 3);
    r4 = (r9 - r4);
    r4 = (r29 + r4);
    r4 = (r4 & 65535);
    MemoryInline::FlatWrite16((r6 + 124), static_cast<uint16_t>(r4));
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r4 = (r4_rot_5 & 1);
    MemoryInline::FlatWrite8((r6 + 126), static_cast<uint8_t>(r4));
    r7 = (r27 & 255);
    MemoryInline::FlatWrite8((r6 + 127), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r6 + 128), static_cast<uint8_t>(r31));
    r4 = (r26 + 1);
    r4 = (r4 * 6);
    r8 = (r28 + r4);
    r6 = (r9 + 1);
    r5 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r30)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_6 & 1);
    r4 = (r5 + r4);
    r4 = (r4 * 3);
    r4 = (r6 - r4);
    r4 = (r29 + r4);
    r4 = (r4 & 65535);
    MemoryInline::FlatWrite16((r8 + 124), static_cast<uint16_t>(r4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_6 & 1);
    MemoryInline::FlatWrite8((r8 + 126), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r8 + 127), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r8 + 128), static_cast<uint8_t>(r31));
    r26 = (r26 + 2);
    r25 = (r25 + 12);
    r29 = (r29 + 3);
    r27 = (r27 + 1);
}

loc_8038F790:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(6))) {
        goto loc_8038F6E0;
    }
}

loc_8038F794:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8038F53C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8038F53C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8038F53C func_8038F53C preserves=true fpr_mask=0x00000000
