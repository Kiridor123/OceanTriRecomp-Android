#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CDCA0(CpuContext* ctx);
extern "C" uint64_t func_804CDCA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D7540(CpuContext* ctx);
extern "C" uint64_t func_804D7540_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804D7BF0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mdest_3 = 0;
    uint32_t r3_mdest_4 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_mrot_3 = 0;
    uint32_t r3_mrot_4 = 0;
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804D7BF0u);
    goto loc_804D7BF0;

loc_804D7BF0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
}

loc_804D7C08:
{
    r23 = r4;
    r27 = 0;
    r26 = 0;
    r25 = 0;
    r24 = 0;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804D7C44;
    }
}

loc_804D7C20:
{
    r3 = 0x80630000u;
    r5 = 0x80630000u;
    r3 = (r3 + -24308);
    r4 = 407;
    r5 = (r5 + -24268);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804D7C3Cu;
    if constexpr (KnownRegArgsCpuCall<0x804CDCA0u>(&func_804CDCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CDCA0_C74 = func_804CDCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804CDCA0_C74);
        r4 = static_cast<uint32_t>(regargs_result_804CDCA0_C74 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CDCA0u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = -1017;
    goto loc_804D7DB8;
}

loc_804D7C44:
{
    r29 = r3;
    r28 = 0;
    r30 = 1;
    r31 = 2;
    goto loc_804D7D94;
}

loc_804D7C58:
{
    r3 = r29;
    r4 = (r1 + 8);
    r5 = (r1 + 12);
    ctx->lr = 0x804D7C68u;
    if constexpr (KnownRegArgsCpuCall<0x804D7540u>(&func_804D7540)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804D7540_1446 = func_804D7540_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D7540_1446);
        r4 = static_cast<uint32_t>(regargs_result_804D7540_1446 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804D7540u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_804D7C6C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_804D7D8C;
    }
}

loc_804D7C70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804D7C78;
    }
}

loc_804D7C74:
{
    goto loc_804D7DB8;
}

loc_804D7C78:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_804D7C80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D7C90;
    }
}

loc_804D7C84:
{
}

loc_804D7C88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804D7D70;
    }
}

loc_804D7C8C:
{
    goto loc_804D7D8C;
}

loc_804D7C90:
{
}

loc_804D7C94:
{
    r5 = 0;
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_804D7CA4;
    }
}

loc_804D7C9C:
{
    r27 = r28;
    r26 = 1;
}

loc_804D7CA4:
{
    r0 = MemoryInline::FlatRead8((r29 + 25));
    r4 = 0;
    r3 = MemoryInline::FlatRead8((r29 + 24));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3_mrot_2 = (r3_rot_2 & 65280);
    r3_mdest_2 = (r3 & -65281);
    r3 = (r3_mdest_2 | r3_mrot_2);
    ctr = r31;
}

loc_804D7CB8:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D7CC8;
    }
}

loc_804D7CC4:
{
    r5 = (r5 + 1);
}

loc_804D7CC8:
{
    r4 = (r4 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D7CDC;
    }
}

loc_804D7CD8:
{
    r5 = (r5 + 1);
}

loc_804D7CDC:
{
    r4 = (r4 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D7CF0;
    }
}

loc_804D7CEC:
{
    r5 = (r5 + 1);
}

loc_804D7CF0:
{
    r4 = (r4 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D7D04;
    }
}

loc_804D7D00:
{
    r5 = (r5 + 1);
}

loc_804D7D04:
{
    r4 = (r4 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D7D18;
    }
}

loc_804D7D14:
{
    r5 = (r5 + 1);
}

loc_804D7D18:
{
    r4 = (r4 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D7D2C;
    }
}

loc_804D7D28:
{
    r5 = (r5 + 1);
}

loc_804D7D2C:
{
    r4 = (r4 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D7D40;
    }
}

loc_804D7D3C:
{
    r5 = (r5 + 1);
}

loc_804D7D40:
{
    r4 = (r4 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D7D54;
    }
}

loc_804D7D50:
{
    r5 = (r5 + 1);
}

loc_804D7D54:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804D7CB8;
    }
}

loc_804D7D5C:
{
}

loc_804D7D60:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r25))) {
        goto loc_804D7D8C;
    }
}

loc_804D7D64:
{
    r27 = r28;
    r25 = r5;
    goto loc_804D7D8C;
}

loc_804D7D70:
{
}

loc_804D7D74:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_804D7D8C;
    }
}

loc_804D7D78:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_804D7D80:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r24))) {
        goto loc_804D7D8C;
    }
}

loc_804D7D84:
{
    r27 = r28;
    r24 = r0;
}

loc_804D7D8C:
{
    r29 = (r29 + 216);
    r28 = (r28 + 1);
}

loc_804D7D94:
{
}

loc_804D7D98:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r23))) {
        goto loc_804D7C58;
    }
}

loc_804D7D9C:
{
}

loc_804D7DA0:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_804D7DB4;
    }
}

loc_804D7DA4:
{
}

loc_804D7DA8:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_804D7DB4;
    }
}

loc_804D7DAC:
{
    r3 = -1;
    goto loc_804D7DB8;
}

loc_804D7DB4:
{
    r3 = r27;
}

loc_804D7DB8:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D7BF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D7BF0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804D7BF0 func_804D7BF0 preserves=true fpr_mask=0x00000000
