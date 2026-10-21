#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EF5E0(CpuContext* ctx);
extern "C" uint64_t func_804EF5E0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8081D160(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x8081D160u);
    goto loc_8081D160;

loc_8081D160:
{
    r4 = MemoryInline::FlatRead32(r3);
}

loc_8081D168:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(4))) {
        goto loc_return;
    }
}

loc_8081D16C:
{
    r0 = MemoryInline::FlatRead8((r3 + 28));
}

loc_8081D174:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8081D178:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    r3 = r4;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804EF5E0u>(&func_804EF5E0)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_804EF5E0_449 = func_804EF5E0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804EF5E0_449);
        r4 = static_cast<uint32_t>(regargs_result_804EF5E0_449 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804EF5E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081D160 func_8081D160 preserves=true fpr_mask=0x00000000
