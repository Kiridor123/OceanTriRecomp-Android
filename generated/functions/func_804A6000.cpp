#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804A6000_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804A6000u);
    goto loc_804A6000;

loc_804A6000:
{
    r5 = MemoryInline::FlatRead32((r13 + -15800));
}

loc_804A6008:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804A6070;
    }
}

loc_804A600C:
{
    MemoryInline::FlatWrite32((r13 + -15796), r3);
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -15804), r3);
    MemoryInline::FlatWrite32((r13 + -15800), r3);
    MemoryInline::FlatWrite32((r3 + 60), r0);
    MemoryInline::FlatWrite32((r3 + 56), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

loc_804A6030:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_804A603C:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_804A606C;
    }
}

loc_804A6040:
{
    r0 = MemoryInline::FlatRead32((r5 + 60));
    MemoryInline::FlatWrite32((r3 + 60), r0);
    MemoryInline::FlatWrite32((r5 + 60), r3);
    r4 = MemoryInline::FlatRead32((r3 + 60));
    MemoryInline::FlatWrite32((r3 + 56), r5);
}

loc_804A6058:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_804A6064;
    }
}

loc_804A605C:
{
    MemoryInline::FlatWrite32((r13 + -15800), r3);
    goto loc_804A6078;
}

loc_804A6064:
{
    MemoryInline::FlatWrite32((r4 + 56), r3);
    goto loc_804A6078;
}

loc_804A606C:
{
    r5 = MemoryInline::FlatRead32((r5 + 56));
}

loc_804A6070:
{
}

loc_804A6074:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804A6030;
    }
}

loc_804A6078:
{
}

loc_804A607C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_804A6080:
{
    r4 = MemoryInline::FlatRead32((r13 + -15804));
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 56), r3);
    MemoryInline::FlatWrite32((r3 + 56), r0);
    r0 = MemoryInline::FlatRead32((r13 + -15804));
    MemoryInline::FlatWrite32((r3 + 60), r0);
    MemoryInline::FlatWrite32((r13 + -15804), r3);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_804A6000(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804A6000_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A6000 func_804A6000 preserves=true fpr_mask=0x00000000
