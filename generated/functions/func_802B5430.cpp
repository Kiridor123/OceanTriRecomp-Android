#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B54EC(CpuContext* ctx);
extern "C" uint32_t func_802B54EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802B5528(CpuContext* ctx);
extern "C" uint32_t func_802B5528_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802B559C(CpuContext* ctx);
extern "C" uint32_t func_802B559C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802B564C(CpuContext* ctx);
extern "C" uint32_t func_802B564C_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_802B5430_ra28_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802B5430;

loc_802B5430:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = (r3 + 36);
    r31 = (r3 + 3012);
}

loc_802B5454:
{
    r3 = r30;
    ctx->lr = 0x802B545Cu;
    if constexpr (KnownRegArgsCpuCall<0x802B564Cu>(&func_802B564C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B564C_583 = func_802B564C_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_802B564C_583;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802B564Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r30 = (r30 + 1488);
}

loc_802B5464:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_802B5454;
    }
}

loc_802B5468:
{
    r3 = (r29 + 3080);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r30 = (r29 + 3104);
    r31 = (r29 + 10244);
}

loc_802B5478:
{
    r3 = r30;
    ctx->lr = 0x802B5480u;
    if constexpr (KnownRegArgsCpuCall<0x802B559Cu>(&func_802B559C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B559C_98A = func_802B559C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802B559C_98A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802B559Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r30 = (r30 + 476);
}

loc_802B5488:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_802B5478;
    }
}

loc_802B548C:
{
    r3 = (r29 + 10248);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r30 = (r29 + 11308);
    r31 = (r29 + 11948);
}

loc_802B549C:
{
    r3 = r30;
    ctx->lr = 0x802B54A4u;
    if constexpr (KnownRegArgsCpuCall<0x802B5528u>(&func_802B5528)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B5528_D3C = func_802B5528_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802B5528_D3C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802B5528u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r30 = (r30 + 160);
}

loc_802B54AC:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_802B549C;
    }
}

loc_802B54B0:
{
    r30 = (r29 + 11968);
    r31 = (r29 + 12176);
}

loc_802B54B8:
{
    r3 = r30;
    ctx->lr = 0x802B54C0u;
    if constexpr (KnownRegArgsCpuCall<0x802B54ECu>(&func_802B54EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B54EC_1076 = func_802B54EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802B54EC_1076;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802B54ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r30 = (r30 + 52);
}

loc_802B54C8:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r31))) {
        goto loc_802B54B8;
    }
}

loc_802B54CC:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_802B5430(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802B5430_ra28_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000002A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B5430 func_802B5430 preserves=true fpr_mask=0x00000000
