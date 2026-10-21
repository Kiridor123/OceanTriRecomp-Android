#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8034CA24_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x8034CA24u);
    goto loc_8034CA24;

loc_8034CA24:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -4792);
    r8 = MemoryInline::FlatRead32((r3 + 804));
}

loc_8034CA34:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_8034CA38:
{
    r7 = MemoryInline::FlatRead32((r3 + 808));
    r6 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8034CA44:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_return;
    }
}

loc_8034CA48:
{
    r4 = (r7 + -8);
}

loc_8034CA50:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(8))) {
        goto loc_8034CABC;
    }
}

loc_8034CA54:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8034CA70;
    }
}

loc_8034CA5C:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_8034CA68:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_8034CA70;
    }
}

loc_8034CA6C:
{
    r5 = 1;
}

loc_8034CA70:
{
}

loc_8034CA74:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8034CABC;
    }
}

loc_8034CA78:
{
    r3 = 0;
    r0 = (r4 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8034CA8C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8034CABC;
    }
}

loc_8034CA90:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r8, 0, 253u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r8, static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r8 + 36), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 72u, (r8 + 72), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 108u, (r8 + 108), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 144u, (r8 + 144), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 180u, (r8 + 180), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 216u, (r8 + 216), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 252u, (r8 + 252), static_cast<uint8_t>(r3));
    r8 = (r8 + 288);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8034CA90;
    }
}

loc_8034CABC:
{
    r3 = 0;
    r0 = (r7 - r6);
    ctr = r0;
}

loc_8034CACC:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r7))) {
        goto loc_return;
    }
}

loc_8034CAD0:
{
    MemoryInline::FlatWrite8(r8, static_cast<uint8_t>(r3));
    r8 = (r8 + 36);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8034CAD0;
    }
}

loc_8034CADC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8034CA24(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034CA24_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8034CA24 func_8034CA24 preserves=true fpr_mask=0x00000000
