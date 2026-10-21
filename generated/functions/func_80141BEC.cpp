#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126B34(CpuContext* ctx);
extern "C" uint64_t func_80126B34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80141E20(CpuContext* ctx);
extern "C" uint64_t func_80141E20_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80337BD0(CpuContext* ctx);
extern "C" uint64_t func_80337BD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80141BEC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x80141BECu);
    goto loc_80141BEC;

loc_80141BEC:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r15 = r3;
    r16 = r4;
    r17 = r5;
    r18 = r6;
    r19 = r7;
    r26 = r8;
    r14 = r9;
    r20 = MemoryInline::FlatRead8((r1 + 91));
    r21 = MemoryInline::FlatRead32((r1 + 92));
    r22 = MemoryInline::FlatRead32((r1 + 96));
    r25 = 0;
    r3 = 0x806A0000u;
    r23 = (r3 + 31072);
    r24 = r10;
}

loc_80141C3C:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(0))) {
        goto loc_80141C48;
    }
}

loc_80141C40:
{
    r0 = (r10 | 2);
    r24 = (r0 & 255);
}

loc_80141C48:
{
}

loc_80141C4C:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_80141C58;
    }
}

loc_80141C50:
{
    r0 = (r24 | 4);
    r24 = (r0 & 255);
}

loc_80141C58:
{
    r3 = (r4 & 255);
    r4 = (r5 & 255);
    ctx->lr = 0x80141C64u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80140C64u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & 1);
    r3 = (r15 & 65535);
    r4 = (r18 & 255);
    r5 = (r24 & 255);
    ctx->lr = 0x80141C88u;
    if constexpr (KnownRegArgsCpuCall<0x80141E20u>(&func_80141E20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_80141E20_F6C = func_80141E20_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80141E20_F6C);
        r4 = static_cast<uint32_t>(regargs_result_80141E20_F6C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80141E20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = (r14 & 255);
    r27 = (r0 - r3);
    r0 = (r26 & 255);
}

loc_80141C98:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(r0))) {
        goto loc_80141CA0;
    }
}

loc_80141C9C:
{
    r27 = r0;
}

loc_80141CA0:
{
    r26 = 0;
    r14 = 0x806A0000u;
    r3 = (r14 + 27152);
    r31 = (r3 + 504);
    r0 = (r24 & 255);
    r30 = (r0 & 2);
    r29 = (r0 & 4);
}

loc_80141CBC:
{
}

loc_80141CC0:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80141CCC;
    }
}

loc_80141CC4:
{
    r3 = 1;
    goto loc_80141E08;
}

loc_80141CCC:
{
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_80141CD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80141DF4;
    }
}

loc_80141CD8:
{
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r15));
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r16));
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r17));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r19));
    MemoryInline::FlatWrite8((r31 + 7), static_cast<uint8_t>(r18));
    MemoryInline::FlatWrite8((r31 + 8), static_cast<uint8_t>(r24));
    MemoryInline::FlatWrite8((r31 + 10), static_cast<uint8_t>(r20));
}

loc_80141CF8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80141D08;
    }
}

loc_80141CFC:
{
    r3 = (r31 + 12);
    r4 = r21;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_80141D08:
{
}

loc_80141D0C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80141DE8;
    }
}

loc_80141D10:
{
    r3 = (r31 + 24);
    r4 = r22;
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    goto loc_80141DE8;
}

loc_80141D20:
{
    r0 = MemoryInline::FlatRead8(r23);
}

loc_80141D28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80141DE0;
    }
}

loc_80141D2C:
{
    r0 = MemoryInline::FlatRead8((r23 + 8));
}

loc_80141D34:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80141DE0;
    }
}

loc_80141D38:
{
    r3 = MemoryInline::FlatRead8((r23 + 2));
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_80141D44:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80141DE0;
    }
}

loc_80141D48:
{
    r4 = MemoryInline::FlatRead8((r31 + 8));
    r0 = (r4 & 8);
}

loc_80141D54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80141D68;
    }
}

loc_80141D58:
{
    r3 = MemoryInline::FlatRead8((r31 + 5));
    r0 = MemoryInline::FlatRead8((r23 + 3));
}

loc_80141D64:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80141DE0;
    }
}

loc_80141D68:
{
    r0 = (r4 & 1);
}

loc_80141D70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80141D88;
    }
}

loc_80141D74:
{
    r3 = MemoryInline::FlatRead8((r31 + 7));
    r0 = MemoryInline::FlatRead8((r23 + 10));
}

loc_80141D80:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80141DE0;
    }
}

loc_80141D84:
{
    goto loc_80141DB4;
}

loc_80141D88:
{
    r28 = MemoryInline::FlatRead8((r31 + 7));
}

loc_80141D90:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(255))) {
        goto loc_80141DB4;
    }
}

loc_80141D94:
{
    // inline leaf 0x802AFCD8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3013));
    // end of inlined leaf 0x802AFCD8
    r0 = r3;
    r3 = r23;
    r4 = (r0 & 255);
    r5 = r28;
    ctx->lr = 0x80141DACu;
    if constexpr (KnownRegArgsCpuCall<0x80126B34u>(&func_80126B34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126B34_2273 = func_80126B34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80126B34_2273);
        r4 = static_cast<uint32_t>(regargs_result_80126B34_2273 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80126B34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80141DB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80141DE0;
    }
}

loc_80141DB4:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r23 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r23 + 22));
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 9), static_cast<uint8_t>(r0));
    r3 = (r14 + 27152);
    r4 = 2;
    r5 = (r26 & 65535);
    ctx->lr = 0x80141DDCu;
    if constexpr (KnownRegArgsCpuCall<0x80337BD0u>(&func_80337BD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_80337BD0_278C = func_80337BD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80337BD0_278C);
        r4 = static_cast<uint32_t>(regargs_result_80337BD0_278C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80337BD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80141DF0;
}

loc_80141DE0:
{
    r25 = (r25 + 1);
    r23 = (r23 + 68);
}

loc_80141DE8:
{
}

loc_80141DEC:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(128))) {
        goto loc_80141D20;
    }
}

loc_80141DF0:
{
    r27 = (r27 + -1);
}

loc_80141DF4:
{
    r31 = (r31 + 36);
    r26 = (r26 + 1);
}

loc_80141E00:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(10))) {
        goto loc_80141CBC;
    }
}

loc_80141E04:
{
    r3 = 0;
}

loc_80141E08:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80141BEC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80141BEC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80141BEC func_80141BEC preserves=true fpr_mask=0x00000000
