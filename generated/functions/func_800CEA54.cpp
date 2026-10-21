#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800CEA54_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x800CEA54u);
    goto loc_800CEA54;

loc_800CEA54:
{
    r3 = 0x80690000u;
    r5 = (r3 + 28904);
    r3 = MemoryInline::FlatRead32((r5 + 72));
    r4 = MemoryInline::FlatRead32((r5 + 4));
}

loc_800CEA68:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(99))) {
        goto loc_800CEA74;
    }
}

loc_800CEA6C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800CEA74:
{
    r0 = (r4 * 340);
    r3 = (r3 + r0);
    r4 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    r0 = MemoryInline::FlatRead32((r13 + -17608));
}

loc_800CEA8C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r4))) {
        goto loc_return;
    }
}

loc_800CEA90:
{
    MemoryInline::FlatWrite32((r13 + -17608), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800CEA54(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800CEA54_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002038 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CEA54 func_800CEA54 preserves=true fpr_mask=0x00000000
