#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FC94(CpuContext* ctx);
extern "C" uint32_t func_8045FC94_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8052A918_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];

    goto loc_8052A918;

loc_8052A918:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x80650000u;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1360));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r7 = (r3 + 20);
    r0 = MemoryInline::FlatRead8((r4 + 9));
    r8 = (r3 + 32);
    r31 = 0;
    r6 = (r6 + -13816);
    r5 = 16;
    r30 = r4;
    r4 = (r4 + 12);
    r29 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 215u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r31);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r31);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r31);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r31);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r31);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r7);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r8);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 76), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 80), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r31);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r31);
    MemoryInline::WriteResolved8(guest_range_0, 214u, (r3 + 214), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r3 + 180), r31);
    MemoryInline::WriteResolved8(guest_range_0, 186u, (r3 + 186), static_cast<uint8_t>(r0));
    r3 = (r3 + 188);
    if constexpr (KnownRegArgsCpuCall<0x8045FC94u>(&func_8045FC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045FC94_1212 = func_8045FC94_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FC94_1212;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8045FC94u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite8((r29 + 204), static_cast<uint8_t>(r31));
    r3 = (r29 + 205);
    r4 = (r30 + 28);
    r5 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8045FC94u>(&func_8045FC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045FC94_1556 = func_8045FC94_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FC94_1556;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8045FC94u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 8), 0, 68u, true, false);
    r4 = MemoryInline::ReadResolved8(guest_range_2, 2u, (r30 + 10));
    r3 = r29;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 28u);
        if (resolved_pair.valid) {
            f9.d = PpcBitCastToFloatInline(resolved_pair.first);
            f8.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f9.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r30 + 36));
            f8.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r30 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 36u);
        if (resolved_pair.valid) {
            f7.d = PpcBitCastToFloatInline(resolved_pair.first);
            f6.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f7.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r30 + 44));
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r30 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 44u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r30 + 52));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 48u, (r30 + 56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 52u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 52u, (r30 + 60));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 56u, (r30 + 64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 60u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 60u, (r30 + 68));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 64u, (r30 + 72));
        }
    }
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, (r30 + 8));
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 44), 0, 170u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 169u, (r29 + 213), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r29 + 44), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r29 + 48), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r29 + 52), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r29 + 56), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r29 + 60), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r29 + 64), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r29 + 68), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r29 + 72), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r29 + 76), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r29 + 80), f0.d);
    }
    MemoryInline::WriteResolved8(guest_range_1, 140u, (r29 + 184), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 141u, (r29 + 185), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_1, 143u, (r29 + 187), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052A918(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052A918_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052A918 func_8052A918 preserves=true fpr_mask=0x00000000
