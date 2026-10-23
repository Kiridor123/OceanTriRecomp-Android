#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80129A00(CpuContext* ctx);
extern "C" uint32_t func_80129A00_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8012A3B8(CpuContext* ctx);
extern "C" uint32_t func_8012A3B8_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80130FD8(CpuContext* ctx);
extern "C" uint64_t func_80130FD8_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80135CC0(CpuContext* ctx);
extern "C" uint64_t func_80135CC0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80137718(CpuContext* ctx);
extern "C" uint32_t func_80137718_ra8_0_10_0(CpuContext*, uint32_t);

extern "C" uint64_t func_801770F0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_801770F0;

loc_801770F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r0 = (r4 & 255);
}

loc_80177110:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80177130;
    }
}

loc_80177114:
{
}

loc_80177118:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80177158;
    }
}

loc_8017711C:
{
}

loc_80177120:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80177194;
    }
}

loc_80177124:
{
}

loc_80177128:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_8017726C;
    }
}

loc_8017712C:
{
    goto loc_801772A4;
}

loc_80177130:
{
    r0 = (r5 & 255);
}

loc_80177138:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80177148;
    }
}

loc_8017713C:
{
}

loc_80177140:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80177150;
    }
}

loc_80177144:
{
    goto loc_801772A4;
}

loc_80177148:
{
    ctx->lr = 0x8017714Cu;
    if constexpr (KnownRegArgsCpuCall<0x80130FD8u>(&func_80130FD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80130FD8_C05 = func_80130FD8_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80130FD8_C05);
        r4 = static_cast<uint32_t>(regargs_result_80130FD8_C05 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80130FD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_801772A4;
}

loc_80177150:
{
    if constexpr (KnownRegArgsCpuCall<0x80137718u>(&func_80137718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80137718_107F = func_80137718_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80137718_107F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80137718u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801772A4;
}

loc_80177158:
{
    r4 = (r5 & 255);
    r0 = (r4 + -25);
}

loc_80177164:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8017717C;
    }
}

loc_80177168:
{
}

loc_8017716C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(29))) {
        goto loc_80177184;
    }
}

loc_80177170:
{
}

loc_80177174:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(38))) {
        goto loc_8017718C;
    }
}

loc_80177178:
{
    goto loc_801772A4;
}

loc_8017717C:
{
    ctx->lr = 0x80177180u;
    if constexpr (KnownRegArgsCpuCall<0x8012A3B8u>(&func_8012A3B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8012A3B8_1566 = func_8012A3B8_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_8012A3B8_1566;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012A3B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    goto loc_801772A4;
}

loc_80177184:
{
    ctx->lr = 0x80177188u;
    if constexpr (KnownRegArgsCpuCall<0x80130FD8u>(&func_80130FD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80130FD8_18F6 = func_80130FD8_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80130FD8_18F6);
        r4 = static_cast<uint32_t>(regargs_result_80130FD8_18F6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80130FD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    goto loc_801772A4;
}

loc_8017718C:
{
    if constexpr (KnownRegArgsCpuCall<0x80137718u>(&func_80137718)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80137718_1D73 = func_80137718_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80137718_1D73;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80137718u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_801772A4;
}

loc_80177194:
{
    r4 = (r5 & 255);
    r0 = (r4 + -42);
}

loc_801771A0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80177248;
    }
}

loc_801771A4:
{
    r0 = (r4 + -36);
}

loc_801771AC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80177248;
    }
}

loc_801771B0:
{
}

loc_801771B4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(6))) {
        goto loc_801771CC;
    }
}

loc_801771B8:
{
}

loc_801771BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(7))) {
        goto loc_80177224;
    }
}

loc_801771C0:
{
}

loc_801771C4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(15))) {
        goto loc_80177224;
    }
}

loc_801771C8:
{
    goto loc_801772A4;
}

loc_801771CC:
{
    r31 = 50;
    r0 = MemoryInline::FlatRead8((r3 + 1992));
}

loc_801771D8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(41))) {
        goto loc_801771E0;
    }
}

loc_801771DC:
{
    r31 = 100;
}

loc_801771E0:
{
    r3 = r30;
    r4 = 3;
    // inline leaf 0x8011EA40 (5 guest instruction(s))
    r0 = (r4 & 255);
    r0 = (r0 * 6);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 2104));
    // end of inlined leaf 0x8011EA40
    r0 = (r3 & 255);
}

loc_801771F4:
{
    r4 = 255;
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(3))) {
        goto loc_80177200;
    }
}

loc_801771FC:
{
    r4 = 99;
}

loc_80177200:
{
    r3 = MemoryInline::FlatRead8((r30 + 484));
    r0 = (r4 - r31);
}

loc_8017720C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_8017721C;
    }
}

loc_80177210:
{
    r0 = (r3 + r31);
    MemoryInline::FlatWrite8((r30 + 484), static_cast<uint8_t>(r0));
    goto loc_801772A4;
}

loc_8017721C:
{
    MemoryInline::FlatWrite8((r30 + 484), static_cast<uint8_t>(r4));
    goto loc_801772A4;
}

loc_80177224:
{
    r4 = MemoryInline::FlatRead8((r3 + 484));
}

loc_8017722C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(100))) {
        goto loc_8017723C;
    }
}

loc_80177230:
{
    r0 = (r4 + -100);
    MemoryInline::FlatWrite8((r3 + 484), static_cast<uint8_t>(r0));
    goto loc_801772A4;
}

loc_8017723C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 484), static_cast<uint8_t>(r0));
    goto loc_801772A4;
}

loc_80177248:
{
    r4 = MemoryInline::FlatRead8((r3 + 484));
}

loc_80177250:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(30))) {
        goto loc_80177260;
    }
}

loc_80177254:
{
    r0 = (r4 + -30);
    MemoryInline::FlatWrite8((r3 + 484), static_cast<uint8_t>(r0));
    goto loc_801772A4;
}

loc_80177260:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 484), static_cast<uint8_t>(r0));
    goto loc_801772A4;
}

loc_8017726C:
{
    r0 = (r5 & 255);
}

loc_80177274:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(177))) {
        goto loc_8017728C;
    }
}

loc_80177278:
{
}

loc_8017727C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(201))) {
        goto loc_80177294;
    }
}

loc_80177280:
{
}

loc_80177284:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(209))) {
        goto loc_80177294;
    }
}

loc_80177288:
{
    goto loc_801772A4;
}

loc_8017728C:
{
    ctx->lr = 0x80177290u;
    if constexpr (KnownRegArgsCpuCall<0x80129A00u>(&func_80129A00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80129A00_2DA4 = func_80129A00_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80129A00_2DA4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80129A00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    goto loc_801772A4;
}

loc_80177294:
{
    r3 = r30;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x801772A4u;
    if constexpr (KnownRegArgsCpuCall<0x80135CC0u>(&func_80135CC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80135CC0_302F = func_80135CC0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80135CC0_302F);
        r4 = static_cast<uint32_t>(regargs_result_80135CC0_302F >> 32);
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80135CC0u>(ctx);
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

loc_801772A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_801770F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801770F0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801770F0 func_801770F0 preserves=true fpr_mask=0x00000000
