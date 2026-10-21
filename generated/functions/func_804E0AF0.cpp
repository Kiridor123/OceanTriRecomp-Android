#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804E0AF0_ra38_1e_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t addr_lfsx_804E0BB0_loc_0 = 0;
    uint32_t addr_lfsx_804E0BCC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;

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

    MKW_GUEST_ENTER(0x804E0AF0u);
    goto loc_804E0AF0;

loc_804E0AF0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = 1127219200;
    r4 = MemoryInline::FlatRead32((r3 + 72));
    stackword1 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
}

loc_804E0B04:
{
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804E0B18;
    }
}

loc_804E0B0C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 72), r0);
    goto loc_804E0C00;
}

loc_804E0B18:
{
    r0 = MemoryInline::FlatRead32((r3 + 84));
    r5 = 0x80630000u;
    r4 = MemoryInline::FlatRead32((r3 + 76));
    r8 = 0x80630000u;
    r0 = (r0 ^ -2147483648);
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = (r4 ^ -2147483648);
    r0 = MemoryInline::FlatRead32((r3 + 88));
    stackword4 = r4;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r5 = (r5 + -22176);
    r6 = MemoryInline::FlatRead8((r3 + 12));
    r0 = (r0 ^ -2147483648);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword3));
    r8 = (r8 + -21664);
    r4 = MemoryInline::FlatRead32((r3 + 80));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(7));
    r6 = (r6_rot_1 & -128);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r4 ^ -2147483648);
    f3.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword4));
    f4.d = MemoryInline::FlatReadFloat64((r2 + -1824));
    r6 = (r7 + r6);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword5));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword6));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    r4 = MemoryInline::FlatRead32((r3 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    r0 = MemoryInline::FlatRead32((r3 + 68));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    r7 = (r4 + r0);
    MemoryInline::FlatWrite32((r3 + 56), r7);
    r4 = (static_cast<int32_t>(r7) >> 16);
    r0 = MemoryInline::FlatRead8((r6 + 121));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(10));
    r6 = (r6_rot_2 & -67108864);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    addr_lfsx_804E0BB0_loc_0 = (r5 + r0);
    f4.d = MemoryInline::FlatReadFloat32(addr_lfsx_804E0BB0_loc_0);
    r0 = (r6 - r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r0 = (r0_rot_2 & -1);
    f2.d = PpcFmulsInline(f2.d, f4.d);
    r0 = (r0 + r4);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    addr_lfsx_804E0BCC_loc_0 = (r8 + r0);
    f4.d = MemoryInline::FlatReadFloat32(addr_lfsx_804E0BCC_loc_0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PpcFmulsInline(f4.d, f2.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = PPC_Fctiwz(f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword0;
    r0 = fctiwzword1;
    MemoryInline::FlatWrite32((r3 + 60), r4);
    MemoryInline::FlatWrite32((r3 + 64), r0);
}

loc_804E0C00:
{
    r1 = (r1 + 48);
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
    return r4;
}

}

extern "C" void func_804E0AF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804E0AF0_ra38_1e_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E0AF0 func_804E0AF0 preserves=true fpr_mask=0x00000000
