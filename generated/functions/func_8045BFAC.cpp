#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8045BFAC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r12_stbu_ea_0 = 0;
    uint32_t r12_stbu_ea_1 = 0;
    uint32_t r12_stbu_ea_2 = 0;
    uint32_t r12_stbu_ea_3 = 0;
    uint32_t r12_stbu_ea_4 = 0;
    uint32_t r12_stbu_ea_5 = 0;
    uint32_t r3_addic_src_0 = 0;
    uint32_t r3_addic_src_1 = 0;
    uint32_t r3_addic_src_2 = 0;
    uint32_t r3_addic_src_3 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r6_addic_src_0 = 0;
    uint32_t r6_addic_src_1 = 0;
    uint32_t r6_addic_src_2 = 0;
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

    goto loc_8045BFAC;

loc_8045BFAC:
{
    r12 = (r3 + r5);
    r4 = (r4 + r5);
    r3 = (r12 & 3);
}

loc_8045BFB8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8045BFD0;
    }
}

loc_8045BFBC:
{
    r5 = (r5 - r3);
}

loc_8045BFC0:
{
    r4 = (r4 + -1);
    r0 = MemoryInline::FlatRead8(r4);
    r3_addic_src_2 = r3;
    r3 = (r3_addic_src_2 + -1);
}

loc_8045BFC8:
{
    r12_stbu_ea_2 = (r12 + -1);
    MemoryInline::FlatWrite8(r12_stbu_ea_2, static_cast<uint8_t>(r0));
    r12 = r12_stbu_ea_2;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8045BFC0;
    }
}

loc_8045BFD0:
{
    r10_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r10 = (r10_rot_0 & 24);
    r9 = (r4 & 3);
    r11 = (32 - r10);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r6 = (r6_rot_0 & 536870911);
    r0 = (4 - r9);
    r4 = (r4 + r0);
    r4 = (r4 + -4);
    r7 = MemoryInline::FlatRead32(r4);
}

loc_8045BFEC:
{
    r8 = MemoryInline::FlatRead32((r4 + -4));
    r0 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r11));
    r6_addic_src_2 = r6;
    r6 = (r6_addic_src_2 + -1);
}

loc_8045BFF8:
{
    r3 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r10));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r12 + -4), r0);
    r0 = PPC_Srw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r11));
    r4 = (r4 + -8);
    r7 = MemoryInline::FlatRead32(r4);
    r3 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r10));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r12 + -8), r0);
    r12 = (r12 + -8);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8045BFEC;
    }
}

loc_8045C01C:
{
    r0 = (r5 & 4);
}

loc_8045C020:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8045C038;
    }
}

loc_8045C024:
{
    r4 = (r4 + -4);
    r3 = MemoryInline::FlatRead32(r4);
    r0 = PPC_Srw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r11));
    r3 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r10));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r12 + -4), r0);
    r12 = (r12 + -4);
}

loc_8045C038:
{
    r5 = (r5 & 3);
}

loc_8045C03C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8045C040:
{
    r3 = (r4 + r9);
}

loc_8045C044:
{
    r3 = (r3 + -1);
    r0 = MemoryInline::FlatRead8(r3);
    r5_addic_src_2 = r5;
    r5 = (r5_addic_src_2 + -1);
}

loc_8045C04C:
{
    r12_stbu_ea_5 = (r12 + -1);
    MemoryInline::FlatWrite8(r12_stbu_ea_5, static_cast<uint8_t>(r0));
    r12 = r12_stbu_ea_5;
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8045C044;
    }
}

loc_8045C054:
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

extern "C" void func_8045BFAC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8045BFAC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FF9 gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8045BFAC func_8045BFAC preserves=true fpr_mask=0x00000000
