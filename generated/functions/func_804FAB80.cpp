#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80500DA0(CpuContext* ctx);
extern "C" void func_80500DA0_ra38_1fe_0_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804FAB80_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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

    goto loc_804FAB80;

loc_804FAB80:
{
    r5 = 0x80760000u;
    r4 = r3;
    r5 = (r5 + 3936);
    r0 = MemoryInline::FlatRead8((r5 + 12));
}

loc_804FAB94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804FABB4;
    }
}

loc_804FAB98:
{
}

loc_804FAB9C:
{
    r0 = 25;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(132))) {
        goto loc_804FABA8;
    }
}

loc_804FABA4:
{
    r0 = 103;
}

loc_804FABA8:
{
    r5 = 0x80760000u;
    r5 = (r5 + 3936);
    MemoryInline::FlatWriteRam8((r5 + 12), static_cast<uint8_t>(r0));
}

loc_804FABB4:
{
    r5 = 0x80760000u;
    r5 = (r5 + 3936);
    r0 = MemoryInline::FlatRead8((r5 + 13));
}

loc_804FABC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804FABE4;
    }
}

loc_804FABC8:
{
}

loc_804FABCC:
{
    r0 = 5;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(132))) {
        goto loc_804FABD8;
    }
}

loc_804FABD4:
{
    r0 = 103;
}

loc_804FABD8:
{
    r3 = 0x80760000u;
    r3 = (r3 + 3936);
    MemoryInline::FlatWriteRam8((r3 + 13), static_cast<uint8_t>(r0));
}

loc_804FABE4:
{
    r0 = 0;
    r3 = 0x80630000u;
    MemoryInline::FlatWrite8((r13 + -14044), static_cast<uint8_t>(r0));
    r3 = (r3 + -6184);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    if constexpr (KnownRegArgsCpuCall<0x80500DA0u>(&func_80500DA0)) {
        ctx->cr = cr;
        func_80500DA0_ra38_1fe_0_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
    } else {
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80500DA0u>(ctx);
    }
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804FAB80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804FAB80_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FB gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x000001FE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804FAB80 func_804FAB80 preserves=true fpr_mask=0x00000000
