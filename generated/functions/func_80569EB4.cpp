#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80569EB4_ra8_1c0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, double arg_f6, double arg_f7, double arg_f8)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_80569EB4;

loc_80569EB4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = r3;
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r31 + 7120));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80533D58u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 32));
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r3 = r31;
    r0 = (r0 & -24577);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    MemoryInline::FlatWriteRam16((r1 + 30), static_cast<uint16_t>(r4));
    r12 = MemoryInline::FlatRead32(r31);
    r12 = MemoryInline::FlatRead32((r12 + 672));
    ctr = r12;
    ctx->lr = 0x80569F00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    // inline leaf 0x80532414 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 64));
    // end of inlined leaf 0x80532414
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 28u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 12));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r1 + 16));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r1 + 18));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r1 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f0.d);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r1 + 28));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r1 + 30));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 32));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80569EB4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80569EB4_ra8_1c0_18_0(ctx, ctx->gpr[3], ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FEE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80569EB4 func_80569EB4 preserves=true fpr_mask=0x00000000
