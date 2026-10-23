#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E0A50(CpuContext* ctx);
extern "C" uint64_t func_800E0A50_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" void func_809FE35C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_809FE378_loc_0 = 0;
    uint32_t addr_lfsx_809FE39C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_809FE35C;

loc_809FE35C:
{
    r7 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 256));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = 0x80A30000u;
    r5 = (r4 + -15828);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 84));
    addr_lfsx_809FE378_loc_0 = (r5 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_809FE378_loc_0);
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_809FE380:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_809FE388:
{
    r4 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -5928));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 84), f1.d);
    addr_lfsx_809FE39C_loc_0 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_809FE39C_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_809FE3A4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_809FE3AC;
    }
}

loc_809FE3A8:
{
    MemoryInline::FlatWriteFloat32((r3 + 84), f0.d);
}

loc_809FE3AC:
{
    r3 = MemoryInline::FlatRead32(r6);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 84));
    if constexpr (KnownRegArgsCpuCall<0x800E0A50u>(&func_800E0A50)) {
        ctx->gpr[0] = r0;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800E0A50_989 = func_800E0A50_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800E0A50_989);
        r4 = static_cast<uint32_t>(regargs_result_800E0A50_989 >> 32);
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E0A50u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        cr = ctx->cr;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809FE35C func_809FE35C preserves=true fpr_mask=0x00000000
