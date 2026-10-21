#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804651B8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804651B8u);
    goto loc_804651B8;

loc_804651B8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1048576;
    r7 = 0;
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r8 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead32((r1 + 12));
}

loc_804651D4:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r0))) {
        goto loc_80465228;
    }
}

loc_804651D8:
{
    r0 = (r8 & 2147483647);
    r0 = (r0 | r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804651F4;
    }
}

loc_804651E4:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -3848));
    f0.d = MemoryInline::FlatReadFloat64((r13 + -16376));
    f1.d = (f1.d / f0.d);
    goto loc_80465464;
}

loc_804651F4:
{
}

loc_804651F8:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_80465214;
    }
}

loc_804651FC:
{
    f1.d = (f1.d - f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r13 + -16376));
    r0 = 33;
    MemoryInline::FlatWrite32((r13 + -16408), r0);
    f1.d = (f1.d / f0.d);
    goto loc_80465464;
}

loc_80465214:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -3840));
    r7 = -54;
    f1.d = (f1.d * f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r8 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80465228:
{
    r0 = 2146435072;
}

loc_80465230:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r0))) {
        goto loc_8046523C;
    }
}

loc_80465234:
{
    f1.d = (f1.d + f1.d);
    goto loc_80465464;
}

loc_8046523C:
{
    r5 = (static_cast<int32_t>(r8) >> 20);
    r8 = (r8 & 1048575);
    r3 = (r8 + 589824);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -3832), 0, 112u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 0u, (r2 + -3832));
    r4 = (r3 + 24420);
    r0 = (r8 + 2);
    r3 = (r4 & 1048576);
    r5 = (r7 + r5);
    r3 = (r3 ^ 1072693248);
    r0 = (r0 & 1048575);
    r3 = (r8 | r3);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80465270:
{
    r7 = (r5 + -1023);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(12));
    r0 = (r0_rot_1 & 1);
    r7 = (r7 + r0);
    f0.d = (f1.d - f0.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80465338;
    }
}

loc_80465288:
{
    f1.d = MemoryInline::FlatReadFloat64((r13 + -16376));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80465290:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804652D4;
    }
}

loc_80465294:
{
}

loc_80465298:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_804652A0;
    }
}

loc_8046529C:
{
    goto loc_80465464;
}

loc_804652A0:
{
    r3 = (r7 ^ -2147483648);
    r0 = 1127219200;
    stackword2 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 104u, (r2 + -3728));
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -3824));
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword2));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -3816));
    f2.d = (f2.d - f3.d);
    f1.d = (f1.d * f2.d);
    f0.d = (f0.d * f2.d);
    f1.d = (f1.d + f0.d);
    goto loc_80465464;
}

loc_804652D4:
{
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -3800));
    f1.d = (f0.d * f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -3808));
}

loc_804652E4:
{
    f3.d = (f3.d * f0.d);
    f2.d = (f2.d - f3.d);
    f5.d = (f2.d * f1.d);
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_804652FC;
    }
}

loc_804652F4:
{
    f1.d = (f0.d - f5.d);
    goto loc_80465464;
}

loc_804652FC:
{
    r3 = (r7 ^ -2147483648);
    r0 = 1127219200;
    stackword4 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 104u, (r2 + -3728));
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -3816));
    f3.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -3824));
    f3.d = (f3.d - f4.d);
    f1.d = (f1.d * f3.d);
    f2.d = (f2.d * f3.d);
    f1.d = (f5.d - f1.d);
    f0.d = (f1.d - f0.d);
    f1.d = (f2.d - f0.d);
    goto loc_80465464;
}

loc_80465338:
{
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 40u, (r2 + -3792));
    r5 = (r7 ^ -2147483648);
    r4 = 1127219200;
    r3 = 458752;
    f1.d = (f1.d + f0.d);
    r6 = (r8 + -393216);
    r0 = (r3 + -18351);
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 96u, (r2 + -3736));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 88u, (r2 + -3744));
    r0 = (r0 - r8);
    f1.d = (f0.d / f1.d);
    r6 = (r6 + -5242);
    f8.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r2 + -3768));
    r6 = (r6 | r0);
    f7.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 56u, (r2 + -3776));
    f3.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 80u, (r2 + -3752));
    f11.d = (f1.d * f1.d);
    f6.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 48u, (r2 + -3784));
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 72u, (r2 + -3760));
    stackword6 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r5);
    f10.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 104u, (r2 + -3728));
    f12.d = (f11.d * f11.d);
    stackword7 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    f9.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f5.d = (f5.d * f12.d);
    f8.d = (f8.d * f12.d);
    f4.d = (f4.d + f5.d);
    f9.d = (f9.d - f10.d);
    f5.d = (f7.d + f8.d);
    f4.d = (f12.d * f4.d);
    f5.d = (f12.d * f5.d);
    f3.d = (f3.d + f4.d);
    f4.d = (f6.d + f5.d);
    f3.d = (f12.d * f3.d);
    f4.d = (f12.d * f4.d);
    f2.d = (f2.d + f3.d);
    f2.d = (f11.d * f2.d);
    f3.d = (f2.d + f4.d);
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_80465428;
    }
}

loc_804653D4:
{
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 24u, (r2 + -3808));
}

loc_804653DC:
{
    f2.d = (f2.d * f0.d);
    f5.d = (f2.d * f0.d);
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_804653FC;
    }
}

loc_804653E8:
{
    f2.d = (f5.d + f3.d);
    f1.d = (f1.d * f2.d);
    f1.d = (f5.d - f1.d);
    f1.d = (f0.d - f1.d);
    goto loc_80465464;
}

loc_804653FC:
{
    f3.d = (f5.d + f3.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -3816));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -3824));
    f2.d = (f2.d * f9.d);
    f1.d = (f1.d * f3.d);
    f3.d = (f4.d * f9.d);
    f1.d = (f1.d + f2.d);
    f1.d = (f5.d - f1.d);
    f0.d = (f1.d - f0.d);
    f1.d = (f3.d - f0.d);
    goto loc_80465464;
}

loc_80465428:
{
}

loc_8046542C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80465440;
    }
}

loc_80465430:
{
    f2.d = (f0.d - f3.d);
    f1.d = (f1.d * f2.d);
    f1.d = (f0.d - f1.d);
    goto loc_80465464;
}

loc_80465440:
{
    f3.d = (f0.d - f3.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -3816));
    f4.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -3824));
    f2.d = (f2.d * f9.d);
    f1.d = (f1.d * f3.d);
    f3.d = (f4.d * f9.d);
    f1.d = (f1.d - f2.d);
    f0.d = (f1.d - f0.d);
    f1.d = (f3.d - f0.d);
}

loc_80465464:
{
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804651B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804651B8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FF gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00001FFF fpr_write=0x00001FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804651B8 func_804651B8 preserves=true fpr_mask=0x00000000
