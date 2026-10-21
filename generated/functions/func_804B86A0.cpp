#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B86A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mdest_3 = 0;
    uint32_t r4_mdest_4 = 0;
    uint32_t r4_mdest_5 = 0;
    uint32_t r4_mdest_6 = 0;
    uint32_t r4_mdest_7 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_mrot_3 = 0;
    uint32_t r4_mrot_4 = 0;
    uint32_t r4_mrot_5 = 0;
    uint32_t r4_mrot_6 = 0;
    uint32_t r4_mrot_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804B86A0u);
    goto loc_804B86A0;

loc_804B86A0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r27 = r4;
    r28 = r5;
    r31 = r3;
    r29 = r6;
    r30 = r7;
    r24 = r8;
    r25 = r9;
    r26 = r10;
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32(r31);
    r0_mrot_0 = (r24 & 3);
    r0_mdest_0 = (r0 & -4);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0_mrot_1 = (r0_rot_0 & 12);
    r0_mdest_1 = (r0 & -13);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_804B86F0:
{
    r4 = (r0 | 16);
    MemoryInline::FlatWrite32(r31, r4);
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_804B8788;
    }
}

loc_804B86FC:
{
    r0 = (r30 + -8);
    r3 = MemoryInline::FlatRead8((r31 + 31));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_804B8708:
{
    r0 = (r3 | 1);
    MemoryInline::FlatWrite8((r31 + 31), static_cast<uint8_t>(r0));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_804B8724;
    }
}

loc_804B8714:
{
    r0 = 5;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r4_mrot_0 = (r4_rot_0 & 224);
    r4_mdest_0 = (r4 & -225);
    r4 = (r4_mdest_0 | r4_mrot_0);
    MemoryInline::FlatWrite32(r31, r4);
    goto loc_804B8730;
}

loc_804B8724:
{
    r0 = 6;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r4_mrot_1 = (r4_rot_1 & 224);
    r4_mdest_1 = (r4 & -225);
    r4 = (r4_mdest_1 | r4_mrot_1);
    MemoryInline::FlatWrite32(r31, r4);
}

loc_804B8730:
{
}

loc_804B8734:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(r29))) {
        goto loc_804B8744;
    }
}

loc_804B8738:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r28));
    r3 = (31 - r0);
    goto loc_804B874C;
}

loc_804B8744:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r29));
    r3 = (31 - r0);
}

loc_804B874C:
{
    r0 = 1127219200;
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -2360));
    stackword11 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2368));
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword11));
    r0 = MemoryInline::FlatRead32((r31 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_2 = (r0_rot_1 & 65280);
    r0_mdest_2 = (r0 & -65281);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    goto loc_804B8794;
}

loc_804B8788:
{
    r0 = 4;
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r4_mrot_3 = (r4_rot_3 & 224);
    r4_mdest_3 = (r4 & -225);
    r4 = (r4_mdest_3 | r4_mrot_3);
    MemoryInline::FlatWrite32(r31, r4);
}

loc_804B8794:
{
    r5 = (r30 & 15);
    r0 = (r28 + -1);
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r4_mrot_5 = (r0 & 1023);
    r4_mdest_5 = (r4 & -1024);
    r4 = (r4_mdest_5 | r4_mrot_5);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r3 = (r29 + -1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(27));
    r0_mrot_4 = (r0_rot_3 & 16777215);
    r0_mdest_4 = (r0 & -16777216);
    r0 = (r0_mdest_4 | r0_mrot_4);
}

loc_804B87B4:
{
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(10));
    r4_mrot_6 = (r4_rot_5 & 1047552);
    r4_mdest_6 = (r4 & -1047553);
    r4 = (r4_mdest_6 | r4_mrot_6);
    MemoryInline::FlatWrite32((r31 + 20), r30);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(20));
    r4_mrot_7 = (r4_rot_6 & 15728640);
    r4_mdest_7 = (r4 & -15728641);
    r4 = (r4_mdest_7 | r4_mrot_7);
    MemoryInline::FlatWrite32((r31 + 8), r4);
    MemoryInline::FlatWrite32((r31 + 12), r0);
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(14))) {
        goto loc_804B8848;
    }
}

loc_804B87CC:
{
    r3 = 0x80620000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + -19292);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804B87E4u:
        goto loc_804B87E4;
        break;
    case 0x804B87F8u:
        goto loc_804B87F8;
        break;
    case 0x804B880Cu:
        goto loc_804B880C;
        break;
    case 0x804B8820u:
        goto loc_804B8820;
        break;
    case 0x804B8848u:
        goto loc_804B8848;
        break;
    case 0x804B8834u:
        goto loc_804B8834;
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
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_804B87E4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 30), static_cast<uint8_t>(r0));
    r6 = 3;
    r7 = 3;
    goto loc_804B8858;
}

loc_804B87F8:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 30), static_cast<uint8_t>(r0));
    r6 = 3;
    r7 = 2;
    goto loc_804B8858;
}

loc_804B880C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 30), static_cast<uint8_t>(r0));
    r6 = 2;
    r7 = 2;
    goto loc_804B8858;
}

loc_804B8820:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 30), static_cast<uint8_t>(r0));
    r6 = 2;
    r7 = 2;
    goto loc_804B8858;
}

loc_804B8834:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 30), static_cast<uint8_t>(r0));
    r6 = 3;
    r7 = 3;
    goto loc_804B8858;
}

loc_804B8848:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 30), static_cast<uint8_t>(r0));
    r6 = 2;
    r7 = 2;
}

loc_804B8858:
{
    r5 = 1;
    r0 = MemoryInline::FlatRead8((r31 + 31));
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r11 = (r1 + 64);
    r4 = (r28 + r3);
    r0 = (r0 | 2);
    r3 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    MemoryInline::FlatWrite8((r31 + 31), static_cast<uint8_t>(r0));
    r4 = (r4 + -1);
    r3 = (r29 + r3);
    r4 = PPC_Sraw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
    r0 = (r3 + -1);
    r0 = PPC_Sraw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r0 = (r4 * r0);
    r0 = (r0 & 32767);
    MemoryInline::FlatWrite16((r31 + 28), static_cast<uint16_t>(r0));
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B86A0 func_804B86A0 preserves=true fpr_mask=0x00000000
