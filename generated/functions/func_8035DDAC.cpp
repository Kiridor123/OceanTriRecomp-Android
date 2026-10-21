#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8035DDAC_ra38_3e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
    uint32_t stackword19 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;

    MKW_GUEST_ENTER(0x8035DDACu);
    goto loc_8035DDAC;

loc_8035DDAC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r0);
    r31 = r3;
    r0 = 1127219200;
    stackword3 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 48), r0);
    r0 = 1127219200;
    stackword4 = r0;
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -9272), 0, 156u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 128u, (r2 + -9144));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 132u, (r2 + -9140));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 136u, (r2 + -9136));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 140u, (r2 + -9132));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r2 + -9128));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r0);
    r0 = MemoryInline::FlatRead8((r3 + 484));
}

loc_8035DE00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8035DFD4;
    }
}

loc_8035DE04:
{
    r0 = MemoryInline::FlatRead8((r3 + 826));
}

loc_8035DE0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8035DE2C;
    }
}

loc_8035DE10:
{
}

loc_8035DE14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8035DE3C;
    }
}

loc_8035DE18:
{
}

loc_8035DE1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8035DE4C;
    }
}

loc_8035DE20:
{
}

loc_8035DE24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8035DE5C;
    }
}

loc_8035DE28:
{
    goto loc_8035DE6C;
}

loc_8035DE2C:
{
    r3 = (r1 + 28);
    r4 = (r1 + 20);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    goto loc_8035DE8C;
}

loc_8035DE3C:
{
    r3 = (r1 + 28);
    r4 = (r1 + 12);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    goto loc_8035DE8C;
}

loc_8035DE4C:
{
    r3 = (r1 + 28);
    r4 = (r1 + 8);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    goto loc_8035DE8C;
}

loc_8035DE5C:
{
    r3 = (r1 + 28);
    r4 = (r1 + 16);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    goto loc_8035DE8C;
}

loc_8035DE6C:
{
    r3 = (r1 + 28);
    r4 = (r1 + 24);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 4u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r4);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 4u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r3 = (r1 + 28);
    r4 = (r1 + 24);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r4);
    MemoryInline::WriteResolved8(guest_range_3, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r4 + 2));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_2, 3u, (r4 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 808), r0);
}

loc_8035DE8C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 1889), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r31 + 808));
    f0.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 64u, (r2 + -9208));
    r3 = (r4 ^ -2147483648);
    stackword10 = r3;
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 52), 0, 12u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 52), r3);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword10));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 148u, (r2 + -9124));
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -9272));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 848), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 844), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 840), f1.d);
    r5 = MemoryInline::FlatRead8((r31 + 836));
    f5.d = MemoryInline::ReadResolvedFloat64(guest_range_0, 32u, (r2 + -9240));
    stackword11 = r5;
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 60), r5);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword11));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    stackword12 = r3;
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 52), r3);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword12));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = MemoryInline::FlatRead8((r1 + 28));
    r0 = (r0 - r5);
    r0 = (r0 ^ -2147483648);
    stackword13 = r0;
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 60), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword13));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 152u, (r2 + -9120));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite8((r31 + 832), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead8((r31 + 837));
    stackword14 = r5;
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 52), r5);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword14));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    stackword15 = r3;
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 60), r3);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword15));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = MemoryInline::FlatRead8((r1 + 29));
    r0 = (r0 - r5);
    r0 = (r0 ^ -2147483648);
    stackword16 = r0;
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 52), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f1.d, f4.d);
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite8((r31 + 833), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead8((r31 + 838));
    stackword17 = r5;
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 60), r5);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword17));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    stackword18 = r3;
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 52), r3);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword18));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = MemoryInline::FlatRead8((r1 + 30));
    r0 = (r0 - r5);
    r0 = (r0 ^ -2147483648);
    stackword19 = r0;
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 60), r0);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword19));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWrite8((r31 + 834), static_cast<uint8_t>(r0));
}

loc_8035DFC4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(4))) {
        goto loc_8035E00C;
    }
}

loc_8035DFC8:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 808), r0);
    goto loc_8035E00C;
}

loc_8035DFD4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 1889), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 808), r0);
    MemoryInline::FlatWrite8((r3 + 825), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 824), static_cast<uint8_t>(r0));
    r3 = (r1 + 32);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -9272));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r31 + 840);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_8035E00C:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8035DDAC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8035DDAC_ra38_3e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8035DDAC func_8035DDAC preserves=true fpr_mask=0x00000000
