#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013AB30(CpuContext* ctx);
extern "C" uint32_t func_8013AB30_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8013A9B8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x8013A9B8u);
    goto loc_8013A9B8;

loc_8013A9B8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2402), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2472), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 1086), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2457), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2458), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2459), static_cast<uint8_t>(r0));
    r4 = (r4 & 255);
    if constexpr (KnownRegArgsCpuCall<0x8013AB30u>(&func_8013AB30)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_8013AB30_425 = func_8013AB30_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8013AB30_425;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8013AB30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8013A9B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013A9B8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013A9B8 func_8013A9B8 preserves=true fpr_mask=0x00000000
