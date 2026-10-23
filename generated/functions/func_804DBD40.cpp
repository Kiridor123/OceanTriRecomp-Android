#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804DBF90(CpuContext* ctx);
extern "C" uint64_t func_804DBF90_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_804DBD40_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
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
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint32_t r25_addr_5 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r30_mdest_0 = 0;
    uint32_t r30_mdest_1 = 0;
    uint32_t r30_mdest_2 = 0;
    uint32_t r30_mdest_3 = 0;
    uint32_t r30_mdest_4 = 0;
    uint32_t r30_mrot_0 = 0;
    uint32_t r30_mrot_1 = 0;
    uint32_t r30_mrot_2 = 0;
    uint32_t r30_mrot_3 = 0;
    uint32_t r30_mrot_4 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r31_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
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

    goto loc_804DBD40;

loc_804DBD40:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r0 = (r4 + -12);
    r27 = 0x80630000u;
}

loc_804DBD60:
{
    r25 = r3;
    r26 = r4;
    r27 = (r27 + -23048);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(16372))) {
        goto loc_804DBF6C;
    }
}

loc_804DBD70:
{
    r31 = (r3 + r4);
    r0 = 37;
    MemoryInline::FlatWrite32((r13 + -14796), r0);
    r4 = (r13 + -19736);
    r5 = 4;
    r31 = (r31 + -4);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_ED7 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_ED7);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_ED7 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804DBD90:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804DBF6C;
    }
}

loc_804DBD94:
{
    r3 = r31;
    r4 = (r13 + -19728);
    r5 = 4;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_1239 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_1239);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_1239 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804DBDA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804DBF6C;
    }
}

loc_804DBDAC:
{
}

loc_804DBDB0:
{
    if ((static_cast<uint32_t>(r26) >= static_cast<uint32_t>(16384))) {
        goto loc_804DBDDC;
    }
}

loc_804DBDB4:
{
    r22 = (16384 - r26);
    r3 = r31;
    r5 = r22;
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = (r31 + r22);
    r4 = (r13 + -19728);
    r3 = r31;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804DBDDC:
{
    r0 = (r25 + 6);
}

loc_804DBDE4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r31))) {
        goto loc_804DBDF0;
    }
}

loc_804DBDE8:
{
    r0 = 0;
    goto loc_804DBE00;
}

loc_804DBDF0:
{
    r3 = MemoryInline::FlatRead8((r25 + 4));
    r0 = 1;
    r30 = MemoryInline::FlatRead8((r25 + 5));
    r30_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r30_mrot_1 = (r30_rot_1 & 65280);
    r30_mdest_1 = (r30 & -65281);
    r30 = (r30_mdest_1 | r30_mrot_1);
}

loc_804DBE00:
{
}

loc_804DBE04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DBF6C;
    }
}

loc_804DBE08:
{
    r29 = (r25 + 6);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r29 + r0);
    r23 = 0;
    r0 = (r3 + 2);
    r24 = r29;
    r28 = (r0 - r25);
    goto loc_804DBE6C;
}

loc_804DBE28:
{
}

loc_804DBE2C:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(r26))) {
        goto loc_804DBF6C;
    }
}

loc_804DBE30:
{
    r0 = (r24 - r25);
}

loc_804DBE38:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r26))) {
        goto loc_804DBF6C;
    }
}

loc_804DBE3C:
{
    r0 = MemoryInline::FlatRead16(r24);
}

loc_804DBE44:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_804DBF6C;
    }
}

loc_804DBE48:
{
    r3 = (r25 + r28);
    r4 = (r1 + 8);
    ctx->lr = 0x804DBE54u;
    if constexpr (KnownRegArgsCpuCall<0x804DBF90u>(&func_804DBF90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_804DBF90_1E24 = func_804DBF90_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_804DBF90_1E24);
        r4 = static_cast<uint32_t>(regargs_result_804DBF90_1E24 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x804DBF90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_804DBE58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804DBF6C;
    }
}

loc_804DBE5C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r24 = (r24 + 2);
    r23 = (r23 + 1);
    r28 = (r28 + r0);
}

loc_804DBE6C:
{
}

loc_804DBE70:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(r30))) {
        goto loc_804DBE28;
    }
}

loc_804DBE74:
{
}

loc_804DBE78:
{
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(r26))) {
        goto loc_804DBF6C;
    }
}

loc_804DBE7C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r29_addr_1 = (r29 + r0);
    r0 = MemoryInline::FlatRead16(r29_addr_1);
}

loc_804DBE88:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_804DBF6C;
    }
}

loc_804DBE8C:
{
    r3 = (r31 + -72);
    r0 = (r25 + r28);
}

loc_804DBE98:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r3))) {
        goto loc_804DBF6C;
    }
}

loc_804DBE9C:
{
    r28 = (r3 - r0);
    r5 = (r31 - r3);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r13 + -14796));
    r31 = (r31 + -2);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r26 = (r27 + r0);
    goto loc_804DBF40;
}

loc_804DBEC0:
{
    r3 = r22;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80456C40_2929 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_2929);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_2929 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r21 = r3;
    r24 = r29;
    r23 = 0;
    goto loc_804DBF34;
}

loc_804DBED8:
{
    r0 = MemoryInline::FlatRead16(r24);
    r4 = (r25 + r0);
    r25_addr_3 = (r25 + r0);
    r0 = MemoryInline::FlatRead8(r25_addr_3);
    r3 = (r0 & 31);
    r0 = (r3 + 1);
}

loc_804DBEF0:
{
    if ((static_cast<uint32_t>(r21) != static_cast<uint32_t>(r0))) {
        goto loc_804DBF2C;
    }
}

loc_804DBEF4:
{
    r3 = r22;
    r5 = r21;
    r4 = (r4 + 1);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_2D80 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_2D80);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_2D80 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804DBF08:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804DBF2C;
    }
}

loc_804DBF0C:
{
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r3 = (r29 + r3);
    r0 = (0 - r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r3 = (r3 - r25);
    r31_addr_2 = (r31 + r0);
    MemoryInline::FlatWrite16(r31_addr_2, static_cast<uint16_t>(r3));
    goto loc_804DBF3C;
}

loc_804DBF2C:
{
    r24 = (r24 + 2);
    r23 = (r23 + 1);
}

loc_804DBF34:
{
}

loc_804DBF38:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(r30))) {
        goto loc_804DBED8;
    }
}

loc_804DBF3C:
{
    r27 = (r27 + 8);
}

loc_804DBF40:
{
}

loc_804DBF44:
{
    if ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r26))) {
        goto loc_804DBF54;
    }
}

loc_804DBF48:
{
    r22 = MemoryInline::FlatRead32(r27);
}

loc_804DBF50:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_804DBEC0;
    }
}

loc_804DBF54:
{
    r0 = (r31 - r25);
    MemoryInline::FlatWrite32((r13 + -14792), r0);
    r3 = 0;
    MemoryInline::FlatWrite32((r13 + -14800), r30);
    MemoryInline::FlatWrite32((r13 + -14804), r28);
    goto loc_804DBF70;
}

loc_804DBF6C:
{
    r3 = 2;
}

loc_804DBF70:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
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

extern "C" void func_804DBD40(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DBD40_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0x23 cr_write=0x23 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804DBD40 func_804DBD40 preserves=true fpr_mask=0x00000000
