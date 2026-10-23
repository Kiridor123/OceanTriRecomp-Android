#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80457B84_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_80457B84;

loc_80457B84:
{
    r6 = 0x806F0000u;
    r0 = 32;
    r6 = (r6 + 28632);
    ctr = r0;
}

loc_80457B94:
{
    r0 = MemoryInline::FlatRead32((r6 + 8));
}

loc_80457B9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80457C0C;
    }
}

loc_80457BA0:
{
    r7 = MemoryInline::FlatRead32(r6);
}

loc_80457BA4:
{
    r0 = MemoryInline::FlatRead32((r7 + 12));
}

loc_80457BAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80457C0C;
    }
}

loc_80457BB0:
{
    r5 = MemoryInline::FlatRead32((r7 + 8));
}

loc_80457BB8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r5))) {
        goto loc_80457C04;
    }
}

loc_80457BBC:
{
    r0 = (r5 + r0);
}

loc_80457BC4:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_80457C04;
    }
}

loc_80457BC8:
{
    r3 = MemoryInline::FlatRead32(r7);
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r4, r3);
    r3 = 1;
    r5 = MemoryInline::FlatRead32((r7 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 4), r5);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 8), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 16), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 20), r0);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 24), r0);
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 28), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_80457C04:
{
    r7 = (r7 + 16);
    goto loc_80457BA4;
}

loc_80457C0C:
{
    r6 = (r6 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80457B94;
    }
}

loc_80457C14:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_80457B84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80457B84_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80457B84 func_80457B84 preserves=true fpr_mask=0x00000000
