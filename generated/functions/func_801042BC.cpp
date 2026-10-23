#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801042BC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_801048E4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_801042BC;

loc_801042BC:
{
    r3 = r29;
    r4 = 0x805A0000u;
    r4 = (r4 + -6984);
    r4_addr_0 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    r5 = (r30 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80135994u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r30 + 12);
    r4 = (r28 + 24);
    // inline leaf 0x80101470 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    // end of inlined leaf 0x80101470
    r3 = (r1 + 48);
    r4 = (r30 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 48);
    r4 = (r30 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = (r28 + 24);
    r4 = (r1 + 48);
    ctx->lr = 0x80104304u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r30 + 12);
    r4 = (r28 + 24);
    // inline leaf 0x800FBBF4 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x800FBBF4
    r26 = 0;
    r27 = r30;
    goto loc_80104340;
}

loc_8010431C:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r4 = (r30 + 12);
    ctx->lr = 0x80104328u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800A5420u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r3 = r29;
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    r3 = MemoryInline::FlatRead32((r27 + 4));
    ctx->lr = 0x80104338u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9B24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r27 = (r27 + 4);
    r26 = (r26 + 1);
}

loc_80104340:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_80104348:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_8010431C;
    }
}

loc_8010434C:
{
}

loc_80104614:
{
    r26 = 0;
    r27 = r30;
    goto loc_80104660;
}

loc_80104620:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
    ctx->lr = 0x80104628u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F9984u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_8010462C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80104634;
    }
}

loc_80104630:
{
    r31 = (r31 + 1);
}

loc_80104634:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_8010463C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(r0))) {
        goto loc_80104658;
    }
}

loc_80104640:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r28 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    goto loc_801048E0;
}

loc_80104658:
{
    r27 = (r27 + 4);
    r26 = (r26 + 1);
}

loc_80104660:
{
    r0 = MemoryInline::FlatRead32(r30);
}

loc_80104668:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r0))) {
        goto loc_80104620;
    }
}

loc_8010466C:
{
    r3 = MemoryInline::FlatRead8((r28 + 2));
    r0 = (r3 + -10);
}

loc_80104678:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(47))) {
        goto loc_801048C8;
    }
}

loc_8010467C:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -5592);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80104694u:
        goto loc_80104694;
        break;
    case 0x801046DCu:
        goto loc_801046DC;
        break;
    case 0x801048C8u:
        goto loc_801048C8;
        break;
    case 0x80104724u:
        goto loc_80104724;
        break;
    case 0x80104758u:
        goto loc_80104758;
        break;
    case 0x801047D0u:
        goto loc_801047D0;
        break;
    case 0x80104794u:
        goto loc_80104794;
        break;
    case 0x80104818u:
        goto loc_80104818;
        break;
    case 0x80104860u:
        goto loc_80104860;
        break;
    case 0x80104898u:
        goto loc_80104898;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80104694:
{
    r3 = r29;
    r4 = 0;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801046A8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_801048C8;
    }
}

loc_801046AC:
{
    r0 = 127;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 40);
    ctx->lr = 0x801046D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_801048C8;
}

loc_801046DC:
{
    r3 = r29;
    r4 = 7;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801046F0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_801048C8;
    }
}

loc_801046F4:
{
    r0 = 127;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 36);
    ctx->lr = 0x80104720u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_801048C8;
}

loc_80104724:
{
    r0 = 200;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 32);
    ctx->lr = 0x80104754u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_801048C8;
}

loc_80104758:
{
    r0 = 168;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    r0 = 115;
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r0));
    r0 = 252;
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 28);
    ctx->lr = 0x80104790u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_801048C8;
}

loc_80104794:
{
    r0 = 160;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    r0 = 163;
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r0));
    r0 = 79;
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 24);
    ctx->lr = 0x801047CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_801048C8;
}

loc_801047D0:
{
    r3 = MemoryInline::FlatRead8((r28 + 68));
    r4 = 0;
    ctx->lr = 0x801047DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802B035Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & 255);
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_4 & 255);
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r0));
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 20);
    ctx->lr = 0x80104814u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_801048C8;
}

loc_80104818:
{
    r3 = MemoryInline::FlatRead8((r28 + 68));
    r4 = 1;
    ctx->lr = 0x80104824u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x802B035Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_5 & 255);
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_6 & 255);
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r0));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_7 & 255);
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r0));
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 16);
    ctx->lr = 0x8010485Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_801048C8;
}

loc_80104860:
{
    r3 = 255;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r3));
    r0 = 128;
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r0));
    r0 = 64;
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 12);
    ctx->lr = 0x80104894u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_801048C8;
}

loc_80104898:
{
    r0 = 215;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 45), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 46), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 47), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = (r28 + 24);
    r5 = (r1 + 8);
    ctx->lr = 0x801048C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F99ECu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_801048C8:
{
    r3 = r28;
    r4 = (r30 + 4);
    r5 = 1;
    r6 = MemoryInline::FlatRead32(r30);
    r7 = 0;
    ctx->lr = 0x801048E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_801048E0:
{
    r0 = 152;
    addr_psqx_801048E4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801048E4_loc_0));
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 120), 0, 48u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r1 + 144));
    r11 = (r1 + 144);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801042BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801042BC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xFC003FFF gpr_write=0xFC001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801042BC func_801042BC preserves=false fpr_mask=0x80000000
