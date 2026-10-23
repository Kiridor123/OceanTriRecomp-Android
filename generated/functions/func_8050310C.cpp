#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805034B4(CpuContext* ctx);
extern "C" uint32_t func_805034B4_ra70_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8050310C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8050310C;

loc_8050310C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 24));
}

loc_80503128:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80503134;
    }
}

loc_8050312C:
{
    r0 = MemoryInline::FlatRead16((r3 + 26));
    goto loc_80503194;
}

loc_80503134:
{
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r4));
    r5 = r4;
    r6 = MemoryInline::FlatRead32((r3 + 20));
    r6 = MemoryInline::FlatRead32((r6 + 16));
    goto loc_8050317C;
}

loc_80503148:
{
    r0 = MemoryInline::FlatRead16(r6);
}

loc_80503150:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r4))) {
        goto loc_80503178;
    }
}

loc_80503154:
{
    r0 = MemoryInline::FlatRead16((r6 + 2));
}

loc_8050315C:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_80503178;
    }
}

loc_80503160:
{
    r3 = r31;
    r4 = r6;
    if constexpr (KnownRegArgsCpuCall<0x805034B4u>(&func_805034B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        const auto regargs_result_805034B4_781 = func_805034B4_ra70_0_10_0(ctx, r4, r5, r6);
        r4 = regargs_result_805034B4_781;
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x805034B4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite16((r31 + 26), static_cast<uint16_t>(r3));
    r0 = (r3 & 65535);
    goto loc_80503194;
}

loc_80503178:
{
    r6 = MemoryInline::FlatRead32((r6 + 8));
}

loc_8050317C:
{
}

loc_80503180:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80503148;
    }
}

loc_80503184:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_80503194:
{
}

loc_80503198:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_805031AC;
    }
}

loc_8050319C:
{
    r4 = MemoryInline::FlatRead32((r31 + 20));
    r3 = 1;
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    goto loc_805031B0;
}

loc_805031AC:
{
    r3 = 0;
}

loc_805031B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8050310C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050310C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8050310C func_8050310C preserves=true fpr_mask=0x00000000
