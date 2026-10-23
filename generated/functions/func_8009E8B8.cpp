#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8009E8B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;

    goto loc_8009E8B8;

loc_8009E8B8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1127219200;
    stackword2 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = 1127219200;
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r8 = (r4 & 255);
    r7 = (r5 & 255);
}

loc_8009E8E0:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(r7))) {
        goto loc_8009E8EC;
    }
}

loc_8009E8E4:
{
    r3 = r4;
    goto loc_8009EAA0;
}

loc_8009E8EC:
{
    r0 = (r6 & 255);
    r9 = (r0 & 3);
}

loc_8009E8F8:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8009E910;
    }
}

loc_8009E8FC:
{
}

loc_8009E900:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(1))) {
        goto loc_8009E928;
    }
}

loc_8009E904:
{
}

loc_8009E908:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(2))) {
        goto loc_8009EA78;
    }
}

loc_8009E90C:
{
    goto loc_8009EA80;
}

loc_8009E910:
{
    r0 = (r7 - r8);
    r0 = (r3 * r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 65535);
    r0 = (r8 + r0);
    r3 = (r0 & 255);
    goto loc_8009EAA0;
}

loc_8009E928:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -31464), 0, 52u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -31456));
    stackword4 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -31436));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
}

loc_8009E944:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8009E99C;
    }
}

loc_8009E948:
{
    stackword5 = r8;
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword5));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -31428));
    f1.d = PpcFmulsInline(f0.d, f5.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -31432));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = (r7 - r8);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -31448));
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
    goto loc_8009EAA0;
}

loc_8009E99C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1);
}

loc_8009E9A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E9B0;
    }
}

loc_8009E9A8:
{
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31464));
    goto loc_8009E9B4;
}

loc_8009E9B0:
{
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -31424));
}

loc_8009E9B4:
{
    r0 = (r6 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 1);
}

loc_8009E9C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009E9CC;
    }
}

loc_8009E9C4:
{
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31464));
    goto loc_8009E9D0;
}

loc_8009E9CC:
{
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r2 + -31424));
}

loc_8009E9D0:
{
    r3 = (r4 & 255);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 8u, (r2 + -31456));
    stackword7 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword7));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = (r5 & 255);
    r0 = (r0 - r3);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 16u, (r2 + -31448));
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f3.d = PpcFmulsInline(f5.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f7.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -31428));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f2.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -31420));
    f0.d = PpcFmulsInline(f0.d, f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -31432));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f0.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -31464));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8009EA48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8009EA54;
    }
}

loc_8009EA4C:
{
    r3 = 0;
    goto loc_8009EAA0;
}

loc_8009EA54:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r2 + -31416));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8009EA5C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8009EA68;
    }
}

loc_8009EA60:
{
    r3 = 255;
    goto loc_8009EAA0;
}

loc_8009EA68:
{
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword1;
    goto loc_8009EAA0;
}

loc_8009EA78:
{
    r3 = r4;
    goto loc_8009EAA0;
}

loc_8009EA80:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 711;
    r5 = 0x80590000u;
    r5 = (r5 + 10176);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009EA9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    r3 = 0;
}

loc_8009EAA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FF gpr_write=0x000003BB gpr_return=0x00000018 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009E8B8 func_8009E8B8 preserves=true fpr_mask=0x00000000
