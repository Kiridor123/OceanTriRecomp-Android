#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80325828_ra18_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80325828u);
    goto loc_80325828;

loc_80325828:
{
    r4 = r3;
    r0 = 10;
    ctr = r0;
}

loc_80325834:
{
    r0 = MemoryInline::FlatRead16((r4 + 580));
}

loc_8032583C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80325878;
    }
}

loc_80325840:
{
    r0 = (r0 & 32);
}

loc_80325848:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80325870;
    }
}

loc_8032584C:
{
    r4 = MemoryInline::FlatRead16((r3 + 820));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 820), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80325860:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(90))) {
        goto loc_return;
    }
}

loc_80325864:
{
    r0 = 90;
    MemoryInline::FlatWrite16((r3 + 822), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r4;
}

loc_80325870:
{
    r4 = (r4 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80325834;
    }
}

loc_80325878:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 820), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r3 + 822));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_80325888:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8032588C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 822), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_80325828(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80325828_ra18_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80325828 func_80325828 preserves=true fpr_mask=0x00000000
