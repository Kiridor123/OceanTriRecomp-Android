#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004DBA4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8004DBA4;

loc_8004DBA4:
{
    r0 = (r4 & 255);
    r0 = (r0 * 30);
    r4 = (r3 + r0);
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r4 + 14024), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 14026), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r4 + 14028), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 14030), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004DBA4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004DBA4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004DBA4 func_8004DBA4 preserves=true fpr_mask=0x00000000
