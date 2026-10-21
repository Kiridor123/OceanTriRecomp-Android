#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80527650_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x80527650u);
    goto loc_80527650;

loc_80527650:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80527658:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8052777C;
    }
}

loc_8052765C:
{
    r0 = (r4 + 3792);
    r7 = (r5 & 2147483647);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r3 + 20), r7);
}

loc_80527670:
{
    r6 = (r5 & -2147483648);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_805276B0;
    }
}

loc_80527678:
{
    r5 = 107347968;
    r0 = (r5 + 26214);
}

loc_80527684:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r0))) {
        goto loc_80527690;
    }
}

loc_80527688:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80527690:
{
    r0 = (r7 * 10);
    r4 = (r4 + -65536);
    r4 = (r4 + r0);
    r0 = (r4 + 3792);
    r0 = (r6 | r0);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_805276B0:
{
    r0 = (r7 + -128);
}

loc_805276B8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(127))) {
        goto loc_805276FC;
    }
}

loc_805276BC:
{
}

loc_805276C0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_805276E4;
    }
}

loc_805276C4:
{
}

loc_805276C8:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(160))) {
        goto loc_80527720;
    }
}

loc_805276CC:
{
    r5 = 0x80580000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r5 = (r5 + -25896);
    r5 = (r5 + r0);
    r7 = MemoryInline::FlatRead16((r5 + -256));
    goto loc_80527720;
}

loc_805276E4:
{
    r5 = 0x80580000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r5 = (r5 + -25832);
    r5 = (r5 + r0);
    r7 = MemoryInline::FlatRead16((r5 + -256));
    goto loc_80527720;
}

loc_805276FC:
{
}

loc_80527700:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(255))) {
        goto loc_80527720;
    }
}

loc_80527704:
{
    r5 = 107347968;
    r6 = 32;
    r0 = (r5 + 26214);
}

loc_80527714:
{
    if ((static_cast<uint32_t>(r7) > static_cast<uint32_t>(r0))) {
        goto loc_8052771C;
    }
}

loc_80527718:
{
    r6 = (r7 & 255);
}

loc_8052771C:
{
    r7 = r6;
}

loc_80527720:
{
    r5 = MemoryInline::FlatRead8((r3 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 17));
    r6 = (r5 + r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r5 = (r3 + r0);
    goto loc_80527748;
}

loc_80527738:
{
    r0 = MemoryInline::FlatRead16((r5 + -2));
    r6 = (r6 + -1);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r5 = (r5 + -2);
}

loc_80527748:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_80527750:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_80527738;
    }
}

loc_80527754:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 510);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r3_addr_0 = (r3 + r5);
    MemoryInline::FlatWrite16(r3_addr_0, static_cast<uint16_t>(r7));
    r4 = 0;
    r5 = MemoryInline::FlatRead8((r3 + 16));
    MemoryInline::FlatWrite32((r3 + 20), r4);
    r4 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r4));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8052777C:
{
    r0 = (r4 + 3792);
    r0 = (r0 & 65535);
}

loc_80527788:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_805277B4;
    }
}

loc_8052778C:
{
}

loc_80527790:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(61744))) {
        goto loc_805277A0;
    }
}

loc_80527794:
{
    r0 = 0x80000000u;
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_805277AC;
}

loc_805277A0:
{
    r4 = (r4 + -65536);
    r0 = (r4 + 3792);
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_805277AC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_805277B4:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80527650(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80527650_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80527650 func_80527650 preserves=true fpr_mask=0x00000000
