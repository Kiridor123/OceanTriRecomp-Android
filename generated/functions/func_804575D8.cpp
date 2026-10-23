#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804575D8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_adde_left_0 = 0;
    uint32_t r3_adde_left_1 = 0;
    uint32_t r3_adde_left_2 = 0;
    uint32_t r3_adde_left_3 = 0;
    uint32_t r3_adde_left_4 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_adde_right_3 = 0;
    uint32_t r3_adde_right_4 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_ca_6 = 0;
    uint32_t r3_ca_7 = 0;
    uint32_t r3_ca_8 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_not_5 = 0;
    uint32_t r3_subfze_src_0 = 0;
    uint32_t r3_subfze_src_1 = 0;
    uint32_t r3_subfze_src_2 = 0;
    uint32_t r3_subfze_src_3 = 0;
    uint32_t r3_subfze_src_4 = 0;
    uint32_t r3_subfze_src_5 = 0;
    uint32_t r4_adde_left_0 = 0;
    uint32_t r4_adde_left_1 = 0;
    uint32_t r4_adde_left_2 = 0;
    uint32_t r4_adde_left_3 = 0;
    uint32_t r4_adde_left_4 = 0;
    uint32_t r4_adde_right_0 = 0;
    uint32_t r4_adde_right_1 = 0;
    uint32_t r4_adde_right_2 = 0;
    uint32_t r4_adde_right_3 = 0;
    uint32_t r4_adde_right_4 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r4_ca_3 = 0;
    uint32_t r4_ca_4 = 0;
    uint32_t r4_subfic_ra_0 = 0;
    uint32_t r4_subfic_ra_1 = 0;
    uint32_t r4_subfic_ra_2 = 0;
    uint32_t r4_subfic_ra_3 = 0;
    uint32_t r4_subfic_ra_4 = 0;
    uint32_t r4_subfic_ra_5 = 0;
    uint32_t r5_ca_0 = 0;
    uint32_t r5_ca_1 = 0;
    uint32_t r5_ca_2 = 0;
    uint32_t r5_not_0 = 0;
    uint32_t r5_not_1 = 0;
    uint32_t r5_not_2 = 0;
    uint32_t r5_subfze_src_0 = 0;
    uint32_t r5_subfze_src_1 = 0;
    uint32_t r5_subfze_src_2 = 0;
    uint32_t r6_subfic_ra_0 = 0;
    uint32_t r6_subfic_ra_1 = 0;
    uint32_t r6_subfic_ra_2 = 0;
    uint32_t r7_adde_left_0 = 0;
    uint32_t r7_adde_left_1 = 0;
    uint32_t r7_adde_left_2 = 0;
    uint32_t r7_adde_left_3 = 0;
    uint32_t r7_adde_right_0 = 0;
    uint32_t r7_adde_right_1 = 0;
    uint32_t r7_adde_right_2 = 0;
    uint32_t r7_adde_right_3 = 0;
    uint32_t r7_addic_src_0 = 0;
    uint32_t r7_addic_src_1 = 0;
    uint32_t r7_addic_src_2 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_ca_1 = 0;
    uint32_t r7_ca_2 = 0;
    uint32_t r7_ca_3 = 0;
    uint32_t r8_adde_left_0 = 0;
    uint32_t r8_adde_left_1 = 0;
    uint32_t r8_adde_left_2 = 0;
    uint32_t r8_adde_left_3 = 0;
    uint32_t r8_adde_right_0 = 0;
    uint32_t r8_adde_right_1 = 0;
    uint32_t r8_adde_right_2 = 0;
    uint32_t r8_adde_right_3 = 0;
    uint32_t r8_ca_0 = 0;
    uint32_t r8_ca_1 = 0;
    uint32_t r8_ca_2 = 0;
    uint32_t r8_ca_3 = 0;
    uint32_t r9_ca_0 = 0;
    uint32_t r9_ca_1 = 0;
    uint32_t r9_ca_2 = 0;
    uint32_t r9_ca_3 = 0;
    uint32_t r9_not_0 = 0;
    uint32_t r9_not_1 = 0;
    uint32_t r9_not_2 = 0;
    uint32_t r9_not_3 = 0;
    uint32_t r9_subfic_ra_0 = 0;
    uint32_t r9_subfic_ra_1 = 0;
    uint32_t r9_subfic_ra_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804575D8;

loc_804575D8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r9 = (r3 & -2147483648);
}

loc_804575E0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_804575EC;
    }
}

loc_804575E4:
{
    r4_subfic_ra_1 = r4;
    r4 = (0 - r4_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(0) >= static_cast<uint32_t>(r4_subfic_ra_1) ? 1u : 0u) << 29);
    r3_subfze_src_1 = r3;
    r3_not_1 = ~(r3_subfze_src_1);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r3_ca_1);
}

loc_804575EC:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r9);
    r10 = (r5 & -2147483648);
}

loc_804575F4:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80457600;
    }
}

