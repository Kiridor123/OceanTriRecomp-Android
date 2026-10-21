#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004B814_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r0_subfic_ra_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8004B814u);
    goto loc_8004B814;

loc_8004B814:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = 0;
    r3 = (r3 & 65535);
    // inline leaf 0x8004B098 (12 guest instruction(s))
}

loc_inl0_0x8004B098:
{
    r3 = (r3 & 65535);
    r0 = (r3 + -438);
}

loc_inl0_0x8004B0A4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x8004B0B8;
    }
}

loc_inl0_0x8004B0A8:
{
}

loc_inl0_0x8004B0AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004B0B8;
    }
}

loc_inl0_0x8004B0B0:
{
}

loc_inl0_0x8004B0B4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(223))) {
        goto loc_inl0_0x8004B0C0;
    }
}

loc_inl0_0x8004B0B8:
{
    r3 = 1;
    goto loc_inl0_cont_8004B098;
}

loc_inl0_0x8004B0C0:
{
    r3 = 0;
}

loc_inl0_cont_8004B098:
{
    // end of inlined leaf 0x8004B098
}

loc_8004B84C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8004B8B0;
    }
}

loc_8004B850:
{
    r3 = (r28 & 65535);
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl1_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl1_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl1_0x8029F758;
    }
}

loc_inl1_0x8029F754:
{
    r3 = 0;
}

loc_inl1_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl1_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
}

loc_8004B85C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004B8B0;
    }
}

loc_8004B860:
{
    r3 = (r28 & 65535);
    ctr = r30;
}

loc_8004B86C:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(0))) {
        goto loc_8004B8B0;
    }
}

loc_8004B870:
{
    r0 = MemoryInline::FlatRead16(r29);
}

loc_8004B878:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8004B88C;
    }
}

loc_8004B87C:
{
    r0 = MemoryInline::FlatRead16((r29 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_subfic_ra_2 = r0;
    r0 = (99 - r0_subfic_ra_2);
    r31 = (r31 + r0);
    goto loc_8004B898;
}

loc_8004B88C:
{
}

loc_8004B890:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8004B898;
    }
}

loc_8004B894:
{
    r31 = (r31 + 99);
}

loc_8004B898:
{
}

loc_8004B89C:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(999))) {
        goto loc_8004B8A8;
    }
}

loc_8004B8A0:
{
    r3 = 999;
    goto loc_8004B8B4;
}

loc_8004B8A8:
{
    r29 = (r29 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8004B870;
    }
}

loc_8004B8B0:
{
    r3 = r31;
}

loc_8004B8B4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004B814(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004B814_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004B814 func_8004B814 preserves=true fpr_mask=0x00000000
