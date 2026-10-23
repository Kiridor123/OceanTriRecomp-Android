#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800EBDBC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800EBDBC;

loc_800EBDBC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x800EBE2C (5 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 40u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    // end of inlined leaf 0x800EBE2C
    r3 = (r30 + 8);
    r4 = (r31 + 8);
    // inline leaf 0x800EBE2C (5 guest instruction(s))
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, r4);
    MemoryInline::WriteResolved32(guest_range_1, 8u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 4), r0);
    // end of inlined leaf 0x800EBE2C
    r3 = (r30 + 16);
    r4 = (r31 + 16);
    // inline leaf 0x800EBE2C (5 guest instruction(s))
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, r4);
    MemoryInline::WriteResolved32(guest_range_1, 16u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 4), r0);
    // end of inlined leaf 0x800EBE2C
    r3 = (r30 + 24);
    r4 = (r31 + 24);
    // inline leaf 0x800EBE2C (5 guest instruction(s))
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, r4);
    MemoryInline::WriteResolved32(guest_range_1, 24u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r3 + 4), r0);
    // end of inlined leaf 0x800EBE2C
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r31 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r30 + 32), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r31 + 36));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r30 + 36), r0);
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800EBDBC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800EBDBC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EBDBC func_800EBDBC preserves=true fpr_mask=0x00000000
