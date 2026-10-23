#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_804678E0_ra8_1fe_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_804678E0;

loc_804678E0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1044381696;
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r4 & 2147483647);
}

loc_804678F8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_80467914;
    }
}

loc_804678FC:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
}

loc_8046790C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80467914;
    }
}

loc_80467910:
{
    goto loc_80467998;
}

loc_80467914:
{
    f7.d = (f1.d * f1.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -3176), 0, 56u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -3144));
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -3152));
}

loc_80467924:
{
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -3160));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -3168));
    f6.d = (f0.d * f7.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -3176));
    f8.d = (f7.d * f1.d);
    f5.d = (f5.d + f6.d);
    f5.d = (f7.d * f5.d);
    f4.d = (f4.d + f5.d);
    f4.d = (f7.d * f4.d);
    f3.d = (f3.d + f4.d);
    f3.d = (f7.d * f3.d);
    f0.d = (f0.d + f3.d);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80467970;
    }
}

loc_80467958:
{
    f2.d = (f7.d * f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r2 + -3136));
    f0.d = (f0.d + f2.d);
    f0.d = (f8.d * f0.d);
    f1.d = (f1.d + f0.d);
    goto loc_80467998;
}

loc_80467970:
{
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -3128));
    f3.d = (f8.d * f0.d);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r2 + -3136));
    f4.d = (f4.d * f2.d);
    f0.d = (f0.d * f8.d);
    f3.d = (f4.d - f3.d);
    f3.d = (f7.d * f3.d);
    f2.d = (f3.d - f2.d);
    f0.d = (f2.d - f0.d);
    f1.d = (f1.d - f0.d);
}

loc_80467998:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return f1.d;
}

}

extern "C" void func_804678E0(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_804678E0_ra8_1fe_0_2(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000F gpr_write=0x00000013 gpr_return=0x00000010 fpr_read=0x000001FF fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804678E0 func_804678E0 preserves=true fpr_mask=0x00000000
