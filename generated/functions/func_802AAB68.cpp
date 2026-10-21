#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802AAB68_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x802AAB68u);
    goto loc_802AAB68;

loc_802AAB68:
{
    r4 = 0x806B0000u;
    r9 = (r4 + -1256);
    r6 = MemoryInline::FlatRead32((r9 + 36));
}

loc_802AAB78:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_802AAB84;
    }
}

loc_802AAB7C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802AAB84:
{
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r9 + 28));
}

loc_802AAB8C:
{
    r7 = 0;
    goto loc_802AABA4;
}

loc_802AAB94:
{
    r6 = (r6 + 1);
    r5 = (r5 + 1);
}

loc_802AABA0:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r4))) {
        goto loc_802AAC94;
    }
}

loc_802AABA4:
{
    r0 = MemoryInline::FlatRead8(r6);
}

loc_802AABAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AAB94;
    }
}

loc_802AABB0:
{
    r10 = r6;
    r8 = r5;
}

loc_802AABB8:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead8(r6);
}

loc_802AABC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802AAB8C;
    }
}

loc_802AABC8:
{
}

loc_802AABCC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(r3))) {
        goto loc_802AABE4;
    }
}

loc_802AABD0:
{
    r6 = (r6 + 1);
    r5 = (r5 + 1);
}

loc_802AABDC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r4))) {
        goto loc_802AAC94;
    }
}

loc_802AABE0:
{
    goto loc_802AABB8;
}

loc_802AABE4:
{
    r6 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_802AABEC:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_802AAC84;
    }
}

loc_802AABF0:
{
    r4 = (r7 + -8);
}

loc_802AABF8:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(8))) {
        goto loc_802AAC64;
    }
}

loc_802AABFC:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_802AAC18;
    }
}

loc_802AAC04:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_802AAC10:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_802AAC18;
    }
}

loc_802AAC14:
{
    r5 = 1;
}

loc_802AAC18:
{
}

loc_802AAC1C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802AAC64;
    }
}

loc_802AAC20:
{
    r3 = 1;
    r0 = (r4 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_802AAC34:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_802AAC64;
    }
}

loc_802AAC38:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r10, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r10, static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r10 + 1), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r10 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r10 + 3), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r10 + 4), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r10 + 5), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r10 + 6), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r10 + 7), static_cast<uint8_t>(r3));
    r10 = (r10 + 8);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802AAC38;
    }
}

loc_802AAC64:
{
    r3 = 1;
    r0 = (r7 - r6);
    ctr = r0;
}

loc_802AAC74:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r7))) {
        goto loc_802AAC84;
    }
}

loc_802AAC78:
{
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r3));
    r10 = (r10 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802AAC78;
    }
}

loc_802AAC84:
{
    r3 = MemoryInline::FlatRead32((r9 + 32));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(6));
    r0 = (r0_rot_4 & -64);
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802AAC94:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802AAB68(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802AAB68_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AAB68 func_802AAB68 preserves=true fpr_mask=0x00000000
