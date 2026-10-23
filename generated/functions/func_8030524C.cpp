#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050574(CpuContext* ctx);
extern "C" uint64_t func_80050574_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_8005077C(CpuContext* ctx);
extern "C" uint64_t func_8005077C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8013599C(CpuContext* ctx);
extern "C" uint64_t func_8013599C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8030524C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8030524C;

loc_8030524C:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r28 = r3;
    r31 = 1;
    r3 = (r1 + 80);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 68);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 96);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r29 = MemoryInline::FlatRead32((r28 + 56));
    r30 = MemoryInline::FlatRead32((r28 + 48));
    r3 = r30;
    // inline leaf 0x8012D068 (10 guest instruction(s))
}

loc_inl3_0x8012D068:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl3_0x8012D070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x8012D088;
    }
}

loc_inl3_0x8012D074:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl3_0x8012D07C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_inl3_0x8012D088;
    }
}

loc_inl3_0x8012D080:
{
    r3 = 0;
    goto loc_inl3_cont_8012D068;
}

loc_inl3_0x8012D088:
{
    r3 = 1;
}

loc_inl3_cont_8012D068:
{
    // end of inlined leaf 0x8012D068
}

loc_8030529C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803052B8;
    }
}

loc_803052A0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r28 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    goto loc_80305954;
}

loc_803052B8:
{
    r0 = MemoryInline::FlatRead8((r28 + 7));
}

loc_803052C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803052E8;
    }
}

loc_803052C4:
{
    ctx->lr = 0x803052C8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x803C4878u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803052CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803052E8;
    }
}

loc_803052D0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r28 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    goto loc_80305954;
}

loc_803052E8:
{
    r3 = MemoryInline::FlatRead8((r28 + 2));
    r0 = (r3 + -9);
}

loc_803052F4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(199))) {
        goto loc_80305380;
    }
}

loc_803052F8:
{
    r3 = 0x805E0000u;
    r3 = (r3 + -15272);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80305310u:
        goto loc_80305310;
        break;
    case 0x80305380u:
        goto loc_80305380;
        break;
    case 0x80305340u:
        goto loc_80305340;
        break;
    case 0x80305348u:
        goto loc_80305348;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80305310:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r5 = (r28 + 24);
    ctx->lr = 0x80305320u;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8013599C_1A9C = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_1A9C);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_1A9C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013599Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    r3 = (r28 + 36);
    r4 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80050914u>(ctx);
    r3 = (r1 + 96);
    r4 = (r28 + 24);
    // inline leaf 0x800FBBF4 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x800FBBF4
    r0 = 1;
    goto loc_80305394;
}

loc_80305340:
{
    r0 = 0;
    goto loc_80305394;
}

loc_80305348:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r5 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    r3 = (r1 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -11504));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 96);
    r4 = (r1 + 68);
    ctx->lr = 0x80305378u;
    if constexpr (KnownRegArgsCpuCall<0x8005077Cu>(&func_8005077C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_8005077C_24D3 = func_8005077C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8005077C_24D3);
        r4 = static_cast<uint32_t>(regargs_result_8005077C_24D3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x8005077Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r0 = 1;
    goto loc_80305394;
}

loc_80305380:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r5 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    r0 = 1;
}

loc_80305394:
{
}

loc_80305398:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80305544;
    }
}

loc_8030539C:
{
    r3 = (r1 + 80);
    r4 = (r29 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 80);
    r4 = (r1 + 96);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r1 + 96);
    r4 = (r1 + 80);
    // inline leaf 0x8010148C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x8010148C
    r0 = MemoryInline::FlatRead8((r28 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(114));
}

loc_803053C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80305510;
    }
}

loc_803053CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80305454;
    }
}

loc_803053D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(62));
}

loc_803053D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803054FC;
    }
}

loc_803053D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80305424;
    }
}

loc_803053DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(19));
}

loc_803053E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803054FC;
    }
}

loc_803053E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8030540C;
    }
}

loc_803053E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(15));
}

loc_803053EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803054FC;
    }
}

loc_803053F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80305400;
    }
}

loc_803053F4:
{
}

loc_803053F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(14))) {
        goto loc_803054E8;
    }
}

loc_803053FC:
{
    goto loc_80305520;
}

loc_80305400:
{
}

loc_80305404:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(18))) {
        goto loc_803054E8;
    }
}

loc_80305408:
{
    goto loc_80305520;
}

loc_8030540C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(55));
}

loc_80305410:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803054E8;
    }
}

loc_80305414:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80305520;
    }
}

loc_80305418:
{
}

loc_8030541C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(60))) {
        goto loc_803054E8;
    }
}

loc_80305420:
{
    goto loc_80305520;
}

loc_80305424:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(104));
}

loc_80305428:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803054E8;
    }
}

loc_8030542C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80305448;
    }
}

loc_80305430:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(91));
}

loc_80305434:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803054E8;
    }
}

loc_80305438:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80305520;
    }
}

loc_8030543C:
{
}

