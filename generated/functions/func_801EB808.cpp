#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801EB808_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x801EB808u);
    goto loc_801EB808;

loc_801EB808:
{
    r5 = 0;
    r4 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_801EB818:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_801EB868;
    }
}

loc_801EB81C:
{
    r5 = r4;
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_801EB828:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_801EB834;
    }
}

loc_801EB82C:
{
    r0 = (r4 + -1);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_801EB834:
{
    r0 = MemoryInline::FlatRead16((r3 + 6));
}

loc_801EB83C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(251))) {
        goto loc_801EB84C;
    }
}

loc_801EB840:
{
}

loc_801EB844:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(237))) {
        goto loc_801EB854;
    }
}

loc_801EB848:
{
    goto loc_801EB858;
}

loc_801EB84C:
{
    r5 = (r5 + -1);
    goto loc_801EB858;
}

loc_801EB854:
{
    r5 = (r5 + -2);
}

loc_801EB858:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_801EB860:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_801EB868;
    }
}

loc_801EB864:
{
    r5 = 1;
}

loc_801EB868:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801EB808(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801EB808_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801EB808 func_801EB808 preserves=true fpr_mask=0x00000000
