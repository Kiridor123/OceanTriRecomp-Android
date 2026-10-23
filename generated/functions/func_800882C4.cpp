#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800882C4_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_800882C4;

loc_800882C4:
{
    r4 = r3;
    r3 = 0x80680000u;
    r3 = (r3 + 25448);
    // inline leaf 0x80085738 (8 guest instruction(s))
}

loc_inl0_0x80085738:
{
}

loc_inl0_0x8008573C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(127))) {
        goto loc_inl0_0x80085750;
    }
}

loc_inl0_0x80085740:
{
    r0 = (r4 * 68);
    r3 = (r3 + r0);
    r3 = (r3 + 44);
    goto loc_inl0_cont_80085738;
}

loc_inl0_0x80085750:
{
    r3 = 0;
}

loc_inl0_cont_80085738:
{
    // end of inlined leaf 0x80085738
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800882C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800882C4_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800882C4 func_800882C4 preserves=true fpr_mask=0x00000000
