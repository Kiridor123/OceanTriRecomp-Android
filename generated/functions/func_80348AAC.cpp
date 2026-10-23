#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80348AAC_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_80348AAC;

loc_80348AAC:
{
    r0 = 3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 572u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r3 + 20), static_cast<uint8_t>(r0));
    r4 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r3 + 28), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 29), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 22), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r3 + 26), static_cast<uint8_t>(r4));
    r0 = 30;
    MemoryInline::WriteResolved8(guest_range_0, 569u, (r3 + 570), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 571u, (r3 + 572), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_80348AAC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80348AAC_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80348AAC func_80348AAC preserves=true fpr_mask=0x00000000
