#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F35EC(CpuContext* ctx);
extern "C" uint64_t func_801F35EC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_801F3F40_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x801F3F40u);
    goto loc_801F3F40;

loc_801F3F40:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_801F3F48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F3F68;
    }
}

loc_801F3F4C:
{
}

loc_801F3F50:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801F3F60;
    }
}

loc_801F3F54:
{
    r3 = 0x805C0000u;
    r3 = (r3 + -28840);
    if constexpr (KnownRegArgsCpuCall<0x801F35ECu>(&func_801F35EC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_801F35EC_3EA = func_801F35EC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801F35EC_3EA);
        r4 = static_cast<uint32_t>(regargs_result_801F35EC_3EA >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801F35ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_801F3F60:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_801F3F68:
{
    r3 = 0x805C0000u;
    r3 = (r3 + -28888);
    if constexpr (KnownRegArgsCpuCall<0x801F35ECu>(&func_801F35EC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_801F35EC_733 = func_801F35EC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801F35EC_733);
        r4 = static_cast<uint32_t>(regargs_result_801F35EC_733 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801F35ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801F3F40(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801F3F40_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F3F40 func_801F3F40 preserves=true fpr_mask=0x00000000
