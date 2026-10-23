#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80483670(CpuContext* ctx);
extern "C" uint64_t func_80483670_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8048466C(CpuContext* ctx);
extern "C" uint64_t func_8048466C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80500DA0(CpuContext* ctx);
extern "C" void func_80500DA0_ra38_1fe_0_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804FE100_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    uint32_t xer = ctx->xer;

    goto loc_804FE100;

loc_804FE100:
{
    MemoryInline::FlatWriteRam32((r1 + -544), r1);
    r1 = (r1 + -544);
    r0 = ctx->lr;
}

loc_804FE10C:
{
    MemoryInline::FlatWriteRam32((r1 + 548), r0);
    r31 = 0x80630000u;
    r31 = (r31 + -6992);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804FE320;
    }
}

loc_804FE128:
{
    r4 = MemoryInline::FlatRead32((r13 + -14036));
    r0 = MemoryInline::FlatRead32((r13 + -14032));
}

loc_804FE134:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_804FE1B8;
    }
}

loc_804FE138:
{
    r3 = MemoryInline::FlatRead8((r31 + 420));
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -14043), static_cast<uint8_t>(r0));
    r0 = 19;
}

loc_804FE14C:
{
    MemoryInline::FlatWrite8((r13 + -14042), static_cast<uint8_t>(r3));
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(19))) {
        goto loc_804FE158;
    }
}

loc_804FE154:
{
    r0 = r3;
}

loc_804FE158:
{
    r30 = (r0 & 255);
    r4 = (r31 + 420);
    r29 = (r30 * 13);
    MemoryInline::FlatWriteRam8((r1 + 264), static_cast<uint8_t>(r0));
    r3 = (r1 + 265);
    r4 = (r4 + 1);
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r13 + -14043));
    r3 = (r31 + 2240);
    r0 = (r0 + r30);
    MemoryInline::FlatWrite8((r13 + -14043), static_cast<uint8_t>(r0));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x80500DA0u>(&func_80500DA0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        func_80500DA0_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80500DA0u>(ctx);
        r1 = ctx->gpr[1];
    }
    r3 = 65536;
    r0 = (r29 + 1);
    r3 = (r3 + -945);
    r6 = 0x80500000u;
    r3 = (r3 & 65535);
    r4 = (r0 & 255);
    r5 = (r1 + 264);
    r6 = (r6 + -8176);
    ctx->lr = 0x804FE1B4u;
    if constexpr (KnownRegArgsCpuCall<0x8048466Cu>(&func_8048466C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8048466C_13E0 = func_8048466C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8048466C_13E0);
        r4 = static_cast<uint32_t>(regargs_result_8048466C_13E0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x8048466Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    goto loc_804FE338;
}

loc_804FE1B8:
{
    r0 = (r0 - r4);
    r3 = 251;
}

loc_804FE1C4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(251))) {
        goto loc_804FE1CC;
    }
}

loc_804FE1C8:
{
    r3 = r0;
}

loc_804FE1CC:
{
    r0 = MemoryInline::FlatRead32((r13 + -14040));
    r30 = (r3 & 255);
    SetCRResident(cr, xer, 6, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_804FE1D8:
{
    r5 = 0;
    r0 = (r0 + r4);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_1 & 255);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 255);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    if (((cr & 0x00000040u) == 0)) {
        goto loc_804FE2E0;
    }
}

loc_804FE200:
{
}

loc_804FE204:
{
    r6 = (r30 + -8);
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(8))) {
        goto loc_804FE2A4;
    }
}

loc_804FE20C:
{
    r4 = 0;
    if (((cr & 0x00000080u) != 0)) {
        goto loc_804FE228;
    }
}

loc_804FE214:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_804FE220:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r0))) {
        goto loc_804FE228;
    }
}

loc_804FE224:
{
    r4 = 1;
}

loc_804FE228:
{
}

loc_804FE22C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804FE2A4;
    }
}

loc_804FE230:
{
    r0 = (r6 + 7);
    r4 = MemoryInline::FlatRead32((r13 + -14036));
    r3 = (r31 + 232);
    r7 = (r1 + 8);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    r4 = (r3 + r4);
    ctr = r0;
}

loc_804FE250:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_804FE2A4;
    }
}

loc_804FE254:
{
    r3 = (r4 + r5);
    r5 = (r5 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 8));
    guest_range_1 = MemoryInline::ResolveRangeHost((r7 + 4), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r7 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r3 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r7 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r7 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r7 + 7), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 12));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r7 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 13));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r7 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r3 + 14));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r7 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r3 + 15));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r7 + 11), static_cast<uint8_t>(r0));
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804FE254;
    }
}

loc_804FE2A4:
{
    r4 = MemoryInline::FlatRead32((r13 + -14036));
    r6 = (r1 + 8);
    r3 = (r31 + 232);
    r0 = (r30 - r5);
    r6 = (r6 + r5);
    r4 = (r3 + r4);
    ctr = r0;
}

loc_804FE2C4:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r30))) {
        goto loc_804FE2E0;
    }
}

loc_804FE2C8:
{
    r3 = (r4 + r5);
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWrite8((r6 + 4), static_cast<uint8_t>(r0));
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804FE2C8;
    }
}

loc_804FE2E0:
{
    r0 = MemoryInline::FlatRead32((r13 + -14036));
    r3 = (r31 + 2264);
    r4 = (r0 + r30);
    MemoryInline::FlatWrite32((r13 + -14036), r4);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x80500DA0u>(&func_80500DA0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        func_80500DA0_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80500DA0u>(ctx);
        r1 = ctx->gpr[1];
    }
    r3 = 65536;
    r0 = (r30 + 4);
    r3 = (r3 + -948);
    r6 = 0x80500000u;
    r3 = (r3 & 65535);
    r4 = (r0 & 255);
    r5 = (r1 + 8);
    r6 = (r6 + -7936);
    ctx->lr = 0x804FE31Cu;
    if constexpr (KnownRegArgsCpuCall<0x8048466Cu>(&func_8048466C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8048466C_31FA = func_8048466C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8048466C_31FA);
        r4 = static_cast<uint32_t>(regargs_result_8048466C_31FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x8048466Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    goto loc_804FE338;
}

loc_804FE320:
{
    r3 = (r31 + 2224);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x80500DA0u>(&func_80500DA0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        func_80500DA0_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80500DA0u>(ctx);
        r1 = ctx->gpr[1];
    }
    r3 = 0x80500000u;
    r3 = (r3 + -8224);
    ctx->lr = 0x804FE338u;
    if constexpr (KnownRegArgsCpuCall<0x80483670u>(&func_80483670)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80483670_3DC1 = func_80483670_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80483670_3DC1);
        r4 = static_cast<uint32_t>(regargs_result_80483670_3DC1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        InvokeDirectCpu<0x80483670u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
}

loc_804FE338:
{
    r0 = MemoryInline::FlatRead32((r1 + 548));
    ctx->lr = r0;
    r1 = (r1 + 544);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

extern "C" void func_804FE100(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804FE100_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804FE100 func_804FE100 preserves=true fpr_mask=0x00000000
