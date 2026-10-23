#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80272590(CpuContext* ctx);
extern "C" uint64_t func_80272590_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80312E98(CpuContext* ctx);
extern "C" uint64_t func_80312E98_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80312F7C(CpuContext* ctx);
extern "C" uint64_t func_80312F7C_ra308_1fa_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_80312FE8(CpuContext* ctx);
extern "C" uint64_t func_80312FE8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80313BA0(CpuContext* ctx);
extern "C" uint64_t func_80313BA0_ra118_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803154A4(CpuContext* ctx);
extern "C" uint32_t func_803154A4_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80315620(CpuContext* ctx);
extern "C" uint32_t func_80315620_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80312B58_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
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

    goto loc_80312B58;

loc_80312B58:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    r30 = r3;
    r31 = r4;
    r29 = r5;
    r0 = (r5 & 65535);
}

loc_80312B84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80312BC4;
    }
}

loc_80312B88:
{
    r3 = 2389;
    r4 = (r1 + 44);
    ctx->lr = 0x80312B94u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E05B4_C11 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_C11);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_C11 >> 32);
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
    r3 = (r29 & 65535);
    r4 = (r1 + 40);
    ctx->lr = 0x80312BA0u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E05B4_FB7 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_FB7);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_FB7 >> 32);
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
    r3 = MemoryInline::FlatRead16((r1 + 44));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r1 + 40));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r3);
    MemoryInline::FlatWriteRam16((r1 + 40), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r1 + 46));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r1 + 42));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r3);
    MemoryInline::FlatWriteRam16((r1 + 42), static_cast<uint16_t>(r0));
    goto loc_80312BD0;
}

loc_80312BC4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 40), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 42), static_cast<uint16_t>(r0));
}

loc_80312BD0:
{
    r3 = r31;
    r4 = (r1 + 64);
    r5 = (r1 + 56);
    r6 = (r1 + 48);
    ctx->lr = 0x80312BE4u;
    if constexpr (KnownRegArgsCpuCall<0x80272590u>(&func_80272590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80272590_174C = func_80272590_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80272590_174C);
        r4 = static_cast<uint32_t>(regargs_result_80272590_174C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80272590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        ctr = ctx->ctr;
    }
    r8 = 0;
    r7 = 0;
    r4 = (r1 + 64);
    r5 = (r1 + 48);
    r6 = r30;
    r0 = 2;
    ctr = r0;
}

loc_80312C00:
{
    r3 = MemoryInline::FlatRead16(r4);
}

loc_80312C08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80312C30;
    }
}

loc_80312C0C:
{
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80312C14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80312C30;
    }
}

loc_80312C18:
{
    MemoryInline::FlatWrite16((r6 + 1562), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead8(r5);
    r3 = (r30 + r8);
    MemoryInline::FlatWrite8((r3 + 1578), static_cast<uint8_t>(r0));
    r6 = (r6 + 2);
    r8 = (r8 + 1);
}

loc_80312C30:
{
    r3 = MemoryInline::FlatRead16((r4 + 2));
}

loc_80312C38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80312C60;
    }
}

loc_80312C3C:
{
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_80312C44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80312C60;
    }
}

loc_80312C48:
{
    MemoryInline::FlatWrite16((r6 + 1562), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r3 = (r30 + r8);
    MemoryInline::FlatWrite8((r3 + 1578), static_cast<uint8_t>(r0));
    r6 = (r6 + 2);
    r8 = (r8 + 1);
}

loc_80312C60:
{
    r3 = MemoryInline::FlatRead16((r4 + 4));
}

loc_80312C68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80312C90;
    }
}

loc_80312C6C:
{
    r0 = MemoryInline::FlatRead8((r5 + 2));
}

loc_80312C74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80312C90;
    }
}

loc_80312C78:
{
    MemoryInline::FlatWrite16((r6 + 1562), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    r3 = (r30 + r8);
    MemoryInline::FlatWrite8((r3 + 1578), static_cast<uint8_t>(r0));
    r6 = (r6 + 2);
    r8 = (r8 + 1);
}

loc_80312C90:
{
    r3 = MemoryInline::FlatRead16((r4 + 6));
}

loc_80312C98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80312CC0;
    }
}

loc_80312C9C:
{
    r0 = MemoryInline::FlatRead8((r5 + 3));
}

loc_80312CA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80312CC0;
    }
}

loc_80312CA8:
{
    MemoryInline::FlatWrite16((r6 + 1562), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    r3 = (r30 + r8);
    MemoryInline::FlatWrite8((r3 + 1578), static_cast<uint8_t>(r0));
    r6 = (r6 + 2);
    r8 = (r8 + 1);
}

loc_80312CC0:
{
    r4 = (r4 + 8);
    r5 = (r5 + 4);
    r7 = (r7 + 3);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80312C00;
    }
}

loc_80312CD0:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = (r1 + 36);
    r4 = 255;
    ctx->lr = 0x80312CE4u;
    if constexpr (KnownRegArgsCpuCall<0x80312E98u>(&func_80312E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80312E98_282F = func_80312E98_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80312E98_282F);
        r4 = static_cast<uint32_t>(regargs_result_80312E98_282F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80312E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
    r0 = 7;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = (r31 + 72);
    r5 = 0;
    r6 = (r1 + 8);
    r7 = (r1 + 80);
    if constexpr (KnownRegArgsCpuCall<0x803154A4u>(&func_803154A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_803154A4_307D = func_803154A4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803154A4_307D;
        r0 = ctx->gpr[0];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803154A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        ctr = ctx->ctr;
    }
    r0 = (r3 & 255);
}

loc_80312D0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80312D2C;
    }
}

