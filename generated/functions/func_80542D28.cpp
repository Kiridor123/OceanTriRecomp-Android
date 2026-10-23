#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80542D28_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    goto loc_80542D28;

loc_80542D28:
{
    r4 = 0x80650000u;
    r3 = 0x80650000u;
    r5 = MemoryInline::FlatRead32((r13 + -18528));
    r4 = (r4 + 1360);
    r0 = MemoryInline::FlatRead32((r13 + -18520));
    r3 = (r3 + 1816);
    r6 = MemoryInline::FlatRead32((r13 + -18524));
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 44), 0, 340u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + 44), r5);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 68), r5);
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r4 + 92), r5);
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r4 + 116), r5);
    MemoryInline::WriteResolved32(guest_range_0, 96u, (r4 + 140), r5);
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r4 + 164), r5);
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r4 + 188), r5);
    MemoryInline::WriteResolved32(guest_range_0, 168u, (r4 + 212), r5);
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r4 + 236), r5);
    MemoryInline::WriteResolved32(guest_range_0, 216u, (r4 + 260), r5);
    MemoryInline::WriteResolved32(guest_range_0, 240u, (r4 + 284), r5);
    MemoryInline::WriteResolved32(guest_range_0, 264u, (r4 + 308), r5);
    MemoryInline::WriteResolved32(guest_range_0, 288u, (r4 + 332), r5);
    MemoryInline::WriteResolved32(guest_range_0, 312u, (r4 + 356), r5);
    MemoryInline::WriteResolved32(guest_range_0, 336u, (r4 + 380), r0);
    MemoryInline::FlatWriteRam32((r3 + 44), r6);
    MemoryInline::FlatWriteRam32((r3 + 68), r6);
    MemoryInline::FlatWriteRam32((r3 + 92), r6);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80542D28(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80542D28_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80542D28 func_80542D28 preserves=true fpr_mask=0x00000000
