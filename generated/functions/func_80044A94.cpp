#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EF5E0(CpuContext* ctx);
extern "C" uint64_t func_804EF5E0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80044A94_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_80044A94;

loc_80044A94:
{
    r5 = 0;
    r4 = 0x80660000u;
    r0 = (r4 + -21920);
    r3 = (r3 & 255);
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + 51), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r4 + 55), static_cast<uint8_t>(r5));
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804EF5E0u>(&func_804EF5E0)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_804EF5E0_374 = func_804EF5E0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EF5E0_374);
        r4 = static_cast<uint32_t>(regargs_result_804EF5E0_374 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EF5E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80044A94(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80044A94_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80044A94 func_80044A94 preserves=true fpr_mask=0x00000000
