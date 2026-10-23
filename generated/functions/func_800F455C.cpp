#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800F455C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    goto loc_800F455C;

loc_800F455C:
{
    r0 = MemoryInline::FlatRead32((r13 + -30608));
}

loc_800F4564:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800F4570;
    }
}

loc_800F4568:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_800F4570:
{
    r3 = (r0 + r3);
    r3 = MemoryInline::FlatRead8((r3 + 24));
    r0 = (r3 + 255);
    r4 = (r0 & 255);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_800F455C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800F455C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002009 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800F455C func_800F455C preserves=true fpr_mask=0x00000000
