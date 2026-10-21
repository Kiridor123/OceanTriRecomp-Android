#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80469048(CpuContext* ctx);
extern "C" uint32_t func_80469048_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8046ABE4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8046ABE4u);
    goto loc_8046ABE4;

loc_8046ABE4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -16328));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
}

loc_8046AC0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046AC18;
    }
}

loc_8046AC10:
{
    r4 = (r1 + 8);
    goto loc_8046AC3C;
}

loc_8046AC18:
{
    r7 = MemoryInline::FlatRead8((r1 + 11));
    r4 = (r1 + 12);
    r6 = MemoryInline::FlatRead8((r1 + 10));
    r5 = MemoryInline::FlatRead8((r1 + 9));
    r0 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
}

loc_8046AC3C:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r31 = 4;
    r30 = 0;
    r0 = (2176 - r5);
}

loc_8046AC50:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(4))) {
        goto loc_8046AC5C;
    }
}

loc_8046AC54:
{
    r30 = 769;
    r31 = r0;
}

loc_8046AC5C:
{
}

loc_8046AC60:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_8046AC74;
    }
}

loc_8046AC64:
{
    r3 = (r3 + r5);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    goto loc_8046AC84;
}

loc_8046AC74:
{
    r3 = (r3 + r5);
    r5 = r31;
    r3 = (r3 + 12);
    if constexpr (KnownRegArgsCpuCall<0x80469048u>(&func_80469048)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80469048_A14 = func_80469048_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_80469048_A14;
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
        InvokeDirectCpu<0x80469048u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8046AC84:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
    r3 = r30;
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    MemoryInline::FlatWrite32((r29 + 4), r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8046ABE4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8046ABE4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8046ABE4 func_8046ABE4 preserves=true fpr_mask=0x00000000
