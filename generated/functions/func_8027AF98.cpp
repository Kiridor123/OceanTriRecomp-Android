#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8027AF98_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8027AF98;

loc_8027AF98:
{
    r4 = MemoryInline::FlatRead16((r3 + 180));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2150084504);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8027AFA0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_8027AFA4:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 180), static_cast<uint16_t>(r0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_8027AFB0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 156));
    f0.d = MH3_PerStep(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 160));
    f0.d = MH3_PerStep(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 164));
    f0.d = MH3_PerStep(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return r4;
}

}

extern "C" void func_8027AF98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8027AF98_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027AF98 func_8027AF98 preserves=true fpr_mask=0x00000000
