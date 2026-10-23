#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EBB4C_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_800EBB4C;

loc_800EBB4C:
{
    MemoryInline::FlatWrite32((r13 + -17424), r5);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    MemoryInline::FlatWrite32((r13 + -17420), r0);
    r7 = -1431633920;
    r0 = (r7 + -21845);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
    MemoryInline::FlatWrite32((r13 + -17416), r0);
    r0 = 65536;
    MemoryInline::FlatWrite32((r13 + -17412), r0);
    r7 = 0;
}

loc_800EBB7C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800EBC80;
    }
}

loc_800EBB80:
{
    r8 = (r6 + -8);
}

loc_800EBB88:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(8))) {
        goto loc_800EBC4C;
    }
}

loc_800EBB8C:
{
    r5 = r3;
    r0 = (r8 + 7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    ctr = r0;
}

loc_800EBBA0:
{
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(0))) {
        goto loc_800EBC4C;
    }
}

loc_800EBBA4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r13 + -17424), 0, 4u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17424));
    r0 = (r0 * r7);
    r0 = (r4 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 20), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r5 + 20), r0);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17424));
    r0 = (r7 + 1);
    r0 = (r8 * r0);
    r0 = (r4 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 24), r0);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17424));
    r0 = (r7 + 2);
    r0 = (r8 * r0);
    r0 = (r4 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 28), r0);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17424));
    r0 = (r7 + 3);
    r0 = (r8 * r0);
    r0 = (r4 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 32), r0);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17424));
    r0 = (r7 + 4);
    r0 = (r8 * r0);
    r0 = (r4 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 36), r0);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17424));
    r0 = (r7 + 5);
    r0 = (r8 * r0);
    r0 = (r4 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 40), r0);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17424));
    r0 = (r7 + 6);
    r0 = (r8 * r0);
    r0 = (r4 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 44), r0);
    r8 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r13 + -17424));
    r0 = (r7 + 7);
    r0 = (r8 * r0);
    r0 = (r4 + r0);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 48), r0);
    r5 = (r5 + 32);
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800EBBA4;
    }
}

loc_800EBC4C:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r5 = (r3 + r0);
    r0 = (r6 - r7);
    ctr = r0;
}

loc_800EBC60:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r6))) {
        goto loc_800EBC80;
    }
}

loc_800EBC64:
{
    r0 = MemoryInline::FlatRead32((r13 + -17424));
    r0 = (r0 * r7);
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32((r5 + 20), r0);
    r5 = (r5 + 4);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800EBC64;
    }
}

loc_800EBC80:
{
    MemoryInline::FlatWrite32((r3 + 8), r6);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

}

extern "C" void func_800EBB4C(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_800EBB4C_ra38_0_0_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
}

// RECOMP_GUEST_ABI gpr_read=0x000021F9 gpr_write=0x000001A1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800EBB4C func_800EBB4C preserves=true fpr_mask=0x00000000
