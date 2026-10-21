#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004E538(CpuContext* ctx);
extern "C" uint64_t func_8004E538_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80396F38(CpuContext* ctx);
extern "C" uint32_t func_80396F38_ra0_0_8_0(CpuContext*);
extern "C" void func_80396F68(CpuContext* ctx);
extern "C" uint32_t func_80396F68_ra0_0_8_0(CpuContext*);
extern "C" void func_80396F98(CpuContext* ctx);
extern "C" uint64_t func_80396F98_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80397160_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80397160u);
    goto loc_80397160;

loc_80397160:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    // inline leaf 0x8004D1A4 (3 guest instruction(s))
    r3 = 0x80670000u;
    r3 = (r3 + -14744);
    // end of inlined leaf 0x8004D1A4
    r31 = r3;
}

loc_80397188:
{
    r0 = (r30 & 255);
}

loc_80397190:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803971C8;
    }
}

loc_80397194:
{
}

loc_80397198:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80397200;
    }
}

loc_8039719C:
{
}

loc_803971A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80397208;
    }
}

loc_803971A4:
{
}

loc_803971A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80397210;
    }
}

loc_803971AC:
{
}

loc_803971B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80397218;
    }
}

loc_803971B4:
{
}

loc_803971B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_80397220;
    }
}

loc_803971BC:
{
}

loc_803971C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_80397228;
    }
}

loc_803971C4:
{
    goto loc_80397258;
}

loc_803971C8:
{
    r3 = r29;
    ctx->lr = 0x803971D0u;
    if constexpr (KnownRegArgsCpuCall<0x80396F38u>(&func_80396F38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F38_A18 = func_80396F38_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F38_A18;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_803971D4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803971E0;
    }
}

loc_803971D8:
{
    r30 = 3;
    goto loc_80397260;
}

loc_803971E0:
{
    r3 = r29;
    ctx->lr = 0x803971E8u;
    if constexpr (KnownRegArgsCpuCall<0x80396F68u>(&func_80396F68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F68_D03 = func_80396F68_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F68_D03;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_803971EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803971F8;
    }
}

loc_803971F0:
{
    r30 = 8;
    goto loc_80397260;
}

loc_803971F8:
{
    r30 = 1;
    goto loc_80397260;
}

loc_80397200:
{
    r30 = 2;
    goto loc_80397260;
}

loc_80397208:
{
    r30 = 3;
    goto loc_80397260;
}

loc_80397210:
{
    r30 = 5;
    goto loc_80397260;
}

loc_80397218:
{
    r30 = 6;
    goto loc_80397260;
}

loc_80397220:
{
    r30 = 7;
    goto loc_80397260;
}

loc_80397228:
{
    r3 = r29;
    ctx->lr = 0x80397230u;
    if constexpr (KnownRegArgsCpuCall<0x80396F68u>(&func_80396F68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F68_1138 = func_80396F68_ra0_0_8_0(ctx);
        r3 = regargs_result_80396F68_1138;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80396F68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_80397234:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80397250;
    }
}

loc_80397238:
{
    r3 = (r31 + 164);
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8004E538u>(&func_8004E538)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004E538_13E5 = func_8004E538_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004E538_13E5);
        r4 = static_cast<uint32_t>(regargs_result_8004E538_13E5 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004E538u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r31 + 166);
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8004E538u>(&func_8004E538)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004E538_16C5 = func_8004E538_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004E538_16C5);
        r4 = static_cast<uint32_t>(regargs_result_8004E538_16C5 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004E538u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80397250:
{
    r30 = 8;
    goto loc_80397260;
}

loc_80397258:
{
    r3 = 0;
    goto loc_80397280;
}

loc_80397260:
{
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x8039726Cu;
    if constexpr (KnownRegArgsCpuCall<0x80396F98u>(&func_80396F98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80396F98_1A3A = func_80396F98_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80396F98_1A3A);
        r4 = static_cast<uint32_t>(regargs_result_80396F98_1A3A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80396F98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80397270:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80397278;
    }
}

loc_80397274:
{
    goto loc_80397188;
}

loc_80397278:
{
    MemoryInline::FlatWrite32((r29 + 12272), r30);
    r3 = 1;
}

loc_80397280:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80397160(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80397160_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80397160 func_80397160 preserves=true fpr_mask=0x00000000
