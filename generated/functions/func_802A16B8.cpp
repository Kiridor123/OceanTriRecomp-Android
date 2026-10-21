#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8037695C(CpuContext* ctx);
extern "C" uint32_t func_8037695C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802A16B8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802A16B8u);
    goto loc_802A16B8;

loc_802A16B8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 17));
    r4 = (r0 * 848);
    r3 = 0x80660000u;
    r0 = (r3 + -18480);
    r30 = (r0 + r4);
    ctx->lr = 0x802A16E8u;
    if constexpr (KnownRegArgsCpuCall<0x8037695Cu>(&func_8037695C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8037695C_44D = func_8037695C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8037695C_44D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8037695Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_802A16EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802A16FC;
    }
}

loc_802A16F0:
{
    r3 = r31;
    // inline leaf 0x802A175C (7 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802A175C
    goto loc_802A1744;
}

loc_802A16FC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 704), 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r30 + 708));
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r30 + 704));
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r30 + 724));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r30 + 708));
    r0 = (r3 | r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 31u, (r30 + 735));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 29u, (r30 + 733));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 30u, (r30 + 734));
    r0 = (r3 & ~r0);
    r0 = (r4 | r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r30 + 716));
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
}

loc_802A1744:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802A16B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A16B8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A16B8 func_802A16B8 preserves=true fpr_mask=0x00000000
