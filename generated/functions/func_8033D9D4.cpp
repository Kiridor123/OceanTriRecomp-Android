#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8033DDC4(CpuContext* ctx);
extern "C" uint64_t func_8033DDC4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8033D9D4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8033D9D4;

loc_8033D9D4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 56), static_cast<uint16_t>(r0));
    r3 = (r3 + 32);
    r4 = 0;
    r5 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r7 = 0;
    r6 = 0;
    goto loc_8033DA44;
}

loc_8033DA10:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0 = MemoryInline::FlatRead16((r31 + 52));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8033DA1C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_8033DA40;
    }
}

loc_8033DA20:
{
    r3 = (r5 + r3);
    r4 = MemoryInline::FlatRead8((r3 + 1));
}

loc_8033DA2C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8033DA40;
    }
}

loc_8033DA30:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r4));
    r7 = (r7 + 1);
}

loc_8033DA40:
{
    r6 = (r6 + 1);
}

loc_8033DA44:
{
    r5 = MemoryInline::FlatRead32((r31 + 144));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r3 = MemoryInline::FlatRead32((r31 + 148));
    r0 = MemoryInline::FlatRead8(r5);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_8033DA60:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8033DA10;
    }
}

loc_8033DA64:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8033DA70u;
    if constexpr (KnownRegArgsCpuCall<0x8033DDC4u>(&func_8033DDC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8033DDC4_A99 = func_8033DDC4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8033DDC4_A99);
        r4 = static_cast<uint32_t>(regargs_result_8033DDC4_A99 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8033DDC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8033D9D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033D9D4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8033D9D4 func_8033D9D4 preserves=true fpr_mask=0x00000000
