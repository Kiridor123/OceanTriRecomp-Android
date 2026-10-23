#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082A0C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_8082A0CC_loc_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_8082A0C0;

loc_8082A0C0:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r6 = (r6_rot_0 & -32);
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 32u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    addr_stfsx_8082A0CC_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8082A0CC_loc_0, f1.d);
    r4 = (r0 + r6);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 4));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r5 + 12));
    r4 = (r0 + r6);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r5 + 16));
    MemoryInline::FlatWriteFloat32((r4 + 8), f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r5 + 20));
    MemoryInline::FlatWriteFloat32((r4 + 12), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r5 + 24));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r5 + 28));
    r4 = (r0 + r6);
    MemoryInline::FlatWriteFloat32((r4 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r4 + 20), f2.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r0 + r6);
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000059 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082A0C0 func_8082A0C0 preserves=true fpr_mask=0x00000000
