#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80500DA0(CpuContext* ctx);
extern "C" void func_80500DA0_ra38_1fe_0_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804FAAF0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_804FAAF0;

loc_804FAAF0:
{
    r5 = 0x80760000u;
    r4 = r3;
    r5 = (r5 + 3936);
    r0 = MemoryInline::FlatRead8((r5 + 12));
}

loc_804FAB04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804FAB28;
    }
}

loc_804FAB08:
{
    r0 = (r3 + -262144);
    r6 = 25;
}

loc_804FAB14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(44824))) {
        goto loc_804FAB1C;
    }
}

loc_804FAB18:
{
    r6 = 102;
}

loc_804FAB1C:
{
    r5 = 0x80760000u;
    r5 = (r5 + 3936);
    MemoryInline::FlatWriteRam8((r5 + 12), static_cast<uint8_t>(r6));
}

loc_804FAB28:
{
    r5 = 0x80760000u;
    r5 = (r5 + 3936);
    r0 = MemoryInline::FlatRead8((r5 + 13));
}

loc_804FAB38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804FAB5C;
    }
}

loc_804FAB3C:
{
    r0 = (r3 + -262144);
    r5 = 5;
}

loc_804FAB48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(44824))) {
        goto loc_804FAB50;
    }
}

loc_804FAB4C:
{
    r5 = 102;
}

loc_804FAB50:
{
    r3 = 0x80760000u;
    r3 = (r3 + 3936);
    MemoryInline::FlatWriteRam8((r3 + 13), static_cast<uint8_t>(r5));
}

loc_804FAB5C:
{
    r0 = 0;
    r3 = 0x80630000u;
    MemoryInline::FlatWrite8((r13 + -14044), static_cast<uint8_t>(r0));
    r3 = (r3 + -6200);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x80500DA0u>(&func_80500DA0)) {
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        func_80500DA0_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80500DA0u>(ctx);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804FAAF0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804FAAF0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804FAAF0 func_804FAAF0 preserves=true fpr_mask=0x00000000
