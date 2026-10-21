#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F9218(CpuContext* ctx);
extern "C" uint64_t func_800F9218_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_800FFD10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_13 = 0;
    uint32_t r4_addr_14 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800FFD10u);
    goto loc_800FFD10;

loc_800FFD10:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r30 = r4;
    r31 = MemoryInline::FlatRead32((r3 + 56));
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = (r3 & 255);
}

loc_800FFD44:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(19))) {
        goto loc_800FFE68;
    }
}

loc_800FFD48:
{
    r4 = 0x805A0000u;
    r4 = (r4 + -13284);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800FFE68u:
        goto loc_800FFE68;
        break;
    case 0x800FFD60u:
        goto loc_800FFD60;
        break;
    case 0x800FFD78u:
        goto loc_800FFD78;
        break;
    case 0x800FFD90u:
        goto loc_800FFD90;
        break;
    case 0x800FFDA8u:
        goto loc_800FFDA8;
        break;
    case 0x800FFDC0u:
        goto loc_800FFDC0;
        break;
    case 0x800FFDD8u:
        goto loc_800FFDD8;
        break;
    case 0x800FFDF0u:
        goto loc_800FFDF0;
        break;
    case 0x800FFE08u:
        goto loc_800FFE08;
        break;
    case 0x800FFE20u:
        goto loc_800FFE20;
        break;
    case 0x800FFE38u:
        goto loc_800FFE38;
        break;
    case 0x800FFE50u:
        goto loc_800FFE50;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800FFD60:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = 0x805A0000u;
    r4 = (r4 + -14512);
    r4_addr_2 = (r4 + r0);
    r28 = MemoryInline::FlatRead32(r4_addr_2);
    goto loc_800FFE6C;
}

loc_800FFD78:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = 0x805A0000u;
    r4 = (r4 + -14460);
    r4_addr_3 = (r4 + r0);
    r28 = MemoryInline::FlatRead32(r4_addr_3);
    goto loc_800FFE6C;
}

loc_800FFD90:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = 0x805A0000u;
    r4 = (r4 + -14336);
    r4_addr_4 = (r4 + r0);
    r28 = MemoryInline::FlatRead32(r4_addr_4);
    goto loc_800FFE6C;
}

loc_800FFDA8:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = 0x805A0000u;
    r4 = (r4 + -14284);
    r4_addr_5 = (r4 + r0);
    r28 = MemoryInline::FlatRead32(r4_addr_5);
    goto loc_800FFE6C;
}

loc_800FFDC0:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4 = 0x805A0000u;
    r4 = (r4 + -14272);
    r4_addr_6 = (r4 + r0);
    r28 = MemoryInline::FlatRead32(r4_addr_6);
    goto loc_800FFE6C;
}

loc_800FFDD8:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r4 = 0x805A0000u;
    r4 = (r4 + -14260);
    r4_addr_7 = (r4 + r0);
    r28 = MemoryInline::FlatRead32(r4_addr_7);
    goto loc_800FFE6C;
}

loc_800FFDF0:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r4 = 0x805A0000u;
    r4 = (r4 + -14236);
    r4_addr_8 = (r4 + r0);
    r28 = MemoryInline::FlatRead32(r4_addr_8);
    goto loc_800FFE6C;
}

loc_800FFE08:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r4 = 0x805A0000u;
    r4 = (r4 + -14184);
    r4_addr_9 = (r4 + r0);
    r28 = MemoryInline::FlatRead32(r4_addr_9);
    goto loc_800FFE6C;
}

loc_800FFE20:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r4 = 0x805A0000u;
    r4 = (r4 + -14064);
    r4_addr_10 = (r4 + r0);
    r28 = MemoryInline::FlatRead32(r4_addr_10);
    goto loc_800FFE6C;
}

loc_800FFE38:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r4 = 0x805A0000u;
    r4 = (r4 + -14012);
    r4_addr_11 = (r4 + r0);
    r28 = MemoryInline::FlatRead32(r4_addr_11);
    goto loc_800FFE6C;
}

loc_800FFE50:
{
    r0 = MemoryInline::FlatRead8((r28 + 68));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    r4 = 0x805A0000u;
    r4 = (r4 + -14000);
    r4_addr_12 = (r4 + r0);
    r28 = MemoryInline::FlatRead32(r4_addr_12);
    goto loc_800FFE6C;
}

loc_800FFE68:
{
    r28 = 0;
}

loc_800FFE6C:
{
    r0 = (r3 & 255);
}

loc_800FFE74:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800FFEC8;
    }
}

loc_800FFE78:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r0 = (r3 & 255);
}

loc_800FFE84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_800FFEC8;
    }
}

loc_800FFE88:
{
    r0 = (r30 + -13);
}

loc_800FFE90:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_800FFEA8;
    }
}

loc_800FFE94:
{
    r3 = 12;
    r4 = 1;
    // inline leaf 0x802B0B68 (13 guest instruction(s))
    r5 = 16;
    r0 = (r4 & 255);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r4 = 0x806C0000u;
    r4 = (r4 + -21440);
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 10268));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x802B0B68
}

loc_800FFEA4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_800FFF4C;
    }
}

loc_800FFEA8:
{
    r0 = (r30 + -16);
}

loc_800FFEB0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800FFEC8;
    }
}

loc_800FFEB4:
{
    r3 = 12;
    r4 = 0;
    // inline leaf 0x802B0B68 (13 guest instruction(s))
    r5 = 16;
    r0 = (r4 & 255);
    r5 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r4 = 0x806C0000u;
    r4 = (r4 + -21440);
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 10268));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x802B0B68
}

loc_800FFEC4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_800FFF4C;
    }
}

loc_800FFEC8:
{
}

loc_800FFECC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800FFF04;
    }
}

loc_800FFED0:
{
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_15 & -4);
    r3 = (r31 + r0);
    r29 = (r3 + 4);
    r3 = (r31 + r30);
    r0 = MemoryInline::FlatRead8((r3 + 2261));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & -2);
    r28_addr_1 = (r28 + r0);
    r3 = MemoryInline::FlatRead16(r28_addr_1);
    r0 = MemoryInline::FlatRead32((r31 + 212));
    r4 = (r0 & 65535);
    r5 = 1;
    ctx->lr = 0x800FFEFCu;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800F9218_2AAC = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_2AAC);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_2AAC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F9218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32(r29, r3);
    goto loc_800FFF30;
}

loc_800FFF04:
{
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_17 & -4);
    r3 = (r31 + r0);
    r29 = (r3 + 4);
    r0 = MemoryInline::FlatRead32((r31 + 208));
    r0 = (r30 + r0);
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead32((r31 + 212));
    r4 = (r0 & 65535);
    r5 = 1;
    ctx->lr = 0x800FFF2Cu;
    if constexpr (KnownRegArgsCpuCall<0x800F9218u>(&func_800F9218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_800F9218_3187 = func_800F9218_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800F9218_3187);
        r4 = static_cast<uint32_t>(regargs_result_800F9218_3187 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800F9218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    MemoryInline::FlatWrite32(r29, r3);
}

loc_800FFF30:
{
    r3 = MemoryInline::FlatRead32(r29);
}

loc_800FFF38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800FFF4C;
    }
}

loc_800FFF3C:
{
    r0 = (r30 * 48);
    r4 = (r31 + r0);
    r4 = (r4 + 816);
    ctx->lr = 0x800FFF4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800A5420u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
}

loc_800FFF4C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800FFD10 func_800FFD10 preserves=true fpr_mask=0x00000000
