#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081B660(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8081B660;

loc_8081B660:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8081B66C:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081B660 func_8081B660 preserves=true fpr_mask=0x00000000
