#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80049240(CpuContext* ctx);
extern "C" uint64_t func_80049240_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_800DBCE8(CpuContext* ctx);
extern "C" uint64_t func_800DBCE8_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802121A0(CpuContext* ctx);
extern "C" uint64_t func_802121A0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802125A4(CpuContext* ctx);
extern "C" uint64_t func_802125A4_ra218_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_80321894(CpuContext* ctx);
extern "C" uint64_t func_80321894_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8039424C(CpuContext* ctx);
extern "C" uint64_t func_8039424C_ra0_0_18_0(CpuContext*);
extern "C" void func_803947BC(CpuContext* ctx);
extern "C" uint64_t func_803947BC_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_8039492C(CpuContext* ctx);
extern "C" uint64_t func_8039492C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_80394A54(CpuContext* ctx);
extern "C" uint64_t func_80394A54_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80394AC8(CpuContext* ctx);
extern "C" uint64_t func_80394AC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80394C38(CpuContext* ctx);
extern "C" uint64_t func_80394C38_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042B744(CpuContext* ctx);
extern "C" uint64_t func_8042B744_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8042BA9C(CpuContext* ctx);
extern "C" uint32_t func_8042BA9C_ra0_0_8_0(CpuContext*);

extern "C" uint64_t func_80394264_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80394264u);
    goto loc_80394264;

loc_80394264:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r3 = 0x806B0000u;
    r28 = (r3 + -12348);
    r30 = MemoryInline::FlatRead32((r28 + 172));
    r3 = MemoryInline::FlatRead8((r30 + 585));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    // inline leaf 0x8042A700 (11 guest instruction(s))
}

loc_inl1_0x8042A700:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r4 = MemoryInline::FlatRead32((r4 + 360));
    r0 = (r3 * 692);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl1_0x8042A718:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x8042A724;
    }
}

loc_inl1_0x8042A71C:
{
    r3 = 0;
    goto loc_inl1_cont_8042A700;
}

loc_inl1_0x8042A724:
{
    r3 = (r4 + 400);
}

loc_inl1_cont_8042A700:
{
    // end of inlined leaf 0x8042A700
    r29 = r3;
    ctx->lr = 0x80394298u;
    if constexpr (KnownRegArgsCpuCall<0x8042B744u>(&func_8042B744)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8042B744_1438 = func_8042B744_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042B744_1438);
        r4 = static_cast<uint32_t>(regargs_result_8042B744_1438 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042B744u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead8((r30 + 585));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 692);
    r27 = (r3 + r0);
    r31 = 0;
    MemoryInline::FlatWrite16((r30 + 604), static_cast<uint16_t>(r31));
    r0 = MemoryInline::FlatRead8((r30 + 578));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803942BC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(14))) {
        goto loc_803946F8;
    }
}

loc_803942C0:
{
    r3 = 0x805F0000u;
    r3 = (r3 + 7104);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x803942D8u:
        goto loc_803942D8;
        break;
    case 0x80394304u:
        goto loc_80394304;
        break;
    case 0x80394354u:
        goto loc_80394354;
        break;
    case 0x8039442Cu:
        goto loc_8039442C;
        break;
    case 0x803944ECu:
        goto loc_803944EC;
        break;
    case 0x803945A4u:
        goto loc_803945A4;
        break;
    case 0x80394618u:
        goto loc_80394618;
        break;
    case 0x8039462Cu:
        goto loc_8039462C;
        break;
    case 0x80394690u:
        goto loc_80394690;
        break;
    case 0x803946C0u:
        goto loc_803946C0;
        break;
    case 0x803946D8u:
        goto loc_803946D8;
        break;
    case 0x803946E0u:
        goto loc_803946E0;
        break;
    case 0x803946F8u:
        goto loc_803946F8;
        break;
    case 0x80394684u:
        goto loc_80394684;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_803942D8:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r3));
    r0 = 255;
    MemoryInline::FlatWrite16((r30 + 606), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 588), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r30 + 586), static_cast<uint16_t>(r31));
    r0 = 4;
    MemoryInline::FlatWrite16((r30 + 594), static_cast<uint16_t>(r0));
    r0 = 8;
    MemoryInline::FlatWrite8((r30 + 608), static_cast<uint8_t>(r0));
    goto loc_803946F8;
}

