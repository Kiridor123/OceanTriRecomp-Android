#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081AA10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8081AA10;

loc_8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8081AA24;
    }
}

loc_8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_8081AA28;
}

loc_8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081AA10 func_8081AA10 preserves=true fpr_mask=0x00000000
