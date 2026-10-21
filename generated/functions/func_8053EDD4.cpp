#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8053EDD4_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8053EDD4u);
    goto loc_8053EDD4;

loc_8053EDD4:
{
    r3 = 0x80650000u;
    r0 = MemoryInline::FlatRead32((r13 + -18696));
    r3 = (r3 + -10728);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 76), 0, 3076u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 76), r0);
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + 140), r0);
    MemoryInline::WriteResolved32(guest_range_1, 128u, (r3 + 204), r0);
    MemoryInline::WriteResolved32(guest_range_1, 192u, (r3 + 268), r0);
    MemoryInline::WriteResolved32(guest_range_1, 256u, (r3 + 332), r0);
    MemoryInline::WriteResolved32(guest_range_1, 320u, (r3 + 396), r0);
    MemoryInline::WriteResolved32(guest_range_1, 384u, (r3 + 460), r0);
    MemoryInline::WriteResolved32(guest_range_1, 448u, (r3 + 524), r0);
    MemoryInline::WriteResolved32(guest_range_1, 512u, (r3 + 588), r0);
    MemoryInline::WriteResolved32(guest_range_1, 576u, (r3 + 652), r0);
    MemoryInline::WriteResolved32(guest_range_1, 640u, (r3 + 716), r0);
    MemoryInline::WriteResolved32(guest_range_1, 704u, (r3 + 780), r0);
    MemoryInline::WriteResolved32(guest_range_1, 768u, (r3 + 844), r0);
    MemoryInline::WriteResolved32(guest_range_1, 832u, (r3 + 908), r0);
    MemoryInline::WriteResolved32(guest_range_1, 896u, (r3 + 972), r0);
    MemoryInline::WriteResolved32(guest_range_1, 960u, (r3 + 1036), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1024u, (r3 + 1100), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1088u, (r3 + 1164), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1152u, (r3 + 1228), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1216u, (r3 + 1292), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1280u, (r3 + 1356), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1344u, (r3 + 1420), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1408u, (r3 + 1484), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1472u, (r3 + 1548), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1536u, (r3 + 1612), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1600u, (r3 + 1676), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1664u, (r3 + 1740), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1728u, (r3 + 1804), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1792u, (r3 + 1868), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1856u, (r3 + 1932), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1920u, (r3 + 1996), r0);
    MemoryInline::WriteResolved32(guest_range_1, 1984u, (r3 + 2060), r0);
    MemoryInline::WriteResolved32(guest_range_1, 2048u, (r3 + 2124), r0);
    MemoryInline::WriteResolved32(guest_range_1, 2112u, (r3 + 2188), r0);
    MemoryInline::WriteResolved32(guest_range_1, 2176u, (r3 + 2252), r0);
    MemoryInline::WriteResolved32(guest_range_1, 2240u, (r3 + 2316), r0);
    MemoryInline::WriteResolved32(guest_range_1, 2304u, (r3 + 2380), r0);
    MemoryInline::WriteResolved32(guest_range_1, 2368u, (r3 + 2444), r0);
    MemoryInline::WriteResolved32(guest_range_1, 2432u, (r3 + 2508), r0);
    MemoryInline::WriteResolved32(guest_range_1, 2496u, (r3 + 2572), r0);
    MemoryInline::WriteResolved32(guest_range_1, 2560u, (r3 + 2636), r0);
    MemoryInline::WriteResolved32(guest_range_1, 2624u, (r3 + 2700), r0);
    MemoryInline::WriteResolved32(guest_range_1, 2688u, (r3 + 2764), r0);
    MemoryInline::WriteResolved32(guest_range_1, 2752u, (r3 + 2828), r0);
    MemoryInline::WriteResolved32(guest_range_1, 2816u, (r3 + 2892), r0);
    MemoryInline::WriteResolved32(guest_range_1, 2880u, (r3 + 2956), r0);
    MemoryInline::WriteResolved32(guest_range_1, 2944u, (r3 + 3020), r0);
    MemoryInline::WriteResolved32(guest_range_1, 3008u, (r3 + 3084), r0);
    MemoryInline::WriteResolved32(guest_range_1, 3072u, (r3 + 3148), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 3532), 0, 4036u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 3532), r0);
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 3596), r0);
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 3660), r0);
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r3 + 3724), r0);
    MemoryInline::WriteResolved32(guest_range_0, 256u, (r3 + 3788), r0);
    MemoryInline::WriteResolved32(guest_range_0, 320u, (r3 + 3852), r0);
    MemoryInline::WriteResolved32(guest_range_0, 384u, (r3 + 3916), r0);
    MemoryInline::WriteResolved32(guest_range_0, 448u, (r3 + 3980), r0);
    MemoryInline::WriteResolved32(guest_range_0, 512u, (r3 + 4044), r0);
    MemoryInline::WriteResolved32(guest_range_0, 576u, (r3 + 4108), r0);
    MemoryInline::WriteResolved32(guest_range_0, 640u, (r3 + 4172), r0);
    MemoryInline::WriteResolved32(guest_range_0, 704u, (r3 + 4236), r0);
    MemoryInline::WriteResolved32(guest_range_0, 768u, (r3 + 4300), r0);
    MemoryInline::WriteResolved32(guest_range_0, 832u, (r3 + 4364), r0);
    MemoryInline::WriteResolved32(guest_range_0, 896u, (r3 + 4428), r0);
    MemoryInline::WriteResolved32(guest_range_0, 960u, (r3 + 4492), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1024u, (r3 + 4556), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1088u, (r3 + 4620), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1152u, (r3 + 4684), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1216u, (r3 + 4748), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1280u, (r3 + 4812), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1344u, (r3 + 4876), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1408u, (r3 + 4940), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1472u, (r3 + 5004), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1536u, (r3 + 5068), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1600u, (r3 + 5132), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1664u, (r3 + 5196), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1728u, (r3 + 5260), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1792u, (r3 + 5324), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1856u, (r3 + 5388), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1920u, (r3 + 5452), r0);
    MemoryInline::WriteResolved32(guest_range_0, 1984u, (r3 + 5516), r0);
    MemoryInline::WriteResolved32(guest_range_0, 2048u, (r3 + 5580), r0);
    MemoryInline::WriteResolved32(guest_range_0, 2112u, (r3 + 5644), r0);
    MemoryInline::WriteResolved32(guest_range_0, 2176u, (r3 + 5708), r0);
    MemoryInline::WriteResolved32(guest_range_0, 2240u, (r3 + 5772), r0);
    MemoryInline::WriteResolved32(guest_range_0, 2304u, (r3 + 5836), r0);
    MemoryInline::WriteResolved32(guest_range_0, 2368u, (r3 + 5900), r0);
    MemoryInline::WriteResolved32(guest_range_0, 2432u, (r3 + 5964), r0);
    MemoryInline::WriteResolved32(guest_range_0, 2496u, (r3 + 6028), r0);
    MemoryInline::WriteResolved32(guest_range_0, 2560u, (r3 + 6092), r0);
    MemoryInline::WriteResolved32(guest_range_0, 2624u, (r3 + 6156), r0);
    MemoryInline::WriteResolved32(guest_range_0, 2688u, (r3 + 6220), r0);
    MemoryInline::WriteResolved32(guest_range_0, 2752u, (r3 + 6284), r0);
    MemoryInline::WriteResolved32(guest_range_0, 2816u, (r3 + 6348), r0);
    MemoryInline::WriteResolved32(guest_range_0, 2880u, (r3 + 6412), r0);
    MemoryInline::WriteResolved32(guest_range_0, 2944u, (r3 + 6476), r0);
    MemoryInline::WriteResolved32(guest_range_0, 3008u, (r3 + 6540), r0);
    MemoryInline::WriteResolved32(guest_range_0, 3072u, (r3 + 6604), r0);
    MemoryInline::WriteResolved32(guest_range_0, 3136u, (r3 + 6668), r0);
    MemoryInline::WriteResolved32(guest_range_0, 3200u, (r3 + 6732), r0);
    MemoryInline::WriteResolved32(guest_range_0, 3264u, (r3 + 6796), r0);
    MemoryInline::WriteResolved32(guest_range_0, 3328u, (r3 + 6860), r0);
    MemoryInline::WriteResolved32(guest_range_0, 3392u, (r3 + 6924), r0);
    MemoryInline::WriteResolved32(guest_range_0, 3456u, (r3 + 6988), r0);
    MemoryInline::WriteResolved32(guest_range_0, 3584u, (r3 + 7116), r0);
    MemoryInline::WriteResolved32(guest_range_0, 3648u, (r3 + 7180), r0);
    MemoryInline::WriteResolved32(guest_range_0, 3712u, (r3 + 7244), r0);
    MemoryInline::WriteResolved32(guest_range_0, 3776u, (r3 + 7308), r0);
    MemoryInline::WriteResolved32(guest_range_0, 3840u, (r3 + 7372), r0);
    MemoryInline::WriteResolved32(guest_range_0, 3904u, (r3 + 7436), r0);
    MemoryInline::WriteResolved32(guest_range_0, 3968u, (r3 + 7500), r0);
    MemoryInline::WriteResolved32(guest_range_0, 4032u, (r3 + 7564), r0);
    MemoryInline::FlatWriteRam32((r3 + 7628), r0);
    MemoryInline::FlatWriteRam32((r3 + 7692), r0);
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_8053EDD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8053EDD4_ra0_0_8_0(ctx);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8053EDD4 func_8053EDD4 preserves=true fpr_mask=0x00000000
