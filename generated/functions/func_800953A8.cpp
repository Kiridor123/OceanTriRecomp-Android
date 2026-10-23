#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006E310(CpuContext* ctx);
extern "C" uint64_t func_8006E310_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80071070(CpuContext* ctx);
extern "C" uint64_t func_80071070_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_800953A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800953A8;

loc_800953A8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r5;
}

loc_800953C8:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(8))) {
        goto loc_80095418;
    }
}

loc_800953CC:
{
    ctx->lr = 0x800953D0u;
    if constexpr (KnownRegArgsCpuCall<0x8006E310u>(&func_8006E310)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8006E310_4D5 = func_8006E310_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8006E310_4D5);
        r4 = static_cast<uint32_t>(regargs_result_8006E310_4D5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8006E310u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r31 * 52);
    r31 = (r3 + r0);
}

loc_800953DC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800953FC;
    }
}

loc_800953E0:
{
    r3 = (r31 + 172);
    r4 = r30;
    ctx->lr = 0x800953ECu;
    if constexpr (KnownRegArgsCpuCall<0x80071070u>(&func_80071070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80071070_8C1 = func_80071070_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071070_8C1);
        r4 = static_cast<uint32_t>(regargs_result_80071070_8C1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80071070u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead8((r31 + 171));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r31 + 171), static_cast<uint8_t>(r0));
    goto loc_80095410;
}

loc_800953FC:
{
    r3 = (r31 + 172);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r0 = MemoryInline::FlatRead8((r31 + 171));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r31 + 171), static_cast<uint8_t>(r0));
}

loc_80095410:
{
    r3 = 1;
    goto loc_8009541C;
}

loc_80095418:
{
    r3 = 0;
}

loc_8009541C:
{
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

// RECOMP_GUEST_ABI gpr_read=0x000000FA gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800953A8 func_800953A8 preserves=true fpr_mask=0x00000000
