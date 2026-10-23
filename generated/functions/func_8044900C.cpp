#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8055D2AC(CpuContext* ctx);
extern "C" void func_8055D2AC_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_8044900C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8044900C;

loc_8044900C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    if constexpr (KnownRegArgsCpuCall<0x8055D2ACu>(&func_8055D2AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_8055D2AC_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8055D2ACu>(ctx);
        r0 = ctx->gpr[0];
    }
    r3 = 0x80660000u;
    r0 = (r3 + -24904);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 124u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r0);
    r3 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r31 + 64), r3);
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r31 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r31 + 80), r3);
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r31 + 84), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r31 + 88), r3);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r31 + 92), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r31 + 96), r3);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r31 + 100), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r31 + 104), r3);
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r31 + 108), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r31 + 112), r3);
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r31 + 116), r3);
    }
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r31 + 120), r3);
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_8044900C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8044900C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000027FA gpr_write=0x0000078B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8044900C func_8044900C preserves=true fpr_mask=0x00000000
