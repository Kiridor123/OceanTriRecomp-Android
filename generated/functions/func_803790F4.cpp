#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803790F4_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_803790F4;

loc_803790F4:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 808), 0, 52u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 812), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 816), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -7704));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 824), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 808), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r3 + 840), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r3 + 844), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r3 + 848), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 44u, (r3 + 852), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 813), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 818), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 828), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 809), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r3 + 841), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r3 + 845), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 41u, (r3 + 849), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r3 + 853), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 814), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 820), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 832), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 810), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r3 + 842), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 38u, (r3 + 846), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r3 + 850), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 46u, (r3 + 854), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 815), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 822), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 836), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 811), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r3 + 843), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r3 + 847), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r3 + 851), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 47u, (r3 + 855), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 48u, (r3 + 856), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 50u, (r3 + 858), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return;
}

}

extern "C" void func_803790F4(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_803790F4_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803790F4 func_803790F4 preserves=true fpr_mask=0x00000000
