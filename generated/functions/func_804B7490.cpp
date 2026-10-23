#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B7490(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804B7490;

loc_804B7490:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r7 = MemoryInline::FlatRead32((r2 + -2480));
}

loc_804B74A0:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 0;
    r9 = r3;
    r8 = r4;
    r31 = (r5 & 15);
    r30 = r6;
    MemoryInline::FlatWrite8((r7 + 592), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(19))) {
        goto loc_804B74D4;
    }
}

loc_804B74D0:
{
    r31 = 11;
}

loc_804B74D4:
{
}

loc_804B74D8:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(3))) {
        goto loc_804B74E4;
    }
}

loc_804B74DC:
{
}

loc_804B74E0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(38))) {
        goto loc_804B74FC;
    }
}

loc_804B74E4:
{
    r0 = 3;
    r3 = MemoryInline::FlatRead32((r7 + 588));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r3_mrot_1 = (r3_rot_1 & 98304);
    r3_mdest_1 = (r3 & -98305);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite32((r7 + 588), r3);
    r29 = (r7 + 588);
    goto loc_804B7510;
}

loc_804B74FC:
{
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r7 + 588));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
    r3_mrot_0 = (r3_rot_0 & 98304);
    r3_mdest_0 = (r3 & -98305);
    r3 = (r3_mdest_0 | r3_mrot_0);
    MemoryInline::FlatWrite32((r7 + 588), r3);
    r29 = (r7 + 588);
}

loc_804B7510:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r7 + 592), static_cast<uint8_t>(r0));
    r3 = r5;
    r5 = r8;
    r0 = MemoryInline::FlatRead32(r29);
    r0_mrot_0 = (r31 & 8);
    r0_mdest_0 = (r0 & -9);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r28 = MemoryInline::FlatRead32((r2 + -2480));
    r4 = r9;
    MemoryInline::FlatWrite32(r29, r0);
    r6 = (r1 + 16);
    r7 = (r1 + 12);
    r8 = (r1 + 8);
    ctx->lr = 0x804B7544u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x804B85E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r0 = 0;
    MemoryInline::FlatWrite32((r28 + 584), r0);
    r0 = 77;
    r3 = 0;
    r5 = MemoryInline::FlatRead32((r1 + 16));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r5 * r4);
    r3_mrot_3 = (r4 & 1023);
    r3_mdest_3 = (r3 & -1024);
    r3 = (r3_mdest_3 | r3_mrot_3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3_mrot_4 = (r3_rot_3 & -16777216);
    r3_mdest_4 = (r3 & 16777215);
    r3 = (r3_mdest_4 | r3_mrot_4);
    MemoryInline::FlatWrite32((r28 + 584), r3);
    r0 = MemoryInline::FlatRead32(r29);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(9));
    r0_mrot_1 = (r0_rot_1 & 512);
    r0_mdest_1 = (r0 & -513);
    r0 = (r0_mdest_1 | r0_mrot_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r0_mrot_2 = (r0_rot_2 & 112);
    r0_mdest_2 = (r0 & -113);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32(r29, r0);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B7490 func_804B7490 preserves=true fpr_mask=0x00000000
