#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803BE7FC_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x803BE7FCu);
    goto loc_803BE7FC;

loc_803BE7FC:
{
    r3 = 0x806D0000u;
    r0 = MemoryInline::FlatRead32((r3 + 20344));
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -16832), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r13 + -16832), r0);
    r3 = (r3 + 20344);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r13 + -16828), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r13 + -16824), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 12));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r13 + -16820), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 16));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r13 + -16816), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 20));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r13 + -16812), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r3 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r13 + -16808), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r3 + 28));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r13 + -16804), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r3 + 32));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r13 + -16800), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r3 + 36));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r13 + -16796), r0);
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_803BE7FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803BE7FC_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BE7FC func_803BE7FC preserves=true fpr_mask=0x00000000
