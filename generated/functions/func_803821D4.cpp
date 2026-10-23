#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803821D4_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_803821D4;

loc_803821D4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 24u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = 1127219200;
    stackword1 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r0 = 1127219200;
    stackword2 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    r3 = (r3 + 808);
    r0 = (r5 & 255);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 44));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -7024));
    stackword3 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = (r7 & 255);
    stackword4 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r5 = MemoryInline::FlatRead8((r3 + 32));
    r0 = MemoryInline::FlatRead8(r6);
    r0 = (r0 - r5);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -7016));
    r0 = (r0 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword5));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0 = (r5 + r0);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead8((r3 + 36));
    r0 = MemoryInline::FlatRead8((r6 + 1));
    r0 = (r0 - r5);
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    r0 = (r5 + r0);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r3 + 40));
    r0 = MemoryInline::FlatRead8((r6 + 2));
    r0 = (r0 - r3);
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword7));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    r0 = (r3 + r0);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return r3;
}

}

extern "C" void func_803821D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803821D4_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000FE gpr_write=0x0000002B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803821D4 func_803821D4 preserves=true fpr_mask=0x00000000