loc_80312D10:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r3 = r30;
    r4 = (r1 + 80);
    r5 = MemoryInline::FlatRead8((r1 + 8));
    r6 = (r1 + 32);
    ctx->lr = 0x80312D2Cu;
    if constexpr (KnownRegArgsCpuCall<0x80312FE8u>(&func_80312FE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80312FE8_359D = func_80312FE8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80312FE8_359D);
        r4 = static_cast<uint32_t>(regargs_result_80312FE8_359D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80312FE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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

loc_80312D2C:
{
    r0 = 7;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = (r31 + 84);
    r5 = 0;
    r6 = (r1 + 8);
    r7 = (r1 + 80);
    if constexpr (KnownRegArgsCpuCall<0x803154A4u>(&func_803154A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_803154A4_3E02 = func_803154A4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803154A4_3E02;
        r0 = ctx->gpr[0];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803154A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        ctr = ctx->ctr;
    }
    r0 = (r3 & 255);
}

loc_80312D54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80312D74;
    }
}

loc_80312D58:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = r30;
    r4 = (r1 + 80);
    r5 = MemoryInline::FlatRead8((r1 + 8));
    r6 = (r1 + 28);
    ctx->lr = 0x80312D74u;
    if constexpr (KnownRegArgsCpuCall<0x80312FE8u>(&func_80312FE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80312FE8_4322 = func_80312FE8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80312FE8_4322);
        r4 = static_cast<uint32_t>(regargs_result_80312FE8_4322 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80312FE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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

loc_80312D74:
{
    r0 = 7;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = (r31 + 96);
    r5 = 0;
    r6 = (r1 + 8);
    r7 = (r1 + 80);
    if constexpr (KnownRegArgsCpuCall<0x803154A4u>(&func_803154A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_803154A4_4B87 = func_803154A4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803154A4_4B87;
        r0 = ctx->gpr[0];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803154A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        ctr = ctx->ctr;
    }
    r0 = (r3 & 255);
}

loc_80312D9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80312DBC;
    }
}

loc_80312DA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r3 = r30;
    r4 = (r1 + 80);
    r5 = MemoryInline::FlatRead8((r1 + 8));
    r6 = (r1 + 24);
    ctx->lr = 0x80312DBCu;
    if constexpr (KnownRegArgsCpuCall<0x80312FE8u>(&func_80312FE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80312FE8_50A7 = func_80312FE8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80312FE8_50A7);
        r4 = static_cast<uint32_t>(regargs_result_80312FE8_50A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80312FE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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

loc_80312DBC:
{
    r0 = 7;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r3 = r30;
    r4 = (r31 + 72);
    r5 = (r31 + 84);
    r6 = (r31 + 96);
    r7 = 7;
    r8 = (r1 + 80);
    if constexpr (KnownRegArgsCpuCall<0x80315620u>(&func_80315620)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80315620_590B = func_80315620_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_80315620_590B;
        r0 = ctx->gpr[0];
        r9 = ctx->gpr[9];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x80315620u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r9 = ctx->gpr[9];
    }
    r0 = (r3 & 255);
}

loc_80312DE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80312E08;
    }
}

loc_80312DEC:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = r30;
    r4 = (r1 + 80);
    r5 = MemoryInline::FlatRead8((r1 + 8));
    r6 = (r1 + 20);
    ctx->lr = 0x80312E08u;
    if constexpr (KnownRegArgsCpuCall<0x80312FE8u>(&func_80312FE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        const auto regargs_result_80312FE8_5DAA = func_80312FE8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80312FE8_5DAA);
        r4 = static_cast<uint32_t>(regargs_result_80312FE8_5DAA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80312FE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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

loc_80312E08:
{
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 16);
    ctx->lr = 0x80312E18u;
    if constexpr (KnownRegArgsCpuCall<0x80312F7Cu>(&func_80312F7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[2] = f2;
        ctx->ctr = ctr;
        const auto regargs_result_80312F7C_660E = func_80312F7C_ra308_1fa_18_0(ctx, r3, r8, r9, f1.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80312F7C_660E);
        r4 = static_cast<uint32_t>(regargs_result_80312F7C_660E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80312F7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
    r0 = MemoryInline::FlatRead32((r1 + 40));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = (r1 + 12);
    r4 = (r1 + 80);
    ctx->lr = 0x80312E2Cu;
    if constexpr (KnownRegArgsCpuCall<0x80313BA0u>(&func_80313BA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_80313BA0_6E50 = func_80313BA0_ra118_1fe_18_0(ctx, r3, r4, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80313BA0_6E50);
        r4 = static_cast<uint32_t>(regargs_result_80313BA0_6E50 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80313BA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
    r3 = r30;
    r4 = MemoryInline::FlatRead8((r1 + 8));
    // inline leaf 0x8031545C (18 guest instruction(s))
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1562), 0, 24u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 1562), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 1578), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 1564), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r3 + 1579), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 1566), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 1580), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 1568), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r3 + 1581), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 1570), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 1582), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 1572), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 1583), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 1574), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 1584), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 1576), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r3 + 1585), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8031545C
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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

extern "C" void func_80312B58(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80312B58_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF80FFFF fpr_write=0xFF80FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80312B58 func_80312B58 preserves=true fpr_mask=0x00000000
