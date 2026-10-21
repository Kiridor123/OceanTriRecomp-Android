#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_801FB23C_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_lhax_801FB24C_loc_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x801FB23Cu);
    goto loc_801FB23C;

loc_801FB23C:
{
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3 = 0x805C0000u;
    r3 = (r3 + -28776);
    addr_lhax_801FB24C_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_801FB24C_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r8 = (r0 * 10);
    r3 = 0x805C0000u;
    r0 = (r3 + -29132);
    r8 = (r0 + r8);
    r0 = MemoryInline::FlatRead16(r8);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 3));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_0 & -16777216);
    r0 = MemoryInline::FlatRead8((r8 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & -65536);
    r3 = (r3 | r0);
    r0 = MemoryInline::FlatRead8((r8 + 5));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r0 = (r0 | 255);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32(r4, r0);
    r0 = MemoryInline::FlatRead16((r8 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r8 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[8] = r8;
    return r3;
}

}

extern "C" void func_801FB23C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_801FB23C_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000F8 gpr_write=0x00000109 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801FB23C func_801FB23C preserves=true fpr_mask=0x00000000
