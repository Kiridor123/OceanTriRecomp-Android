#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8033DAB4(CpuContext* ctx);
extern "C" uint64_t func_8033DAB4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8033DDC4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8033DDC4u);
    goto loc_8033DDC4;

loc_8033DDC4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r23 = r3;
    r24 = r4;
    r3 = (r3 + 24);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r24)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r27 + 7);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r25 = 0;
    r30 = 0;
    MemoryInline::FlatWrite16((r23 + 62), static_cast<uint16_t>(r30));
    r29 = 1;
    r31 = 1;
}

loc_8033DE18:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead32((r3 + 20892));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r29)));
    r0 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r0 = (r3 & r0);
}

loc_8033DE30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8033DF10;
    }
}

loc_8033DE34:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
}

loc_8033DE3C:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(r0))) {
        goto loc_8033DF0C;
    }
}

loc_8033DE40:
{
}

loc_8033DE44:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r26))) {
        goto loc_8033DF0C;
    }
}

loc_8033DE48:
{
    r4 = (r29 & 255);
    r0 = MemoryInline::FlatRead16((r23 + 62));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r23 + r0);
    MemoryInline::FlatWrite8((r3 + 24), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead16((r23 + 62));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r23 + r0);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r30));
    r28 = 0;
    goto loc_8033DEE0;
}

loc_8033DE70:
{
    r7 = MemoryInline::FlatRead16((r23 + 62));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r3 = (r23 + r7);
    r5 = MemoryInline::FlatRead8((r3 + 24));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r3 = (r6 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8033DE8C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8033DEB0;
    }
}

loc_8033DE90:
{
    r0 = MemoryInline::FlatRead16((r23 + 52));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033DE98:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_8033DEB0;
    }
}

loc_8033DE9C:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = (r23 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 36));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r0));
}

loc_8033DEB0:
{
    r3 = r23;
    r0 = MemoryInline::FlatRead16((r23 + 62));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r23 + r0);
    r4 = MemoryInline::FlatRead8((r4 + 24));
    ctx->lr = 0x8033DEC4u;
    if constexpr (KnownRegArgsCpuCall<0x8033DAB4u>(&func_8033DAB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_8033DAB4_13A4 = func_8033DAB4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8033DAB4_13A4);
        r4 = static_cast<uint32_t>(regargs_result_8033DAB4_13A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8033DAB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
    }
    r0 = MemoryInline::FlatRead16((r23 + 62));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r4 = (r23 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 36));
    r0 = (r0 | r3);
    MemoryInline::FlatWrite16((r4 + 36), static_cast<uint16_t>(r0));
    r28 = (r28 + 1);
}

loc_8033DEE0:
{
    r6 = MemoryInline::FlatRead32((r23 + 144));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r3 = MemoryInline::FlatRead32((r23 + 148));
    r0 = MemoryInline::FlatRead8(r6);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_8033DEFC:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8033DE70;
    }
}

loc_8033DF00:
{
    r3 = MemoryInline::FlatRead16((r23 + 62));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r23 + 62), static_cast<uint16_t>(r0));
}

loc_8033DF0C:
{
    r25 = (r25 + 1);
}

loc_8033DF10:
{
    r29 = (r29 + 1);
}

loc_8033DF18:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(28))) {
        goto loc_8033DE18;
    }
}

loc_8033DF1C:
{
    r3 = MemoryInline::FlatRead16((r23 + 62));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r23 + 56));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033DF28:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_8033DF38;
    }
}

loc_8033DF2C:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r23 + 56), static_cast<uint16_t>(r0));
}

loc_8033DF38:
{
    MemoryInline::FlatWrite16((r23 + 58), static_cast<uint16_t>(r24));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r25)));
    r4 = 8;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl1_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x802A8F8C;
    }
}

loc_inl1_0x802A8F84:
{
    r3 = 1;
    goto loc_inl1_cont_802A8F78;
}

loc_inl1_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl1_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl1_cont_802A8F78;
}

loc_inl1_return:
{
}

loc_inl1_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    MemoryInline::FlatWrite16((r23 + 60), static_cast<uint16_t>(r3));
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8033DDC4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033DDC4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8033DDC4 func_8033DDC4 preserves=true fpr_mask=0x00000000
