#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004B108(CpuContext* ctx);
extern "C" uint64_t func_8004B108_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80212A90(CpuContext* ctx);
extern "C" uint64_t func_80212A90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027F33C(CpuContext* ctx);
extern "C" uint64_t func_8027F33C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8035FDD8(CpuContext* ctx);
extern "C" uint64_t func_8035FDD8_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80361D68(CpuContext* ctx);
extern "C" uint64_t func_80361D68_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_80361F10_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r30_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_80361F10;

loc_80361F10:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r26 = r3;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r30 = (r30_rot_0 & -8);
    r29 = (r30 + 7);
    ctx->lr = 0x80361F38u;
    if constexpr (KnownRegArgsCpuCall<0x8035FDD8u>(&func_8035FDD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8035FDD8_AB7 = func_8035FDD8_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8035FDD8_AB7);
        r4 = static_cast<uint32_t>(regargs_result_8035FDD8_AB7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8035FDD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead16((r26 + 962));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    r27 = (r3 + 3584);
    r31 = 0;
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 24), static_cast<uint16_t>(r0));
    r28 = 0;
}

loc_80361F5C:
{
    r3 = (r28 & 65535);
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl1_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl1_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl1_0x8029F758;
    }
}

loc_inl1_0x8029F754:
{
    r3 = 0;
}

loc_inl1_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl1_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r23 = r3;
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80361F70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_8036202C;
    }
}

loc_80361F74:
{
    r3 = (r28 & 65535);
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x80361F80u;
    if constexpr (KnownRegArgsCpuCall<0x8004B108u>(&func_8004B108)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004B108_12E2 = func_8004B108_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8004B108_12E2);
        r4 = static_cast<uint32_t>(regargs_result_8004B108_12E2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004B108u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_80361F84:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_8036202C;
    }
}

loc_80361F88:
{
    r3 = MemoryInline::FlatRead16((r23 + 10));
    // inline leaf 0x8029F718 (10 guest instruction(s))
}

loc_inl2_0x8029F718:
{
    r0 = (r3 & 65535);
}

loc_inl2_0x8029F720:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(132))) {
        goto loc_inl2_0x8029F728;
    }
}

loc_inl2_0x8029F724:
{
    r3 = 0;
}

loc_inl2_0x8029F728:
{
    r0 = (r3 & 65535);
    r4 = (r0 * 12);
    r3 = 0x805E0000u;
    r0 = (r3 + -14472);
    r3 = (r0 + r4);
}

loc_inl2_cont_8029F718:
{
    // end of inlined leaf 0x8029F718
    r24 = r3;
    r3 = MemoryInline::FlatRead8((r26 + 157));
    r4 = MemoryInline::FlatRead16((r23 + 10));
    ctx->lr = 0x80361FA0u;
    if constexpr (KnownRegArgsCpuCall<0x80212A90u>(&func_80212A90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80212A90_196D = func_80212A90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80212A90_196D);
        r4 = static_cast<uint32_t>(regargs_result_80212A90_196D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80212A90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80361FA4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8036202C;
    }
}

loc_80361FA8:
{
}

loc_80361FAC:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r31))) {
        goto loc_80362028;
    }
}

loc_80361FB0:
{
}

loc_80361FB4:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(r29))) {
        goto loc_80362028;
    }
}

loc_80361FB8:
{
    r0 = MemoryInline::FlatRead16((r26 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & -16);
    r25 = (r26 + r0);
    r0 = (r28 & 65535);
    MemoryInline::FlatWrite16((r25 + 812), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r23 + 10));
    MemoryInline::FlatWrite16((r25 + 814), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r25 + 804), r24);
    r0 = MemoryInline::FlatRead32((r24 + 4));
    MemoryInline::FlatWrite32((r25 + 808), r0);
    r23 = 0;
    r4 = MemoryInline::FlatRead32((r25 + 808));
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_80361FF4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_80361FFC;
    }
}

loc_80361FF8:
{
    r23 = (r23 | 4);
}

loc_80361FFC:
{
    r3 = r27;
    r4 = MemoryInline::FlatRead16((r25 + 814));
    ctx->lr = 0x80362008u;
    if constexpr (KnownRegArgsCpuCall<0x8027F33Cu>(&func_8027F33C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027F33C_2204 = func_8027F33C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F33C_2204);
        r4 = static_cast<uint32_t>(regargs_result_8027F33C_2204 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027F33Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8036200C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80362018;
    }
}

loc_80362010:
{
    r0 = (r23 | 32);
    r23 = (r0 & 65535);
}

loc_80362018:
{
    MemoryInline::FlatWrite16((r25 + 818), static_cast<uint16_t>(r23));
    r3 = MemoryInline::FlatRead16((r26 + 24));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r26 + 24), static_cast<uint16_t>(r0));
}

loc_80362028:
{
    r31 = (r31 + 1);
}

loc_8036202C:
{
    r28 = (r28 + 1);
}

loc_80362034:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(747))) {
        goto loc_80361F5C;
    }
}

loc_80362038:
{
    r3 = MemoryInline::FlatRead16((r26 + 24));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r26 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80362044:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_80362064;
    }
}

loc_80362048:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r26 + 12), static_cast<uint16_t>(r0));
}

loc_80362058:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80362064;
    }
}

loc_8036205C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 12), static_cast<uint16_t>(r0));
}

loc_80362064:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r4 = 8;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl3_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl3_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x802A8F8C;
    }
}

loc_inl3_0x802A8F84:
{
    r3 = 1;
    goto loc_inl3_cont_802A8F78;
}

loc_inl3_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl3_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl3_cont_802A8F78;
}

loc_inl3_return:
{
}

loc_inl3_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    MemoryInline::FlatWrite16((r26 + 20), static_cast<uint16_t>(r3));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8036207C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80362088;
    }
}

loc_80362080:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r26 + 20), static_cast<uint16_t>(r0));
}

loc_80362088:
{
    r3 = r26;
    ctx->lr = 0x80362090u;
    if constexpr (KnownRegArgsCpuCall<0x80361D68u>(&func_80361D68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80361D68_30FB = func_80361D68_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80361D68_30FB);
        r4 = static_cast<uint32_t>(regargs_result_80361D68_30FB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80361D68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80361F10(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80361F10_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80361F10 func_80361F10 preserves=true fpr_mask=0x00000000
