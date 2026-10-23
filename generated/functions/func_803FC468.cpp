#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803FC468_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_803FC468;

loc_803FC468:
{
    r4 = (r4 & 255);
    // inline leaf 0x803FC274 (12 guest instruction(s))
}

loc_inl0_0x803FC274:
{
    r0 = MemoryInline::FlatRead8((r3 + 152));
}

loc_inl0_0x803FC27C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x803FC288;
    }
}

loc_inl0_0x803FC280:
{
    r3 = 0;
    goto loc_inl0_cont_803FC274;
}

loc_inl0_0x803FC288:
{
    r5 = MemoryInline::FlatRead32((r3 + 24768));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r4));
    r4 = MemoryInline::FlatRead32((r3 + 24768));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 24768), r0);
    r3 = r5;
}

loc_inl0_cont_803FC274:
{
    // end of inlined leaf 0x803FC274
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803FC468(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803FC468_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803FC468 func_803FC468 preserves=true fpr_mask=0x00000000
