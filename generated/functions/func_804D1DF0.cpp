#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D16C0(CpuContext* ctx);
extern "C" uint64_t func_804D16C0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint32_t func_804D1DF0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];

    goto loc_804D1DF0;

loc_804D1DF0:
{
    MemoryHw::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_804D1DFC:
{
    MemoryHw::FlatWriteRam32((r1 + 20), r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804D1E18;
    }
}

loc_804D1E04:
{
    r3 = -872415232;
    r0 = 255;
    MemoryHw::FlatWrite16((r3 + 16400), static_cast<uint16_t>(r0));
    r3 = -268435456;
    ctx->lr = 0x804D1E18u;
    if constexpr (KnownRegArgsCpuCall<0x804D16C0u>(&func_804D16C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804D16C0_458 = func_804D16C0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804D16C0_458);
        r4 = static_cast<uint32_t>(regargs_result_804D16C0_458 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804D16C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804D1E18:
{
    r0 = MemoryHw::FlatRead32((r1 + 20));
    r3 = 1;
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_804D1DF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804D1DF0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D1DF0 func_804D1DF0 preserves=true fpr_mask=0x00000000
