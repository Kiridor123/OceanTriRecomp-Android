#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803CCE08(CpuContext* ctx);
extern "C" double func_803CCE08_ra8_6_0_2(CpuContext*, uint32_t, double, double);

extern "C" uint64_t func_803CCD40_ra18_4_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    goto loc_803CCD40;

loc_803CCD40:
{
    MemoryAlias::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r4 = (r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r0 = (r0_rot_0 & -536870912);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r0 = (r0 - r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -1);
    r0 = (r0 + r4);
    r0 = (r0 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r31 = (r3 + r0);
    f2.d = MemoryAlias::FlatReadFloat32((r31 + 8660));
    f0.d = MemoryAlias::FlatReadFloat32((r2 + -5124));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_803CCD88:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803CCD9C;
    }
}

loc_803CCD90:
{
    f0.d = MemoryAlias::FlatReadFloat32((r2 + -5136));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_803CCD98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803CCDA0;
    }
}

loc_803CCD9C:
{
    f2.d = MemoryAlias::FlatReadFloat32((r2 + -5136));
}

loc_803CCDA0:
{
    f1.d = MemoryAlias::FlatReadFloat32((r2 + -5088));
    f0.d = MemoryAlias::FlatReadFloat32((r3 + 8692));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryAlias::FlatReadFloat32((r2 + -5084));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryAlias::FlatWriteFloat32((r3 + 8692), f0.d);
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x803CCE08u>(&func_803CCE08)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_803CCE08_B52 = func_803CCE08_ra8_6_0_2(ctx, r3, f1.d, f2.d);
        f1.d = regargs_result_803CCE08_B52;
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x803CCE08u>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    f1.d = MemoryAlias::FlatReadFloat32((r2 + -5124));
    f0.d = MemoryAlias::FlatReadFloat32((r31 + 8660));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803CCDD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_803CCDE4;
    }
}

loc_803CCDD4:
{
    r3 = MemoryAlias::FlatRead32((r30 + 8696));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite32((r30 + 8696), r0);
    goto loc_803CCDF0;
}

loc_803CCDE4:
{
    r3 = MemoryAlias::FlatRead32((r30 + 8700));
    r0 = (r3 + 1);
    MemoryAlias::FlatWrite32((r30 + 8700), r0);
}

loc_803CCDF0:
{
    r0 = MemoryAlias::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803CCD40(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803CCD40_ra18_4_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000005 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803CCD40 func_803CCD40 preserves=true fpr_mask=0x00000000
