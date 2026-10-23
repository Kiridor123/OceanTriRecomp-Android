#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80517588_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r7_ca_0 = 0;
    uint32_t r7_ca_1 = 0;
    uint32_t r7_ca_2 = 0;
    uint32_t r7_ca_3 = 0;
    uint32_t r7_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80517588;

loc_80517588:
{
}

loc_8051758C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_80517598;
    }
}

loc_80517590:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80517598:
{
    r0 = MemoryInline::FlatRead8(r3);
    r5 = (r4 + -8);
    r5 = PPC_CntlzwInline(static_cast<uint32_t>(r5));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r6 ^ 55);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(27));
    r7 = (r7_rot_0 & 134217727);
    r5 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r6);
    r0 = (r5 - r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r7 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805175D0;
    }
}

loc_805175C8:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_805175D0:
{
    r11 = 0;
    r12 = 0;
    r9 = 65;
    r8 = 0;
    r6 = 90;
    ctr = r4;
}

loc_805175EC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_805176A4;
    }
}

loc_805175F0:
{
    r0 = MemoryInline::FlatRead8(r3);
    r10 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5 = (static_cast<int32_t>(r10) >> 31);
    r0 = (r10 - r9);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r10) >= static_cast<uint32_t>(r9) ? 1u : 0u) << 29);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r7_ca_2 = (xer >> 29) & 1u;
    r7 = (r5 + r8);
    r7 = (r7 + r7_ca_2);
    r5 = (static_cast<int32_t>(r6) >> 31);
    r0 = (r6 - r10);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r10) ? 1u : 0u) << 29);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r5 + r4);
    r0 = (r0 + r0_ca_2);
    r0 = (r7 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80517620;
    }
}

loc_8051761C:
{
    r10 = (r10 + 32);
}

loc_80517620:
{
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r10)));
}

loc_80517628:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(48))) {
        goto loc_80517648;
    }
}

loc_8051762C:
{
}

loc_80517630:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(57))) {
        goto loc_80517648;
    }
}

loc_80517634:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r12 = 1;
    r4 = (r4 + r0);
    r11 = (r4 + -48);
    goto loc_8051769C;
}

loc_80517648:
{
}

loc_8051764C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(97))) {
        goto loc_8051766C;
    }
}

loc_80517650:
{
}

loc_80517654:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(102))) {
        goto loc_8051766C;
    }
}

loc_80517658:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r12 = 1;
    r4 = (r4 + r0);
    r11 = (r4 + -87);
    goto loc_8051769C;
}

loc_8051766C:
{
}

loc_80517670:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_80517684;
    }
}

loc_80517674:
{
}

loc_80517678:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(32))) {
        goto loc_805176A4;
    }
}

loc_8051767C:
{
}

loc_80517680:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_805176A4;
    }
}

loc_80517684:
{
}

loc_80517688:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(0))) {
        goto loc_80517694;
    }
}

loc_8051768C:
{
}

loc_80517690:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(32))) {
        goto loc_8051769C;
    }
}

loc_80517694:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8051769C:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805175F0;
    }
}

loc_805176A4:
{
    r3 = r11;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80517588(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80517588_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80517588 func_80517588 preserves=true fpr_mask=0x00000000
