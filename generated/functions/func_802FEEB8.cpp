#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802FEEB8_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_802FEEB8;

loc_802FEEB8:
{
    r0 = (r4 & 255);
}

loc_802FEEC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802FEEE0;
    }
}

loc_802FEEC4:
{
}

loc_802FEEC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802FEF08;
    }
}

loc_802FEECC:
{
}

loc_802FEED0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802FEF20;
    }
}

loc_802FEED4:
{
}

loc_802FEED8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802FEF28;
    }
}

loc_802FEEDC:
{
    goto loc_802FEF30;
}

loc_802FEEE0:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 396));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -11864));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 528));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802FEEF4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    r3 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

loc_802FEF08:
{
    r3 = MemoryInline::FlatRead8((r3 + 810));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    r3 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

loc_802FEF20:
{
    r3 = MemoryInline::FlatRead8((r3 + 811));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

loc_802FEF28:
{
    r3 = MemoryInline::FlatRead8((r3 + 812));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

loc_802FEF30:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_802FEEB8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802FEEB8_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001D gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802FEEB8 func_802FEEB8 preserves=true fpr_mask=0x00000000
