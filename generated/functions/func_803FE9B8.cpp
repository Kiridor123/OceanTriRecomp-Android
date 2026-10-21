#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803FE9B8_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x803FE9B8u);
    goto loc_803FE9B8;

loc_803FE9B8:
{
    r0 = MemoryInline::FlatRead8((r3 + 24881));
}

loc_803FE9C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803FE9E8;
    }
}

loc_803FE9C4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 24881), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 24882), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 24883), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 24886), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 24880), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 25944), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 25945), static_cast<uint8_t>(r0));
}

loc_803FE9E8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return r3;
}

}

extern "C" void func_803FE9B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803FE9B8_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FE9B8 func_803FE9B8 preserves=true fpr_mask=0x00000000
