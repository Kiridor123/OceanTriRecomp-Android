#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80223EB8(CpuContext* ctx);
extern "C" uint32_t func_80223EB8_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802682C4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802682C4u);
    goto loc_802682C4;

loc_802682C4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_802682E4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80268350;
    }
}

loc_802682E8:
{
}

loc_802682EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_80268328;
    }
}

loc_802682F0:
{
    r30 = MemoryInline::FlatRead32((r31 + 12));
    r29 = 0;
    goto loc_80268318;
}

loc_802682FC:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80268304:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80268310;
    }
}

loc_80268308:
{
    r3 = MemoryInline::FlatRead32((r30 + 316));
    if constexpr (KnownRegArgsCpuCall<0x80223EB8u>(&func_80223EB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80223EB8_653 = func_80223EB8_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_80223EB8_653;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80223EB8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
}

loc_80268310:
{
    r29 = (r29 + 1);
    r30 = (r30 + 2848);
}

loc_80268318:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_80268320:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_802682FC;
    }
}

loc_80268324:
{
    goto loc_80268348;
}

loc_80268328:
{
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r3 * 2848);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8026833C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80268348;
    }
}

loc_80268340:
{
    r3 = MemoryInline::FlatRead32((r4 + 316));
    if constexpr (KnownRegArgsCpuCall<0x80223EB8u>(&func_80223EB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80223EB8_AAE = func_80223EB8_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_80223EB8_AAE;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80223EB8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
}

loc_80268348:
{
    r0 = 4;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_80268350:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802682C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802682C4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802682C4 func_802682C4 preserves=true fpr_mask=0x00000000