loc_80394304:
{
    r3 = r30;
    ctx->lr = 0x8039430Cu;
    if constexpr (KnownRegArgsCpuCall<0x803947BCu>(&func_803947BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_803947BC_264E = func_803947BC_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803947BC_264E);
        r4 = static_cast<uint32_t>(regargs_result_803947BC_264E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803947BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_80394310:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80394320;
    }
}

loc_80394314:
{
}

loc_80394318:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80394348;
    }
}

loc_8039431C:
{
    goto loc_803946F8;
}

loc_80394320:
{
    r3 = MemoryInline::FlatRead8((r30 + 585));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    // inline leaf 0x8042A700 (11 guest instruction(s))
}

loc_inl2_0x8042A700:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r4 = MemoryInline::FlatRead32((r4 + 360));
    r0 = (r3 * 692);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl2_0x8042A718:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x8042A724;
    }
}

loc_inl2_0x8042A71C:
{
    r3 = 0;
    goto loc_inl2_cont_8042A700;
}

loc_inl2_0x8042A724:
{
    r3 = (r4 + 400);
}

loc_inl2_cont_8042A700:
{
    // end of inlined leaf 0x8042A700
}

loc_80394330:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803946F8;
    }
}

loc_80394334:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    r3 = r30;
    // inline leaf 0x80394918 (5 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 590), static_cast<uint16_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite16((r3 + 592), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x80394918
    goto loc_803946F8;
}

loc_80394348:
{
    r0 = 10;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    goto loc_803946F8;
}

loc_80394354:
{
}

loc_80394358:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80394378;
    }
}

loc_8039435C:
{
    r3 = 10;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl4_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl4_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl4_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl4_cont_804538FC;
}

loc_inl4_return:
{
}

loc_inl4_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x80394374u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_375C = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_375C);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_375C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_803946F8;
}

loc_80394378:
{
    r3 = r30;
    ctx->lr = 0x80394380u;
    if constexpr (KnownRegArgsCpuCall<0x8039492Cu>(&func_8039492C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_8039492C_3E6F = func_8039492C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8039492C_3E6F);
        r4 = static_cast<uint32_t>(regargs_result_8039492C_3E6F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8039492Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_80394384:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80394394;
    }
}

loc_80394388:
{
}

loc_8039438C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8039441C;
    }
}

loc_80394390:
{
    goto loc_803946F8;
}

loc_80394394:
{
    r0 = MemoryInline::FlatRead8((r28 + 82));
}

loc_8039439C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803943BC;
    }
}

loc_803943A0:
{
    r3 = 26;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl5_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl5_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl5_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl5_return;
    }
}

loc_inl5_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl5_cont_804538FC;
}

loc_inl5_return:
{
}

loc_inl5_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
}

loc_803943A8:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    r0 = 30;
    MemoryInline::FlatWrite8((r30 + 932), static_cast<uint8_t>(r0));
    goto loc_803946F8;
}

loc_803943BC:
{
    r0 = MemoryInline::FlatRead8((r27 + 141));
}

loc_803943C4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803943D4;
    }
}

loc_803943C8:
{
    r3 = 25;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl6_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl6_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl6_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl6_cont_804538FC;
}

loc_inl6_return:
{
}

loc_inl6_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
    goto loc_803943A8;
}

loc_803943D4:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead32((r27 + 64));
}

loc_803943E4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_803943F4;
    }
}

loc_803943E8:
{
    r3 = 24;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl7_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl7_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl7_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl7_return;
    }
}

loc_inl7_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl7_cont_804538FC;
}

loc_inl7_return:
{
}

loc_inl7_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
    goto loc_803943A8;
}

loc_803943F4:
{
    ctx->lr = 0x803943F8u;
    if constexpr (KnownRegArgsCpuCall<0x80394A54u>(&func_80394A54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80394A54_5274 = func_80394A54_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80394A54_5274);
        r4 = static_cast<uint32_t>(regargs_result_80394A54_5274 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80394A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
}

loc_803943FC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8039440C;
    }
}

