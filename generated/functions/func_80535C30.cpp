#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" double func_80535C30_ra38_fe_0_2(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7)
{
    uint32_t addr_stfsx_80535CD0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r6_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    uint32_t ctr = ctx->ctr;

    goto loc_80535C30;

loc_80535C30:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80535C38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80535C3C:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80535C44:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_return;
    }
}

loc_80535C48:
{
    r0 = MemoryInline::FlatRead8((r13 + -13272));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80535C8C;
    }
}

loc_80535C54:
{
    r6 = 0x80790000u;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1168));
    r5 = (r6 + 9856);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1164));
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 9856), 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r6 + 9856), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r5 + 4), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r5 + 8), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r5 + 12), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r5 + 16), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r5 + 20), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r5 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r5 + 28), f0.d);
    }
    MemoryInline::FlatWrite8((r13 + -13272), static_cast<uint8_t>(r0));
}

loc_80535C8C:
{
    r7 = MemoryInline::FlatRead8((r3 + 1));
    r6 = 0x80790000u;
    r5 = (r6 + 9856);
    guest_range_1 = MemoryInline::ResolveRangeHost((r6 + 9856), 0, 32u, true, false);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r6 + 9856));
    r0 = (r4 - r7);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(5));
    r6 = (r6_rot_0 & -32);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
            f5.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r5 + 4));
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r5 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            f4.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r5 + 12));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r5 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 20u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r5 + 20));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r5 + 24));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r5 + 28));
    ctr = r0;
}

loc_80535CC8:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r4))) {
        goto loc_80535D14;
    }
}

loc_80535CCC:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    addr_stfsx_80535CD0_loc_0 = (r6 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80535CD0_loc_0, f7.d);
    r5 = (r0 + r6);
    MemoryInline::FlatWriteFloat32((r5 + 4), f6.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r0 + r6);
    MemoryInline::FlatWriteFloat32((r5 + 8), f5.d);
    MemoryInline::FlatWriteFloat32((r5 + 12), f4.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r0 + r6);
    MemoryInline::FlatWriteFloat32((r5 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r5 + 20), f2.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r5 = (r0 + r6);
    r6 = (r6 + 32);
    MemoryInline::FlatWriteFloat32((r5 + 24), f1.d);
    MemoryInline::FlatWriteFloat32((r5 + 28), f0.d);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80535CCC;
    }
}

loc_80535D14:
{
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->ctr = ctr;
    return f1.d;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->ctr = ctr;
    return f1.d;
}

}

extern "C" void func_80535C30(CpuContext* MKW_RESTRICT ctx)
{
    double result;
    [[clang::noinline]] result = func_80535C30_ra38_fe_0_2(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d);
    ctx->fpr[1].d = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000207D gpr_write=0x000000E1 gpr_return=0x00000000 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80535C30 func_80535C30 preserves=true fpr_mask=0x00000000
