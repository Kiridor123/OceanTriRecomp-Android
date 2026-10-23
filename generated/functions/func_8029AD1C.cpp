#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050AF4(CpuContext* ctx);
extern "C" uint64_t func_80050AF4_ra38_1e0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_8029AD1C_ra38_1e0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_8029AD1C;

loc_8029AD1C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 67));
    r0 = (r0 & 16);
}

loc_8029AD3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029AD50;
    }
}

loc_8029AD40:
{
    r3 = r4;
    r4 = r5;
    ctx->lr = 0x8029AD4Cu;
    if constexpr (KnownRegArgsCpuCall<0x80050AF4u>(&func_80050AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80050AF4_5AF = func_80050AF4_ra38_1e0_18_0(ctx, r3, r4, r5, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AF4_5AF);
        r4 = static_cast<uint32_t>(regargs_result_80050AF4_5AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80050AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8029ADA4;
}

loc_8029AD50:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_8029AD58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029AD78;
    }
}

loc_8029AD5C:
{
}

loc_8029AD60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8029AD84;
    }
}

loc_8029AD64:
{
}

loc_8029AD68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8029AD90;
    }
}

loc_8029AD6C:
{
}

loc_8029AD70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8029AD9C;
    }
}

loc_8029AD74:
{
    goto loc_8029ADA4;
}

loc_8029AD78:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 88));
    goto loc_8029ADA4;
}

loc_8029AD84:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 448));
    goto loc_8029ADA4;
}

loc_8029AD90:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 40));
    goto loc_8029ADA4;
}

loc_8029AD9C:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead32((r3 + 404));
}

loc_8029ADA4:
{
    r0 = MemoryInline::FlatRead8((r31 + 68));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & -256);
    r3 = (r3 + r0);
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8029AD1C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8029AD1C_ra38_1e0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FF gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00003FE1 fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8029AD1C func_8029AD1C preserves=true fpr_mask=0x00000000
