#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80457948_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addze_src_0 = 0;
    uint32_t r3_addze_src_1 = 0;
    uint32_t r3_addze_src_2 = 0;
    uint32_t r3_addze_src_3 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_subfze_src_0 = 0;
    uint32_t r3_subfze_src_1 = 0;
    uint32_t r3_subfze_src_2 = 0;
    uint32_t r4_addic_src_0 = 0;
    uint32_t r4_addic_src_1 = 0;
    uint32_t r4_addic_src_2 = 0;
    uint32_t r4_addic_src_3 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mdest_1 = 0;
    uint32_t r4_mdest_2 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_mrot_1 = 0;
    uint32_t r4_mrot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_subfic_ra_0 = 0;
    uint32_t r4_subfic_ra_1 = 0;
    uint32_t r4_subfic_ra_2 = 0;
    uint32_t r6_addze_src_0 = 0;
    uint32_t r6_addze_src_1 = 0;
    uint32_t r6_addze_src_2 = 0;
    uint32_t r6_addze_src_3 = 0;
    uint32_t r6_ca_0 = 0;
    uint32_t r6_ca_1 = 0;
    uint32_t r6_ca_2 = 0;
    uint32_t r6_ca_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r9_rot_0 = 0;
    uint32_t r9_rot_1 = 0;
    uint32_t r9_rot_2 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80457948u);
    goto loc_80457948;

loc_80457948:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r5 = (r3 & -2147483648);
}

loc_80457950:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8045795C;
    }
}

loc_80457954:
{
    r4_subfic_ra_1 = r4;
    r4 = (0 - r4_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(0) >= static_cast<uint32_t>(r4_subfic_ra_1) ? 1u : 0u) << 29);
    r3_subfze_src_1 = r3;
    r3_not_1 = ~(r3_subfze_src_1);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r3_ca_1);
}

loc_8045795C:
{
    r7 = (r3 | r4);
    r6 = 0;
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804579E4;
    }
}

loc_80457968:
{
    r7 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r8 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r9_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(26));
    r9 = (r9_rot_1 & -134217728);
    r9 = (static_cast<int32_t>(r9) >> 31);
    r9 = (r9 & r8);
    r7 = (r7 + r9);
    r8 = (32 - r7);
    r9 = (r7 + -32);
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r7));
    r10 = PPC_Srw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r8));
    r3 = (r3 | r10);
    r10 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r9));
    r3 = (r3 | r10);
    r4 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r7));
    r6 = (r6 - r7);
    r7 = (r4 & 2047);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(1024));
}

loc_804579AC:
{
    r6 = (r6 + 1086);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804579CC;
    }
}

loc_804579B4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_804579C0;
    }
}

loc_804579B8:
{
    r7 = (r4 & 2048);
}

loc_804579BC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804579CC;
    }
}

loc_804579C0:
{
    r4_addic_src_1 = r4;
    r4 = (r4_addic_src_1 + 2048);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4_addic_src_1)) + static_cast<uint64_t>(static_cast<uint32_t>(2048)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r3_addze_src_1 = r3;
    r3_ca_3 = (xer >> 29) & 1u;
    r3 = (r3_addze_src_1 + r3_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_addze_src_1)) + static_cast<uint64_t>(static_cast<uint32_t>(0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r6_addze_src_1 = r6;
    r6_ca_1 = (xer >> 29) & 1u;
    r6 = (r6_addze_src_1 + r6_ca_1);
}

loc_804579CC:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(21));
    r4 = (r4_rot_1 & -1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r4_mrot_1 = (r4_rot_2 & -2097152);
    r4_mdest_1 = (r4 & 2097151);
    r4 = (r4_mdest_1 | r4_mrot_1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r3 = (r3_rot_1 & 1048575);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(20));
    r6 = (r6_rot_1 & -1048576);
    r3 = (r6 | r3);
    r3 = (r5 | r3);
}

loc_804579E4:
{
    stackword1 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    stackword2 = r4;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword2));
    r1 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80457948(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80457948_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FA gpr_write=0x000007FA gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80457948 func_80457948 preserves=true fpr_mask=0x00000000