loc_80394400:
{
    r3 = 27;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl8_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl8_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl8_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl8_return;
    }
}

loc_inl8_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl8_cont_804538FC;
}

loc_inl8_return:
{
}

loc_inl8_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
    goto loc_803943A8;
}

loc_8039440C:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r30 + 600), r31);
    goto loc_803946F8;
}

loc_8039441C:
{
    MemoryInline::FlatWrite8((r30 + 932), static_cast<uint8_t>(r31));
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    goto loc_803946F8;
}

loc_8039442C:
{
}

loc_80394430:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80394450;
    }
}

loc_80394434:
{
    r3 = 10;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl9_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl9_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl9_return;
    }
}

loc_inl9_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl9_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl9_return;
    }
}

loc_inl9_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl9_cont_804538FC;
}

loc_inl9_return:
{
}

loc_inl9_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x8039444Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_5EE0 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_5EE0);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_5EE0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_803946F8;
}

loc_80394450:
{
    r0 = MemoryInline::FlatRead8((r27 + 141));
}

loc_80394458:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80394468;
    }
}

loc_8039445C:
{
    r3 = 25;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl10_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl10_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl10_return;
    }
}

loc_inl10_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl10_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl10_return;
    }
}

loc_inl10_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl10_cont_804538FC;
}

loc_inl10_return:
{
}

loc_inl10_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
    goto loc_80394484;
}

loc_80394468:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead32((r27 + 64));
}

loc_80394478:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_803944A0;
    }
}

loc_8039447C:
{
    r3 = 24;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl11_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl11_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl11_return;
    }
}

loc_inl11_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl11_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl11_return;
    }
}

loc_inl11_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl11_cont_804538FC;
}

loc_inl11_return:
{
}

loc_inl11_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
}

loc_80394484:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    r0 = 30;
    MemoryInline::FlatWrite8((r30 + 932), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x8039449Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_6E66 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_6E66);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_6E66 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_8039470C;
}

loc_803944A0:
{
    ctx->lr = 0x803944A4u;
    if constexpr (KnownRegArgsCpuCall<0x80394A54u>(&func_80394A54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80394A54_751B = func_80394A54_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80394A54_751B);
        r4 = static_cast<uint32_t>(regargs_result_80394A54_751B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80394A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
}

loc_803944A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_803944B8;
    }
}

loc_803944AC:
{
    r3 = 27;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl12_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl12_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl12_return;
    }
}

loc_inl12_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl12_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl12_return;
    }
}

loc_inl12_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl12_cont_804538FC;
}

loc_inl12_return:
{
}

loc_inl12_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
    goto loc_80394484;
}

loc_803944B8:
{
    r3 = (r30 + 600);
    ctx->lr = 0x803944C0u;
    if constexpr (KnownRegArgsCpuCall<0x802125A4u>(&func_802125A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_802125A4_7C99 = func_802125A4_ra218_1f8_18_0(ctx, r3, r4, r9, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802125A4_7C99);
        r4 = static_cast<uint32_t>(regargs_result_802125A4_7C99 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802125A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_803944C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_803944D4;
    }
}

loc_803944C8:
{
}

loc_803944CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_803944E0;
    }
}

loc_803944D0:
{
    goto loc_803946F8;
}

loc_803944D4:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    goto loc_803946F8;
}

loc_803944E0:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    goto loc_803946F8;
}

loc_803944EC:
{
}

loc_803944F0:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80394510;
    }
}

loc_803944F4:
{
    r3 = 10;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl13_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl13_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl13_return;
    }
}

loc_inl13_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl13_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl13_return;
    }
}

loc_inl13_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl13_cont_804538FC;
}

loc_inl13_return:
{
}

loc_inl13_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x8039450Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_896A = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_896A);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_896A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_803946F8;
}

loc_80394510:
{
    ctx->lr = 0x80394514u;
    if constexpr (KnownRegArgsCpuCall<0x80394A54u>(&func_80394A54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80394A54_901F = func_80394A54_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80394A54_901F);
        r4 = static_cast<uint32_t>(regargs_result_80394A54_901F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80394A54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
}

loc_80394518:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80394590;
    }
}

