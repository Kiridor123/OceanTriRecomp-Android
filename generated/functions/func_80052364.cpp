#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80052364_ra8_32_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f4, double arg_f5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    uint32_t cr = ctx->cr;

    goto loc_80052364;

loc_80052364:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32452));
}

loc_80052368:
{
    f5.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f5.d, f0.d);
}

loc_80052370:
{
    r0 = cr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_8005237C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052388;
    }
}

loc_80052380:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return r3;
}

loc_80052388:
{
    SetCRFloatResident(cr, 0, f1.d, f5.d);
}

loc_8005238C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800523C8;
    }
}

loc_80052394:
{
    f4.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8005239C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800523C8;
    }
}

loc_800523A4:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return r3;
}

loc_800523C8:
{
    r3 = (r3 + 8);
    goto loc_80052368;
}

}

extern "C" void func_80052364(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80052364_ra8_32_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000D gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000033 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80052364 func_80052364 preserves=true fpr_mask=0x00000000
