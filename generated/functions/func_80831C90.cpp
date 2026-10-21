#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80831C90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsux_8082A078_loc_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x80831C90u);
    goto loc_80831C90;

loc_80831C90:
{
    r3 = (r3 + 228);
    // inline leaf 0x8082A070 (19 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r3 = (r3_rot_0 & -32);
    addr_lfsux_8082A078_loc_0 = (r3 + r0);
    guest_range_1 = MemoryInline::ResolveRangeHost(addr_lfsux_8082A078_loc_0, 0, 32u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, addr_lfsux_8082A078_loc_0);
    r3 = addr_lfsux_8082A078_loc_0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 32u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r5, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r3 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r5 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r3 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r5 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r3 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r5 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r3 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r5 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r3 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r5 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r3 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r5 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r3 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r5 + 28), f0.d);
    // end of inlined leaf 0x8082A070
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80831C90 func_80831C90 preserves=true fpr_mask=0x00000000
