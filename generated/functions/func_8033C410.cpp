#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8033C410_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8033C410;

loc_8033C410:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r4 + 15875));
    r3 = 0x80660000u;
    r30 = (r3 + -19148);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 8), 0, 42u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 15875));
    r31 = (r0 & 127);
    r3 = r31;
    // inline leaf 0x8033C3D0 (6 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r4 + r0);
    r3 = (r3 + 20864);
    // end of inlined leaf 0x8033C3D0
    r5 = MemoryInline::FlatRead32((r13 + -17824));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4 = (r5 + r0);
    r0 = MemoryInline::FlatRead16((r4 + 20902));
    MemoryInline::WriteResolved16(guest_range_0, 40u, (r30 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r30 + 38), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r30 + 39), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r30 + 40), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 20900));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r30 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 20901));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r30 + 42), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 20896));
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r30 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 20898));
    MemoryInline::WriteResolved16(guest_range_0, 38u, (r30 + 46), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8033C410(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033C410_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002002 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8033C410 func_8033C410 preserves=true fpr_mask=0x00000000
