#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802D6C14_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802D6C14u);
    goto loc_802D6C14;

loc_802D6C14:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = 20;
    r4 = MemoryInline::FlatRead32((r3 + 1052));
    r5 = MemoryInline::FlatRead32(r4);
    r4 = 0;
    r8 = 1374420992;
    r6 = 2;
    ctr = r6;
}

loc_802D6C34:
{
    r6 = MemoryInline::FlatRead8(r5);
}

loc_802D6C3C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_802D6C5C;
    }
}

loc_802D6C40:
{
}

loc_802D6C44:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_802D6C98;
    }
}

loc_802D6C48:
{
}

loc_802D6C4C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(2))) {
        goto loc_802D6CD4;
    }
}

loc_802D6C50:
{
}

loc_802D6C54:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_802D6CEC;
    }
}

loc_802D6C58:
{
    goto loc_802D6D14;
}

loc_802D6C5C:
{
    r7 = MemoryInline::FlatRead16((r3 + 510));
    r6 = MemoryInline::FlatRead8((r3 + 826));
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_5 & -2);
    r6 = (r5 + r6);
    r6 = MemoryInline::FlatRead16((r6 + 2));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r6 = (r6 + 100);
    r6 = (r7 * r6);
    r7 = (r8 + -31457);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r6 = (static_cast<int32_t>(r6) >> 5);
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_3 & 1);
    r6 = (r6 + r7);
    r6 = (r6 & 65535);
    MemoryInline::FlatWrite16((r3 + 510), static_cast<uint16_t>(r6));
    goto loc_802D6D14;
}

loc_802D6C98:
{
    r7 = MemoryInline::FlatRead16((r3 + 512));
    r6 = MemoryInline::FlatRead8((r3 + 826));
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_4 & -2);
    r6 = (r5 + r6);
    r6 = MemoryInline::FlatRead16((r6 + 2));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r6 = (r6 + 100);
    r6 = (r7 * r6);
    r7 = (r8 + -31457);
    r6 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r6))) >> 32));
    r6 = (static_cast<int32_t>(r6) >> 5);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & 1);
    r6 = (r6 + r7);
    r6 = (r6 & 65535);
    MemoryInline::FlatWrite16((r3 + 512), static_cast<uint16_t>(r6));
    goto loc_802D6D14;
}

loc_802D6CD4:
{
    r6 = MemoryInline::FlatRead8((r3 + 826));
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_3 & -2);
    r6 = (r5 + r6);
    r6 = MemoryInline::FlatRead16((r6 + 2));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = (r0 + r6);
    goto loc_802D6D14;
}

loc_802D6CEC:
{
    r7 = MemoryInline::FlatRead32((r3 + 500));
    r6 = MemoryInline::FlatRead8((r3 + 826));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & -2);
    r6 = (r5 + r6);
    r6 = MemoryInline::FlatRead16((r6 + 2));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r6 = (r7 + r6);
    MemoryInline::FlatWrite32((r3 + 500), r6);
    MemoryInline::FlatWrite32((r3 + 496), r6);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    MemoryInline::FlatWrite16((r3 + 504), static_cast<uint16_t>(r6));
}

loc_802D6D14:
{
    r4 = (r4 + 1);
    r5 = (r5 + 14);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802D6C34;
    }
}

loc_802D6D20:
{
    f3.d = MemoryInline::FlatReadFloat64((r2 + -13144));
    r0 = (r0 ^ -2147483648);
    stackword1 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = 1127219200;
    stackword2 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword1));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13132));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13072));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0 = (r0 ^ -2147483648);
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    stackword4 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    r0 = MemoryInline::FlatRead16((r3 + 982));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    stackword6 = r4;
    MemoryInline::FlatWriteRam32((r1 + 32), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13332));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite16((r3 + 986), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r3 + 988), static_cast<uint16_t>(r0));
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
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_802D6C14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802D6C14_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D6C14 func_802D6C14 preserves=true fpr_mask=0x00000000
