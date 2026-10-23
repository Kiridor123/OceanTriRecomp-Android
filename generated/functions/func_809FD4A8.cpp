#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DC6AC(CpuContext* ctx);
extern "C" uint64_t func_800DC6AC_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800DC6F4(CpuContext* ctx);
extern "C" uint64_t func_800DC6F4_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_800E0A50(CpuContext* ctx);
extern "C" uint64_t func_800E0A50_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80112240(CpuContext* ctx);
extern "C" uint64_t func_80112240_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_801B018C(CpuContext* ctx);
extern "C" uint32_t func_801B018C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_809FD4A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_809FD55C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_809FD4A8;

loc_809FD4A8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r31 = MemoryInline::FlatRead32((r30 + 12));
    r29 = MemoryInline::FlatRead32((r30 + 256));
    r3 = r31;
    // inline leaf 0x801B0170 (7 guest instruction(s))
}

loc_inl1_0x801B0170:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_inl1_0x801B0178:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(7))) {
        goto loc_inl1_0x801B0184;
    }
}

loc_inl1_0x801B017C:
{
    r3 = -1;
    goto loc_inl1_cont_801B0170;
}

loc_inl1_0x801B0184:
{
    r3 = MemoryInline::FlatRead8((r3 + 816));
}

loc_inl1_cont_801B0170:
{
    // end of inlined leaf 0x801B0170
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_809FD4E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809FD4F0;
    }
}

loc_809FD4E8:
{
    r3 = 1;
    goto loc_809FD6CC;
}

loc_809FD4F0:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x809FD4FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x809FE1E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_809FD504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809FD514;
    }
}

loc_809FD508:
{
}

loc_809FD50C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809FD598;
    }
}

loc_809FD510:
{
    goto loc_809FD6C8;
}

loc_809FD514:
{
    r3 = r30;
    ctx->lr = 0x809FD51Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x809FE35Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = r31;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r0 = (r3 & 65535);
}

loc_809FD52C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(17))) {
        goto loc_809FD6C8;
    }
}

loc_809FD530:
{
    r3 = MemoryInline::FlatRead8((r30 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r30 + 16), r0);
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x80A30000u;
    r3 = (r3 + -15828);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 84));
    addr_lfsx_809FD55C_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_809FD55C_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_809FD564:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_809FD578;
    }
}

loc_809FD568:
{
    MemoryInline::FlatWriteFloat32((r30 + 84), f0.d);
    r3 = MemoryInline::FlatRead32(r29);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    ctx->lr = 0x809FD578u;
    if constexpr (KnownRegArgsCpuCall<0x800E0A50u>(&func_800E0A50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800E0A50_1727 = func_800E0A50_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800E0A50_1727);
        r4 = static_cast<uint32_t>(regargs_result_800E0A50_1727 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E0A50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
}

loc_809FD578:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_809FD588:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809FD6C8;
    }
}

loc_809FD58C:
{
    r3 = (r30 + 24);
    ctx->lr = 0x809FD594u;
    if constexpr (KnownRegArgsCpuCall<0x800DC6ACu>(&func_800DC6AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DC6AC_1CD9 = func_800DC6AC_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC6AC_1CD9);
        r4 = static_cast<uint32_t>(regargs_result_800DC6AC_1CD9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DC6ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_809FD6C8;
}

loc_809FD598:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 16), r0);
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_809FD5B4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809FD5F0;
    }
}

loc_809FD5B8:
{
    r4 = MemoryInline::FlatRead32((r30 + 16));
    r3 = 0x88890000u;
    r0 = (r3 + -30583);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (r0 + r4);
    r0 = (static_cast<int32_t>(r0) >> 3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 15);
    r0 = (r4 - r0);
}

loc_809FD5E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809FD5F0;
    }
}

loc_809FD5E8:
{
    r3 = (r30 + 24);
    ctx->lr = 0x809FD5F0u;
    if constexpr (KnownRegArgsCpuCall<0x800DC6F4u>(&func_800DC6F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DC6F4_2656 = func_800DC6F4_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DC6F4_2656);
        r4 = static_cast<uint32_t>(regargs_result_800DC6F4_2656 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DC6F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_809FD5F0:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
}

loc_809FD5F8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(240))) {
        goto loc_809FD618;
    }
}

loc_809FD5FC:
{
    r3 = r31;
    ctx->lr = 0x809FD604u;
    if constexpr (KnownRegArgsCpuCall<0x801B018Cu>(&func_801B018C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_801B018C_2C1C = func_801B018C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_801B018C_2C1C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801B018Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_809FD60C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_809FD618;
    }
}

loc_809FD610:
{
    r0 = 240;
    MemoryInline::FlatWrite32((r30 + 16), r0);
}

loc_809FD618:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
}

loc_809FD620:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(285))) {
        goto loc_809FD62C;
    }
}

loc_809FD624:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 6), static_cast<uint8_t>(r0));
}

loc_809FD62C:
{
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_809FD634:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809FD680;
    }
}

loc_809FD638:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r0 & 1);
}

loc_809FD644:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809FD680;
    }
}

loc_809FD648:
{
    r3 = (r1 + 8);
    r4 = (r30 + 24);
    ctx->lr = 0x809FD654u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    r3 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + -5968));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead8((r30 + 8));
    r5 = 7;
    ctx->lr = 0x809FD680u;
    if constexpr (KnownRegArgsCpuCall<0x80112240u>(&func_80112240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80112240_3711 = func_80112240_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112240_3711);
        r4 = static_cast<uint32_t>(regargs_result_80112240_3711 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80112240u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_809FD680:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
}

loc_809FD688:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(300))) {
        goto loc_809FD6C8;
    }
}

loc_809FD68C:
{
    r3 = (r30 + 24);
    r4 = MemoryInline::FlatRead8((r30 + 8));
    r5 = MemoryInline::FlatRead8((r30 + 2));
    ctx->lr = 0x809FD69Cu;
    if constexpr (KnownRegArgsCpuCall<0x80112240u>(&func_80112240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80112240_3E1A = func_80112240_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_80112240_3E1A);
        r4 = static_cast<uint32_t>(regargs_result_80112240_3E1A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80112240u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = (r30 + 24);
    r4 = MemoryInline::FlatRead8((r30 + 2));
    r5 = MemoryInline::FlatRead8((r30 + 8));
    r6 = 0;
    r7 = 0x80790000u;
    r7 = MemoryInline::FlatRead32((r7 + 28704));
    r12 = MemoryInline::FlatRead32((r7 + 8));
    ctr = r12;
    ctx->lr = 0x809FD6C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 1;
    goto loc_809FD6CC;
}

loc_809FD6C8:
{
    r3 = 0;
}

loc_809FD6CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809FD4A8 func_809FD4A8 preserves=true fpr_mask=0x00000000
