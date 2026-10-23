#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800EF5D0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    goto loc_800EF5D0;

loc_800EF5D0:
{
    r5 = MemoryInline::FlatRead32((r13 + -17396));
    r5 = (r5 + 65536);
    r5 = (r5 + -26708);
    r4 = (r4 & 255);
    r3 = (r3 & 255);
    r5_addr_0 = (r5 + r3);
    r0 = MemoryInline::FlatRead8(r5_addr_0);
}

loc_800EF5EC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_800EF604;
    }
}

loc_800EF5F0:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 1);
    r3 = (0 - r0);
    r3 = (r3 + 33);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800EF604:
{
    r0 = (r3 ^ 1);
    r5_addr_1 = (r5 + r0);
    r0 = MemoryInline::FlatRead8(r5_addr_1);
}

loc_800EF610:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_800EF624;
    }
}

loc_800EF614:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    r3 = (r3 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800EF624:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800EF5D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800EF5D0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002038 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EF5D0 func_800EF5D0 preserves=true fpr_mask=0x00000000
