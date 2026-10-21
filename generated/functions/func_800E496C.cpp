#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E496C_ra8_2_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x800E496Cu);
    goto loc_800E496C;

loc_800E496C:
{
    r0 = (r3 & 255);
}

loc_800E4974:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E497C;
    }
}

loc_800E4978:
{
    MemoryInline::FlatWriteFloat32((r13 + -17504), f1.d);
}

loc_800E497C:
{
    r0 = (r3 & 255);
}

loc_800E4984:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_800E4988:
{
    MemoryInline::FlatWriteFloat32((r13 + -17488), f1.d);
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

extern "C" void func_800E496C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_800E496C_ra8_2_0_0(ctx, ctx->gpr[3], ctx->fpr[1].d);
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E496C func_800E496C preserves=true fpr_mask=0x00000000
