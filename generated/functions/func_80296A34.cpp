#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80296A34_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r8_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x80296A34u);
    goto loc_80296A34;

loc_80296A34:
{
    r8 = MemoryInline::FlatRead32((r6 + 60));
    r7 = MemoryInline::FlatRead32((r6 + 48));
    r0 = MemoryInline::FlatRead32((r6 + 52));
    r0 = (r3 * r0);
    r0 = (r4 + r0);
    r0 = (r7 * r0);
    r0 = (r0 + r5);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r8_addr_0 = (r8 + r0);
    r3 = MemoryInline::FlatRead32(r8_addr_0);
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r3;
}

}

extern "C" void func_80296A34(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80296A34_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000189 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80296A34 func_80296A34 preserves=true fpr_mask=0x00000000
