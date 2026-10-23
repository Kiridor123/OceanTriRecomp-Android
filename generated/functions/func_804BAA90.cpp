#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BAA90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_804BAA90;

loc_804BAA90:
{
    r5 = MemoryInline::FlatRead32((r2 + -2480));
}

loc_804BAA98:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r3);
    MemoryInline::FlatWrite32((r5 + 1320), r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 20));
    MemoryInline::FlatWriteFloat32((r5 + 1324), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 40));
    MemoryInline::FlatWriteFloat32((r5 + 1332), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r3 + 44));
    MemoryInline::FlatWriteFloat32((r5 + 1340), f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 1344), f0.d);
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_804BAAD4;
    }
}

loc_804BAAC0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 12));
    MemoryInline::FlatWriteFloat32((r5 + 1328), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 28));
    MemoryInline::FlatWriteFloat32((r5 + 1336), f0.d);
    goto loc_804BAAE4;
}

loc_804BAAD4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
    MemoryInline::FlatWriteFloat32((r5 + 1328), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 24));
    MemoryInline::FlatWriteFloat32((r5 + 1336), f0.d);
}

loc_804BAAE4:
{
    r0 = MemoryInline::FlatRead32((r5 + 1532));
    r0 = (r0 | 134217728);
    MemoryInline::FlatWrite32((r5 + 1532), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003C gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BAA90 func_804BAA90 preserves=true fpr_mask=0x00000000
