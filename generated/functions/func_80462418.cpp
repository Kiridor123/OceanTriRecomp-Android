#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80462418_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r6_sthu_ea_0 = 0;
    uint32_t r6_sthu_ea_1 = 0;
    uint32_t r6_sthu_ea_10 = 0;
    uint32_t r6_sthu_ea_2 = 0;
    uint32_t r6_sthu_ea_3 = 0;
    uint32_t r6_sthu_ea_4 = 0;
    uint32_t r6_sthu_ea_5 = 0;
    uint32_t r6_sthu_ea_6 = 0;
    uint32_t r6_sthu_ea_7 = 0;
    uint32_t r6_sthu_ea_8 = 0;
    uint32_t r6_sthu_ea_9 = 0;

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

    goto loc_80462418;

loc_80462418:
{
}

loc_8046241C:
{
    r8 = 0;
    MemoryInline::FlatWrite16((r4 + -2), static_cast<uint16_t>(r8));
    r6 = (r4 + -2);
    r7 = 0;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8046245C;
    }
}

loc_80462430:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80462438:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8046245C;
    }
}

loc_8046243C:
{
    r0 = MemoryInline::FlatRead8((r5 + 3));
}

loc_80462444:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80462454;
    }
}

loc_80462448:
{
    r0 = MemoryInline::FlatRead16((r5 + 6));
}

loc_80462450:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(111))) {
        goto loc_8046245C;
    }
}

loc_80462454:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8046245C:
{
    r9 = MemoryInline::FlatRead16((r5 + 6));
}

loc_80462464:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(100))) {
        goto loc_80462494;
    }
}

loc_80462468:
{
}

loc_8046246C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(105))) {
        goto loc_80462494;
    }
}

loc_80462470:
{
}

loc_80462474:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(111))) {
        goto loc_804624B8;
    }
}

loc_80462478:
{
}

loc_8046247C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(117))) {
        goto loc_804624C8;
    }
}

loc_80462480:
{
}

loc_80462484:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(120))) {
        goto loc_804624D8;
    }
}

loc_80462488:
{
}

loc_8046248C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(88))) {
        goto loc_804624D8;
    }
}

loc_80462490:
{
    goto loc_804624E4;
}

loc_80462494:
{
}

loc_80462498:
{
    r0 = 10;
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_804624E4;
    }
}

loc_804624A0:
{
    r8 = (r3 + -2147483648);
}

loc_804624A8:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(0))) {
        goto loc_804624B0;
    }
}

loc_804624AC:
{
    r3 = (0 - r3);
}

loc_804624B0:
{
    r8 = 1;
    goto loc_804624E4;
}

loc_804624B8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = 8;
    goto loc_804624E4;
}

loc_804624C8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = 10;
    goto loc_804624E4;
}

loc_804624D8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
    r0 = 16;
}

loc_804624E4:
{
    r9 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r9 = (r9 * r0);
    r11 = (r3 - r9);
    r3 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_804624F8:
{
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(10))) {
        goto loc_80462504;
    }
}

loc_804624FC:
{
    r11 = (r11 + 48);
    goto loc_8046251C;
}

loc_80462504:
{
    r9 = MemoryInline::FlatRead16((r5 + 6));
    r10 = (r11 + 55);
}

loc_80462510:
{
    if ((static_cast<uint32_t>(r9) != static_cast<uint32_t>(120))) {
        goto loc_80462518;
    }
}

loc_80462514:
{
    r10 = (r11 + 87);
}

loc_80462518:
{
    r11 = r10;
}

loc_8046251C:
{
}

loc_80462520:
{
    MemoryInline::FlatWrite16((r6 + -2), static_cast<uint16_t>(r11));
    r6 = (r6 + -2);
    r7 = (r7 + 1);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804624E4;
    }
}

loc_80462530:
{
}

loc_80462534:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_8046255C;
    }
}

loc_80462538:
{
    r3 = MemoryInline::FlatRead8((r5 + 3));
}

loc_80462540:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8046255C;
    }
}

loc_80462544:
{
    r3 = MemoryInline::FlatRead16(r6);
}

