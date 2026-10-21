#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FC94(CpuContext* ctx);
extern "C" uint32_t func_8045FC94_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_808303F0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x808303F0u);
    goto loc_808303F0;

loc_808303F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80840000u;
    r6 = 0x80840000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 18632));
    r7 = (r3 + 20);
    r8 = (r3 + 32);
    r6 = (r6 + 25984);
    r31 = r4;
    r30 = r3;
    r5 = 16;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 209u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r7);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 32), r8);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 76), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, (r3 + 80), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 40), r0);
    MemoryInline::WriteResolved8(guest_range_0, 208u, (r3 + 208), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 9));
    r4 = (r4 + 12);
    MemoryInline::WriteResolved8(guest_range_0, 204u, (r3 + 204), static_cast<uint8_t>(r0));
    r3 = (r3 + 180);
    if constexpr (KnownRegArgsCpuCall<0x8045FC94u>(&func_8045FC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045FC94_DAD = func_8045FC94_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FC94_DAD;
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
    r3 = (r30 + 196);
    r4 = (r31 + 28);
    r5 = 8;
    if constexpr (KnownRegArgsCpuCall<0x8045FC94u>(&func_8045FC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8045FC94_108F = func_8045FC94_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FC94_108F;
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
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 8), 0, 68u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 28u, (r31 + 36));
    r3 = r30;
    guest_range_2 = MemoryInline::ResolveRangeHost((r30 + 44), 0, 164u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r30 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r31 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r30 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r31 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r30 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r31 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r30 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 44u, (r31 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r30 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 48u, (r31 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r30 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 52u, (r31 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r30 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 56u, (r31 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r30 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 60u, (r31 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r30 + 76), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 64u, (r31 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r30 + 80), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r31 + 10));
    MemoryInline::WriteResolved8(guest_range_2, 161u, (r30 + 205), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 162u, (r30 + 206), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r31 + 8));
    MemoryInline::WriteResolved8(guest_range_2, 163u, (r30 + 207), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808303F0 func_808303F0 preserves=true fpr_mask=0x00000000
