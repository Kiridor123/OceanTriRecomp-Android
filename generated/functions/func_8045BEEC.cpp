#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8045BEEC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r3_stbu_ea_0 = 0;
    uint32_t r3_stbu_ea_1 = 0;
    uint32_t r3_stbu_ea_2 = 0;
    uint32_t r3_stbu_ea_3 = 0;
    uint32_t r3_stbu_ea_4 = 0;
    uint32_t r3_stbu_ea_5 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r6_addic_src_0 = 0;
    uint32_t r6_addic_src_1 = 0;
    uint32_t r6_addic_src_2 = 0;
    uint32_t r6_addic_src_3 = 0;
    uint32_t r6_addic_src_4 = 0;
    uint32_t r6_addic_src_5 = 0;
    uint32_t r6_rot_0 = 0;

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

    MKW_GUEST_ENTER(0x8045BEECu);
    goto loc_8045BEEC;

loc_8045BEEC:
{
    r0 = (0 - r3);
    r7 = (r4 + -1);
    r6 = (r0 & 3);
}

loc_8045BEF8:
{
    r3 = (r3 + -1);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8045BF14;
    }
}

loc_8045BF00:
{
    r5 = (r5 - r6);
}

loc_8045BF04:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8(r7);
    r6_addic_src_2 = r6;
    r6 = (r6_addic_src_2 + -1);
}

loc_8045BF0C:
{
    r3_stbu_ea_2 = (r3 + 1);
    MemoryInline::FlatWrite8(r3_stbu_ea_2, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_2;
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8045BF04;
    }
}

loc_8045BF14:
{
    r0 = (r7 + 1);
    r4 = (r3 + -3);
    r10 = (r0 & 3);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r6 = (r6_rot_0 & 536870911);
    r7 = (r7 - r10);
    r11_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r11 = (r11_rot_0 & 24);
    r7 = (r7 + 1);
    r8 = MemoryInline::FlatRead32(r7);
    r12 = (32 - r11);
}

loc_8045BF34:
{
    r9 = MemoryInline::FlatRead32((r7 + 4));
    r3 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r11));
    r6_addic_src_5 = r6;
    r6 = (r6_addic_src_5 + -1);
}

loc_8045BF40:
{
    r0 = PPC_Srw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r12));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r3 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r11));
    r7 = (r7 + 8);
    r8 = MemoryInline::FlatRead32(r7);
    r0 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r12));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = (r4 + 8);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8045BF34;
    }
}

loc_8045BF64:
{
    r0 = (r5 & 4);
}

loc_8045BF68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045BF80;
    }
}

loc_8045BF6C:
{
    r7 = (r7 + 4);
    r0 = MemoryInline::FlatRead32(r7);
    r3 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r11));
    r0 = PPC_Srw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r12));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    r4 = (r4 + 4);
}

loc_8045BF80:
{
    r5 = (r5 & 3);
}

loc_8045BF84:
{
    r6 = (r7 + 3);
    r3 = (r4 + 3);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8045BF90:
{
    r0 = (4 - r10);
    r6 = (r6 - r0);
}

loc_8045BF98:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8(r6);
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + -1);
}

loc_8045BFA0:
{
    r3_stbu_ea_5 = (r3 + 1);
    MemoryInline::FlatWrite8(r3_stbu_ea_5, static_cast<uint8_t>(r0));
    r3 = r3_stbu_ea_5;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045BF98;
    }
}

loc_8045BFA8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8045BEEC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045BEEC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045BEEC func_8045BEEC preserves=true fpr_mask=0x00000000
