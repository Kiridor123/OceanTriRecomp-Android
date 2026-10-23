#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80452488(CpuContext* ctx);
extern "C" uint32_t func_80452488_ra8_1c_8_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_804536E8(CpuContext* ctx);
extern "C" uint64_t func_804536E8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80453A20_ra38_1c_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_80453A20;

loc_80453A20:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_80453A38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80453A44;
    }
}

loc_80453A3C:
{
    r3 = 0;
    goto loc_80453A98;
}

loc_80453A44:
{
    r3 = (r3 + 65536);
    r3 = (r3 + -26908);
    ctx->lr = 0x80453A50u;
    if constexpr (KnownRegArgsCpuCall<0x80452488u>(&func_80452488)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80452488_640 = func_80452488_ra8_1c_8_0(ctx, r3, f2.d, f3.d, f4.d);
        r3 = regargs_result_80452488_640;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80452488u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r31 = r3;
    r0 = 0;
    r4 = 0x806B0000u;
    r4 = (r4 + -12348);
    MemoryInline::FlatWriteRam8((r4 + 353), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + 351), static_cast<uint8_t>(r0));
}

loc_80453A6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80453A7C;
    }
}

loc_80453A70:
{
}

loc_80453A74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80453A88;
    }
}

loc_80453A78:
{
    goto loc_80453A94;
}

loc_80453A7C:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r4 + 353), static_cast<uint8_t>(r0));
    goto loc_80453A94;
}

loc_80453A88:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r4 + 351), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x804536E8u>(&func_804536E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804536E8_CB6 = func_804536E8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804536E8_CB6);
        r4 = static_cast<uint32_t>(regargs_result_804536E8_CB6 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804536E8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80453A94:
{
    r3 = r31;
}

loc_80453A98:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80453A20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80453A20_ra38_1c_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000001C fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80453A20 func_80453A20 preserves=true fpr_mask=0x00000000
