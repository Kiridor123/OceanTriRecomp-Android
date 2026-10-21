#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8035FDD8_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;

    MKW_GUEST_ENTER(0x8035FDD8u);
    goto loc_8035FDD8;

loc_8035FDD8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 18), static_cast<uint16_t>(r4));
    r3 = (r3 + 612);
    r4 = 0;
    r5 = 192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = 64;
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 614), 0, 170u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r30 + 614), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r30 + 638), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_0, 48u, (r30 + 662), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_0, 72u, (r30 + 686), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_0, 96u, (r30 + 710), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_0, 120u, (r30 + 734), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_0, 144u, (r30 + 758), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolved16(guest_range_0, 168u, (r30 + 782), static_cast<uint16_t>(r31));
    r3 = (r30 + 804);
    r4 = 0;
    r5 = 128;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite16((r30 + 818), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r30 + 834), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r30 + 850), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r30 + 866), static_cast<uint16_t>(r31));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8035FDD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8035FDD8_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8035FDD8 func_8035FDD8 preserves=true fpr_mask=0x00000000
