#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8049F2EC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    goto loc_8049F2EC;

loc_8049F2EC:
{
    r5 = 0x80570000u;
    r6 = 255;
    r5 = (r5 + 16480);
    goto loc_8049F30C;
}

loc_8049F2FC:
{
    r0 = MemoryInline::FlatRead8(r4);
    r4 = (r4 + 1);
    r0 = (r6 ^ r0);
    r5_addr_2 = (r5 + r0);
    r6 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_8049F30C:
{
    r0 = (r3 & 65535);
}

loc_8049F310:
{
    r3 = (r3 + -1);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049F2FC;
    }
}

loc_8049F318:
{
    r0 = (255 - r6);
    r3 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8049F2EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8049F2EC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8049F2EC func_8049F2EC preserves=true fpr_mask=0x00000000
