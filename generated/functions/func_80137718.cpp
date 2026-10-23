#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80137718_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_80137718;

loc_80137718:
{
    r4 = 1;
    // inline leaf 0x80137740 (10 guest instruction(s))
}

loc_inl0_0x80137740:
{
    r5 = MemoryInline::FlatRead8((r3 + 2227));
    r0 = (r4 & 255);
    r0 = (r5 & r0);
}

loc_inl0_0x80137750:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80137754:
{
    r0 = ~(r4 | r4);
    r0 = (r0 & 255);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite8((r3 + 2227), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_80137740;
}

loc_inl0_return:
{
}

loc_inl0_cont_80137740:
{
    // end of inlined leaf 0x80137740
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_80137718(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80137718_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80137718 func_80137718 preserves=true fpr_mask=0x00000000
