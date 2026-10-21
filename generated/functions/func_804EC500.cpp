#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804EC500_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r9_rot_0 = 0;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804EC500u);
    goto loc_804EC500;

loc_804EC500:
{
    r6 = MemoryInline::FlatRead16((r5 + 44));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 44));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r0 - r6);
    if ((static_cast<int32_t>(r9) >= static_cast<int32_t>(0))) {
        goto loc_804EC514;
    }
}

loc_804EC510:
{
    r9 = (r6 - r0);
}

loc_804EC514:
{
    r8 = MemoryInline::FlatRead16((r5 + 42));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r0 = (r9 ^ 12);
    r7 = MemoryInline::FlatRead16((r4 + 42));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r9);
    r0 = (r6 - r0);
    r11 = (r7 - r8);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & 1);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_804EC53C;
    }
}

loc_804EC538:
{
    r11 = (r8 - r7);
}

loc_804EC53C:
{
    r8 = MemoryInline::FlatRead16((r5 + 46));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r0 = (r11 ^ 12);
    r7 = MemoryInline::FlatRead16((r4 + 46));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r6 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r11);
    r0 = (r6 - r0);
    r11 = (r7 - r8);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(0))) {
        goto loc_804EC564;
    }
}

loc_804EC560:
{
    r11 = (r8 - r7);
}

loc_804EC564:
{
    r6 = (r11 ^ 12);
    r0 = (r0 | r9);
    r7 = (static_cast<int32_t>(r6) >> 1);
    r6 = (r6 & r11);
    r6 = (r7 - r6);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & 1);
    r0 = (r6 | r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EC5B8;
    }
}

loc_804EC584:
{
    r7 = MemoryInline::FlatRead16((r3 + 2300));
    r6 = (r13 + -19576);
    r0 = (r7 + 1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r0));
    r7 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r6 + 4));
}

loc_804EC5A0:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r0))) {
        goto loc_804EC600;
    }
}

loc_804EC5A4:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r0));
    r6 = 1;
    MemoryInline::FlatWrite16((r3 + 2306), static_cast<uint16_t>(r0));
    goto loc_804EC604;
}

loc_804EC5B8:
{
    r8 = (r13 + -19568);
    r7 = MemoryInline::FlatRead16((r3 + 2306));
    r6 = MemoryInline::FlatRead16((r8 + 4));
    r7 = (r7 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r7), static_cast<int32_t>(r6));
    r0 = (r0 * r6);
    r0 = (r7 - r0);
    MemoryInline::FlatWrite16((r3 + 2306), static_cast<uint16_t>(r0));
    r7 = (r0 & 65535);
    r6 = MemoryInline::FlatRead16((r8 + 4));
    r0 = (r6 + -1);
}

loc_804EC5E8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r0))) {
        goto loc_804EC600;
    }
}

loc_804EC5EC:
{
    r6 = MemoryInline::FlatRead16((r3 + 2300));
}

loc_804EC5F4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804EC600;
    }
}

loc_804EC5F8:
{
    r0 = (r6 + -1);
    MemoryInline::FlatWrite16((r3 + 2300), static_cast<uint16_t>(r0));
}

loc_804EC600:
{
    r6 = 0;
}

loc_804EC604:
{
    r7 = MemoryInline::FlatRead8((r5 + 48));
    r0 = (r10 | r6);
    r3 = MemoryInline::FlatRead8((r4 + 48));
    r10 = (r0 & 255);
    r7 = (static_cast<int32_t>(static_cast<int8_t>(r7)));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r6 = (r3 - r7);
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_804EC628;
    }
}

loc_804EC624:
{
    r6 = (r7 - r3);
}

loc_804EC628:
{
    r5 = MemoryInline::FlatRead8((r5 + 49));
    r0 = (r6 ^ 1);
    r4 = MemoryInline::FlatRead8((r4 + 49));
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r6);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = (r3 - r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r6 = (r4 - r5);
    r10 = (r10 | r0);
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(0))) {
        goto loc_804EC65C;
    }
}

loc_804EC658:
{
    r6 = (r5 - r4);
}

loc_804EC65C:
{
    r0 = (r6 ^ 1);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r0 & r6);
    r0 = (r3 - r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r10 = (r10 | r0);
}

loc_804ECA4C:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = (r10 & 255);
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804EC500(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804EC500_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000025FB gpr_write=0xF0000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804EC500 func_804EC500 preserves=true fpr_mask=0x00000000
