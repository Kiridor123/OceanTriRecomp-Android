#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801F3730_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_lhax_801F3810_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
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

    goto loc_801F3730;

loc_801F3730:
{
    r9 = 0;
    r8 = 0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F3740:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_801F3808;
    }
}

loc_801F3744:
{
    r6 = (r5 + -8);
}

loc_801F374C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_801F37D4;
    }
}

loc_801F3750:
{
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_801F3764;
    }
}

loc_801F3758:
{
}

loc_801F375C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(32766))) {
        goto loc_801F3764;
    }
}

loc_801F3760:
{
    r7 = 1;
}

loc_801F3764:
{
}

loc_801F3768:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_801F37D4;
    }
}

loc_801F376C:
{
    r7 = r3;
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0 = (r6 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_801F3784:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_801F37D4;
    }
}

loc_801F3788:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r7);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r7 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r7 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r7 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r7 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r7 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r7 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r7 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r7 = (r7 + 16);
    r8 = (r8 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F3788;
    }
}

loc_801F37D4:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r7 = (r3 + r0);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (r5 - r6);
    ctr = r0;
}

loc_801F37F0:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r5))) {
        goto loc_801F3808;
    }
}

loc_801F37F4:
{
    r0 = MemoryInline::FlatRead16(r7);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = (r9 + r0);
    r7 = (r7 + 2);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801F37F4;
    }
}

loc_801F3808:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    addr_lhax_801F3810_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_801F3810_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801F3818:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801F3824;
    }
}

loc_801F381C:
{
    r0 = (r9 + r4);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_801F3824:
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

extern "C" void func_801F3730(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801F3730_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F3730 func_801F3730 preserves=true fpr_mask=0x00000000
