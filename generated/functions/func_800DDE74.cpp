#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800DDE74_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    ctx->gpr[4] = arg_r4;

    goto loc_800DDE74;

loc_800DDE74:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r6;
    r0 = 3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r6 + 1), 0, 75u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r6 + 1), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r6 + 2), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r9 & 255);
    r0 = (r3 + r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 39u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_0, 39u, (r6 + 40), r0);
        MemoryInline::WriteResolved32(guest_range_0, 43u, (r6 + 44), r7);
    }
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 47u, (r6 + 48), r0);
    r0 = -2;
    MemoryInline::WriteResolved32(guest_range_0, 51u, (r6 + 52), r0);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 55u, (r6 + 56), r0);
    MemoryInline::WriteResolved8(guest_range_0, 73u, (r6 + 74), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 74u, (r6 + 75), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r6 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 67u, (r6 + 68), r5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    MemoryInline::WriteResolved16(guest_range_0, 71u, (r6 + 72), static_cast<uint16_t>(r0));
    r3 = (r6 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 24), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    return r3;
}

}

extern "C" void func_800DDE74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800DDE74_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000003FA gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DDE74 func_800DDE74 preserves=true fpr_mask=0x00000000
