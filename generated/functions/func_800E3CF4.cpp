#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E3CF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x800E3CF4u);
    goto loc_800E3CF4;

loc_800E3CF4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 24), r0);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    MemoryInline::FlatWrite16((r3 + 30), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30288));
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30284));
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E3CF4 func_800E3CF4 preserves=true fpr_mask=0x00000000
