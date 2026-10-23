#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802A6FC8(CpuContext* ctx);
extern "C" uint64_t func_802A6FC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80398930(CpuContext* ctx);
extern "C" uint64_t func_80398930_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80398C90(CpuContext* ctx);
extern "C" uint64_t func_80398C90_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8039A1C8(CpuContext* ctx);
extern "C" uint64_t func_8039A1C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8039A534_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t ctr = ctx->ctr;

    goto loc_8039A534;

loc_8039A534:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    r11 = (r1 + 240);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r4 = (r4 & 255);
    ctx->lr = 0x8039A554u;
    if constexpr (KnownRegArgsCpuCall<0x80398930u>(&func_80398930)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80398930_9D6 = func_80398930_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80398930_9D6);
        r4 = static_cast<uint32_t>(regargs_result_80398930_9D6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80398930u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = 0;
    r30 = 0;
}

loc_8039A560:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8039A570;
    }
}

loc_8039A564:
{
    r3 = MemoryInline::FlatRead16(r3);
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
    r4 = r3;
}

loc_8039A570:
{
    r0 = MemoryInline::FlatRead8((r29 + 12333));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r28 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8039A580:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(24))) {
        goto loc_8039A598;
    }
}

loc_8039A584:
{
    r0 = 1;
    r31 = MemoryInline::FlatRead32((r29 + 12364));
    r30 = (r30 | 1);
    r28 = (r28 + -24);
    goto loc_8039A5A0;
}

loc_8039A598:
{
    r0 = 0;
    r31 = MemoryInline::FlatRead32((r29 + 12360));
}

loc_8039A5A0:
{
    r27 = 1;
}

loc_8039A5A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8039A5C4;
    }
}

loc_8039A5AC:
{
}

loc_8039A5B0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8039A5C4;
    }
}

loc_8039A5B4:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8039A5BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_8039A5C4;
    }
}

loc_8039A5C0:
{
    r27 = 0;
}

loc_8039A5C4:
{
    r3 = (r1 + 16);
    r4 = 0;
    r5 = 192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r7 = (r1 + 16);
    r6 = 0;
    r5 = 0;
    r3 = 1;
    r0 = 2;
    ctr = r0;
}

loc_8039A5EC:
{
    MemoryInline::FlatWrite8((r7 + 2), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r5));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r4 = MemoryInline::FlatRead8((r29 + 12335));
}

loc_8039A600:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_8039A60C;
    }
}

loc_8039A604:
{
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r3));
    goto loc_8039A610;
}

loc_8039A60C:
{
    MemoryInline::FlatWrite8((r7 + 1), static_cast<uint8_t>(r5));
}

loc_8039A610:
{
    MemoryInline::FlatWrite16((r7 + 6), static_cast<uint16_t>(r28));
    r6 = (r6 + 1);
    r28 = (r28 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::FlatWrite8((r7 + 26), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r7 + 25), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead8((r29 + 12335));
}

loc_8039A630:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_8039A63C;
    }
}

loc_8039A634:
{
    MemoryInline::FlatWrite8((r7 + 25), static_cast<uint8_t>(r3));
    goto loc_8039A640;
}

loc_8039A63C:
{
    MemoryInline::FlatWrite8((r7 + 25), static_cast<uint8_t>(r5));
}

loc_8039A640:
{
    MemoryInline::FlatWrite16((r7 + 30), static_cast<uint16_t>(r28));
    r6 = (r6 + 1);
    r28 = (r28 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::FlatWrite8((r7 + 50), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r7 + 49), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead8((r29 + 12335));
}

loc_8039A660:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_8039A66C;
    }
}

loc_8039A664:
{
    MemoryInline::FlatWrite8((r7 + 49), static_cast<uint8_t>(r3));
    goto loc_8039A670;
}

loc_8039A66C:
{
    MemoryInline::FlatWrite8((r7 + 49), static_cast<uint8_t>(r5));
}

loc_8039A670:
{
    MemoryInline::FlatWrite16((r7 + 54), static_cast<uint16_t>(r28));
    r6 = (r6 + 1);
    r28 = (r28 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::FlatWrite8((r7 + 74), static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite8((r7 + 73), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead8((r29 + 12335));
}

loc_8039A690:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_8039A69C;
    }
}

loc_8039A694:
{
    MemoryInline::FlatWrite8((r7 + 73), static_cast<uint8_t>(r3));
    goto loc_8039A6A0;
}

loc_8039A69C:
{
    MemoryInline::FlatWrite8((r7 + 73), static_cast<uint8_t>(r5));
}

loc_8039A6A0:
{
    MemoryInline::FlatWrite16((r7 + 78), static_cast<uint16_t>(r28));
    r6 = (r6 + 1);
    r7 = (r7 + 96);
    r28 = (r28 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8039A5EC;
    }
}

loc_8039A6B4:
{
    r3 = MemoryInline::FlatRead16((r29 + 12324));
    r0 = (r3 & 4);
}

loc_8039A6C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039A6C8;
    }
}

loc_8039A6C4:
{
    r30 = (r30 | 8);
}

loc_8039A6C8:
{
    r0 = (r3 & 8);
}

loc_8039A6D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039A6D8;
    }
}

loc_8039A6D4:
{
    r30 = (r30 | 16);
}

loc_8039A6D8:
{
    r3 = 628;
    r4 = (r1 + 8);
    ctx->lr = 0x8039A6E4u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E05B4_2310 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_2310);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_2310 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead16((r1 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 30);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    r3 = r31;
    r4 = (r1 + 16);
    r5 = MemoryInline::FlatRead8((r29 + 12333));
    r0 = (r5 + 1);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r29 + 12334));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r7 = 0;
    r8 = r30;
    r9 = (r1 + 8);
    ctx->lr = 0x8039A71Cu;
    if constexpr (KnownRegArgsCpuCall<0x802A6FC8u>(&func_802A6FC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_802A6FC8_293E = func_802A6FC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802A6FC8_293E);
        r4 = static_cast<uint32_t>(regargs_result_802A6FC8_293E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
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
        InvokeDirectCpu<0x802A6FC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    r3 = r29;
    ctx->lr = 0x8039A724u;
    if constexpr (KnownRegArgsCpuCall<0x80398C90u>(&func_80398C90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80398C90_3111 = func_80398C90_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80398C90_3111);
        r4 = static_cast<uint32_t>(regargs_result_80398C90_3111 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80398C90u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->lr = 0x8039A728u;
    if constexpr (KnownRegArgsCpuCall<0x8039A1C8u>(&func_8039A1C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8039A1C8_3482 = func_8039A1C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8039A1C8_3482);
        r4 = static_cast<uint32_t>(regargs_result_8039A1C8_3482 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
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
        InvokeDirectCpu<0x8039A1C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    r11 = (r1 + 240);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8039A534(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8039A534_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003CFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8039A534 func_8039A534 preserves=true fpr_mask=0x00000000
