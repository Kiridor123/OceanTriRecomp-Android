#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8056B65C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8056B65C;

loc_8056B65C:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8056B668:
{
    r7 = (r4 * 12);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    f0.d = MemoryInline::FlatReadFloat32(r6);
    r4 = (r3 + r4);
    r5 = 1;
    r7 = (r3 + r7);
    MemoryInline::FlatWriteFloat32((r7 + 24), f0.d);
    r3 = (r3 + r0);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    MemoryInline::FlatWriteFloat32((r7 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8));
    MemoryInline::FlatWriteFloat32((r7 + 32), f0.d);
    MemoryInline::FlatWrite8((r4 + 13), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite16((r3 + 128), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8056B65C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8056B65C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x000000B9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056B65C func_8056B65C preserves=true fpr_mask=0x00000000
