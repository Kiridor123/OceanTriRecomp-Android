#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80416EC4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80416EC4u);
    goto loc_80416EC4;

loc_80416EC4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    // inline leaf 0x803E24E0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16608));
    // end of inlined leaf 0x803E24E0
}

loc_80416ED8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80416FD8;
    }
}

loc_80416EDC:
{
    // inline leaf 0x803E24E0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16608));
    // end of inlined leaf 0x803E24E0
    // inline leaf 0x804481C8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 224));
    // end of inlined leaf 0x804481C8
    r4 = 0x80570000u;
    r5 = (r4 + 5680);
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 34u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r5);
            r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 4));
        }
    }
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 34u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r1 + 12), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r5 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r5 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 16), r4);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 20), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r5 + 16));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r5 + 20));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r5 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r5 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 32), r4);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r0);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_0, 32u, (r5 + 32));
    MemoryInline::WriteResolved16(guest_range_1, 32u, (r1 + 40), static_cast<uint16_t>(r0));
    r5 = 0;
    r4 = (r1 + 8);
    r3 = (r3 & 65535);
    r0 = 2;
    ctr = r0;
}

loc_80416F48:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_80416F50:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_80416FD0;
    }
}

loc_80416F54:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r4 + 2));
}

loc_80416F60:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_80416FD0;
    }
}

loc_80416F64:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_80416F70:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_80416FD0;
    }
}

loc_80416F74:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r4 + 6));
}

loc_80416F80:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_80416FD0;
    }
}

loc_80416F84:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r4 + 8));
}

loc_80416F90:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_80416FD0;
    }
}

loc_80416F94:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r4 + 10));
}

loc_80416FA0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_80416FD0;
    }
}

loc_80416FA4:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r4 + 12));
}

loc_80416FB0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_80416FD0;
    }
}

loc_80416FB4:
{
    r5 = (r5 + 1);
    r0 = MemoryInline::FlatRead16((r4 + 14));
}

loc_80416FC0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_80416FD0;
    }
}

loc_80416FC4:
{
    r4 = (r4 + 16);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80416F48;
    }
}

loc_80416FD0:
{
    r3 = r5;
    goto loc_80416FDC;
}

loc_80416FD8:
{
    r3 = 0;
}

loc_80416FDC:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80416EC4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80416EC4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80416EC4 func_80416EC4 preserves=true fpr_mask=0x00000000
