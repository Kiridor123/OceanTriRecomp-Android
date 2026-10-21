#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045B200(CpuContext* ctx);
extern "C" uint64_t func_8045B200_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045B85C(CpuContext* ctx);
extern "C" uint64_t func_8045B85C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045BD10(CpuContext* ctx);
extern "C" uint64_t func_8045BD10_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804642C8(CpuContext* ctx);
extern "C" uint64_t func_804642C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8045B2B8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8045B2B8u);
    goto loc_8045B2B8;

loc_8045B2B8:
{
    guest_range_0 = MemoryAlias::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryAlias::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryAlias::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r27 = r4;
    r28 = r6;
    r26 = r3;
    r25 = r5;
    r4 = 0;
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x804642C8u>(&func_804642C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804642C8_CFB = func_804642C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804642C8_CFB);
        r4 = static_cast<uint32_t>(regargs_result_804642C8_CFB >> 32);
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
        InvokeDirectCpu<0x804642C8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8045B2E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045B2F8;
    }
}

loc_8045B2EC:
{
    r3 = r28;
    r4 = -1;
    if constexpr (KnownRegArgsCpuCall<0x804642C8u>(&func_804642C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804642C8_10B1 = func_804642C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804642C8_10B1);
        r4 = static_cast<uint32_t>(regargs_result_804642C8_10B1 >> 32);
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
        InvokeDirectCpu<0x804642C8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_8045B2F8:
{
    r30 = (r27 * r25);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8045B318;
    }
}

loc_8045B300:
{
    r0 = MemoryAlias::FlatRead8((r28 + 10));
}

loc_8045B308:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045B318;
    }
}

loc_8045B30C:
{
    r0 = MemoryAlias::FlatRead32((r28 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(10));
    r0 = (r0_rot_1 & 7);
}

loc_8045B314:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045B320;
    }
}

loc_8045B318:
{
    r3 = 0;
    goto loc_8045B5AC;
}

loc_8045B320:
{
}

loc_8045B324:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8045B32C;
    }
}

loc_8045B328:
{
    // inline leaf 0x8045C14C (4 guest instruction(s))
    r3 = 0x80460000u;
    r3 = (r3 + -26584);
    MemoryAlias::FlatWrite32((r13 + -16388), r3);
    // end of inlined leaf 0x8045C14C
}

loc_8045B32C:
{
    r3 = MemoryAlias::FlatRead32((r28 + 4));
    r31 = 1;
    r4 = 0;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(13));
    r0 = (r0_rot_2 & 1);
}

loc_8045B33C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045B34C;
    }
}

loc_8045B340:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(7));
    r0 = (r0_rot_3 & 3);
}

loc_8045B348:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8045B350;
    }
}

loc_8045B34C:
{
    r4 = 1;
}

loc_8045B350:
{
}

loc_8045B354:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8045B36C;
    }
}

loc_8045B358:
{
    r0 = MemoryAlias::FlatRead32((r28 + 4));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_6 & 3);
}

loc_8045B364:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8045B36C;
    }
}

loc_8045B368:
{
    r31 = 0;
}

loc_8045B36C:
{
    r0 = MemoryAlias::FlatRead32((r28 + 8));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & 7);
}

loc_8045B374:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045B3C8;
    }
}

loc_8045B378:
{
    r3 = MemoryAlias::FlatRead32((r28 + 4));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r0 = (r0_rot_9 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8045B380:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r0 = (r0_rot_10 & 7);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8045B3C8;
    }
}

loc_8045B388:
{
    r0 = (r0 & 4);
}

loc_8045B38C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045B3B0;
    }
}

