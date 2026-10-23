#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802AAC9C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_802AAC9C;

loc_802AAC9C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r4;
    r4 = 0x806B0000u;
    r31 = (r4 + -1256);
    r4 = MemoryInline::FlatRead32((r31 + 32));
    r30 = (r3 - r4);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(26));
    r30 = (r30_rot_0 & 67108863);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(6));
    r0 = (r0_rot_0 & -64);
    r3 = (r4 + r0);
    r4 = 0;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(6));
    r5 = (r5_rot_0 & -64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r31 + 36));
    r7 = (r0 + r30);
    r6 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_802AACF0:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_802AAD88;
    }
}

loc_802AACF4:
{
    r4 = (r29 + -8);
}

loc_802AACFC:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(8))) {
        goto loc_802AAD68;
    }
}

loc_802AAD00:
{
    r5 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_802AAD1C;
    }
}

loc_802AAD08:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_802AAD14:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r0))) {
        goto loc_802AAD1C;
    }
}

loc_802AAD18:
{
    r5 = 1;
}

loc_802AAD1C:
{
}

loc_802AAD20:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_802AAD68;
    }
}

loc_802AAD24:
{
    r3 = 0;
    r0 = (r4 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_802AAD38:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_802AAD68;
    }
}

loc_802AAD3C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r7, static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r7 + 1), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r7 + 2), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r7 + 3), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r7 + 4), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r7 + 5), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r7 + 6), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r7 + 7), static_cast<uint8_t>(r3));
    r7 = (r7 + 8);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802AAD3C;
    }
}

loc_802AAD68:
{
    r3 = 0;
    r0 = (r29 - r6);
    ctr = r0;
}

loc_802AAD78:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r29))) {
        goto loc_802AAD88;
    }
}

loc_802AAD7C:
{
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r3));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802AAD7C;
    }
}

loc_802AAD88:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802AAC9C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802AAC9C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AAC9C func_802AAC9C preserves=true fpr_mask=0x00000000
