#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80468C74(CpuContext* ctx);
extern "C" uint64_t func_80468C74_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80468CA4(CpuContext* ctx);
extern "C" uint64_t func_80468CA4_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80468CD8_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_80468CD8;

loc_80468CD8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r5;
    r30 = r3;
    r28 = r4;
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_80468D08:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r0))) {
        goto loc_80468D14;
    }
}

loc_80468D0C:
{
    r3 = -1;
    goto loc_80468DC0;
}

loc_80468D14:
{
    r3 = (r3 + 24);
    ctx->lr = 0x80468D1Cu;
    if constexpr (KnownRegArgsCpuCall<0x80468C74u>(&func_80468C74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80468C74_66F = func_80468C74_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80468C74_66F);
        r4 = static_cast<uint32_t>(regargs_result_80468C74_66F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80468C74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r4 = (r3 - r4);
    r29 = (r0 - r4);
}

loc_80468D34:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r31))) {
        goto loc_80468D54;
    }
}

loc_80468D38:
{
    r4 = r28;
    r5 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    goto loc_80468D80;
}

loc_80468D54:
{
    r4 = r28;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r4 = (r28 + r29);
    r5 = (r31 - r29);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 + r31);
    r0 = (r0 - r29);
    MemoryInline::FlatWrite32((r30 + 4), r0);
}

loc_80468D80:
{
    r4 = MemoryInline::FlatRead32((r30 + 8));
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r0 - r4);
}

loc_80468D94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80468D9C;
    }
}

loc_80468D98:
{
    MemoryInline::FlatWrite32((r30 + 4), r4);
}

loc_80468D9C:
{
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r3 = (r30 + 24);
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r4 = (r4 - r31);
    MemoryInline::FlatWrite32((r30 + 20), r4);
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r30 + 16), r0);
    if constexpr (KnownRegArgsCpuCall<0x80468CA4u>(&func_80468CA4)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80468CA4_1099 = func_80468CA4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80468CA4_1099);
        r4 = static_cast<uint32_t>(regargs_result_80468CA4_1099 >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80468CA4u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 0;
}

loc_80468DC0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80468CD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80468CD8_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80468CD8 func_80468CD8 preserves=true fpr_mask=0x00000000
