#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80176C94_ra8_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x80176C94u);
    goto loc_80176C94;

loc_80176C94:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -24464));
    MemoryInline::FlatWriteFloat32((r3 + 808), f0.d);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 812), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 813), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 814), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 815), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 816), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 818), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    return;
}

}

extern "C" void func_80176C94(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80176C94_ra8_0_0_0(ctx, ctx->gpr[3]);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80176C94 func_80176C94 preserves=true fpr_mask=0x00000000
