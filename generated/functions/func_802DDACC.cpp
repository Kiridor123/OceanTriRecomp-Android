#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802DDACC_ra18_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_lhax_802DDB08_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
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
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    goto loc_802DDACC;

loc_802DDACC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r29 = r4;
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r0);
    r0 = 1127219200;
    stackword6 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r3 = 0x805D0000u;
    r4 = (r3 + 23928);
    addr_lhax_802DDB08_loc_0 = (r4 + r5);
    r0 = MemoryInline::FlatRead16(addr_lhax_802DDB08_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 18);
    r0 = (r3 + 64);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = (r4 + r5);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 18);
    r0 = (r3 + 64);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = (r1 + 24);
    // inline leaf 0x80040354 (7 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 4), f0.d);
    // end of inlined leaf 0x80040354
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryInline::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80040424
}

loc_802DDB3C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802DDB9C;
    }
}

loc_802DDB40:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12840));
    f2.d = PpcFmulsInline(f3.d, f0.d);
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12808));
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword7));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802DDB68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802DDB78;
    }
}

loc_802DDB6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12788));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    goto loc_802DDBF4;
}

loc_802DDB78:
{
    r0 = (r31 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12788));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    goto loc_802DDBF4;
}

loc_802DDB9C:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12840));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    r0 = MemoryInline::FlatRead16(r29);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12808));
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword9));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802DDBC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802DDBE8;
    }
}

loc_802DDBC8:
{
    r0 = (r31 ^ -2147483648);
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword10));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12784));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    goto loc_802DDBF0;
}

loc_802DDBE8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12784));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
}

loc_802DDBF0:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
}

loc_802DDBF4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12776));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12808));
    r0 = (r30 ^ -2147483648);
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword11));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12780));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    f0.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DDACC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DDACC_ra18_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000000E fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DDACC func_802DDACC preserves=true fpr_mask=0x00000000
