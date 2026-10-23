#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800EF83C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800EF83C;

loc_800EF83C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = 0x805A0000u;
    r4 = (r4 + -26840);
    r6 = MemoryInline::FlatRead32((r4 + 16));
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -17396), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r31 = MemoryInline::FlatRead32((r4 + 12));
    goto loc_800EF8DC;
}

loc_800EF86C:
{
}

loc_800EF870:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EF8D8;
    }
}

loc_800EF874:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 16), r31);
    r5 = MemoryInline::FlatRead32((r6 + 4));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = MemoryInline::FlatRead16(r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 212), r5);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r31 = (r31 + r0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = MemoryInline::FlatRead16(r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 408), r31);
    r5 = MemoryInline::FlatRead16((r6 + 2));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = MemoryInline::FlatRead16(r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 604), r5);
    r0 = MemoryInline::FlatRead16((r6 + 2));
    r31 = (r31 + r0);
}

loc_800EF8D8:
{
    r6 = (r6 + 8);
}

loc_800EF8DC:
{
    r0 = MemoryInline::FlatRead16(r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800EF8E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_800EF86C;
    }
}

loc_800EF8E8:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    MemoryInline::FlatWrite32((r4 + 4), r31);
    r0 = (r3 & 255);
}

loc_800EF8F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800EF9B4;
    }
}

loc_800EF8FC:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2003));
}

loc_800EF90C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800EF920;
    }
}

loc_800EF910:
{
    // inline leaf 0x800CF26C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 36));
    // end of inlined leaf 0x800CF26C
    r0 = (r3 & 255);
}

loc_800EF91C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_800EF9B4;
    }
}

loc_800EF920:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -26840);
    r5 = MemoryInline::FlatRead32((r3 + 20));
    goto loc_800EF9A0;
}

loc_800EF930:
{
}

loc_800EF934:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800EF99C;
    }
}

loc_800EF938:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 16), r31);
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 212), r4);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r31 = (r31 + r0);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 408), r31);
    r4 = MemoryInline::FlatRead16((r5 + 2));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 604), r4);
    r0 = MemoryInline::FlatRead16((r5 + 2));
    r31 = (r31 + r0);
}

loc_800EF99C:
{
    r5 = (r5 + 8);
}

loc_800EF9A0:
{
    r0 = MemoryInline::FlatRead16(r5);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800EF9A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_800EF930;
    }
}

loc_800EF9AC:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    MemoryInline::FlatWrite32((r3 + 4), r31);
}

loc_800EF9B4:
{
    r29 = 1;
    r30 = -1;
}

loc_800EF9BC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r3 = (r29 + 65536);
    r0 = (r3 + -26850);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r30));
    r3 = r29;
    // inline leaf 0x800F0474 (14 guest instruction(s))
    r5 = 0;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = (r4 + 65536);
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + -26764), static_cast<uint8_t>(r5));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = (r4 + 65536);
    r4 = (r0 + r3);
    MemoryInline::FlatWrite8((r4 + -26957), static_cast<uint8_t>(r5));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r0 = (r4 + 65536);
    r3 = (r0 + r3);
    MemoryInline::FlatWrite8((r3 + -27006), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x800F0474
    r29 = (r29 + 1);
}

loc_800EF9DC:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(49))) {
        goto loc_800EF9BC;
    }
}

loc_800EF9E0:
{
    r0 = 0;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite32((r3 + -26704), r0);
    r0 = 255;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    r3 = (r3 + 65536);
    MemoryInline::FlatWrite8((r3 + -26712), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -17396));
    MemoryInline::FlatWrite32((r3 + 8), r31);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800EF83C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800EF83C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EF83C func_800EF83C preserves=true fpr_mask=0x00000000
