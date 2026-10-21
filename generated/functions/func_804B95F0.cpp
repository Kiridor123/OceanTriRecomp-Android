#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B95F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mdest_4 = 0;
    uint32_t r5_mdest_5 = 0;
    uint32_t r5_mdest_6 = 0;
    uint32_t r5_mdest_7 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_mrot_4 = 0;
    uint32_t r5_mrot_5 = 0;
    uint32_t r5_mrot_6 = 0;
    uint32_t r5_mrot_7 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint8_t mkw_fifo_burst_0[10];

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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];

    MKW_GUEST_ENTER(0x804B95F0u);
    goto loc_804B95F0;

loc_804B95F0:
{
    r6 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
}

loc_804B95FC:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(2))) {
        goto loc_804B962C;
    }
}

loc_804B9600:
{
    r6 = (r3 + -5);
}

loc_804B9608:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(2))) {
        goto loc_804B962C;
    }
}

loc_804B960C:
{
    r6 = (r3 + -9);
}

loc_804B9614:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(2))) {
        goto loc_804B962C;
    }
}

loc_804B9618:
{
}

loc_804B9628:
{
    r6 = 0;
}

loc_804B962C:
{
    f6.d = MemoryInline::FlatReadFloat32((r2 + -2312));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    r10 = (r0 - r6);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    r9 = (r5 + 17);
    f1.d = PpcFmulsInline(f6.d, f1.d);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = PpcFmulsInline(f6.d, f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f3.d = PpcFmulsInline(f6.d, f3.d);
    r7 = -872349696;
    f5.d = PPC_Fctiwz(f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f4.d = PPC_Fctiwz(f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 20));
    fctiwzword0 = PPC_FprLowWordInline(f5.d);
    f2.d = PpcFmulsInline(f6.d, f2.d);
    r8 = 97;
    f3.d = PPC_Fctiwz(f3.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword1 = PPC_FprLowWordInline(f4.d);
    f1.d = PpcFmulsInline(f6.d, f1.d);
    r0 = fctiwzword0;
    r5 = 0;
    r5_mrot_0 = (r0 & 2047);
    r5_mdest_0 = (r5 & -2048);
    r5 = (r5_mdest_0 | r5_mrot_0);
    r0 = fctiwzword1;
    f0.d = PpcFmulsInline(f6.d, f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f3.d);
    f1.d = PPC_Fctiwz(f1.d);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r5_mrot_1 = (r5_rot_0 & 4192256);
    r5_mdest_1 = (r5 & -4192257);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r4 = (r10 + 6);
    fctiwzword3 = PPC_FprLowWordInline(f2.d);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(22));
    r5_mrot_2 = (r5_rot_1 & 12582912);
    r5_mdest_2 = (r5 & -12582913);
    r5 = (r5_mdest_2 | r5_mrot_2);
    f0.d = PPC_Fctiwz(f0.d);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r5_mrot_3 = (r5_rot_2 & -16777216);
    r5_mdest_3 = (r5 & 16777215);
    r5 = (r5_mdest_3 | r5_mrot_3);
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r8);
    r3 = fctiwzword2;
    r6 = 0;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = fctiwzword3;
    r6_mrot_0 = (r3 & 2047);
    r6_mdest_0 = (r6 & -2048);
    r6 = (r6_mdest_0 | r6_mrot_0);
    fctiwzword4 = PPC_FprLowWordInline(f1.d);
    r4 = (r10 + 7);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r6_mrot_1 = (r6_rot_0 & 4192256);
    r6_mdest_1 = (r6 & -4192257);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r5 = 0;
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(20));
    r6_mrot_2 = (r6_rot_1 & 12582912);
    r6_mdest_2 = (r6 & -12582913);
    r6 = (r6_mdest_2 | r6_mrot_2);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r6_mrot_3 = (r6_rot_2 & -16777216);
    r6_mdest_3 = (r6 & 16777215);
    r6 = (r6_mdest_3 | r6_mrot_3);
    r3 = fctiwzword4;
    mkw_fifo_burst_0[5] = static_cast<uint8_t>(r8);
    r4 = (r10 + 8);
    r5_mrot_4 = (r3 & 2047);
    r5_mdest_4 = (r5 & -2048);
    r5 = (r5_mdest_4 | r5_mrot_4);
    r0 = fctiwzword5;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r6);
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 10u);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r5_mrot_5 = (r5_rot_3 & 4192256);
    r5_mdest_5 = (r5 & -4192257);
    r5 = (r5_mdest_5 | r5_mrot_5);
    r3 = MemoryInline::FlatRead32((r2 + -2480));
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(18));
    r5_mrot_6 = (r5_rot_4 & 12582912);
    r5_mdest_6 = (r5 & -12582913);
    r5 = (r5_mdest_6 | r5_mrot_6);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r8));
    r5_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r5_mrot_7 = (r5_rot_5 & -16777216);
    r5_mdest_7 = (r5 & 16777215);
    r5 = (r5_mdest_7 | r5_mrot_7);
    r0 = 0;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r5));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007E gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B95F0 func_804B95F0 preserves=true fpr_mask=0x00000000
