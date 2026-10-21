#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804E8360_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804E8360u);
    goto loc_804E8360;

loc_804E8360:
{
    r7 = MemoryInline::FlatRead32((r13 + -14352));
    r9 = 0x80760000u;
    r6 = 0x80760000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 26), 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, (r3 + 26));
    r9 = (r9 + -10680);
    r8 = MemoryInline::FlatRead32((r13 + -14348));
    r6 = (r6 + -10560);
    MemoryInline::FlatWriteRam16((r9 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r6 + 40));
    r6 = (r7 | 268435456);
    MemoryInline::FlatWrite32((r13 + -14348), r8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
}

loc_804E8390:
{
    MemoryInline::FlatWrite32((r13 + -14352), r6);
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 30));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 29));
    r0 = (r0 | 536870912);
    r6 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::FlatWrite32((r13 + -14348), r6);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(8));
    r7_mrot_0 = (r7_rot_0 & 65280);
    r7_mdest_0 = (r7 & -65281);
    r7 = (r7_mdest_0 | r7_mrot_0);
    MemoryInline::FlatWriteRam16((r9 + 4), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite32((r13 + -14352), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804E83CC;
    }
}

loc_804E83BC:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 31));
    r8 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 32));
    r7 = (r4 + 172);
    goto loc_804E83EC;
}

loc_804E83CC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 32));
    r6 = (720 - r5);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r3 + 31));
    r5 = (r4 + r0);
    r4 = (r4 + r7);
    r0 = (r5 + 40);
    r7 = (r4 + -40);
    r8 = (r0 - r6);
}

loc_804E83EC:
{
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r5 = 0x80760000u;
    r6 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 28));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(7));
    r4 = (r4_rot_0 & 65408);
    r3 = MemoryInline::FlatRead32((r13 + -14348));
    r0 = (r0 | 67108864);
    MemoryInline::FlatWrite32((r13 + -14348), r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(23));
    r3 = (r3_rot_0 & 8388607);
    r6 = (r6 | r4);
    r5 = (r5 + -10680);
    MemoryInline::FlatWrite32((r13 + -14352), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4 = (r3 | r0);
    r0 = MemoryInline::FlatRead32((r13 + -14352));
    r3 = MemoryInline::FlatRead32((r13 + -14348));
    MemoryInline::FlatWriteRam16((r5 + 10), static_cast<uint16_t>(r6));
    r0 = (r0 | 134217728);
    MemoryInline::FlatWrite32((r13 + -14348), r3);
    MemoryInline::FlatWriteRam16((r5 + 8), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r13 + -14352), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804E8360(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804E8360_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002278 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E8360 func_804E8360 preserves=true fpr_mask=0x00000000
