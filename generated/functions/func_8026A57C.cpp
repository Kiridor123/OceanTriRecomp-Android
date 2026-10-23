#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A57C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_8026A57C;

loc_8026A57C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 120));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 132));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 120), f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 136));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 124), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 128));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 140));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 128), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026A57C func_8026A57C preserves=true fpr_mask=0x00000000
