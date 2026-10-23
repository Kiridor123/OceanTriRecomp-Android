#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E4914(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_800E4914;

loc_800E4914:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -17512));
    r3 = (r13 + -17512);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r13 + -17504));
    MemoryInline::FlatWriteFloat32((r13 + -17512), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r13 + -17496));
    r3 = (r13 + -17496);
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r13 + -17488));
    MemoryInline::FlatWriteFloat32((r13 + -17496), f0.d);
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000008 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E4914 func_800E4914 preserves=true fpr_mask=0x00000000
