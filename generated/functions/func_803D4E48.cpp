#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803D50E8(CpuContext* ctx);
extern "C" uint64_t func_803D50E8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803D6508(CpuContext* ctx);
extern "C" uint64_t func_803D6508_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803D4E48_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_803D4E48;

loc_803D4E48:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r26 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_803D4E68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803D4E7C;
    }
}

loc_803D4E6C:
{
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x803D4E7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
}

loc_803D4E7C:
{
    r28 = 0;
    r30 = r26;
    r29 = (r26 + 16);
    r31 = 0x80600000u;
    r23 = 1;
    r24 = 0;
    r25 = 3;
}

loc_803D4E98:
{
    r27 = MemoryInline::FlatRead32((r30 + 16));
}

loc_803D4EA0:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_803D5068;
    }
}

loc_803D4EA4:
{
    r4 = (r26 + r28);
    r0 = MemoryInline::FlatRead8((r4 + 100));
}

loc_803D4EB0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D5068;
    }
}

loc_803D4EB4:
{
}

loc_803D4EB8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(2))) {
        goto loc_803D4EC8;
    }
}

loc_803D4EBC:
{
    r0 = MemoryInline::FlatRead32((r26 + 24));
}

loc_803D4EC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D4EC8:
{
}

loc_803D4ECC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(1))) {
        goto loc_803D4F04;
    }
}

loc_803D4ED0:
{
}

loc_803D4ED4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(2))) {
        goto loc_803D4F14;
    }
}

loc_803D4ED8:
{
}

loc_803D4EDC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(3))) {
        goto loc_803D4FD8;
    }
}

loc_803D4EE0:
{
}

loc_803D4EE4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(6))) {
        goto loc_803D4FD8;
    }
}

loc_803D4EE8:
{
}

loc_803D4EEC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(12))) {
        goto loc_803D500C;
    }
}

loc_803D4EF0:
{
}

loc_803D4EF4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(11))) {
        goto loc_803D5018;
    }
}

loc_803D4EF8:
{
}

loc_803D4EFC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(10))) {
        goto loc_803D5058;
    }
}

loc_803D4F00:
{
    goto loc_803D5064;
}

loc_803D4F04:
{
    r0 = MemoryInline::FlatRead8((r26 + 102));
}

loc_803D4F0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D4F10:
{
    goto loc_803D5064;
}

loc_803D4F14:
{
    r22 = 0;
    ctr = r25;
}

loc_803D4F1C:
{
    r3 = (r26 + r22);
    r0 = MemoryInline::FlatRead8((r3 + 100));
}

loc_803D4F28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D4FAC;
    }
}

loc_803D4F2C:
{
    r22 = (r22 + 1);
    r3 = (r26 + r22);
    r0 = MemoryInline::FlatRead8((r3 + 100));
}

loc_803D4F3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D4FAC;
    }
}

loc_803D4F40:
{
    r22 = (r22 + 1);
    r3 = (r26 + r22);
    r0 = MemoryInline::FlatRead8((r3 + 100));
}

loc_803D4F50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D4FAC;
    }
}

loc_803D4F54:
{
    r22 = (r22 + 1);
    r3 = (r26 + r22);
    r0 = MemoryInline::FlatRead8((r3 + 100));
}

loc_803D4F64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D4FAC;
    }
}

loc_803D4F68:
{
    r22 = (r22 + 1);
    r3 = (r26 + r22);
    r0 = MemoryInline::FlatRead8((r3 + 100));
}

loc_803D4F78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D4FAC;
    }
}

loc_803D4F7C:
{
    r22 = (r22 + 1);
    r3 = (r26 + r22);
    r0 = MemoryInline::FlatRead8((r3 + 100));
}

loc_803D4F8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D4FAC;
    }
}

loc_803D4F90:
{
    r22 = (r22 + 1);
    r3 = (r26 + r22);
    r0 = MemoryInline::FlatRead8((r3 + 100));
}

loc_803D4FA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D4FAC;
    }
}

loc_803D4FA4:
{
    r22 = (r22 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803D4F1C;
    }
}

loc_803D4FAC:
{
}

loc_803D4FB0:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(21))) {
        goto loc_803D5064;
    }
}

loc_803D4FB4:
{
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r4 = (r31 + -20664);
    r5 = r22;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x803D4FD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    goto loc_803D50A8;
}

loc_803D4FD8:
{
    r0 = MemoryInline::FlatRead8((r26 + 111));
}

loc_803D4FE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D4FE4:
{
    r0 = MemoryInline::FlatRead8((r26 + 112));
}

loc_803D4FEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D4FF0:
{
    r0 = MemoryInline::FlatRead8((r26 + 102));
}

loc_803D4FF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D4FFC:
{
    r0 = MemoryInline::FlatRead8((r26 + 101));
}

loc_803D5004:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D5008:
{
    goto loc_803D5064;
}

loc_803D500C:
{
    r0 = MemoryInline::FlatRead8((r26 + 111));
}

loc_803D5014:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D5018:
{
    r0 = MemoryInline::FlatRead8((r26 + 102));
}

loc_803D5020:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D5024:
{
    r0 = MemoryInline::FlatRead8((r26 + 101));
}

loc_803D502C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D5030:
{
    r0 = MemoryInline::FlatRead8((r26 + 103));
}

loc_803D5038:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D503C:
{
    r0 = MemoryInline::FlatRead8((r26 + 106));
}

loc_803D5044:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D5048:
{
    r0 = MemoryInline::FlatRead8((r26 + 110));
}

loc_803D5050:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D5054:
{
    goto loc_803D5064;
}

loc_803D5058:
{
    r0 = MemoryInline::FlatRead8((r26 + 111));
}

loc_803D5060:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D5064:
{
    MemoryInline::FlatWrite8((r4 + 100), static_cast<uint8_t>(r23));
}

loc_803D5068:
{
}

loc_803D506C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D5070:
{
    r22 = (r26 + r28);
    r0 = MemoryInline::FlatRead8((r22 + 100));
}

loc_803D507C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D5080:
{
    r3 = r27;
    ctx->lr = 0x803D5088u;
    if constexpr (KnownRegArgsCpuCall<0x803D50E8u>(&func_803D50E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D50E8_2EA0 = func_803D50E8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D50E8_2EA0);
        r4 = static_cast<uint32_t>(regargs_result_803D50E8_2EA0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x803D50E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    }
    r3 = r27;
    // inline leaf 0x803D50D4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 148));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x803D50D4
}

loc_803D5094:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803D50A8;
    }
}

loc_803D5098:
{
    r3 = r26;
    r4 = r29;
    ctx->lr = 0x803D50A4u;
    if constexpr (KnownRegArgsCpuCall<0x803D6508u>(&func_803D6508)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_803D6508_380E = func_803D6508_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803D6508_380E);
        r4 = static_cast<uint32_t>(regargs_result_803D6508_380E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        InvokeDirectCpu<0x803D6508u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
    }
    MemoryInline::FlatWrite8((r22 + 100), static_cast<uint8_t>(r24));
}

loc_803D50A8:
{
    r30 = (r30 + 4);
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_803D50B8:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(21))) {
        goto loc_803D4E98;
    }
}

loc_803D50BC:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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

extern "C" void func_803D4E48(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803D4E48_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803D4E48 func_803D4E48 preserves=true fpr_mask=0x00000000