loc_8045B390:
{
    r3 = r28;
    r4 = 0;
    r5 = 2;
    ctx->lr = 0x8045B3A0u;
    if constexpr (KnownRegArgsCpuCall<0x8045B85Cu>(&func_8045B85C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045B85C_1FDA = func_8045B85C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045B85C_1FDA);
        r4 = static_cast<uint32_t>(regargs_result_8045B85C_1FDA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045B85Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_8045B3A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045B3B0;
    }
}

loc_8045B3A8:
{
    r3 = 0;
    goto loc_8045B5AC;
}

loc_8045B3B0:
{
    r0 = MemoryAlias::FlatRead32((r28 + 8));
    r3 = 1;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0_mrot_1 = (r0_rot_11 & -536870912);
    r0_mdest_1 = (r0 & 536870911);
    r0 = (r0_mdest_1 | r0_mrot_1);
    MemoryAlias::FlatWrite32((r28 + 8), r0);
    r3 = r28;
    // inline leaf 0x8045B1D8 (10 guest instruction(s))
    r4 = MemoryAlias::FlatRead32((r3 + 24));
    r0 = MemoryAlias::FlatRead32((r3 + 44));
    r6 = MemoryAlias::FlatRead32((r3 + 28));
    r5 = MemoryAlias::FlatRead32((r3 + 32));
    r0 = (r4 & r0);
    MemoryAlias::FlatWrite32((r3 + 36), r6);
    r0 = (r5 - r0);
    MemoryAlias::FlatWrite32((r3 + 40), r0);
    MemoryAlias::FlatWrite32((r3 + 52), r4);
    // end of inlined leaf 0x8045B1D8
}

loc_8045B3C8:
{
    r0 = MemoryAlias::FlatRead32((r28 + 8));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_13 & 7);
}

loc_8045B3D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8045B3F0;
    }
}

loc_8045B3D8:
{
    r3 = 1;
    r0 = 0;
    MemoryAlias::FlatWrite8((r28 + 10), static_cast<uint8_t>(r3));
    r3 = 0;
    MemoryAlias::FlatWrite32((r28 + 40), r0);
    goto loc_8045B5AC;
}

loc_8045B3F0:
{
}

loc_8045B3F4:
{
    r29 = 0;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8045B520;
    }
}

loc_8045B3FC:
{
    r3 = MemoryAlias::FlatRead32((r28 + 28));
    r4 = MemoryAlias::FlatRead32((r28 + 36));
}

loc_8045B408:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r3))) {
        goto loc_8045B414;
    }
}

loc_8045B40C:
{
}

loc_8045B410:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8045B520;
    }
}

loc_8045B414:
{
    r0 = MemoryAlias::FlatRead32((r28 + 32));
    r3 = (r4 - r3);
    r0 = (r0 - r3);
    MemoryAlias::FlatWrite32((r28 + 40), r0);
}

loc_8045B424:
{
    r5 = MemoryAlias::FlatRead32((r28 + 40));
    r25 = 0;
    MemoryAlias::FlatWriteRam32((r1 + 8), r5);
}

loc_8045B434:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r30))) {
        goto loc_8045B440;
    }
}

loc_8045B438:
{
    r5 = r30;
    MemoryAlias::FlatWriteRam32((r1 + 8), r30);
}

loc_8045B440:
{
    r0 = MemoryAlias::FlatRead32((r28 + 4));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_15 & 3);
}

loc_8045B44C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8045B47C;
    }
}

loc_8045B450:
{
}

loc_8045B454:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8045B47C;
    }
}

loc_8045B458:
{
    r3 = r26;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8045BD10u>(&func_8045BD10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8045BD10_31B9 = func_8045BD10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD10_31B9);
        r4 = static_cast<uint32_t>(regargs_result_8045BD10_31B9 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045BD10u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8045B468:
{
    r25 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045B47C;
    }
}

loc_8045B470:
{
    r0 = (r3 + 1);
    r5 = (r0 - r26);
    MemoryAlias::FlatWriteRam32((r1 + 8), r5);
}

loc_8045B47C:
{
    r5 = MemoryAlias::FlatRead32((r1 + 8));
}

loc_8045B484:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8045B4BC;
    }
}

loc_8045B488:
{
    r3 = MemoryAlias::FlatRead32((r28 + 36));
    r4 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryAlias::FlatRead32((r1 + 8));
    r3 = MemoryAlias::FlatRead32((r28 + 36));
    r0 = MemoryAlias::FlatRead32((r28 + 40));
    r26 = (r26 + r4);
    r3 = (r3 + r4);
    MemoryAlias::FlatWrite32((r28 + 36), r3);
    r30 = (r30 - r4);
    r3 = MemoryAlias::FlatRead32((r1 + 8));
    r0 = (r0 - r3);
    MemoryAlias::FlatWrite32((r28 + 40), r0);
}

loc_8045B4BC:
{
    r0 = MemoryAlias::FlatRead32((r28 + 40));
}

loc_8045B4C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045B4DC;
    }
}

loc_8045B4C8:
{
}

loc_8045B4CC:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_8045B4DC;
    }
}

