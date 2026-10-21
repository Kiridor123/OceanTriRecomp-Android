#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80466118_ra18_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x80466118u);
    goto loc_80466118;

loc_80466118:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1044381696;
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r3 & 2147483647);
}

loc_80466130:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80466150;
    }
}

loc_80466134:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
}

loc_80466144:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80466150;
    }
}

loc_80466148:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -3312));
    goto loc_80466220;
}

loc_80466150:
{
    f8.d = (f1.d * f1.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -3312), 0, 72u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -3264));
    r3 = 1070792704;
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r2 + -3272));
    r0 = (r3 + 13107);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -3280));
    f7.d = (f0.d * f8.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -3288));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -3296));
}

loc_80466178:
{
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -3304));
    f6.d = (f6.d + f7.d);
    f6.d = (f8.d * f6.d);
    f5.d = (f5.d + f6.d);
    f5.d = (f8.d * f5.d);
    f4.d = (f4.d + f5.d);
    f4.d = (f8.d * f4.d);
    f3.d = (f3.d + f4.d);
    f3.d = (f8.d * f3.d);
    f0.d = (f0.d + f3.d);
    f3.d = (f8.d * f0.d);
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_804661CC;
    }
}

loc_804661A8:
{
    f3.d = (f8.d * f3.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -3256));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -3312));
    f1.d = (f1.d * f2.d);
    f2.d = (f4.d * f8.d);
    f1.d = (f3.d - f1.d);
    f1.d = (f2.d - f1.d);
    f1.d = (f0.d - f1.d);
    goto loc_80466220;
}

loc_804661CC:
{
    r0 = 1072234496;
}

loc_804661D4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_804661E4;
    }
}

loc_804661D8:
{
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r2 + -3248));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    goto loc_804661F4;
}

loc_804661E4:
{
    r3 = (r4 + -2097152);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_804661F4:
{
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -3256));
    f3.d = (f8.d * f3.d);
    f5.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f6.d = (f0.d * f8.d);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -3312));
    f0.d = (f1.d * f2.d);
    f2.d = (f6.d - f5.d);
    f1.d = (f4.d - f5.d);
    f0.d = (f3.d - f0.d);
    f0.d = (f2.d - f0.d);
    f1.d = (f1.d - f0.d);
}

loc_80466220:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80466118(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80466118_ra18_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x000001FF fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80466118 func_80466118 preserves=true fpr_mask=0x00000000
