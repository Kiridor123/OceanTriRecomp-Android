#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804D31F0(CpuContext* ctx);
extern "C" uint64_t func_804D31F0_ra0_0_18_0(CpuContext*);

extern "C" void func_800062C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    MKW_GUEST_ENTER(0x800062C0u);
    goto loc_800062C0;

loc_800062C0:
{
    r3 = 0x80000000u;
    r0 = MemoryInline::FlatRead16((r3 + 12516));
    r0 = (r0 & 3823);
}

loc_800062CC:
{
}

loc_800062D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3823))) {
        goto loc_return;
    }
}

loc_800062D4:
{
    r3 = 0;
    r4 = 0;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804D31F0u>(&func_804D31F0)) {
        ctx->gpr[5] = r5;
        const auto regargs_result_804D31F0_37F = func_804D31F0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804D31F0_37F);
        r4 = static_cast<uint32_t>(regargs_result_804D31F0_37F >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D31F0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000003 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800062C0 func_800062C0 preserves=true fpr_mask=0x00000000
