#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E43F4(CpuContext* ctx);
extern "C" uint32_t func_800E43F4_ra38_2_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" void func_800E42E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_800E42E8;

loc_800E42E8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r5 = (r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = 0x805A0000u;
    r4 = (r4 + -31520);
    r4_addr_0 = (r4 + r0);
    r31 = MemoryInline::FlatRead32(r4_addr_0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4 = 0x805A0000u;
    r4 = (r4 + -31496);
    r4_addr_1 = (r4 + r0);
    r30 = MemoryInline::FlatRead16(r4_addr_1);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -30280), 0, 32u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -30272));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_800E4344:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4358;
    }
}

loc_800E4348:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -30276));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    goto loc_800E4370;
}

loc_800E4358:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -30264));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -30268));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -30276));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_800E4370:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -30280));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_800E4378:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E4384;
    }
}

loc_800E437C:
{
    f2.d = f0.d;
    goto loc_800E4394;
}

loc_800E4384:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -30264));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_800E438C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E4394;
    }
}

loc_800E4390:
{
    f2.d = f0.d;
}

loc_800E4394:
{
    r0 = (r30 + -1);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -30256));
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_1176 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_1176;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = (r30 - r3);
    r0 = (r3 + -1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r31 + r0);
    r4 = r28;
    r5 = (r29 & 255);
    if constexpr (KnownRegArgsCpuCall<0x800E43F4u>(&func_800E43F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800E43F4_161E = func_800E43F4_ra38_2_8_0(ctx, r3, r4, r5, f1.d);
        r3 = regargs_result_800E43F4_161E;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x800E43F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000DE gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E42E8 func_800E42E8 preserves=true fpr_mask=0x00000000
