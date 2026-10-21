#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804C2C60_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_lhax_804C2C8C_loc_0 = 0;
    uint32_t addr_lhax_804C2CA4_loc_0 = 0;
    uint32_t addr_lhax_804C2CAC_loc_0 = 0;
    uint32_t addr_lhax_804C2CB4_loc_0 = 0;
    uint32_t addr_lhax_804C2CBC_loc_0 = 0;
    uint32_t addr_lhax_804C2CC4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r9_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804C2C60u);
    goto loc_804C2C60;

loc_804C2C60:
{
    r0 = MemoryInline::FlatRead32((r13 + -15220));
    r4 = 0x80620000u;
    r5 = MemoryInline::FlatRead32((r3 + 24));
    r4 = (r4 + -18752);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_804C2C74:
{
    r10 = MemoryInline::FlatRead32((r3 + 28));
    r6 = (127 - r5);
    r11 = (127 - r10);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804C2CD0;
    }
}

loc_804C2C84:
{
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & -2);
    r7 = (r4 + 2448);
    addr_lhax_804C2C8C_loc_0 = (r7 + r9);
    r0 = MemoryInline::FlatRead16(addr_lhax_804C2C8C_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & -2);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & -2);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4 = (r4 + 2704);
    addr_lhax_804C2CA4_loc_0 = (r7 + r8);
    r6 = MemoryInline::FlatRead16(addr_lhax_804C2CA4_loc_0);
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    MemoryInline::FlatWrite32((r3 + 40), r6);
    addr_lhax_804C2CAC_loc_0 = (r7 + r5);
    r5 = MemoryInline::FlatRead16(addr_lhax_804C2CAC_loc_0);
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    MemoryInline::FlatWrite32((r3 + 44), r5);
    addr_lhax_804C2CB4_loc_0 = (r7 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_804C2CB4_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 48), r0);
    addr_lhax_804C2CBC_loc_0 = (r4 + r8);
    r0 = MemoryInline::FlatRead16(addr_lhax_804C2CBC_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    addr_lhax_804C2CC4_loc_0 = (r4 + r9);
    r0 = MemoryInline::FlatRead16(addr_lhax_804C2CC4_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 56), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return r4;
}

loc_804C2CD0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r7 = (r4 + 1936);
    r7_addr_0 = (r7 + r0);
    r0 = MemoryInline::FlatRead32(r7_addr_0);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r0 = 0;
    r7_addr_1 = (r7 + r6);
    r6 = MemoryInline::FlatRead32(r7_addr_1);
    MemoryInline::FlatWrite32((r3 + 40), r6);
    r7_addr_2 = (r7 + r5);
    r5 = MemoryInline::FlatRead32(r7_addr_2);
    MemoryInline::FlatWrite32((r3 + 44), r5);
    r7_addr_3 = (r7 + r4);
    r4 = MemoryInline::FlatRead32(r7_addr_3);
    MemoryInline::FlatWrite32((r3 + 48), r4);
    MemoryInline::FlatWrite32((r3 + 52), r0);
    MemoryInline::FlatWrite32((r3 + 56), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return r4;
}

}

extern "C" void func_804C2C60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804C2C60_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002038 gpr_write=0x00000FF1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C2C60 func_804C2C60 preserves=true fpr_mask=0x00000000
