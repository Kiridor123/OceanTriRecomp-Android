#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80529600_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mdest_6 = 0;
    uint32_t r0_mdest_7 = 0;
    uint32_t r0_mdest_8 = 0;
    uint32_t r0_mdest_9 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_mrot_6 = 0;
    uint32_t r0_mrot_7 = 0;
    uint32_t r0_mrot_8 = 0;
    uint32_t r0_mrot_9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80529600u);
    goto loc_80529600;

loc_80529600:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r9 = (r4 & 1);
}

loc_8052960C:
{
    r7 = -1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = (r5 * 680);
    r0 = MemoryInline::FlatRead32((r13 + -13336));
    r4 = (r0 + r31);
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80529630;
    }
}

loc_8052962C:
{
    r7 = 1;
}

loc_80529630:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r5 = (r3 + -65536);
    r8 = MemoryInline::FlatRead32((r13 + -13336));
    r5 = (r5 + 4096);
    r6 = (r0 * 28);
    r3 = (r8 + r31);
    r0 = MemoryInline::FlatRead32((r3 + 604));
}

loc_80529650:
{
    r3 = (r8 + r6);
    r6 = MemoryInline::FlatRead8((r3 + 2733));
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(33))) {
        goto loc_805298B8;
    }
}

loc_8052965C:
{
    r3 = 0x80650000u;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r3 = (r3 + -24320);
    r3_addr_1 = (r3 + r5);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x805296F4u:
        goto loc_805296F4;
        break;
    case 0x80529674u:
        goto loc_80529674;
        break;
    case 0x805297E0u:
        goto loc_805297E0;
        break;
    case 0x80529820u:
        goto loc_80529820;
        break;
    case 0x80529860u:
        goto loc_80529860;
        break;
    case 0x805296B4u:
        goto loc_805296B4;
        break;
    case 0x8052976Cu:
        goto loc_8052976C;
        break;
    case 0x80529750u:
        goto loc_80529750;
        break;
    case 0x80529734u:
        goto loc_80529734;
        break;
    case 0x805298B8u:
        goto loc_805298B8;
        break;
    case 0x805298A0u:
        goto loc_805298A0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80529674:
{
    r3 = MemoryInline::FlatRead32((r4 + 672));
}

loc_8052967C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80529690;
    }
}

loc_80529680:
{
}

loc_80529684:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_805298B8;
    }
}

loc_80529688:
{
    r0 = (r0 ^ 2);
    goto loc_805298B8;
}

loc_80529690:
{
    r3 = MemoryInline::FlatRead8((r4 + 609));
    r0 = (r0 & -3);
    r3 = (r3 + r7);
    MemoryInline::FlatWrite8((r4 + 609), static_cast<uint8_t>(r3));
    r4 = (r3 & 255);
    r3 = (0 - r4);
    r3 = (r3 | r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0_mrot_1 = (r0_rot_1 & 2);
    r0_mdest_1 = (r0 & -3);
    r0 = (r0_mdest_1 | r0_mrot_1);
    goto loc_805298B8;
}

loc_805296B4:
{
    r3 = MemoryInline::FlatRead32((r4 + 672));
}

loc_805296BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805296D0;
    }
}

loc_805296C0:
{
}

loc_805296C4:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_805298B8;
    }
}

loc_805296C8:
{
    r0 = (r0 ^ 32);
    goto loc_805298B8;
}

loc_805296D0:
{
    r3 = MemoryInline::FlatRead8((r4 + 612));
    r0 = (r0 & -33);
    r3 = (r3 + r7);
    MemoryInline::FlatWrite8((r4 + 612), static_cast<uint8_t>(r3));
    r4 = (r3 & 255);
    r3 = (0 - r4);
    r3 = (r3 | r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r0_mrot_2 = (r0_rot_2 & 32);
    r0_mdest_2 = (r0 & -33);
    r0 = (r0_mdest_2 | r0_mrot_2);
    goto loc_805298B8;
}

loc_805296F4:
{
    r3 = MemoryInline::FlatRead32((r4 + 672));
}

loc_805296FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80529710;
    }
}

loc_80529700:
{
}

loc_80529704:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_805298B8;
    }
}

loc_80529708:
{
    r0 = (r0 ^ 1);
    goto loc_805298B8;
}

loc_80529710:
{
    r3 = MemoryInline::FlatRead8((r4 + 608));
    r0 = (r0 & -2);
    r3 = (r3 + r7);
    MemoryInline::FlatWrite8((r4 + 608), static_cast<uint8_t>(r3));
    r4 = (r3 & 255);
    r3 = (0 - r4);
    r3 = (r3 | r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0_mrot_3 = (r0_rot_3 & 1);
    r0_mdest_3 = (r0 & -2);
    r0 = (r0_mdest_3 | r0_mrot_3);
    goto loc_805298B8;
}

loc_80529734:
{
}

loc_80529738:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_805298B8;
    }
}

loc_8052973C:
{
    r3 = MemoryInline::FlatRead32((r4 + 600));
}

loc_80529744:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805298B8;
    }
}

loc_80529748:
{
    r0 = (r0 ^ 512);
    goto loc_805298B8;
}

loc_80529750:
{
}

loc_80529754:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_805298B8;
    }
}

loc_80529758:
{
    r3 = MemoryInline::FlatRead32((r4 + 600));
}

loc_80529760:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805298B8;
    }
}

loc_80529764:
{
    r0 = (r0 ^ 256);
    goto loc_805298B8;
}

loc_8052976C:
{
}

