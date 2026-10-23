#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802C2634(CpuContext* ctx);
extern "C" uint32_t func_802C2634_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint32_t func_802C2594_ra20_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_802C2594;

loc_802C2594:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = 0x806C0000u;
    r3 = (r3 + -6272);
    ctx->lr = 0x802C25B0u;
    if constexpr (KnownRegArgsCpuCall<0x802C2634u>(&func_802C2634)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802C2634_44F = func_802C2634_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_802C2634_44F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802C2634u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
    }
    r3 = 0x806C0000u;
    r3 = (r3 + -2140);
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -13468), 0, 108u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -13468));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r31 = 0x806C0000u;
    r3 = (r31 + -2128);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -13468));
    f2.d = f1.d;
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -13456));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r31 = (r31 + -2128);
    r3 = (r31 + 12);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 88u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r2 + -13380));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r2 + -13376));
        }
    }
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r2 + -13372));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r31 + 24);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r2 + -13376));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 100u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r2 + -13368));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r2 + -13364));
        }
    }
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r31 + 36);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -13468));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return r3;
}

}

extern "C" void func_802C2594(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802C2594_ra20_0_8_0(ctx, ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000026 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000E fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C2594 func_802C2594 preserves=true fpr_mask=0x00000000