loc_804575F8:
{
    r6_subfic_ra_1 = r6;
    r6 = (0 - r6_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(0) >= static_cast<uint32_t>(r6_subfic_ra_1) ? 1u : 0u) << 29);
    r5_subfze_src_1 = r5;
    r5_not_1 = ~(r5_subfze_src_1);
    r5_ca_1 = (xer >> 29) & 1u;
    r5 = (r5_not_1 + r5_ca_1);
}

loc_80457600:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r10);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80457608:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r9 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80457618;
    }
}

loc_80457614:
{
    r0 = (r9 + 32);
}

loc_80457618:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8045761C:
{
    r9 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r10 = PPC_CntlzwInline(static_cast<uint32_t>(r6));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8045762C;
    }
}

loc_80457628:
{
    r9 = (r10 + 32);
}

loc_8045762C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r9));
}

loc_80457630:
{
    r10 = (64 - r0);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80457700;
    }
}

loc_80457638:
{
    r9 = (r9 + 1);
    r9_subfic_ra_0 = r9;
    r9 = (64 - r9_subfic_ra_0);
    r0 = (r0 + r9);
    r9 = (r10 - r9);
    ctr = r9;
}

loc_80457650:
{
    r7 = (r9 + -32);
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(32))) {
        goto loc_80457664;
    }
}

loc_80457658:
{
    r8 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r7));
    r7 = 0;
    goto loc_80457678;
}

loc_80457664:
{
    r8 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r7 = (32 - r9);
    r7 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r7));
    r8 = (r8 | r7);
    r7 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r9));
}

loc_80457678:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_8045767C:
{
    r9 = (r0 + -32);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80457690;
    }
}

loc_80457684:
{
    r3 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r4 = 0;
    goto loc_804576A4;
}

loc_80457690:
{
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r9 = (32 - r0);
    r9 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r3 = (r3 | r9);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_804576A4:
{
    r10 = -1;
    r7_addic_src_0 = r7;
    r7 = (r7_addic_src_0 + 0);
}

loc_804576AC:
{
    r4_adde_left_2 = r4;
    r4_adde_right_2 = r4;
    r4_ca_2 = (xer >> 29) & 1u;
    r4 = (r4_adde_left_2 + r4_adde_right_2);
    r4 = (r4 + r4_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r4_adde_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_adde_left_2 = r3;
    r3_adde_right_2 = r3;
    r3_ca_4 = (xer >> 29) & 1u;
    r3 = (r3_adde_left_2 + r3_adde_right_2);
    r3 = (r3 + r3_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r8_adde_left_2 = r8;
    r8_adde_right_2 = r8;
    r8_ca_2 = (xer >> 29) & 1u;
    r8 = (r8_adde_left_2 + r8_adde_right_2);
    r8 = (r8 + r8_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r8_adde_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r8_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7_adde_left_2 = r7;
    r7_adde_right_2 = r7;
    r7_ca_2 = (xer >> 29) & 1u;
    r7 = (r7_adde_left_2 + r7_adde_right_2);
    r7 = (r7 + r7_ca_2);
    r0 = (r8 - r6);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r8) >= static_cast<uint32_t>(r6) ? 1u : 0u) << 29);
    r9_not_2 = ~(r5);
    r9_ca_2 = (xer >> 29) & 1u;
    r9 = (r9_not_2 + r7);
    r9 = (r9 + r9_ca_2);
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(0))) {
        goto loc_804576D4;
    }
}

loc_804576C8:
{
    r8 = r0;
    r7 = r9;
    r0 = (r10 + 1);
}

loc_804576D4:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804576AC;
    }
}

loc_804576D8:
{
    r4_adde_left_3 = r4;
    r4_adde_right_3 = r4;
    r4_ca_3 = (xer >> 29) & 1u;
    r4 = (r4_adde_left_3 + r4_adde_right_3);
    r4 = (r4 + r4_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_adde_left_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r4_adde_right_3)) + (static_cast<uint64_t>(static_cast<uint32_t>(r4_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_adde_left_3 = r3;
    r3_adde_right_3 = r3;
    r3_ca_5 = (xer >> 29) & 1u;
    r3 = (r3_adde_left_3 + r3_adde_right_3);
    r3 = (r3 + r3_ca_5);
    r9 = MemoryInline::FlatRead32((r1 + 8));
    r10 = MemoryInline::FlatRead32((r1 + 12));
    r7 = (r9 ^ r10);
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804576FC;
    }
}

loc_804576F0:
{
}

loc_804576F4:
{
    r4_subfic_ra_3 = r4;
    r4 = (0 - r4_subfic_ra_3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(0) >= static_cast<uint32_t>(r4_subfic_ra_3) ? 1u : 0u) << 29);
    r3_subfze_src_3 = r3;
    r3_not_3 = ~(r3_subfze_src_3);
    r3_ca_6 = (xer >> 29) & 1u;
    r3 = (r3_not_3 + r3_ca_6);
}

loc_804576FC:
{
    goto loc_80457708;
}

loc_80457700:
{
    r4 = 0;
    r3 = 0;
}

loc_80457708:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804575D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804575D8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000006FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804575D8 func_804575D8 preserves=true fpr_mask=0x00000000
