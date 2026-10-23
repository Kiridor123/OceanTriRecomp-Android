#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8053C810_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_8053C810;

loc_8053C810:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8053C818:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053C858;
    }
}

loc_8053C81C:
{
    r0 = 5;
    r5 = r3;
    r6 = 0;
    ctr = r0;
}

loc_8053C82C:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_8053C834:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053C848;
    }
}

loc_8053C838:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_8053C848:
{
    r5 = (r5 + 4);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8053C82C;
    }
}

loc_8053C854:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

loc_8053C858:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0 = 0;
}

loc_8053C864:
{
    MemoryInline::FlatWrite32((r3 + 4), r5);
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r5))) {
        goto loc_8053C870;
    }
}

loc_8053C86C:
{
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_8053C870:
{
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r6 = (r3 + 8);
}

loc_8053C87C:
{
    MemoryInline::FlatWrite32((r3 + 8), r5);
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r5))) {
        goto loc_8053C888;
    }
}

loc_8053C884:
{
    MemoryInline::FlatWrite32(r6, r0);
}

loc_8053C888:
{
    r5 = MemoryInline::FlatRead32((r6 + 8));
}

loc_8053C890:
{
    MemoryInline::FlatWrite32((r6 + 4), r5);
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r5))) {
        goto loc_8053C89C;
    }
}

loc_8053C898:
{
    MemoryInline::FlatWrite32((r6 + 4), r0);
}

loc_8053C89C:
{
    r5 = MemoryInline::FlatRead32((r6 + 12));
}

loc_8053C8A4:
{
    MemoryInline::FlatWrite32((r6 + 8), r5);
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r5))) {
        goto loc_8053C8B0;
    }
}

loc_8053C8AC:
{
    MemoryInline::FlatWrite32((r6 + 8), r0);
}

loc_8053C8B0:
{
    MemoryInline::FlatWrite32((r3 + 20), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_8053C810(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8053C810_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8053C810 func_8053C810 preserves=true fpr_mask=0x00000000
