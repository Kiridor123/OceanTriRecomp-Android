#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803D5D74_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    goto loc_803D5D74;

loc_803D5D74:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 32));
}

loc_803D5D90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803D5DA8;
    }
}

loc_803D5D94:
{
    // inline leaf 0x803D5DC8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 116));
    // end of inlined leaf 0x803D5DC8
}

loc_803D5D9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803D5DA8;
    }
}

loc_803D5DA0:
{
    r3 = MemoryInline::FlatRead32((r31 + 32));
    // inline leaf 0x803D5DBC (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 116), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x803D5DBC
}

loc_803D5DA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_803D5D74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803D5D74_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803D5D74 func_803D5D74 preserves=true fpr_mask=0x00000000
