#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004D538_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_8004D538;

loc_8004D538:
{
    r3 = 0;
    r0 = 187;
    ctr = r0;
}

loc_8004D544:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -17824), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r5 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 19280));
    r4 = (r4 & 251);
}

loc_8004D558:
{
    MemoryInline::FlatWrite8((r5 + 19280), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r5 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 19281));
    r4 = (r4 & 251);
}

loc_8004D56C:
{
    MemoryInline::FlatWrite8((r5 + 19281), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r5 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 19282));
    r4 = (r4 & 251);
}

loc_8004D580:
{
    MemoryInline::FlatWrite8((r5 + 19282), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r5 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 19283));
    r4 = (r4 & 251);
}

loc_8004D594:
{
    MemoryInline::FlatWrite8((r5 + 19283), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r5 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 19284));
    r4 = (r4 & 251);
}

loc_8004D5A8:
{
    MemoryInline::FlatWrite8((r5 + 19284), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r5 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 19285));
    r4 = (r4 & 251);
}

loc_8004D5BC:
{
    MemoryInline::FlatWrite8((r5 + 19285), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r5 = (r4 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 19286));
    r4 = (r4 & 251);
}

loc_8004D5D0:
{
    MemoryInline::FlatWrite8((r5 + 19286), static_cast<uint8_t>(r4));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 19287));
    r0 = (r0 & 251);
}

loc_8004D5E4:
{
    MemoryInline::FlatWrite8((r4 + 19287), static_cast<uint8_t>(r0));
    r3 = (r3 + 8);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004D544;
    }
}

loc_8004D5F4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r4 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r4 + 19280));
    r0 = (r0 & 251);
}

loc_8004D604:
{
    MemoryInline::FlatWrite8((r4 + 19280), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = (r3 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 19280));
    r0 = (r0 & 251);
}

loc_8004D620:
{
    MemoryInline::FlatWrite8((r4 + 19280), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = (r3 + 2);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 19280));
    r0 = (r0 & 251);
}

loc_8004D63C:
{
    MemoryInline::FlatWrite8((r4 + 19280), static_cast<uint8_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17824));
    r0 = (r3 + 3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 19280));
    r0 = (r0 & 251);
}

loc_8004D658:
{
    MemoryInline::FlatWrite8((r3 + 19280), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004D538(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004D538_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004D538 func_8004D538 preserves=true fpr_mask=0x00000000
