#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8054E5A8_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addic_src_0 = 0;
    uint32_t r0_addic_src_1 = 0;
    uint32_t r0_addic_src_2 = 0;
    uint32_t r0_addic_src_3 = 0;
    uint32_t r0_addic_src_4 = 0;
    uint32_t r0_addic_src_5 = 0;
    uint32_t r0_addic_src_6 = 0;
    uint32_t r0_addic_src_7 = 0;
    uint32_t r0_addic_src_8 = 0;
    uint32_t r0_addic_src_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x8054E5A8u);
    goto loc_8054E5A8;

loc_8054E5A8:
{
    r4 = r5;
    r5 = r6;
}

loc_8054E840:
{
    r0 = (r5 & 2);
}

loc_8054E844:
{
    MemoryInline::FlatWrite32((r3 + 6896), r4);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8054E870;
    }
}

loc_8054E84C:
{
    r0 = MemoryInline::FlatRead32((r3 + 6880));
    r0_addic_src_0 = r0;
    r0 = (r0_addic_src_0 + -1);
}

loc_8054E854:
{
    MemoryInline::FlatWrite32((r3 + 6880), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8054E878;
    }
}

loc_8054E85C:
{
    r4 = (r4 | 2);
    r0 = 9;
    MemoryInline::FlatWrite32((r3 + 6896), r4);
    MemoryInline::FlatWrite32((r3 + 6880), r0);
    goto loc_8054E878;
}

loc_8054E870:
{
    r0 = 30;
    MemoryInline::FlatWrite32((r3 + 6880), r0);
}

loc_8054E878:
{
    r0 = (r5 & 32768);
}

loc_8054E87C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8054E8A8;
    }
}

loc_8054E880:
{
    r0 = MemoryInline::FlatRead32((r3 + 6884));
    r0_addic_src_3 = r0;
    r0 = (r0_addic_src_3 + -1);
}

loc_8054E888:
{
    MemoryInline::FlatWrite32((r3 + 6884), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8054E8B0;
    }
}

loc_8054E890:
{
    r4 = MemoryInline::FlatRead32((r3 + 6896));
    r0 = 9;
    MemoryInline::FlatWrite32((r3 + 6884), r0);
    r0 = (r4 | 32768);
    MemoryInline::FlatWrite32((r3 + 6896), r0);
    goto loc_8054E8B0;
}

loc_8054E8A8:
{
    r0 = 30;
    MemoryInline::FlatWrite32((r3 + 6884), r0);
}

loc_8054E8B0:
{
    r0 = (r5 & 1);
}

loc_8054E8B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8054E8E0;
    }
}

loc_8054E8B8:
{
    r0 = MemoryInline::FlatRead32((r3 + 6872));
    r0_addic_src_5 = r0;
    r0 = (r0_addic_src_5 + -1);
}

loc_8054E8C0:
{
    MemoryInline::FlatWrite32((r3 + 6872), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8054E8E8;
    }
}

loc_8054E8C8:
{
    r4 = MemoryInline::FlatRead32((r3 + 6896));
    r0 = 9;
    MemoryInline::FlatWrite32((r3 + 6872), r0);
    r0 = (r4 | 1);
    MemoryInline::FlatWrite32((r3 + 6896), r0);
    goto loc_8054E8E8;
}

loc_8054E8E0:
{
    r0 = 30;
    MemoryInline::FlatWrite32((r3 + 6872), r0);
}

loc_8054E8E8:
{
    r0 = (r5 & 16384);
}

loc_8054E8EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8054E918;
    }
}

loc_8054E8F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 6876));
    r0_addic_src_7 = r0;
    r0 = (r0_addic_src_7 + -1);
}

loc_8054E8F8:
{
    MemoryInline::FlatWrite32((r3 + 6876), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8054E920;
    }
}

loc_8054E900:
{
    r4 = MemoryInline::FlatRead32((r3 + 6896));
    r0 = 9;
    MemoryInline::FlatWrite32((r3 + 6876), r0);
    r0 = (r4 | 16384);
    MemoryInline::FlatWrite32((r3 + 6896), r0);
    goto loc_8054E920;
}

loc_8054E918:
{
    r0 = 30;
    MemoryInline::FlatWrite32((r3 + 6876), r0);
}

loc_8054E920:
{
    r0 = (r5 & 4096);
}

loc_8054E924:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8054E950;
    }
}

loc_8054E928:
{
    r0 = MemoryInline::FlatRead32((r3 + 6888));
    r0_addic_src_9 = r0;
    r0 = (r0_addic_src_9 + -1);
}

loc_8054E930:
{
    MemoryInline::FlatWrite32((r3 + 6888), r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8054E938:
{
    r4 = MemoryInline::FlatRead32((r3 + 6896));
    r0 = 9;
    MemoryInline::FlatWrite32((r3 + 6888), r0);
    r0 = (r4 | 4096);
    MemoryInline::FlatWrite32((r3 + 6896), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

loc_8054E950:
{
    r0 = 30;
    MemoryInline::FlatWrite32((r3 + 6888), r0);
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

extern "C" void func_8054E5A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8054E5A8_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8054E5A8 func_8054E5A8 preserves=true fpr_mask=0x00000000
