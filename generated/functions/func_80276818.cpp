#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80276818_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x80276818u);
    goto loc_80276818;

loc_80276818:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80276820:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8027682C;
    }
}

loc_80276824:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 898), static_cast<uint16_t>(r0));
}

loc_8027682C:
{
    r0 = MemoryInline::FlatRead16((r3 + 894));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite16((r3 + 894), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r3 + 896));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80276844:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_80276850;
    }
}

loc_80276848:
{
    MemoryInline::FlatWrite16((r3 + 894), static_cast<uint16_t>(r4));
    ctx->gpr[0] = r0;
    return r4;
}

loc_80276850:
{
}

loc_80276854:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80276858:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 894), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return r4;
}

}

extern "C" void func_80276818(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80276818_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80276818 func_80276818 preserves=true fpr_mask=0x00000000
