#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_800BCD78_ra38_be_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f7)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];

    MKW_GUEST_ENTER(0x800BCD78u);
    goto loc_800BCD78;

loc_800BCD78:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f10.d = f1.d;
    f9.d = f2.d;
    f7.d = f3.d;
    f12.d = f4.d;
    r0 = (r4 & 255);
}

loc_800BCD9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800BCE50;
    }
}

loc_800BCDA0:
{
    f0.d = PpcFmulsInline(f3.d, f1.d);
    f6.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31024));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f8.d = PpcFmulsInline(f4.d, f1.d);
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 44u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r5 + 32));
    f1.d = PpcFmulsInline(f2.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r5 + 36));
    f1.d = PpcFmulsInline(f4.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r5 + 40));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    f1.d = (-(f2.d));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f4.d, f8.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    f1.d = PpcFmulsInline(f5.d, f3.d);
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 4));
    f2.d = PpcFmulsInline(f11.d, f6.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f4.d = (-(f5.d));
    f5.d = PpcFmulsInline(f4.d, f0.d);
    f4.d = PpcFmulsInline(f11.d, f8.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f4.d));
    f12.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r5 + 16));
    f5.d = PpcFmulsInline(f12.d, f7.d);
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r5 + 20));
    f6.d = PpcFmulsInline(f11.d, f6.d);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r5 + 24));
    f7.d = PpcFmulsInline(f10.d, f7.d);
    f10.d = (-(f12.d));
    f10.d = PpcFmulsInline(f10.d, f0.d);
    f0.d = PpcFmulsInline(f11.d, f8.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f10.d - f0.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f0.d));
    // inline leaf 0x80077E54 (17 guest instruction(s))
    f11.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 4), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 8), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 12), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 16), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 20), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 24), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 28), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f11.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f10.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 32), f11.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 36), f10.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 40), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r3 + 44), f0.d);
    }
    // end of inlined leaf 0x80077E54
    goto loc_800BCEEC;
}

loc_800BCE50:
{
    f0.d = PpcFmulsInline(f3.d, f1.d);
    f8.d = PpcFmulsInline(f4.d, f2.d);
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 44u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r5 + 32));
    f1.d = PpcFmulsInline(f5.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r5 + 40));
    f1.d = PpcFmulsInline(f6.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r5 + 36));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    f1.d = (-(f5.d));
    f5.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f6.d, f8.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r5);
    f1.d = PpcFmulsInline(f5.d, f3.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r5 + 8));
    f2.d = PpcFmulsInline(f6.d, f4.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r5 + 4));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f4.d = (-(f5.d));
    f5.d = PpcFmulsInline(f4.d, f0.d);
    f4.d = PpcFmulsInline(f6.d, f8.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f4.d));
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r5 + 16));
    f5.d = PpcFmulsInline(f11.d, f7.d);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r5 + 24));
    f6.d = PpcFmulsInline(f10.d, f12.d);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r5 + 20));
    f7.d = PpcFmulsInline(f9.d, f7.d);
    f9.d = (-(f11.d));
    f9.d = PpcFmulsInline(f9.d, f0.d);
    f0.d = PpcFmulsInline(f10.d, f8.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f0.d));
    // inline leaf 0x80077E54 (17 guest instruction(s))
    f11.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r3 + 4), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 8), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r3 + 12), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r3 + 16), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r3 + 20), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r3 + 24), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r3 + 28), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f11.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f10.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r3 + 32), f11.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r3 + 36), f10.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r3 + 40), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r3 + 44), f0.d);
    }
    // end of inlined leaf 0x80077E54
}

loc_800BCEEC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
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
    return f1.d;
}

}

extern "C" void func_800BCD78(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_800BCD78_ra38_be_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[7].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000003E gpr_write=0x00000003 gpr_return=0x00000000 fpr_read=0x000016BE fpr_write=0x00001FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800BCD78 func_800BCD78 preserves=true fpr_mask=0x00000000
