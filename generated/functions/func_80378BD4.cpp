#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80378C90(CpuContext* ctx);
extern "C" uint32_t func_80378C90_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80378BD4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
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

    MKW_GUEST_ENTER(0x80378BD4u);
    goto loc_80378BD4;

loc_80378BD4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = 0x806C0000u;
    r4 = (r4 + 6576);
    r29 = (r4 + 8132);
    r0 = MemoryInline::FlatRead32(r29);
}

loc_80378C04:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_80378C10;
    }
}

loc_80378C08:
{
    r3 = 0;
    goto loc_80378C70;
}

loc_80378C10:
{
    r28 = r3;
    r30 = (r3 * 224);
    r3 = (r29 + r30);
    r31 = (r3 + 20);
    goto loc_80378C58;
}

loc_80378C24:
{
    r0 = (r28 + 1);
}

loc_80378C2C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80378C4C;
    }
}

loc_80378C30:
{
    r3 = r31;
    r4 = (r30 + r29);
    r4 = (r4 + 244);
    if constexpr (KnownRegArgsCpuCall<0x80378C90u>(&func_80378C90)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80378C90_63F = func_80378C90_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_80378C90_63F;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80378C90u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    r3 = (r29 + r28);
    r0 = MemoryInline::FlatRead8((r3 + 5));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
}

loc_80378C4C:
{
    r30 = (r30 + 224);
    r31 = (r31 + 224);
    r28 = (r28 + 1);
}

loc_80378C58:
{
    r3 = MemoryInline::FlatRead32(r29);
}

loc_80378C60:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r3))) {
        goto loc_80378C24;
    }
}

loc_80378C64:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam32(r29, r0);
    r3 = 1;
}

loc_80378C70:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80378BD4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80378BD4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80378BD4 func_80378BD4 preserves=true fpr_mask=0x00000000
