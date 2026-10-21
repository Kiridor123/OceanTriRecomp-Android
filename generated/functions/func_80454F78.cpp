#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80454F78_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80454F78u);
    goto loc_80454F78;

loc_80454F78:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r4 = r3;
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl0_0x8005B714:
{
    r5 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl0_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryInline::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryInline::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + 20580), r4);
    goto loc_inl0_cont_8005B714;
}

loc_inl0_return:
{
}

loc_inl0_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80454F78(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80454F78_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002008 gpr_write=0x00000038 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80454F78 func_80454F78 preserves=true fpr_mask=0x00000000
