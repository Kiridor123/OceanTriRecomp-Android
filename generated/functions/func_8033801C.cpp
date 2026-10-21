#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80337D74(CpuContext* ctx);
extern "C" uint64_t func_80337D74_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8033801C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8033801Cu);
    goto loc_8033801C;

loc_8033801C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r31));
    r5 = MemoryInline::FlatRead8((r3 + 20));
    r0 = MemoryInline::FlatRead8((r4 + 8));
}

loc_80338048:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8033808C;
    }
}

loc_8033804C:
{
    r5 = MemoryInline::FlatRead8((r3 + 8));
    r0 = MemoryInline::FlatRead8((r4 + 9));
}

loc_80338058:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_8033808C;
    }
}

loc_8033805C:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 11));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r4 + 11));
    r4 = MemoryInline::FlatRead16((r4 + 12));
    ctx->lr = 0x80338080u;
    if constexpr (KnownRegArgsCpuCall<0x80337D74u>(&func_80337D74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80337D74_7A7 = func_80337D74_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80337D74_7A7);
        r4 = static_cast<uint32_t>(regargs_result_80337D74_7A7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80337D74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r30 + 28), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r31));
}

loc_8033808C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8033801C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033801C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8033801C func_8033801C preserves=true fpr_mask=0x00000000
