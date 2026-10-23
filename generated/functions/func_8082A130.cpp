#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8082A130(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_8082A15C_loc_0 = 0;
    uint32_t cr0_0 = 0;
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
    uint32_t ctr = ctx->ctr;

    goto loc_8082A130;

loc_8082A130:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8082A138:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_8082A140;
    }
}

loc_8082A13C:
{
    r0 = r5;
}

loc_8082A140:
{
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r6 = 0;
    ctr = r5;
}

loc_8082A150:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8082A154:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    addr_stfsx_8082A15C_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8082A15C_loc_0, f1.d);
    r5 = (r0 + r6);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 12));
    r5 = (r0 + r6);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::FlatWriteFloat32((r5 + 8), f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::FlatWriteFloat32((r5 + 12), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 28));
    r4 = (r4 + 32);
    r5 = (r0 + r6);
    MemoryInline::FlatWriteFloat32((r5 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r5 + 20), f2.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r0 + r6);
    r6 = (r6 + 32);
    MemoryInline::FlatWriteFloat32((r5 + 24), f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 28), f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8082A154;
    }
}

loc_8082A1C0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8082A130 func_8082A130 preserves=true fpr_mask=0x00000000
