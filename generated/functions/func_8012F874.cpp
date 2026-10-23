#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8012F874_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8012F874;

loc_8012F874:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = (r3 + 36);
    r4 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28240));
    // inline leaf 0x800E2718 (4 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 212), f1.d);
    // end of inlined leaf 0x800E2718
    r3 = (r31 + 36);
    r4 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    // inline leaf 0x800E2718 (4 guest instruction(s))
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 212), f1.d);
    // end of inlined leaf 0x800E2718
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    MemoryInline::FlatWriteFloat32((r31 + 1124), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012F874(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012F874_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012F874 func_8012F874 preserves=true fpr_mask=0x00000000