loc_8045B4D0:
{
    r0 = MemoryAlias::FlatRead32((r28 + 4));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_16 & 3);
}

loc_8045B4D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8045B508;
    }
}

loc_8045B4DC:
{
    r3 = r28;
    r4 = 0;
    ctx->lr = 0x8045B4E8u;
    if constexpr (KnownRegArgsCpuCall<0x8045B200u>(&func_8045B200)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045B200_3BB9 = func_8045B200_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045B200_3BB9);
        r4 = static_cast<uint32_t>(regargs_result_8045B200_3BB9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045B200u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_8045B4EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045B508;
    }
}

loc_8045B4F0:
{
    r3 = 1;
    r0 = 0;
    MemoryAlias::FlatWrite8((r28 + 10), static_cast<uint8_t>(r3));
    r30 = 0;
    MemoryAlias::FlatWrite32((r28 + 40), r0);
    goto loc_8045B520;
}

loc_8045B508:
{
    r0 = MemoryAlias::FlatRead32((r1 + 8));
}

loc_8045B510:
{
    r29 = (r29 + r0);
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8045B520;
    }
}

loc_8045B518:
{
}

loc_8045B51C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8045B424;
    }
}

loc_8045B520:
{
}

loc_8045B524:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8045B590;
    }
}

loc_8045B528:
{
}

loc_8045B52C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8045B590;
    }
}

loc_8045B530:
{
    r25 = MemoryAlias::FlatRead32((r28 + 28));
    r0 = (r26 + r30);
    r31 = MemoryAlias::FlatRead32((r28 + 32));
    r3 = r28;
    MemoryAlias::FlatWrite32((r28 + 28), r26);
    r4 = (r1 + 8);
    MemoryAlias::FlatWrite32((r28 + 32), r30);
    MemoryAlias::FlatWrite32((r28 + 36), r0);
    ctx->lr = 0x8045B554u;
    if constexpr (KnownRegArgsCpuCall<0x8045B200u>(&func_8045B200)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045B200_472F = func_8045B200_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045B200_472F);
        r4 = static_cast<uint32_t>(regargs_result_8045B200_472F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045B200u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_8045B558:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045B570;
    }
}

loc_8045B55C:
{
    r3 = 1;
    r0 = 0;
    MemoryAlias::FlatWrite8((r28 + 10), static_cast<uint8_t>(r3));
    MemoryAlias::FlatWrite32((r28 + 40), r0);
    goto loc_8045B578;
}

loc_8045B570:
{
    r0 = MemoryAlias::FlatRead32((r1 + 8));
    r29 = (r29 + r0);
}

loc_8045B578:
{
    MemoryAlias::FlatWrite32((r28 + 28), r25);
    r3 = r28;
    MemoryAlias::FlatWrite32((r28 + 32), r31);
    // inline leaf 0x8045B1D8 (10 guest instruction(s))
    r4 = MemoryAlias::FlatRead32((r3 + 24));
    r0 = MemoryAlias::FlatRead32((r3 + 44));
    r6 = MemoryAlias::FlatRead32((r3 + 28));
    r5 = MemoryAlias::FlatRead32((r3 + 32));
    r0 = (r4 & r0);
    MemoryAlias::FlatWrite32((r3 + 36), r6);
    r0 = (r5 - r0);
    MemoryAlias::FlatWrite32((r3 + 40), r0);
    MemoryAlias::FlatWrite32((r3 + 52), r4);
    // end of inlined leaf 0x8045B1D8
    r0 = 0;
    MemoryAlias::FlatWrite32((r28 + 40), r0);
}

loc_8045B590:
{
    r0 = MemoryAlias::FlatRead32((r28 + 4));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_20 & 3);
}

loc_8045B59C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_8045B5A8;
    }
}

loc_8045B5A0:
{
    r0 = 0;
    MemoryAlias::FlatWrite32((r28 + 40), r0);
}

loc_8045B5A8:
{
    r3 = PPC_Divwu(static_cast<uint32_t>(r29), static_cast<uint32_t>(r27));
}

loc_8045B5AC:
{
    guest_range_1 = MemoryAlias::ResolveRangeHost((r1 + 20), 0, 36u, true, false);
    r0 = MemoryAlias::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_8045B2B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045B2B8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045B2B8 func_8045B2B8 preserves=true fpr_mask=0x00000000
