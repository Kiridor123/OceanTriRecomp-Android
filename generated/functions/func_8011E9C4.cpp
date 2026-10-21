#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011E858(CpuContext* ctx);
extern "C" uint64_t func_8011E858_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8011E918(CpuContext* ctx);
extern "C" uint64_t func_8011E918_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8011E9C4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8011E9C4u);
    goto loc_8011E9C4;

loc_8011E9C4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = 0;
    r31 = 0;
}

loc_8011E9EC:
{
    r4 = (r29 & 255);
    r0 = (r4 * 6);
    r30 = (r28 + r0);
    MemoryInline::FlatWrite8((r30 + 2104), static_cast<uint8_t>(r31));
    r3 = r28;
    ctx->lr = 0x8011EA04u;
    if constexpr (KnownRegArgsCpuCall<0x8011E858u>(&func_8011E858)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8011E858_531 = func_8011E858_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8011E858_531);
        r4 = static_cast<uint32_t>(regargs_result_8011E858_531 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8011E858u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite8((r30 + 2105), static_cast<uint8_t>(r31));
    r3 = r28;
    r4 = (r29 & 255);
    ctx->lr = 0x8011EA14u;
    if constexpr (KnownRegArgsCpuCall<0x8011E918u>(&func_8011E918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8011E918_854 = func_8011E918_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8011E918_854);
        r4 = static_cast<uint32_t>(regargs_result_8011E918_854 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8011E918u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = (r29 + 1);
}

loc_8011EA1C:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(8))) {
        goto loc_8011E9EC;
    }
}

loc_8011EA20:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8011E9C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8011E9C4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000000 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8011E9C4 func_8011E9C4 preserves=true fpr_mask=0x00000000
