#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABB0(CpuContext* ctx);
extern "C" uint64_t func_8047ABB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8049DB04(CpuContext* ctx);
extern "C" uint64_t func_8049DB04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8049E694(CpuContext* ctx);
extern "C" uint64_t func_8049E694_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8049AE94_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_8049AE94;

loc_8049AE94:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 108));
}

loc_8049AEB0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8049B04C;
    }
}

loc_8049AEB4:
{
    r0 = MemoryInline::FlatRead8((r6 + 114));
}

loc_8049AEBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8049AF6C;
    }
}

loc_8049AEC0:
{
}

loc_8049AEC4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8049AF38;
    }
}

loc_8049AEC8:
{
    r0 = MemoryInline::FlatRead16((r3 + 154));
}

loc_8049AED0:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_8049AEE0;
    }
}

loc_8049AED4:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 154), static_cast<uint16_t>(r0));
    goto loc_8049AEE8;
}

loc_8049AEE0:
{
    r0 = (r0 - r5);
    MemoryInline::FlatWrite16((r3 + 154), static_cast<uint16_t>(r0));
}

loc_8049AEE8:
{
    r4 = MemoryInline::FlatRead16((r3 + 154));
    r0 = MemoryInline::FlatRead16((r3 + 158));
}

loc_8049AEF4:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_8049B04C;
    }
}

loc_8049AEF8:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
}

loc_8049AF00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049B04C;
    }
}

loc_8049AF04:
{
    r0 = MemoryInline::FlatRead16((r3 + 156));
}

loc_8049AF0C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r4))) {
        goto loc_8049B04C;
    }
}

loc_8049AF10:
{
    r0 = (r0 - r4);
    r3 = MemoryInline::FlatRead32((r3 + 108));
    r4 = MemoryInline::FlatRead8((r31 + 13));
    r5 = (r0 & 255);
    ctx->lr = 0x8049AF24u;
    if constexpr (KnownRegArgsCpuCall<0x8049E694u>(&func_8049E694)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8049E694_E30 = func_8049E694_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049E694_E30);
        r4 = static_cast<uint32_t>(regargs_result_8049E694_E30 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8049E694u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead16((r31 + 156));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 60), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r31 + 154), static_cast<uint16_t>(r3));
    goto loc_8049B04C;
}

loc_8049AF38:
{
    r0 = MemoryInline::FlatRead32((r3 + 148));
}

loc_8049AF40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049AF50;
    }
}

loc_8049AF44:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 60), static_cast<uint8_t>(r0));
    goto loc_8049B04C;
}

loc_8049AF50:
{
    r4 = MemoryInline::FlatRead16((r3 + 56));
    r0 = MemoryInline::FlatRead16((r3 + 156));
}

loc_8049AF5C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8049B04C;
    }
}

loc_8049AF60:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 60), static_cast<uint8_t>(r0));
    goto loc_8049B04C;
}

loc_8049AF6C:
{
}

loc_8049AF70:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8049AFC0;
    }
}

loc_8049AF74:
{
    r0 = MemoryInline::FlatRead8((r3 + 60));
}

loc_8049AF7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049B04C;
    }
}

loc_8049AF80:
{
    r0 = MemoryInline::FlatRead32((r3 + 64));
}

loc_8049AF88:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(5000))) {
        goto loc_8049B04C;
    }
}

loc_8049AF8C:
{
    r0 = MemoryInline::FlatRead16((r3 + 56));
}

loc_8049AF94:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(8))) {
        goto loc_8049B04C;
    }
}

loc_8049AF98:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
    r4 = 0;
    MemoryInline::FlatWrite8((r3 + 60), static_cast<uint8_t>(r4));
}

loc_8049AFA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049B04C;
    }
}

loc_8049AFAC:
{
    r4 = MemoryInline::FlatRead8((r31 + 13));
    r3 = r6;
    r5 = 1;
    ctx->lr = 0x8049AFBCu;
    if constexpr (KnownRegArgsCpuCall<0x8049DB04u>(&func_8049DB04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8049DB04_1C63 = func_8049DB04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049DB04_1C63);
        r4 = static_cast<uint32_t>(regargs_result_8049DB04_1C63 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8049DB04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8049B04C;
}

loc_8049AFC0:
{
    r0 = MemoryInline::FlatRead32((r3 + 148));
}

loc_8049AFC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8049AFE8;
    }
}

loc_8049AFCC:
{
    r0 = 1;
    r4 = MemoryInline::FlatRead8((r31 + 13));
    MemoryInline::FlatWrite8((r3 + 60), static_cast<uint8_t>(r0));
    r3 = r6;
    r5 = 0;
    ctx->lr = 0x8049AFE4u;
    if constexpr (KnownRegArgsCpuCall<0x8049DB04u>(&func_8049DB04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8049DB04_243A = func_8049DB04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049DB04_243A);
        r4 = static_cast<uint32_t>(regargs_result_8049DB04_243A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8049DB04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8049B04C;
}

loc_8049AFE8:
{
    r0 = MemoryInline::FlatRead32((r3 + 64));
}

loc_8049AFF0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(8000))) {
        goto loc_8049B000;
    }
}

loc_8049AFF4:
{
    r0 = MemoryInline::FlatRead16((r3 + 56));
}

loc_8049AFFC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(16))) {
        goto loc_8049B04C;
    }
}

loc_8049B000:
{
    r0 = MemoryInline::FlatRead8((r3 + 60));
}

loc_8049B008:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049B04C;
    }
}

loc_8049B00C:
{
    r3 = 0x80740000u;
    r3 = (r3 + -3096);
    r0 = MemoryInline::FlatRead8((r3 + 1044));
}

loc_8049B01C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_8049B034;
    }
}

loc_8049B020:
{
    r3 = 589824;
    r4 = 0x80610000u;
    r3 = (r3 + 3);
    r4 = (r4 + 32264);
    ctx->lr = 0x8049B034u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8047ABB0_2E47 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_2E47);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_2E47 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8049B034:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r31 + 108));
    MemoryInline::FlatWrite8((r31 + 60), static_cast<uint8_t>(r0));
    r5 = 0;
    r4 = MemoryInline::FlatRead8((r31 + 13));
    ctx->lr = 0x8049B04Cu;
    if constexpr (KnownRegArgsCpuCall<0x8049DB04u>(&func_8049DB04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8049DB04_3567 = func_8049DB04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049DB04_3567);
        r4 = static_cast<uint32_t>(regargs_result_8049DB04_3567 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8049DB04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8049B04C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_8049AE94(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8049AE94_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8049AE94 func_8049AE94 preserves=true fpr_mask=0x00000000
