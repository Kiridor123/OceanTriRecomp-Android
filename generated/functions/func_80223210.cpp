#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E05C4(CpuContext* ctx);
extern "C" uint64_t func_800E05C4_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80223210_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x80223210u);
    goto loc_80223210;

loc_80223210:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r0 = (r4 * 272);
    r31 = (r3 + r0);
    r0 = (r4 * 356);
    r3 = (r3 + r0);
    r3 = (r3 + 2580);
    ctx->lr = 0x80223248u;
    if constexpr (KnownRegArgsCpuCall<0x800E05C4u>(&func_800E05C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800E05C4_4D4 = func_800E05C4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E05C4_4D4);
        r4 = static_cast<uint32_t>(regargs_result_800E05C4_4D4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800E05C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
    r0 = 255;
    r3 = (r29 + r30);
    MemoryInline::FlatWrite8((r3 + 2506), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 2561), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4660), r0);
    MemoryInline::FlatWrite32((r31 + 4668), r0);
    r3 = MemoryInline::FlatRead32(r29);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r3 = 0x805C0000u;
    r3 = (r3 + -19888);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    MemoryInline::FlatWrite8((r31 + 4672), static_cast<uint8_t>(r0));
    r30 = 0;
    r31 = (r31 + 4676);
}

loc_80223284:
{
    r3 = r29;
    r4 = r31;
    // inline leaf 0x8022312C (12 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r4, f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r4 + 4), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r4 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r4 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r4 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r4 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r4 + 24), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r4 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r4 + 32), f0.d);
    }
    // end of inlined leaf 0x8022312C
    r31 = (r31 + 36);
    r30 = (r30 + 1);
}

loc_8022329C:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(7))) {
        goto loc_80223284;
    }
}

loc_802232A0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80223210(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80223210_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80223210 func_80223210 preserves=true fpr_mask=0x00000000