loc_80305440:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(66))) {
        goto loc_803054FC;
    }
}

loc_80305444:
{
    goto loc_80305520;
}

loc_80305448:
{
}

loc_8030544C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(112))) {
        goto loc_80305510;
    }
}

loc_80305450:
{
    goto loc_80305520;
}

loc_80305454:
{
}

loc_80305458:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(138))) {
        goto loc_803054A4;
    }
}

loc_8030545C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(126));
}

loc_80305460:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80305510;
    }
}

loc_80305464:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80305480;
    }
}

loc_80305468:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(118));
}

loc_8030546C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803054FC;
    }
}

loc_80305470:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80305520;
    }
}

loc_80305474:
{
}

loc_80305478:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(116))) {
        goto loc_803054E8;
    }
}

loc_8030547C:
{
    goto loc_80305520;
}

loc_80305480:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(130));
}

loc_80305484:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80305520;
    }
}

loc_80305488:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80305498;
    }
}

loc_8030548C:
{
}

loc_80305490:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(129))) {
        goto loc_803054E8;
    }
}

loc_80305494:
{
    goto loc_80305520;
}

loc_80305498:
{
}

loc_8030549C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(132))) {
        goto loc_80305520;
    }
}

loc_803054A0:
{
    goto loc_803054E8;
}

loc_803054A4:
{
}

loc_803054A8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(164))) {
        goto loc_803054D0;
    }
}

loc_803054AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(142));
}

loc_803054B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803054E8;
    }
}

loc_803054B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803054C4;
    }
}

loc_803054B8:
{
}

loc_803054BC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(140))) {
        goto loc_80305520;
    }
}

loc_803054C0:
{
    goto loc_803054E8;
}

loc_803054C4:
{
}

loc_803054C8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(157))) {
        goto loc_803054E8;
    }
}

loc_803054CC:
{
    goto loc_80305520;
}

loc_803054D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(206));
}

loc_803054D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803054E8;
    }
}

loc_803054D8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80305520;
    }
}

loc_803054DC:
{
}

loc_803054E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(184))) {
        goto loc_803054E8;
    }
}

loc_803054E4:
{
    goto loc_80305520;
}

loc_803054E8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -11508));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 524));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    goto loc_80305520;
}

loc_803054FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -11508));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 528));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
    goto loc_80305520;
}

loc_80305510:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 524));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 124), f0.d);
}

loc_80305520:
{
    r3 = (r1 + 96);
    r4 = (r28 + 24);
    // inline leaf 0x80101470 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80101470
    r3 = MemoryInline::FlatRead32((r29 + 28));
    r4 = (r1 + 96);
    ctx->lr = 0x80305538u;
    if constexpr (KnownRegArgsCpuCall<0x80050574u>(&func_80050574)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_80050574_4D0C = func_80050574_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80050574_4D0C);
        r4 = static_cast<uint32_t>(regargs_result_80050574_4D0C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80050574u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r1 + 96);
    ctx->lr = 0x80305544u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800A5420u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80305544:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 8));
    ctx->lr = 0x80305550u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9B24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80305558:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(44))) {
        goto loc_80305594;
    }
}

loc_8030555C:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r3 = MH3_TickLoad(r3, 2150651228);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r28 + 12), r0);
}

loc_8030556C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_80305588;
    }
}

loc_80305570:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r28 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    goto loc_80305954;
}

loc_80305588:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    ctx->lr = 0x80305590u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9984u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_803055BC;
}

loc_80305594:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    ctx->lr = 0x8030559Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9984u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_803055A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803055BC;
    }
}

loc_803055A4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r28 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    goto loc_80305954;
}

loc_803055BC:
{
    r4 = MemoryInline::FlatRead8((r28 + 2));
    r0 = (r4 + -3);
}

loc_803055C8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(206))) {
        goto loc_80305934;
    }
}

loc_803055CC:
{
    r3 = 0x805E0000u;
    r3 = (r3 + -16100);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x803056DCu:
        goto loc_803056DC;
        break;
    case 0x80305934u:
        goto loc_80305934;
        break;
    case 0x803057D4u:
        goto loc_803057D4;
        break;
    case 0x80305680u:
        goto loc_80305680;
        break;
    case 0x803055E4u:
        goto loc_803055E4;
        break;
    case 0x80305830u:
        goto loc_80305830;
        break;
    case 0x80305758u:
        goto loc_80305758;
        break;
    case 0x80305878u:
        goto loc_80305878;
        break;
    case 0x803058F0u:
        goto loc_803058F0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_803055E4:
{
    r3 = MemoryInline::FlatRead32((r28 + 12));
    r3 = MH3_TickLoad(r3, 2150651364);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r28 + 12), r0);
}

loc_803055F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(21))) {
        goto loc_80305624;
    }
}

loc_803055F8:
{
}

loc_803055FC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(45))) {
        goto loc_80305624;
    }
}

loc_80305600:
{
}

loc_80305604:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(22))) {
        goto loc_80305630;
    }
}

loc_80305608:
{
}

