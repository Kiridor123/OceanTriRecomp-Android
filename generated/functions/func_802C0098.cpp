#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802C0098_ra38_7e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    uint32_t cr = ctx->cr;

    goto loc_802C0098;

loc_802C0098:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = 1127219200;
    stackword1 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = 1127219200;
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
}

loc_802C00B0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_802C00BC;
    }
}

loc_802C00B4:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_802C0234;
}

loc_802C00BC:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r5 = (r5_rot_1 & 255);
    r0 = MemoryInline::FlatRead8(r3);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -13468), 0, 64u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 52u, (r2 + -13416));
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    stackword4 = r5;
    MemoryInline::FlatWriteRam32((r1 + 28), r5);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -13428));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r2 + -13408));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r6 = (r6_rot_1 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    stackword6 = r6;
    MemoryInline::FlatWriteRam32((r1 + 28), r6);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r4 = (r4_rot_1 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    stackword8 = r4;
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f1.d = PpcFmulsInline(f3.d, f5.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -13468));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802C0158:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802C016C;
    }
}

loc_802C015C:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -13460));
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_802C0164:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802C016C;
    }
}

loc_802C0168:
{
    goto loc_802C0174;
}

loc_802C016C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -13428));
    f3.d = PpcFmulsInline(f0.d, f5.d);
}

loc_802C0174:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -13428));
    f1.d = PpcFmulsInline(f0.d, f6.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -13468));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802C0184:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802C0198;
    }
}

loc_802C0188:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -13460));
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_802C0190:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802C0198;
    }
}

loc_802C0194:
{
    goto loc_802C01A0;
}

loc_802C0198:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -13428));
    f4.d = PpcFmulsInline(f0.d, f6.d);
}

loc_802C01A0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -13428));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -13468));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802C01B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802C01C4;
    }
}

loc_802C01B4:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -13460));
    SetCRFloatResident(cr, 0, f1.d, f5.d);
}

loc_802C01BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802C01C4;
    }
}

loc_802C01C0:
{
    goto loc_802C01CC;
}

loc_802C01C4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -13428));
    f5.d = PpcFmulsInline(f0.d, f2.d);
}

loc_802C01CC:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 52u, (r2 + -13416));
    stackword9 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword9));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    stackword10 = r6;
    MemoryInline::FlatWriteRam32((r1 + 28), r6);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword10));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    stackword11 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword11));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r1 + 8));
}

loc_802C0234:
{
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C0098(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C0098_ra38_7e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C0098 func_802C0098 preserves=true fpr_mask=0x00000000
