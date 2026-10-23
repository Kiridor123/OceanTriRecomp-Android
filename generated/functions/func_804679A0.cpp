#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804679A0_ra38_1fe_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    goto loc_804679A0;

loc_804679A0:
{
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r0 = 1043333120;
    r8 = MemoryInline::FlatRead32((r1 + 8));
    r7 = (r8 & 2147483647);
}

loc_804679C8:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r0))) {
        goto loc_80467A1C;
    }
}

loc_804679CC:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
}

loc_804679DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80467A1C;
    }
}

loc_804679E0:
{
    r4 = (r3 + 1);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r4 = (r4 | r7);
    r0 = (r4 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80467A04;
    }
}

loc_804679F4:
{
    f1.d = std::fabs(f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3120));
    f1.d = (f0.d / f1.d);
    goto loc_80467BD8;
}

loc_80467A04:
{
}

loc_80467A08:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80467A10;
    }
}

loc_80467A0C:
{
    goto loc_80467BD8;
}

loc_80467A10:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3112));
    f1.d = (f0.d / f1.d);
    goto loc_80467BD8;
}

loc_80467A1C:
{
    r4 = 1072037888;
    r0 = (r4 + -27608);
}

loc_80467A28:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_80467A54;
    }
}

loc_80467A2C:
{
}

loc_80467A30:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_80467A3C;
    }
}

loc_80467A34:
{
    f1.d = (-(f1.d));
    f2.d = (-(f2.d));
}

loc_80467A3C:
{
    f3.d = MemoryInline::FlatReadFloat64((r2 + -3104));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3096));
    f1.d = (f3.d - f1.d);
    f0.d = (f0.d - f2.d);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -3088));
    f1.d = (f1.d + f0.d);
}

loc_80467A54:
{
    f0.d = (f1.d * f1.d);
    r6 = 0x80570000u;
    r5 = (r6 + 15216);
    r4 = 1072037888;
    r0 = (r4 + -27608);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 96u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 88u, (r5 + 96));
    f3.d = (f0.d * f0.d);
    f8.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 80u, (r5 + 88));
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r5 + 80));
}

loc_80467A7C:
{
    f10.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r5 + 72));
    f4.d = (f0.d * f1.d);
    f7.d = (f3.d * f5.d);
    f5.d = MemoryInline::FlatReadFloat64((r6 + 15216));
    f9.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r5 + 64));
    f11.d = (f3.d * f8.d);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r5 + 56));
    f8.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r5 + 48));
    f6.d = (f6.d + f7.d);
    f13.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r5 + 40));
    f30.d = (f10.d + f11.d);
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r5 + 32));
    f5.d = (f5.d * f4.d);
    f12.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r5 + 24));
    f10.d = (f3.d * f6.d);
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r5 + 16));
    f11.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r5 + 8));
    f30.d = (f3.d * f30.d);
    f9.d = (f9.d + f10.d);
    f10.d = (f31.d + f30.d);
    f9.d = (f3.d * f9.d);
    f10.d = (f3.d * f10.d);
    f8.d = (f8.d + f9.d);
    f9.d = (f13.d + f10.d);
    f8.d = (f3.d * f8.d);
    f9.d = (f3.d * f9.d);
    f7.d = (f7.d + f8.d);
    f8.d = (f12.d + f9.d);
    f7.d = (f3.d * f7.d);
    f8.d = (f3.d * f8.d);
    f3.d = (f6.d + f7.d);
    f6.d = (f11.d + f8.d);
    f3.d = (f0.d * f3.d);
    f3.d = (f6.d + f3.d);
    f3.d = (f4.d * f3.d);
    f3.d = (f2.d + f3.d);
    f0.d = (f0.d * f3.d);
    f6.d = (f2.d + f0.d);
    f6.d = (f6.d + f5.d);
    f4.d = (f1.d + f6.d);
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_80467B80;
    }
}

loc_80467B20:
{
    r4 = 1127219200;
    r0 = (r3 ^ -2147483648);
    stackword1 = r0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 2);
    f5.d = MemoryInline::FlatReadFloat64((r2 + -3072));
    r0_subfic_ra_1 = r0;
    r0 = (1 - r0_subfic_ra_1);
    stackword2 = r4;
    MemoryInline::FlatWriteRam32((r1 + 32), r4);
    r0 = (r0 ^ -2147483648);
    f3.d = (f4.d * f4.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3080));
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword1));
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f7.d = (f2.d - f5.d);
    stackword4 = r4;
    MemoryInline::FlatWriteRam32((r1 + 40), r4);
    f2.d = (f4.d + f7.d);
    f4.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    f4.d = (f4.d - f5.d);
    f2.d = (f3.d / f2.d);
    f2.d = (f2.d - f6.d);
    f1.d = (f1.d - f2.d);
    f0.d = (f0.d * f1.d);
    f0.d = (f7.d - f0.d);
    f1.d = (f4.d * f0.d);
    goto loc_80467BD8;
}

loc_80467B80:
{
}

loc_80467B84:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80467B90;
    }
}

loc_80467B88:
{
    f1.d = f4.d;
    goto loc_80467BD8;
}

loc_80467B90:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3112));
    r0 = 0;
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f4.d);
    f5.d = (f0.d / f4.d);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -3120));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f4.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f5.d);
    f0.d = (f4.d - f1.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = (f6.d - f0.d);
    f1.d = (f3.d * f4.d);
    f0.d = (f3.d * f0.d);
    f1.d = (f2.d + f1.d);
    f0.d = (f1.d + f0.d);
    f0.d = (f5.d * f0.d);
    f1.d = (f3.d + f0.d);
}

loc_80467BD8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return r4;
}

}

extern "C" void func_804679A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804679A0_ra38_1fe_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804679A0 func_804679A0 preserves=true fpr_mask=0x00000000
