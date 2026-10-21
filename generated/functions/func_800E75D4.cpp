#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800E75D4_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x800E75D4u);
    goto loc_800E75D4;

loc_800E75D4:
{
    r3 = (r3 + 56);
    // inline leaf 0x800E75DC (14 guest instruction(s))
}

loc_inl0_0x800E75DC:
{
    r5 = MemoryInline::FlatRead32(r3);
}

loc_inl0_0x800E75E4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800E75F0;
    }
}

loc_inl0_0x800E75E8:
{
    r3 = 0;
    goto loc_inl0_cont_800E75DC;
}

loc_inl0_0x800E75F0:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_inl0_0x800E75F8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r4))) {
        goto loc_inl0_0x800E7604;
    }
}

loc_inl0_0x800E75FC:
{
    r3 = 0;
    goto loc_inl0_cont_800E75DC;
}

loc_inl0_0x800E7604:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
}

loc_inl0_cont_800E75DC:
{
    // end of inlined leaf 0x800E75DC
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_800E75D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800E75D4_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E75D4 func_800E75D4 preserves=true fpr_mask=0x00000000
