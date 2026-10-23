#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804535BC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    goto loc_804535BC;

loc_804535BC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r5 = (r4 + 65536);
    r5 = (r5 + -32040);
}

loc_804535CC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804535D8;
    }
}

loc_804535D0:
{
    r3 = (r13 + -20920);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804535D8:
{
    r3 = (r4 + 65536);
    r0 = MemoryInline::FlatRead32((r3 + -24300));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_0 & -64);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 1696));
    r3 = MemoryInline::FlatRead32((r3 + 1700));
    r0 = (r3 | r0);
}

loc_804535F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80453604;
    }
}

loc_804535FC:
{
    r3 = (r13 + -20920);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80453604:
{
    r0 = -1;
    r0_addc_right_0 = r0;
    r0 = (r3 + r0_addc_right_0);
    r0 = (r0 * 192);
    r3 = (r5 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804535BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804535BC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002038 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804535BC func_804535BC preserves=true fpr_mask=0x00000000
