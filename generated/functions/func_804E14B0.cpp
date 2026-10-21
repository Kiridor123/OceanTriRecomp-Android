#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804E1070(CpuContext* ctx);
extern "C" uint64_t func_804E1070_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804E1290(CpuContext* ctx);
extern "C" uint64_t func_804E1290_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_804E13A0(CpuContext* ctx);
extern "C" uint64_t func_804E13A0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint32_t func_804E14B0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x804E14B0u);
    goto loc_804E14B0;

loc_804E14B0:
{
    r4 = MemoryInline::FlatRead32((r3 + 28));
    r0 = MemoryInline::FlatRead16(r4);
}

loc_804E14BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E14D4;
    }
}

loc_804E14C0:
{
}

loc_804E14C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_804E14D8;
    }
}

loc_804E14C8:
{
}

loc_804E14CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_804E14DC;
    }
}

loc_804E14D0:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_804E14D4:
{
    if constexpr (KnownRegArgsCpuCall<0x804E1070u>(&func_804E1070)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_804E1070_58C = func_804E1070_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804E1070_58C);
        r4 = static_cast<uint32_t>(regargs_result_804E1070_58C >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804E1070u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_804E14D8:
{
    if constexpr (KnownRegArgsCpuCall<0x804E1290u>(&func_804E1290)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_804E1290_80A = func_804E1290_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804E1290_80A);
        r4 = static_cast<uint32_t>(regargs_result_804E1290_80A >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804E1290u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_804E14DC:
{
    if constexpr (KnownRegArgsCpuCall<0x804E13A0u>(&func_804E13A0)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_804E13A0_A88 = func_804E13A0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804E13A0_A88);
        r4 = static_cast<uint32_t>(regargs_result_804E13A0_A88 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804E13A0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_804E14B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804E14B0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804E14B0 func_804E14B0 preserves=true fpr_mask=0x00000000
