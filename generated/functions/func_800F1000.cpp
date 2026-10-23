#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEB14(CpuContext* ctx);
extern "C" uint64_t func_800CEB14_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800F12B4(CpuContext* ctx);
extern "C" uint64_t func_800F12B4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8028F2EC(CpuContext* ctx);
extern "C" uint32_t func_8028F2EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8045E54C(CpuContext* ctx);
extern "C" uint64_t func_8045E54C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_800F1000_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_800F1000;

loc_800F1000:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r29 = r3;
    r3 = (r3 & 255);
    if constexpr (KnownRegArgsCpuCall<0x800F12B4u>(&func_800F12B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800F12B4_946 = func_800F12B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800F12B4_946);
        r4 = static_cast<uint32_t>(regargs_result_800F12B4_946 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800F12B4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_800F1028:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_800F1048;
    }
}

loc_800F102C:
{
    r4 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = (r4 + 65536);
    r4 = (r0 + r3);
    r3 = MemoryInline::FlatRead8((r4 + -26870));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + -26870), static_cast<uint8_t>(r0));
    goto loc_800F1298;
}

loc_800F1048:
{
    r4 = (r29 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x805A0000u;
    r3 = (r3 + -30616);
    r3_addr_1 = (r3 + r0);
    r30 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = 0x805A0000u;
    r3 = (r3 + -28008);
    r3_addr_2 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
}

loc_800F106C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800F1298;
    }
}

loc_800F1070:
{
}

loc_800F1074:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F1298;
    }
}

loc_800F1078:
{
}

loc_800F107C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800F1090;
    }
}

loc_800F1080:
{
}

loc_800F1084:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800F1218;
    }
}

loc_800F1088:
{
    goto loc_800F1298;
}

loc_800F1090:
{
    ctx->lr = 0x800F1094u;
    if constexpr (KnownRegArgsCpuCall<0x8028F2ECu>(&func_8028F2EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8028F2EC_1252 = func_8028F2EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8028F2EC_1252;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8028F2ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_800F109C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_800F10A8;
    }
}

loc_800F10A0:
{
    r31 = 5;
    goto loc_800F10F4;
}

loc_800F10A8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17396));
    r5 = (r3 + 65536);
    r31 = MemoryInline::FlatRead8((r5 + -26852));
    r4 = (r3 + r31);
    r0 = MemoryInline::FlatRead8((r5 + -26851));
    r3 = (r31 + r0);
    r0 = (r3 - r31);
    ctr = r0;
}

loc_800F10CC:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r3))) {
        goto loc_800F10EC;
    }
}

loc_800F10D0:
{
    r3 = (r4 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26870));
}

loc_800F10DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F10EC;
    }
}

loc_800F10E0:
{
    r4 = (r4 + 1);
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F10D0;
    }
}

loc_800F10EC:
{
}

loc_800F10F0:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(6))) {
        goto loc_800F1298;
    }
}

loc_800F10F4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -17396), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = (r3 + 65536);
    r4 = (r0 + r31);
    r3 = MemoryInline::FlatRead8((r4 + -26870));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + -26870), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = (r3 + 65536);
    r3 = (r0 + r31);
    MemoryInline::FlatWrite8((r3 + -26876), static_cast<uint8_t>(r29));
    r0 = (r31 + 40);
    r4 = (r0 & 255);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = (r3 + 65536);
    r3 = (r0 + r31);
    MemoryInline::FlatWrite8((r3 + -26864), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = (r3 + 65536);
    r3 = (r0 + r31);
    MemoryInline::FlatWrite8((r3 + -26858), static_cast<uint8_t>(r4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = (r3 + 65536);
    r3 = (r0 + r31);
    r0 = MemoryInline::FlatRead8((r3 + -26864));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead8((r3 + -26858));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead8((r3 + -26858));
    // inline leaf 0x800F0474 (14 guest instruction(s))
    r5 = 0;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = (r4 + 65536);
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + -26764), static_cast<uint8_t>(r5));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = (r4 + 65536);
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + -26957), static_cast<uint8_t>(r5));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = (r4 + 65536);
    r3 = (r0 + r3);
    MemoryInline::FlatWrite8((r3 + -27006), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x800F0474
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 24);
    r4 = 0x805A0000u;
    r4 = (r4 + -26788);
    r5 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800F1188u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_232C = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_232C);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_232C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        InvokeDirectCpu<0x8045E54Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    r4 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = (r4 + 65536);
    r3 = (r0 + r31);
    r0 = MemoryInline::FlatRead8((r3 + -26858));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r1 + 24);
    r5 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 16));
    r5 = MemoryInline::FlatRead32((r5 + 212));
    r29 = 0x800F0000u;
    r6 = (r29 + 660);
    r7 = 3;
    r8 = (r1 + 8);
    ctx->lr = 0x800F11C0u;
    if constexpr (KnownRegArgsCpuCall<0x800CEB14u>(&func_800CEB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800CEB14_2CEC = func_800CEB14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEB14_2CEC);
        r4 = static_cast<uint32_t>(regargs_result_800CEB14_2CEC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CEB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 24);
    r4 = 0x805A0000u;
    r4 = (r4 + -26744);
    r5 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800F11E0u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045E54C_3332 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_3332);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_3332 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        InvokeDirectCpu<0x8045E54Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    r4 = MemoryInline::FlatRead32((r13 + -17396));
    r0 = (r4 + 65536);
    r3 = (r0 + r31);
    r0 = MemoryInline::FlatRead8((r3 + -26858));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r1 + 24);
    r5 = (r4 + r0);
    r4 = MemoryInline::FlatRead32((r5 + 408));
    r5 = MemoryInline::FlatRead32((r5 + 604));
    r6 = (r29 + 660);
    r7 = 3;
    r8 = (r1 + 8);
    ctx->lr = 0x800F1214u;
    if constexpr (KnownRegArgsCpuCall<0x800CEB14u>(&func_800CEB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800CEB14_3CDB = func_800CEB14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEB14_3CDB);
        r4 = static_cast<uint32_t>(regargs_result_800CEB14_3CDB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CEB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_800F1298;
}

loc_800F1218:
{
    ctx->lr = 0x800F121Cu;
    if constexpr (KnownRegArgsCpuCall<0x8028F2ECu>(&func_8028F2EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8028F2EC_41E3 = func_8028F2EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8028F2EC_41E3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8028F2ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_800F1224:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F1258;
    }
}

loc_800F1228:
{
    r0 = (r29 & 255);
}

loc_800F1230:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_800F123C;
    }
}

loc_800F1234:
{
}

loc_800F1238:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_800F1258;
    }
}

loc_800F123C:
{
    r31 = 2;
    r3 = MemoryInline::FlatRead32((r13 + -17396));
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26868));
}

loc_800F1250:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F10F4;
    }
}

loc_800F1254:
{
    goto loc_800F1298;
}

loc_800F1258:
{
    r31 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -17396));
    r3 = (r4 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26852));
    ctr = r0;
}

loc_800F1270:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_800F1290;
    }
}

loc_800F1274:
{
    r3 = (r4 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -26870));
}

loc_800F1280:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F1290;
    }
}

loc_800F1284:
{
    r4 = (r4 + 1);
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800F1274;
    }
}

loc_800F1290:
{
}

loc_800F1294:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(3))) {
        goto loc_800F10F4;
    }
}

loc_800F1298:
{
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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

extern "C" void func_800F1000(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F1000_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F1000 func_800F1000 preserves=true fpr_mask=0x00000000
