#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80127748_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80127748;

loc_80127748:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r6;
    r31 = (r5 & 255);
}

loc_80127774:
{
    r30 = (r30 + 1);
    r0 = (r30 & 255);
}

loc_80127780:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r31))) {
        goto loc_80127788;
    }
}

loc_80127784:
{
    r30 = 0;
}

loc_80127788:
{
    r3 = r28;
    r4 = r29;
    r5 = (r30 & 255);
    // inline leaf 0x801275CC (9 guest instruction(s))
}

loc_inl0_0x801275CC:
{
}

loc_inl0_0x801275D0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x801275DC;
    }
}

loc_inl0_0x801275D4:
{
    r3 = 3;
    goto loc_inl0_cont_801275CC;
}

loc_inl0_0x801275DC:
{
    r0 = (r5 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 2));
}

loc_inl0_cont_801275CC:
{
    // end of inlined leaf 0x801275CC
    r0 = (r3 & 65535);
    r0 = (r0 & 1);
}

loc_801277A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80127774;
    }
}

loc_801277A8:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80127748(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80127748_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80127748 func_80127748 preserves=true fpr_mask=0x00000000
