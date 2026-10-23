#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804EFF30(CpuContext* ctx);
extern "C" uint64_t func_804EFF30_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" void func_8081D070(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8081D070;

loc_8081D070:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32(r3);
    r3 = r31;
    ctx->lr = 0x8081D094u;
    if constexpr (KnownRegArgsCpuCall<0x804EFF30u>(&func_804EFF30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804EFF30_3ED = func_804EFF30_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_804EFF30_3ED);
        r4 = static_cast<uint32_t>(regargs_result_804EFF30_3ED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804EFF30u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8081D098:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081D0AC;
    }
}

loc_8081D09C:
{
    r3 = r31;
    r4 = 3;
    r5 = 0;
    ctx->lr = 0x8081D0ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804EFF80u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_8081D0AC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 65), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081D070 func_8081D070 preserves=true fpr_mask=0x00000000
