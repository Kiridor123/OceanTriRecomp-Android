#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804DA850_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_10 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r6_addr_8 = 0;
    uint32_t r6_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804DA850u);
    goto loc_804DA850;

loc_804DA850:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    // inline leaf 0x804DA1C0 (1 guest instruction(s))
    // end of inlined leaf 0x804DA1C0
    r3 = -1431633920;
    r0 = MemoryInline::FlatRead32((r31 + 60));
    r3 = (r3 + -21845);
    r4 = 0;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r5 = (r5_rot_0 & 536870911);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_804DA884:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804DA9A4;
    }
}

loc_804DA888:
{
}

loc_804DA88C:
{
    r6 = (r5 + -8);
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(8))) {
        goto loc_804DA978;
    }
}

loc_804DA894:
{
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804DA8B0;
    }
}

loc_804DA89C:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_804DA8A8:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_804DA8B0;
    }
}

loc_804DA8AC:
{
    r7 = 1;
}

loc_804DA8B0:
{
}

loc_804DA8B4:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804DA978;
    }
}

loc_804DA8B8:
{
    r0 = (r6 + 7);
    r3 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_804DA8CC:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_804DA978;
    }
}

loc_804DA8D0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 56), 0, 4u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r4 = (r4 + 8);
    r6_addr_2 = (r6 + r3);
    r0 = MemoryInline::FlatRead32(r6_addr_2);
    r0 = (r0 - r31);
    r6_addr_3 = (r6 + r3);
    MemoryInline::FlatWrite32(r6_addr_3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 24));
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r6 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 36));
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r6 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 48));
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r6 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 60));
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r6 + 60), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 72));
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r6 + 72), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 56));
    r6 = (r0 + r3);
    r3 = (r3 + 96);
    r0 = MemoryInline::FlatRead32((r6 + 84));
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r6 + 84), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DA8D0;
    }
}

loc_804DA978:
{
    r0 = (r5 - r4);
    r6 = (r4 * 12);
    ctr = r0;
}

loc_804DA988:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r5))) {
        goto loc_804DA9A4;
    }
}

loc_804DA98C:
{
    r3 = MemoryInline::FlatRead32((r31 + 56));
    r3_addr_2 = (r3 + r6);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = (r0 - r31);
    r3_addr_3 = (r3 + r6);
    MemoryInline::FlatWrite32(r3_addr_3, r0);
    r6 = (r6 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DA98C;
    }
}

loc_804DA9A4:
{
    r3 = -1431633920;
    r0 = MemoryInline::FlatRead32((r31 + 52));
    r3 = (r3 + -21845);
    r5 = 0;
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r0)) >> 32));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r4 = (r4_rot_0 & 536870911);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_804DA9C0:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_804DAAE0;
    }
}

loc_804DA9C4:
{
}

loc_804DA9C8:
{
    r6 = (r4 + -8);
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(8))) {
        goto loc_804DAAB4;
    }
}

loc_804DA9D0:
{
    r7 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804DA9EC;
    }
}

loc_804DA9D8:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_804DA9E4:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(r0))) {
        goto loc_804DA9EC;
    }
}

loc_804DA9E8:
{
    r7 = 1;
}

loc_804DA9EC:
{
}

loc_804DA9F0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804DAAB4;
    }
}

loc_804DA9F4:
{
    r0 = (r6 + 7);
    r3 = 0;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    ctr = r0;
}

loc_804DAA08:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_804DAAB4;
    }
}

loc_804DAA0C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 48), 0, 4u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 48));
    r5 = (r5 + 8);
    r6_addr_7 = (r6 + r3);
    r0 = MemoryInline::FlatRead32(r6_addr_7);
    r0 = (r0 - r31);
    r6_addr_8 = (r6 + r3);
    MemoryInline::FlatWrite32(r6_addr_8, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 48));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 48));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 24));
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r6 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 48));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 36));
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r6 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 48));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 48));
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r6 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 48));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 60));
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r6 + 60), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 48));
    r6 = (r0 + r3);
    r0 = MemoryInline::FlatRead32((r6 + 72));
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r6 + 72), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r31 + 48));
    r6 = (r0 + r3);
    r3 = (r3 + 96);
    r0 = MemoryInline::FlatRead32((r6 + 84));
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r6 + 84), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DAA0C;
    }
}

loc_804DAAB4:
{
    r0 = (r4 - r5);
    r6 = (r5 * 12);
    ctr = r0;
}

