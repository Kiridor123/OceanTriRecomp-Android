#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800D5914_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x800D5914u);
    goto loc_800D5914;

loc_800D5914:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r4 = (r4 + 65536);
    r0 = (r3 * 76);
    r4 = (r4 + r0);
    r3 = 0;
    MemoryInline::FlatWrite8((r4 + 24688), static_cast<uint8_t>(r3));
    r0 = -1;
    MemoryInline::FlatWrite32((r4 + 24752), r0);
    MemoryInline::FlatWrite32((r4 + 24756), r3);
    MemoryInline::FlatWrite32((r4 + 24760), r3);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800D5914(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800D5914_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D5914 func_800D5914 preserves=true fpr_mask=0x00000000