loc_8039451C:
{
    r3 = MemoryInline::FlatRead8((r30 + 585));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    // inline leaf 0x8042A700 (11 guest instruction(s))
}

loc_inl14_0x8042A700:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
    r4 = MemoryInline::FlatRead32((r4 + 360));
    r0 = (r3 * 692);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_inl14_0x8042A718:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl14_0x8042A724;
    }
}

loc_inl14_0x8042A71C:
{
    r3 = 0;
    goto loc_inl14_cont_8042A700;
}

loc_inl14_0x8042A724:
{
    r3 = (r4 + 400);
}

loc_inl14_cont_8042A700:
{
    // end of inlined leaf 0x8042A700
    ctx->lr = 0x8039452Cu;
    if constexpr (KnownRegArgsCpuCall<0x8042B744u>(&func_8042B744)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8042B744_96E7 = func_8042B744_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8042B744_96E7);
        r4 = static_cast<uint32_t>(regargs_result_8042B744_96E7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8042B744u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead8((r30 + 585));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 * 692);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 140));
}

loc_80394544:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80394580;
    }
}

loc_80394548:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 930), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 581), static_cast<uint8_t>(r31));
    r3 = (r30 + 619);
    r4 = 0;
    r5 = 5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r30 + 920);
    r4 = 0;
    r5 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_803946F8;
}

loc_80394580:
{
    MemoryInline::FlatWrite8((r30 + 930), static_cast<uint8_t>(r31));
    r0 = 6;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    goto loc_803946F8;
}

loc_80394590:
{
    r0 = 11;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 582), static_cast<uint8_t>(r0));
    goto loc_803946F8;
}

loc_803945A4:
{
}

loc_803945A8:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_803945C8;
    }
}

loc_803945AC:
{
    r3 = 10;
    // inline leaf 0x804538FC (9 guest instruction(s))
}

loc_inl15_0x804538FC:
{
    r4 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl15_0x80453904:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl15_return;
    }
}

loc_inl15_0x80453908:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl15_0x80453910:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl15_return;
    }
}

loc_inl15_0x80453914:
{
    r4 = (r4 + 65536);
    MemoryInline::FlatWrite8((r4 + -15783), static_cast<uint8_t>(r3));
    goto loc_inl15_cont_804538FC;
}

loc_inl15_return:
{
}

loc_inl15_cont_804538FC:
{
    // end of inlined leaf 0x804538FC
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x803945C4u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_A704 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_A704);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_A704 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_803946F8;
}

loc_803945C8:
{
    r3 = r30;
    ctx->lr = 0x803945D0u;
    if constexpr (KnownRegArgsCpuCall<0x80394AC8u>(&func_80394AC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80394AC8_ADE3 = func_80394AC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80394AC8_ADE3);
        r4 = static_cast<uint32_t>(regargs_result_80394AC8_ADE3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80394AC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_803945D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_803945EC;
    }
}

loc_803945D8:
{
}

loc_803945DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_803945F8;
    }
}

loc_803945E0:
{
}

loc_803945E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_8039460C;
    }
}

loc_803945E8:
{
    goto loc_803946F8;
}

loc_803945EC:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    goto loc_803946F8;
}

loc_803945F8:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x80394608u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_B764 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_B764);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_B764 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_803946F8;
}

loc_8039460C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    goto loc_803946F8;
}

loc_80394618:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r30 + 579), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 580), static_cast<uint8_t>(r31));
    goto loc_803946F8;
}

loc_8039462C:
{
    r3 = r30;
    ctx->lr = 0x80394634u;
    if constexpr (KnownRegArgsCpuCall<0x80394C38u>(&func_80394C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80394C38_BFC5 = func_80394C38_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80394C38_BFC5);
        r4 = static_cast<uint32_t>(regargs_result_80394C38_BFC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80394C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_80394638:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80394648;
    }
}

loc_8039463C:
{
}

loc_80394640:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_80394670;
    }
}

loc_80394644:
{
    goto loc_803946F8;
}

