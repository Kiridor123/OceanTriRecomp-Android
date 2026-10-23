#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80359C44_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80359C44;

loc_80359C44:
{
    r9 = 0;
    r8 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80359C50:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80359D04;
    }
}

loc_80359C54:
{
    r6 = (r4 + -8);
}

loc_80359C5C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_80359CE4;
    }
}

loc_80359C60:
{
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80359C7C;
    }
}

loc_80359C68:
{
    r5 = 0x80000000u;
    r0 = (r5 + -2);
}

loc_80359C74:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_80359C7C;
    }
}

loc_80359C78:
{
    r7 = 1;
}

loc_80359C7C:
{
}

loc_80359C80:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80359CE4;
    }
}

loc_80359C84:
{
    r0 = (r6 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_80359C94:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_80359CE4;
    }
}

loc_80359C98:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 2), 0, 30u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r3 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 20u, (r3 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 24u, (r3 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 28u, (r3 + 30));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r3 = (r3 + 32);
    r8 = (r8 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80359C98;
    }
}

loc_80359CE4:
{
    r0 = (r4 - r8);
    ctr = r0;
}

loc_80359CF0:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r4))) {
        goto loc_80359D04;
    }
}

loc_80359CF4:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80359CF4;
    }
}

loc_80359D04:
{
    r3 = r9;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_80359C44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80359C44_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80359C44 func_80359C44 preserves=true fpr_mask=0x00000000
