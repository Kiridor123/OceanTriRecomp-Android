#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802BF84C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    goto loc_802BF84C;

loc_802BF84C:
{
    r4 = (r13 + -17080);
    r3 = MemoryInline::FlatRead16((r13 + -17080));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite16((r13 + -17080), static_cast<uint16_t>(r3));
    r0 = (r3 & 65535);
}

loc_802BF864:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(60000))) {
        goto loc_802BF870;
    }
}

loc_802BF868:
{
    r3 = 0;
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r3));
}

loc_802BF870:
{
    r3 = (r3 & 65535);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BF84C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BF84C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BF84C func_802BF84C preserves=true fpr_mask=0x00000000