loc_804DAAC4:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r4))) {
        goto loc_804DAAE0;
    }
}

loc_804DAAC8:
{
    r3 = MemoryInline::FlatRead32((r31 + 48));
    r3_addr_6 = (r3 + r6);
    r0 = MemoryInline::FlatRead32(r3_addr_6);
    r0 = (r0 - r31);
    r3_addr_7 = (r3 + r6);
    MemoryInline::FlatWrite32(r3_addr_7, r0);
    r6 = (r6 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DAAC8;
    }
}

loc_804DAAE0:
{
    r0 = MemoryInline::FlatRead8((r31 + 32));
}

loc_804DAAE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DAB04;
    }
}

loc_804DAAEC:
{
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r3 = (r3_rot_1 & 2040);
    r0 = MemoryInline::FlatRead32((r31 + 36));
    r4_addr_1 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r31 + 36), r0);
}

loc_804DAB04:
{
    r0 = MemoryInline::FlatRead8((r31 + 33));
}

loc_804DAB0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DAB28;
    }
}

loc_804DAB10:
{
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r3 = (r3_rot_3 & 2040);
    r0 = MemoryInline::FlatRead32((r31 + 40));
    r4_addr_3 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_3);
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r31 + 40), r0);
}

loc_804DAB28:
{
    r0 = MemoryInline::FlatRead8((r31 + 34));
}

loc_804DAB30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DAB4C;
    }
}

loc_804DAB34:
{
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r3 = (r3_rot_5 & 2040);
    r0 = MemoryInline::FlatRead32((r31 + 44));
    r4_addr_5 = (r4 + r3);
    r3 = MemoryInline::FlatRead32(r4_addr_5);
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r31 + 44), r0);
}

loc_804DAB4C:
{
    r6 = 1;
    r5 = 8;
    r3 = 0;
    goto loc_804DAB94;
}

loc_804DAB5C:
{
    r0 = MemoryInline::FlatRead8((r31 + 35));
    r4 = MemoryInline::FlatRead32((r31 + 12));
}

loc_804DAB68:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r0))) {
        goto loc_804DAB78;
    }
}

loc_804DAB6C:
{
    MemoryInline::FlatWrite8((r31 + 35), static_cast<uint8_t>(r3));
    r4_addr_8 = (r4 + r5);
    MemoryInline::FlatWrite32(r4_addr_8, r3);
    goto loc_804DAB8C;
}

loc_804DAB78:
{
    r4_addr_9 = (r4 + r5);
    r0 = MemoryInline::FlatRead32(r4_addr_9);
}

loc_804DAB80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DAB8C;
    }
}

loc_804DAB84:
{
    r0 = (r0 - r31);
    r4_addr_10 = (r4 + r5);
    MemoryInline::FlatWrite32(r4_addr_10, r0);
}

loc_804DAB8C:
{
    r5 = (r5 + 8);
    r6 = (r6 + 1);
}

loc_804DAB94:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_804DAB9C:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r0))) {
        goto loc_804DAB5C;
    }
}

loc_804DABA0:
{
    r4 = MemoryInline::FlatRead32((r31 + 12));
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r10 = (r4 - r31);
    r5 = MemoryInline::FlatRead32((r31 + 48));
    r9 = (r0 - r31);
    r4 = MemoryInline::FlatRead32((r31 + 56));
    r8 = (r5 - r31);
    r0 = MemoryInline::FlatRead32((r31 + 64));
    r7 = (r4 - r31);
    r5 = MemoryInline::FlatRead32((r31 + 72));
    r6 = (r0 - r31);
    r4 = MemoryInline::FlatRead32((r31 + 76));
    r0 = MemoryInline::FlatRead32((r31 + 84));
    r5 = (r5 - r31);
    r4 = (r4 - r31);
    MemoryInline::FlatWrite32((r31 + 12), r10);
    r0 = (r0 - r31);
    MemoryInline::FlatWrite32((r31 + 16), r9);
    MemoryInline::FlatWrite32((r31 + 48), r8);
    MemoryInline::FlatWrite32((r31 + 56), r7);
    MemoryInline::FlatWrite32((r31 + 64), r6);
    MemoryInline::FlatWrite32((r31 + 72), r5);
    MemoryInline::FlatWrite32((r31 + 76), r4);
    MemoryInline::FlatWrite32((r31 + 84), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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

extern "C" void func_804DA850(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DA850_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804DA850 func_804DA850 preserves=true fpr_mask=0x00000000
