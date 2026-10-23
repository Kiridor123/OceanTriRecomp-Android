#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_8008C854_ra18_0_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t addr_lfsx_8008C85C_loc_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8008C854;

loc_8008C854:
{
    r0 = (r4 & 65535);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    addr_lfsx_8008C85C_loc_0 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8008C85C_loc_0);
    ctx->gpr[0] = r0;
    return f1.d;
}

}

extern "C" void func_8008C854(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_8008C854_ra18_0_0_2(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008C854 func_8008C854 preserves=true fpr_mask=0x00000000