loc_8046254C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(48))) {
        goto loc_8046255C;
    }
}

loc_80462550:
{
    r3 = 48;
    r6_sthu_ea_1 = (r6 + -2);
    MemoryInline::FlatWrite16(r6_sthu_ea_1, static_cast<uint16_t>(r3));
    r6 = r6_sthu_ea_1;
    r7 = (r7 + 1);
}

loc_8046255C:
{
    r3 = MemoryInline::FlatRead8(r5);
}

loc_80462564:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_804625B0;
    }
}

loc_80462568:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
}

loc_80462570:
{
    MemoryInline::FlatWrite32((r5 + 12), r3);
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80462584;
    }
}

loc_80462578:
{
    r3 = MemoryInline::FlatRead8((r5 + 1));
}

loc_80462580:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80462590;
    }
}

loc_80462584:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r3 = (r3 + -1);
    MemoryInline::FlatWrite32((r5 + 12), r3);
}

loc_80462590:
{
}

loc_80462594:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_804625B0;
    }
}

loc_80462598:
{
    r3 = MemoryInline::FlatRead8((r5 + 3));
}

loc_804625A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804625B0;
    }
}

loc_804625A4:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r3 = (r3 + -2);
    MemoryInline::FlatWrite32((r5 + 12), r3);
}

loc_804625B0:
{
    r4 = (r4 - r6);
    r9 = MemoryInline::FlatRead32((r5 + 12));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r3 = (r3 + r4);
    r3 = (static_cast<int32_t>(r3) >> 1);
    r3 = (r9 + r3);
}

loc_804625CC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(509))) {
        goto loc_804625D8;
    }
}

loc_804625D0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804625D8:
{
    r4 = 48;
    goto loc_804625E8;
}

loc_804625E0:
{
    r6_sthu_ea_4 = (r6 + -2);
    MemoryInline::FlatWrite16(r6_sthu_ea_4, static_cast<uint16_t>(r4));
    r6 = r6_sthu_ea_4;
    r7 = (r7 + 1);
}

loc_804625E8:
{
    r3 = MemoryInline::FlatRead32((r5 + 12));
}

loc_804625F0:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r3))) {
        goto loc_804625E0;
    }
}

loc_804625F4:
{
}

loc_804625F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_80462618;
    }
}

loc_804625FC:
{
    r0 = MemoryInline::FlatRead8((r5 + 3));
}

loc_80462604:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80462618;
    }
}

loc_80462608:
{
    r3 = MemoryInline::FlatRead16((r5 + 6));
    r0 = 48;
    MemoryInline::FlatWrite16((r6 + -2), static_cast<uint16_t>(r3));
    r6_sthu_ea_5 = (r6 + -4);
    MemoryInline::FlatWrite16(r6_sthu_ea_5, static_cast<uint16_t>(r0));
    r6 = r6_sthu_ea_5;
}

loc_80462618:
{
}

loc_8046261C:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8046262C;
    }
}

loc_80462620:
{
    r0 = 45;
    r6_sthu_ea_7 = (r6 + -2);
    MemoryInline::FlatWrite16(r6_sthu_ea_7, static_cast<uint16_t>(r0));
    r6 = r6_sthu_ea_7;
    goto loc_80462654;
}

loc_8046262C:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_80462634:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80462644;
    }
}

loc_80462638:
{
    r0 = 43;
    r6_sthu_ea_8 = (r6 + -2);
    MemoryInline::FlatWrite16(r6_sthu_ea_8, static_cast<uint16_t>(r0));
    r6 = r6_sthu_ea_8;
    goto loc_80462654;
}

loc_80462644:
{
}

loc_80462648:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80462654;
    }
}

loc_8046264C:
{
    r0 = 32;
    r6_sthu_ea_9 = (r6 + -2);
    MemoryInline::FlatWrite16(r6_sthu_ea_9, static_cast<uint16_t>(r0));
    r6 = r6_sthu_ea_9;
}

loc_80462654:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80462418(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80462418_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FD9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80462418 func_80462418 preserves=true fpr_mask=0x00000000
