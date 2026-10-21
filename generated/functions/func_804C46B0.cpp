#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C2C60(CpuContext* ctx);
extern "C" uint32_t func_804C2C60_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_804C46B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804C46B0u);
    goto loc_804C46B0;

loc_804C46B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_804C46BC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r3 = MemoryInline::FlatRead32((r13 + -15232));
    r0 = (r0 * 112);
    r31 = (r3 + r0);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_804C46E0;
    }
}

loc_804C46D8:
{
    r0 = 0;
    goto loc_804C46F0;
}

loc_804C46E0:
{
}

loc_804C46E4:
{
    r0 = 127;
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(127))) {
        goto loc_804C46F0;
    }
}

loc_804C46EC:
{
    r0 = r4;
}

loc_804C46F0:
{
    MemoryInline::FlatWrite32((r31 + 28), r0);
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804C2C60u>(&func_804C2C60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804C2C60_5C3 = func_804C2C60_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804C2C60_5C3;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804C2C60u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 | 1073741824);
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C46B0 func_804C46B0 preserves=true fpr_mask=0x00000000
