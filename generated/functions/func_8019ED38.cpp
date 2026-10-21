#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8019ED38_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x8019ED38u);
    goto loc_8019ED38;

loc_8019ED38:
{
    r4 = -1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 808), 0, 49u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 808), r4);
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 824), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 812), r4);
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r3 + 825), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 816), r4);
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 826), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 820), r4);
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r3 + 827), static_cast<uint8_t>(r0));
    r4 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 828), r4);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 832), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 836), r4);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21880));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 840), f0.d);
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r3 + 850), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21876));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 844), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 40u, (r3 + 848), static_cast<uint16_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r3 + 851), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r3 + 856), static_cast<uint8_t>(r4));
    // inline leaf 0x8019E9AC (6 guest instruction(s))
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r3 + 852), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r3 + 853), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r3 + 854), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 47u, (r3 + 855), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8019E9AC
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return r4;
}

}

extern "C" void func_8019ED38(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8019ED38_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019ED38 func_8019ED38 preserves=true fpr_mask=0x00000000