loc_8030560C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(46))) {
        goto loc_80305630;
    }
}

loc_80305610:
{
}

loc_80305614:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(23))) {
        goto loc_8030563C;
    }
}

loc_80305618:
{
}

loc_8030561C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(47))) {
        goto loc_8030563C;
    }
}

loc_80305620:
{
    goto loc_80305644;
}

loc_80305624:
{
    r3 = 0x805E0000u;
    r30 = (r3 + -16952);
    goto loc_80305644;
}

loc_80305630:
{
    r3 = 0x805E0000u;
    r30 = (r3 + -16936);
    goto loc_80305644;
}

loc_8030563C:
{
    r3 = 0x805E0000u;
    r30 = (r3 + -16920);
}

loc_80305644:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r28 + 12));
    r5 = (r1 + 40);
    r6 = (r1 + 41);
    r7 = (r1 + 42);
    ctx->lr = 0x8030565Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800FA804u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 36);
    ctx->lr = 0x8030567Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80305934;
}

loc_80305680:
{
    r3 = MemoryInline::FlatRead8((r28 + 68));
    r4 = 0;
    ctx->lr = 0x8030568Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802B035Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & -16777216);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_5 & 255);
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r0));
    r0 = (r3 & 16711680);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_6 & 65535);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r0));
    r0 = (r3 & 65280);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_7 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 32);
    ctx->lr = 0x803056D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80305934;
}

loc_803056DC:
{
    r3 = (r1 + 56);
    ctx->lr = 0x803056E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802BDD44u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11512));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803056F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_803056FC;
    }
}

loc_803056F4:
{
    r31 = 0;
    goto loc_80305934;
}

loc_803056FC:
{
    r3 = MemoryInline::FlatRead8((r28 + 68));
    r4 = 1;
    ctx->lr = 0x80305708u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802B035Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & -16777216);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_8 & 255);
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r0));
    r0 = (r3 & 16711680);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_9 & 65535);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r0));
    r0 = (r3 & 65280);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_10 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 28);
    ctx->lr = 0x80305754u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80305934;
}

loc_80305758:
{
    r3 = (r1 + 44);
    ctx->lr = 0x80305760u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802BDD44u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11512));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8030576C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80305778;
    }
}

loc_80305770:
{
    r31 = 0;
    goto loc_80305934;
}

loc_80305778:
{
    r3 = MemoryInline::FlatRead8((r28 + 68));
    r4 = 1;
    ctx->lr = 0x80305784u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802B035Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & -16777216);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_11 & 255);
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r0));
    r0 = (r3 & 16711680);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_12 & 65535);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r0));
    r0 = (r3 & 65280);
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_13 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 24);
    ctx->lr = 0x803057D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80305934;
}

loc_803057D4:
{
    r3 = MemoryInline::FlatRead8((r28 + 68));
    r4 = 1;
    ctx->lr = 0x803057E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802B035Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r3 & -16777216);
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_14 & 255);
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r0));
    r0 = (r3 & 16711680);
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_15 & 65535);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r0));
    r0 = (r3 & 65280);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_16 & 16777215);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 20);
    ctx->lr = 0x8030582Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80305934;
}

loc_80305830:
{
    r3 = r30;
    r4 = 0;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_80305844:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80305934;
    }
}

loc_80305848:
{
    r0 = 127;
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 16);
    ctx->lr = 0x80305874u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80305934;
}

loc_80305878:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
}

loc_80305880:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80305890;
    }
}

loc_80305884:
{
}

loc_80305888:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_803058A4;
    }
}

loc_8030588C:
{
    goto loc_803058B4;
}

loc_80305890:
{
    r3 = MemoryInline::FlatRead8((r28 + 68));
    r4 = 0;
    ctx->lr = 0x8030589Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802B035Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
    goto loc_803058B4;
}

loc_803058A4:
{
    r3 = MemoryInline::FlatRead8((r28 + 68));
    r4 = 1;
    ctx->lr = 0x803058B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802B035Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = r3;
}

loc_803058B4:
{
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(8));
    r0 = (r0_rot_17 & 255);
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r0));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(16));
    r0 = (r0_rot_18 & 255);
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r0));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(24));
    r0 = (r0_rot_19 & 255);
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r0));
    r0 = (r30 & 255);
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 12);
    ctx->lr = 0x803058ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80305934;
}

loc_803058F0:
{
    r3 = r30;
    r4 = 2;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_80305904:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_80305934;
    }
}

loc_80305908:
{
    r0 = 127;
    MemoryInline::FlatWriteRam8((r1 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 42), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 43), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 8);
    ctx->lr = 0x80305934u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80305934:
{
}

loc_80305938:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_80305954;
    }
}

loc_8030593C:
{
    r3 = r28;
    r4 = (r29 + 4);
    r5 = 1;
    r6 = MemoryInline::FlatRead32(r29);
    r7 = 0;
    ctx->lr = 0x80305954u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80305954:
{
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8030524C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8030524C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8030524C func_8030524C preserves=true fpr_mask=0x00000000
