#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012FD28_ra18_2_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_8012FD28;

loc_8012FD28:
{
    MemoryInline::FlatWriteFloat32((r3 + 472), f1.d);
    MemoryInline::FlatWrite16((r3 + 476), static_cast<uint16_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_8012FD38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8012FD3C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 468), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return;
}

}

extern "C" void func_8012FD28(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_8012FD28_ra18_2_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000002 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012FD28 func_8012FD28 preserves=true fpr_mask=0x00000000
