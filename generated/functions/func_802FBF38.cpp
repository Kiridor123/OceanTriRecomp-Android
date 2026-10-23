#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_802FBF38_ra38_6_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;

    goto loc_802FBF38;

loc_802FBF38:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_802FBF40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_802FBF44:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_802FBF4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_return;
    }
}

loc_802FBF50:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 396));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -11864));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 528));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802FBF64:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_802FBF6C:
{
    r0 = MemoryInline::FlatRead8((r3 + 808));
}

loc_802FBF74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_802FBF78:
{
    r0 = 5;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return f1.d;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return f1.d;
}

}

extern "C" void func_802FBF38(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_802FBF38_ra38_6_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000003D gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802FBF38 func_802FBF38 preserves=true fpr_mask=0x00000000
