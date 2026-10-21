#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80043C10_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    MKW_GUEST_ENTER(0x80043C10u);
    goto loc_80043C10;

loc_80043C10:
{
    r3 = 0x80670000u;
    r4 = (r3 + -18184);
    r3 = 0x80670000u;
    r3 = (r3 + -18152);
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r4, static_cast<uint16_t>(r0));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r3, static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 2), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r4 + 4), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r4 + 6), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r3 + 6), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r4 + 8), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r4 + 10), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r4 + 12), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r4 + 14), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r4 + 16), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r4 + 18), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r3 + 18), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r4 + 20), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r4 + 22), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r3 + 22), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r4 + 24), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r3 + 24), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r4 + 26), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r3 + 26), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r4 + 28), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 30u, (r4 + 30), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 30u, (r3 + 30), static_cast<uint16_t>(r0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r13 + -17880), 0, 26u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r13 + -17880), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r13 + -17872), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r13 + -17868), static_cast<uint16_t>(r0));
    r3 = (r13 + -17872);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    r3 = (r13 + -17868);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r13 + -17876), r0);
    r3 = 0x80660000u;
    r4 = (r3 + -19268);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -32656));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    r3 = 0x80670000u;
    MemoryInline::FlatWriteRamFloat32((r3 + -18120), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    r3 = (r3 + -18120);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    r3 = 0x80670000u;
    MemoryInline::FlatWriteRamFloat32((r3 + -18108), f0.d);
    r3 = (r3 + -18108);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r13 + -17864), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32652));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r13 + -17860), f0.d);
    MemoryInline::WriteResolved8(guest_range_2, 24u, (r13 + -17856), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 25u, (r13 + -17855), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80043C10(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80043C10_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002004 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80043C10 func_80043C10 preserves=true fpr_mask=0x00000000
