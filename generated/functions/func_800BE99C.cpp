#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_800BE99C_ra18_1e_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];

    MKW_GUEST_ENTER(0x800BE99Cu);
    goto loc_800BE99C;

loc_800BE99C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f8.d = f1.d;
    f0.d = f2.d;
    f12.d = f3.d;
    f7.d = f4.d;
    f9.d = PpcFmulsInline(f3.d, f1.d);
    f11.d = PpcFmulsInline(f4.d, f2.d);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 44u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
    f1.d = PpcFmulsInline(f2.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    f1.d = PpcFmulsInline(f5.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    f1.d = (-(f2.d));
    f2.d = PpcFmulsInline(f1.d, f9.d);
    f1.d = PpcFmulsInline(f5.d, f11.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f1.d = PpcFmulsInline(f5.d, f3.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f2.d = PpcFmulsInline(f6.d, f4.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f4.d = (-(f5.d));
    f5.d = PpcFmulsInline(f4.d, f9.d);
    f4.d = PpcFmulsInline(f6.d, f11.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f4.d));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    f5.d = PpcFmulsInline(f8.d, f12.d);
    f10.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    f6.d = PpcFmulsInline(f10.d, f7.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    f7.d = PpcFmulsInline(f7.d, f12.d);
    f8.d = (-(f8.d));
    f9.d = PpcFmulsInline(f8.d, f9.d);
    f8.d = PpcFmulsInline(f10.d, f11.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f8.d));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f8.d));
    // inline leaf 0x80077E54 (17 guest instruction(s))
    f11.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r3 + 12), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 28), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f11.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f10.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f11.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f10.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 44), f0.d);
    }
    // end of inlined leaf 0x80077E54
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

extern "C" void func_800BE99C(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_800BE99C_ra18_1e_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x00000003 gpr_return=0x00000000 fpr_read=0x0000001E fpr_write=0x00001FFF fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800BE99C func_800BE99C preserves=true fpr_mask=0x00000000
