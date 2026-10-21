#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80299848_ra18_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x80299848u);
    goto loc_80299848;

loc_80299848:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32((r3 + 2228), f0.d);
    r5 = MemoryInline::FlatRead8((r3 + 482));
    r0 = (r5 + 255);
    r0 = (r0 & 255);
}

loc_80299860:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80299870;
    }
}

loc_80299864:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 2232), f0.d);
    goto loc_80299878;
}

loc_80299870:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14112));
    MemoryInline::FlatWriteFloat32((r3 + 2232), f0.d);
}

loc_80299878:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 2236), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    return;
}

}

extern "C" void func_80299848(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_80299848_ra18_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4]);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000021 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80299848 func_80299848 preserves=true fpr_mask=0x00000000
