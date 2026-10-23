#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800472DC(CpuContext* ctx);
extern "C" uint64_t func_800472DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800470D8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_800470D8;

loc_800470D8:
{
}

loc_800470DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80047104;
    }
}

loc_800470E0:
{
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    MemoryInline::FlatWriteRam8((r3 + 26), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 27));
}

loc_800470F8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_return;
    }
}

loc_800470FC:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800472DCu>(&func_800472DC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_800472DC_494 = func_800472DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800472DC_494);
        r4 = static_cast<uint32_t>(regargs_result_800472DC_494 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800472DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80047104:
{
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    MemoryInline::FlatWriteRam8((r3 + 26), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800470D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800470D8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x80000001 fpr_write=0x80000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800470D8 func_800470D8 preserves=true fpr_mask=0x00000000
