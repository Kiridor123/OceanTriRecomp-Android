#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802BA918_ra18_1fe_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
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

    MKW_GUEST_ENTER(0x802BA918u);
    goto loc_802BA918;

loc_802BA918:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 52u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r30 + 4));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_802BA978:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_802BA990;
    }
}

loc_802BA97C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r30 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_802BA988:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802BA998;
    }
}

loc_802BA990:
{
    r3 = 2;
    goto loc_802BAAB8;
}

loc_802BA998:
{
    f12.d = MemoryInline::FlatReadFloat32(r31);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r30);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f11.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r30 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f3.d);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r30 + 12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f8.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    SetCRFloatResident(cr, 0, f0.d, f8.d);
}

loc_802BA9E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802BA9F0;
    }
}

loc_802BA9E8:
{
    r3 = 2;
    goto loc_802BAAB8;
}

loc_802BA9F0:
{
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r30 + 36));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f7.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r30 + 44));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f6.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f7.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f6.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f8.d);
}

loc_802BAA28:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802BAA34;
    }
}

loc_802BAA2C:
{
    r3 = 2;
    goto loc_802BAAB8;
}

loc_802BAA34:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r30 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r30 + 32));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f8.d);
}

loc_802BAA6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802BAA78;
    }
}

loc_802BAA70:
{
    r3 = 2;
    goto loc_802BAAB8;
}

loc_802BAA78:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f12.d - f10.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f11.d - f9.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f10.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f9.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f8.d);
}

loc_802BAAA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802BAAB4;
    }
}

loc_802BAAAC:
{
    r3 = 2;
    goto loc_802BAAB8;
}

loc_802BAAB4:
{
    r3 = 0;
}

loc_802BAAB8:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    return r3;
}

}

extern "C" void func_802BA918(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802BA918_ra18_1fe_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00001FFF fpr_write=0x00001FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BA918 func_802BA918 preserves=true fpr_mask=0x00000000
