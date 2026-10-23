#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80534030_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t addr_lfsx_8053408C_loc_0 = 0;
    uint32_t addr_lfsx_805340D0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_80534030;

loc_80534030:
{
}

loc_80534034:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(1))) {
        goto loc_80534048;
    }
}

loc_80534038:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80534040:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80534050;
    }
}

loc_80534048:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80534050:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r5 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + -8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80534060:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80534070;
    }
}

loc_80534068:
{
    r3 = MemoryInline::FlatRead16((r5 + -4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80534070:
{
    r6 = (r4 + -1);
    r5 = 0;
    goto loc_805340B4;
}

loc_8053407C:
{
    r4 = (r5 + r6);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r4 = (r0 + r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -8);
    addr_lfsx_8053408C_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8053408C_loc_0);
    r4 = (static_cast<int32_t>(r4) >> 1);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80534098:
{
    r0 = cr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
}

loc_805340A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805340A8;
    }
}

loc_805340A4:
{
    r6 = r4;
}

loc_805340A8:
{
}

loc_805340AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805340B4;
    }
}

loc_805340B0:
{
    r5 = r4;
}

loc_805340B4:
{
    r0 = (r6 + -1);
}

loc_805340BC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_805340C8;
    }
}

loc_805340C0:
{
}

loc_805340C4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r6))) {
        goto loc_8053407C;
    }
}

loc_805340C8:
{
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r4 = (r4_rot_0 & -8);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1200));
    addr_lfsx_805340D0_loc_0 = (r3 + r4);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_805340D0_loc_0);
    r0 = 0;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805340E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805340F4;
    }
}

loc_805340E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1196));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805340EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805340F4;
    }
}

loc_805340F0:
{
    r0 = 1;
}

loc_805340F4:
{
}

loc_805340F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80534108;
    }
}

loc_805340FC:
{
    r3 = (r3 + r4);
    r3 = MemoryInline::FlatRead16((r3 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80534108:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80534030(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80534030_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007D gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80534030 func_80534030 preserves=true fpr_mask=0x00000000