loc_80529770:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_805298B8;
    }
}

loc_80529774:
{
    r3 = MemoryInline::FlatRead32((r4 + 600));
}

loc_8052977C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805298B8;
    }
}

loc_80529780:
{
    r3 = (r0 & 192);
}

loc_80529784:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805297A4;
    }
}

loc_80529788:
{
}

loc_8052978C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(64))) {
        goto loc_805297B8;
    }
}

loc_80529790:
{
}

loc_80529794:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(128))) {
        goto loc_805297D0;
    }
}

loc_80529798:
{
}

loc_8052979C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(192))) {
        goto loc_805297D8;
    }
}

loc_805297A0:
{
    goto loc_805298B8;
}

loc_805297A4:
{
    r3 = (r6 & 1);
}

loc_805297AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_805298B8;
    }
}

loc_805297B0:
{
    r0 = (r0 | 64);
    goto loc_805298B8;
}

loc_805297B8:
{
    r3 = (r6 & 4);
    r0 = (r0 & -65);
}

loc_805297C4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4))) {
        goto loc_805298B8;
    }
}

loc_805297C8:
{
    r0 = (r0 | 128);
    goto loc_805298B8;
}

loc_805297D0:
{
    r0 = (r0 & -129);
    goto loc_805298B8;
}

loc_805297D8:
{
    r0 = (r0 & -193);
    goto loc_805298B8;
}

loc_805297E0:
{
    r3 = MemoryInline::FlatRead32((r4 + 672));
}

loc_805297E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805297FC;
    }
}

loc_805297EC:
{
}

loc_805297F0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_805298B8;
    }
}

loc_805297F4:
{
    r0 = (r0 ^ 4);
    goto loc_805298B8;
}

loc_805297FC:
{
    r3 = MemoryInline::FlatRead8((r4 + 610));
    r0 = (r0 & -5);
    r3 = (r3 + r7);
    MemoryInline::FlatWrite8((r4 + 610), static_cast<uint8_t>(r3));
    r4 = (r3 & 255);
    r3 = (0 - r4);
    r3 = (r3 | r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0_mrot_4 = (r0_rot_4 & 4);
    r0_mdest_4 = (r0 & -5);
    r0 = (r0_mdest_4 | r0_mrot_4);
    goto loc_805298B8;
}

loc_80529820:
{
    r3 = MemoryInline::FlatRead32((r4 + 672));
}

loc_80529828:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8052983C;
    }
}

loc_8052982C:
{
}

loc_80529830:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_805298B8;
    }
}

loc_80529834:
{
    r0 = (r0 ^ 8);
    goto loc_805298B8;
}

loc_8052983C:
{
    r3 = MemoryInline::FlatRead8((r4 + 611));
    r0 = (r0 & -9);
    r3 = (r3 + r7);
    MemoryInline::FlatWrite8((r4 + 611), static_cast<uint8_t>(r3));
    r4 = (r3 & 255);
    r3 = (0 - r4);
    r3 = (r3 | r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
    r0_mrot_5 = (r0_rot_5 & 8);
    r0_mdest_5 = (r0 & -9);
    r0 = (r0_mdest_5 | r0_mrot_5);
    goto loc_805298B8;
}

loc_80529860:
{
    r3 = MemoryInline::FlatRead32((r4 + 672));
}

loc_80529868:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8052987C;
    }
}

loc_8052986C:
{
}

loc_80529870:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_805298B8;
    }
}

loc_80529874:
{
    r0 = (r0 ^ 16);
    goto loc_805298B8;
}

loc_8052987C:
{
    r3 = MemoryInline::FlatRead8((r4 + 613));
    r0 = (r0 & -17);
    r3 = (r3 + r7);
    MemoryInline::FlatWrite8((r4 + 613), static_cast<uint8_t>(r3));
    r4 = (r3 & 255);
    r3 = (0 - r4);
    r3 = (r3 | r4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(5));
    r0_mrot_6 = (r0_rot_6 & 16);
    r0_mdest_6 = (r0 & -17);
    r0 = (r0_mdest_6 | r0_mrot_6);
    goto loc_805298B8;
}

loc_805298A0:
{
}

loc_805298A4:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_805298B8;
    }
}

loc_805298A8:
{
    r3 = MemoryInline::FlatRead32((r4 + 600));
}

loc_805298B0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805298B8;
    }
}

loc_805298B4:
{
    r0 = (r0 ^ 1024);
}

loc_805298B8:
{
    r30 = (r0 | 4096);
    r0 = (r30 & 4096);
}

loc_805298C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805298D8;
    }
}

loc_805298C4:
{
    r0 = MemoryInline::FlatRead32((r13 + -13336));
    r4 = (r30 & -4097);
    r3 = (r0 + r31);
    MemoryInline::FlatWrite32((r3 + 604), r4);
    goto loc_805298F8;
}

loc_805298D8:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead32((r13 + -13336));
    r0 = (r30 & 4032);
    r4 = (r4 + r31);
    r5 = MemoryInline::FlatRead32((r4 + 604));
    r0_mrot_8 = (r5 & 63);
    r0_mdest_8 = (r0 & -64);
    r0 = (r0_mdest_8 | r0_mrot_8);
    MemoryInline::FlatWrite32((r4 + 604), r0);
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl1_0x804D1330:
{
}

loc_inl1_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D1344;
    }
}

loc_inl1_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl1_0x804D1348;
}

loc_inl1_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl1_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_805298F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80529600(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80529600_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80529600 func_80529600 preserves=true fpr_mask=0x00000000