loc_80394648:
{
    r0 = 8;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    r3 = 30;
    ctx->lr = 0x80394658u;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBCE8_C87C = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_C87C);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_C87C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = MemoryInline::FlatRead32((r30 + 612));
    r0 = MemoryInline::FlatRead32((r30 + 596));
    r4 = (r0 & 65535);
    r5 = 2;
    ctx->lr = 0x8039466Cu;
    if constexpr (KnownRegArgsCpuCall<0x80321894u>(&func_80321894)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80321894_CFA6 = func_80321894_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80321894_CFA6);
        r4 = static_cast<uint32_t>(regargs_result_80321894_CFA6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80321894u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_803946F8;
}

loc_80394670:
{
    r0 = 11;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 582), static_cast<uint8_t>(r0));
    goto loc_803946F8;
}

loc_80394684:
{
    r0 = 11;
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
    goto loc_803946F8;
}

loc_80394690:
{
    ctx->lr = 0x80394694u;
    if constexpr (KnownRegArgsCpuCall<0x8042BA9Cu>(&func_8042BA9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8042BA9C_D7B2 = func_8042BA9C_ra0_0_8_0(ctx);
        r3 = regargs_result_8042BA9C_D7B2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8042BA9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80394698:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803946A0;
    }
}

loc_8039469C:
{
    if constexpr (KnownRegArgsCpuCall<0x8039424Cu>(&func_8039424C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8039424C_DA8D = func_8039424C_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_8039424C_DA8D);
        r4 = static_cast<uint32_t>(regargs_result_8039424C_DA8D >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8039424Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803946A0:
{
    r3 = 16;
    ctx->lr = 0x803946A8u;
    if constexpr (KnownRegArgsCpuCall<0x802121A0u>(&func_802121A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802121A0_DD2B = func_802121A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802121A0_DD2B);
        r4 = static_cast<uint32_t>(regargs_result_802121A0_DD2B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802121A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803946AC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803946F8;
    }
}

loc_803946B0:
{
    if constexpr (KnownRegArgsCpuCall<0x8039424Cu>(&func_8039424C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8039424C_E053 = func_8039424C_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_8039424C_E053);
        r4 = static_cast<uint32_t>(regargs_result_8039424C_E053 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8039424Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = 0;
    ctx->lr = 0x803946BCu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_E345 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_E345);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_E345 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    goto loc_803946F8;
}

loc_803946C0:
{
    r3 = 16;
    ctx->lr = 0x803946C8u;
    if constexpr (KnownRegArgsCpuCall<0x802121A0u>(&func_802121A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802121A0_E9EF = func_802121A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802121A0_E9EF);
        r4 = static_cast<uint32_t>(regargs_result_802121A0_E9EF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802121A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803946CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803946F8;
    }
}

loc_803946D0:
{
    if constexpr (KnownRegArgsCpuCall<0x8039424Cu>(&func_8039424C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8039424C_ED17 = func_8039424C_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_8039424C_ED17);
        r4 = static_cast<uint32_t>(regargs_result_8039424C_ED17 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8039424Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_803946F8;
}

loc_803946D8:
{
    if constexpr (KnownRegArgsCpuCall<0x8039424Cu>(&func_8039424C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8039424C_EFA4 = func_8039424C_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_8039424C_EFA4);
        r4 = static_cast<uint32_t>(regargs_result_8039424C_EFA4 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8039424Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_803946F8;
}

loc_803946E0:
{
    r3 = 16;
    ctx->lr = 0x803946E8u;
    if constexpr (KnownRegArgsCpuCall<0x802121A0u>(&func_802121A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802121A0_F259 = func_802121A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802121A0_F259);
        r4 = static_cast<uint32_t>(regargs_result_802121A0_F259 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802121A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803946EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803946F8;
    }
}

loc_803946F0:
{
    r0 = MemoryInline::FlatRead8((r30 + 582));
    MemoryInline::FlatWrite8((r30 + 578), static_cast<uint8_t>(r0));
}

loc_803946F8:
{
    r3 = 0x80390000u;
    r3 = (r3 + 21856);
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80049240_F665 = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_F665);
        r4 = static_cast<uint32_t>(regargs_result_80049240_F665 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r9 = ctx->gpr[9];
        ctr = ctx->ctr;
    }
}

loc_8039470C:
{
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->ctr = ctr;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80394264(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80394264_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80394264 func_80394264 preserves=true fpr_mask=0x00000000
