#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081A9D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    MKW_GUEST_ENTER(0x8081A9D0u);
    goto loc_8081A9D0;

loc_8081A9D0:
{
}

loc_8081A9D4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f3.d);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_8081A9FC;
    }
}

loc_8081A9F4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    goto loc_8081AA00;
}

loc_8081A9FC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
}

loc_8081AA00:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x0000000E fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081A9D0 func_8081A9D0 preserves=true fpr_mask=0x00000000
