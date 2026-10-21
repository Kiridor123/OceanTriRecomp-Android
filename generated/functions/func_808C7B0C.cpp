#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808C7B0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x808C7B0Cu);
    goto loc_808C7B0C;

loc_808C7B0C:
{
    r6 = MemoryInline::FlatRead32(r3);
    r4 = (r3 + 4);
    r5 = r4;
    r10 = 0;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r9 = (r0 - r6);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_808C7B28:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_808C7C00;
    }
}

loc_808C7B2C:
{
    r7 = (r9 + -8);
}

loc_808C7B34:
{
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(8))) {
        goto loc_808C7BDC;
    }
}

loc_808C7B38:
{
    r8 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_808C7B54;
    }
}

loc_808C7B40:
{
    r6 = 0x80000000u;
    r0 = (r6 + -2);
}

loc_808C7B4C:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r0))) {
        goto loc_808C7B54;
    }
}

loc_808C7B50:
{
    r8 = 1;
}

loc_808C7B54:
{
}

loc_808C7B58:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_808C7BDC;
    }
}

loc_808C7B5C:
{
    r0 = (r7 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_808C7B6C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_808C7BDC;
    }
}

loc_808C7B70:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r5, r0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r5 + 12), r0);
    r0 = MemoryInline::FlatRead32((r5 + 16));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r5 + 16), r0);
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r5 + 20), r0);
    r0 = MemoryInline::FlatRead32((r5 + 24));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r5 + 24), r0);
    r0 = MemoryInline::FlatRead32((r5 + 28));
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32((r5 + 28), r0);
    r5 = (r5 + 32);
    r10 = (r10 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808C7B70;
    }
}

loc_808C7BDC:
{
    r0 = (r9 - r10);
    ctr = r0;
}

loc_808C7BE8:
{
    if ((static_cast<int32_t>(r10) >= static_cast<int32_t>(r9))) {
        goto loc_808C7C00;
    }
}

loc_808C7BEC:
{
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808C7BEC;
    }
}

loc_808C7C00:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 224u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r3 = 0x80930000u;
    r3 = (r3 + 10104);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 252u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r3 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r3 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r3 + 40), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 36));
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r3 + 44), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r3 + 48), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 44));
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r3 + 52), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r4 + 48));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r3 + 56), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r4 + 52));
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r3 + 60), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r4 + 56));
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r3 + 68), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r4 + 60));
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r3 + 72), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r4 + 64));
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r3 + 76), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r4 + 68));
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r3 + 80), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 72u, (r4 + 72));
    MemoryInline::WriteResolved32(guest_range_1, 80u, (r3 + 84), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r4 + 76));
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r3 + 88), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 80u, (r4 + 80));
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r3 + 92), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 84u, (r4 + 84));
    MemoryInline::WriteResolved32(guest_range_1, 96u, (r3 + 100), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 88u, (r4 + 88));
    MemoryInline::WriteResolved32(guest_range_1, 100u, (r3 + 104), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 92u, (r4 + 92));
    MemoryInline::WriteResolved32(guest_range_1, 104u, (r3 + 108), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r4 + 96));
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r3 + 112), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 100u, (r4 + 100));
    MemoryInline::WriteResolved32(guest_range_1, 112u, (r3 + 116), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 104u, (r4 + 104));
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r3 + 120), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 108u, (r4 + 108));
    MemoryInline::WriteResolved32(guest_range_1, 120u, (r3 + 124), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r4 + 112));
    MemoryInline::WriteResolved32(guest_range_1, 128u, (r3 + 132), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r4 + 116));
    MemoryInline::WriteResolved32(guest_range_1, 132u, (r3 + 136), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r4 + 120));
    MemoryInline::WriteResolved32(guest_range_1, 136u, (r3 + 140), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 124u, (r4 + 124));
    MemoryInline::WriteResolved32(guest_range_1, 140u, (r3 + 144), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 128u, (r4 + 128));
    MemoryInline::WriteResolved32(guest_range_1, 144u, (r3 + 148), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 132u, (r4 + 132));
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r3 + 152), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 136u, (r4 + 136));
    MemoryInline::WriteResolved32(guest_range_1, 152u, (r3 + 156), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 140u, (r4 + 140));
    MemoryInline::WriteResolved32(guest_range_1, 160u, (r3 + 164), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 144u, (r4 + 144));
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r3 + 168), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 148u, (r4 + 148));
    MemoryInline::WriteResolved32(guest_range_1, 168u, (r3 + 172), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 152u, (r4 + 152));
    MemoryInline::WriteResolved32(guest_range_1, 172u, (r3 + 176), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 156u, (r4 + 156));
    MemoryInline::WriteResolved32(guest_range_1, 176u, (r3 + 180), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 160u, (r4 + 160));
    MemoryInline::WriteResolved32(guest_range_1, 180u, (r3 + 184), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 164u, (r4 + 164));
    MemoryInline::WriteResolved32(guest_range_1, 184u, (r3 + 188), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 168u, (r4 + 168));
    MemoryInline::WriteResolved32(guest_range_1, 192u, (r3 + 196), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 172u, (r4 + 172));
    MemoryInline::WriteResolved32(guest_range_1, 196u, (r3 + 200), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 176u, (r4 + 176));
    MemoryInline::WriteResolved32(guest_range_1, 200u, (r3 + 204), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 180u, (r4 + 180));
    MemoryInline::WriteResolved32(guest_range_1, 204u, (r3 + 208), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 184u, (r4 + 184));
    MemoryInline::WriteResolved32(guest_range_1, 208u, (r3 + 212), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 188u, (r4 + 188));
    MemoryInline::WriteResolved32(guest_range_1, 212u, (r3 + 216), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 192u, (r4 + 192));
    MemoryInline::WriteResolved32(guest_range_1, 216u, (r3 + 220), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 196u, (r4 + 196));
    MemoryInline::WriteResolved32(guest_range_1, 224u, (r3 + 228), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 200u, (r4 + 200));
    MemoryInline::WriteResolved32(guest_range_1, 228u, (r3 + 232), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 204u, (r4 + 204));
    MemoryInline::WriteResolved32(guest_range_1, 232u, (r3 + 236), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 208u, (r4 + 208));
    MemoryInline::WriteResolved32(guest_range_1, 236u, (r3 + 240), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 212u, (r4 + 212));
    MemoryInline::WriteResolved32(guest_range_1, 240u, (r3 + 244), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 216u, (r4 + 216));
    MemoryInline::WriteResolved32(guest_range_1, 244u, (r3 + 248), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 220u, (r4 + 220));
    MemoryInline::WriteResolved32(guest_range_1, 248u, (r3 + 252), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808C7B0C func_808C7B0C preserves=true fpr_mask=0x00000000
