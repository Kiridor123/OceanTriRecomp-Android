#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802B6C30_ra8_7e_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t stackword1 = 0;
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
    uint32_t r3 = arg_r3;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x802B6C30u);
    goto loc_802B6C30;

loc_802B6C30:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = 1127219200;
    stackword1 = r0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 16u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r0);
    r0 = 1127219200;
    stackword2 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 16), r0);
    f6.d = MemoryInline::FlatReadFloat64((r2 + -13664));
    stackword3 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword3));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_802B6C58:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802B6C68;
    }
}

loc_802B6C60:
{
    r3 = 0;
    goto loc_802B6D28;
}

loc_802B6C68:
{
    stackword4 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_802B6C78:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802B6CD4;
    }
}

loc_802B6C7C:
{
    stackword5 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword5));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f5.d = MemoryInline::FlatReadFloat32((r2 + -13656));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_802B6C94:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802B6CA4;
    }
}

loc_802B6C9C:
{
    r3 = 0;
    goto loc_802B6D28;
}

loc_802B6CA4:
{
    stackword6 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword6));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_802B6CB8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802B6CCC;
    }
}

loc_802B6CBC:
{
    r0 = 65536;
    r3 = (r0 - r3);
    f3.d = (-(f3.d));
    goto loc_802B6CD4;
}

loc_802B6CCC:
{
    r3 = 0;
    goto loc_802B6D28;
}

loc_802B6CD4:
{
    f4.d = MemoryInline::FlatReadFloat64((r2 + -13688));
    r0 = (r3 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword7));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    stackword8 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = PpcFmulsInline(f1.d, f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13652));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f4.d, f4.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802B6D28:
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
    ctx->cr = cr;
    return r3;
}

}

extern "C" void func_802B6C30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802B6C30_ra8_7e_8_0(ctx, ctx->gpr[3], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000F gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802B6C30 func_802B6C30 preserves=true fpr_mask=0x00000000
