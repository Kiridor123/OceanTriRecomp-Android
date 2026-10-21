#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80434C00(CpuContext* ctx);
extern "C" uint64_t func_80434C00_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80434CDC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_left_0 = 0;
    uint32_t r0_addc_left_1 = 0;
    uint32_t r0_addc_left_2 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_not_1 = 0;
    uint32_t r0_not_2 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r0_subfe_rb_1 = 0;
    uint32_t r0_subfe_rb_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80434CDCu);
    goto loc_80434CDC;

loc_80434CDC:
{
}

loc_80434CE0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(-1))) {
        goto loc_80434CF8;
    }
}

loc_80434CE4:
{
    r0 = 1;
    r3 = 0x806D0000u;
    r3 = (r3 + 27520);
    MemoryInline::FlatWriteRam32((r3 + 188), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80434CF8:
{
}

loc_80434CFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-3))) {
        goto loc_return;
    }
}

loc_80434D00:
{
    r0 = 0;
    r3 = 0x806D0000u;
    r5 = (r3 + 27520);
    MemoryInline::FlatWriteRam32((r5 + 192), r0);
    r4 = MemoryInline::FlatRead32((r5 + 208));
    r0 = MemoryInline::FlatRead32((r5 + 200));
    r0 = (r0 * 12);
    r3 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 216), r4);
    r3 = MemoryInline::FlatRead32((r5 + 208));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r5 + 208), r0);
    r4 = 1;
    r0 = MemoryInline::FlatRead32((r5 + 200));
    r0 = (r0 * 12);
    r3 = (r5 + r0);
    MemoryInline::FlatWrite32((r3 + 220), r4);
    r3 = MemoryInline::FlatRead32((r5 + 184));
    r0 = MemoryInline::FlatRead32((r5 + 204));
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam32((r5 + 184), r0);
    r4 = MemoryInline::FlatRead32((r5 + 200));
    r0 = (r4 * 12);
    r3 = (r5 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 212));
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWriteRam32((r5 + 204), r0);
    r4 = (r4 + 1);
    r0 = 10;
    r3 = (r0 ^ -2147483648);
    r0 = (r4 + -10);
    r0_addc_left_1 = r0;
    r0 = (r0_addc_left_1 + r3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r3)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0_subfe_rb_1 = r0;
    r0_not_1 = ~(r0);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r0_not_1 + r0_subfe_rb_1);
    r0 = (r0 + r0_ca_1);
    r0 = (r4 & ~r0);
    MemoryInline::FlatWriteRam32((r5 + 200), r0);
    r0 = (r0 * 12);
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 220));
}

loc_80434D9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80434DA0:
{
    if constexpr (KnownRegArgsCpuCall<0x80434C00u>(&func_80434C00)) {
        ctx->gpr[0] = r0;
        ctx->xer = xer;
        const auto regargs_result_80434C00_FCF = func_80434C00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80434C00_FCF);
        r4 = static_cast<uint32_t>(regargs_result_80434C00_FCF >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->xer = xer;
        InvokeDirectCpu<0x80434C00u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        xer = ctx->xer;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80434CDC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80434CDC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80434CDC func_80434CDC preserves=true fpr_mask=0x00000000
