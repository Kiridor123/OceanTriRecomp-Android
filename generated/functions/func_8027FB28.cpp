#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027F7DC(CpuContext* ctx);
extern "C" uint64_t func_8027F7DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027FA5C(CpuContext* ctx);
extern "C" uint64_t func_8027FA5C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8027FB28_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8027FB28;

loc_8027FB28:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r3 = r31;
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r30 & 65535);
}

loc_8027FB5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(110))) {
        goto loc_8027FB84;
    }
}

loc_8027FB60:
{
}

loc_8027FB64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(111))) {
        goto loc_8027FB94;
    }
}

loc_8027FB68:
{
}

loc_8027FB6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(440))) {
        goto loc_8027FBA4;
    }
}

loc_8027FB70:
{
}

loc_8027FB74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(441))) {
        goto loc_8027FBB4;
    }
}

loc_8027FB78:
{
}

loc_8027FB7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(442))) {
        goto loc_8027FBC4;
    }
}

loc_8027FB80:
{
    goto loc_8027FBD0;
}

loc_8027FB84:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8027FB90u;
    if constexpr (KnownRegArgsCpuCall<0x8027FA5Cu>(&func_8027FA5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027FA5C_890 = func_8027FA5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027FA5C_890);
        r4 = static_cast<uint32_t>(regargs_result_8027FA5C_890 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027FA5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8027FBD0;
}

loc_8027FB94:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x8027FBA0u;
    if constexpr (KnownRegArgsCpuCall<0x8027FA5Cu>(&func_8027FA5C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027FA5C_BFC = func_8027FA5C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027FA5C_BFC);
        r4 = static_cast<uint32_t>(regargs_result_8027FA5C_BFC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027FA5Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8027FBD0;
}

loc_8027FBA4:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8027FBB0u;
    if constexpr (KnownRegArgsCpuCall<0x8027F7DCu>(&func_8027F7DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027F7DC_F68 = func_8027F7DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F7DC_F68);
        r4 = static_cast<uint32_t>(regargs_result_8027F7DC_F68 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027F7DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8027FBD0;
}

loc_8027FBB4:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x8027FBC0u;
    if constexpr (KnownRegArgsCpuCall<0x8027F7DCu>(&func_8027F7DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027F7DC_12D4 = func_8027F7DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F7DC_12D4);
        r4 = static_cast<uint32_t>(regargs_result_8027F7DC_12D4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027F7DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8027FBD0;
}

loc_8027FBC4:
{
    r3 = r31;
    r4 = 2;
    ctx->lr = 0x8027FBD0u;
    if constexpr (KnownRegArgsCpuCall<0x8027F7DCu>(&func_8027F7DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027F7DC_1643 = func_8027F7DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027F7DC_1643);
        r4 = static_cast<uint32_t>(regargs_result_8027F7DC_1643 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027F7DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8027FBD0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027FB28(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027FB28_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027FB28 func_8027FB28 preserves=true fpr_mask=0x00000000
