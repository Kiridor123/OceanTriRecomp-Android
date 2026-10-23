#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8039098C_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t addr_lhax_803909AC_loc_0 = 0;
    uint32_t addr_lhax_803909C4_loc_0 = 0;
    uint32_t addr_lhax_803909DC_loc_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_8039098C;

loc_8039098C:
{
    r0 = MemoryInline::FlatRead8((r3 + 75));
    r4 = 0x80660000u;
    r5 = (r4 + -19148);
    MemoryInline::FlatWriteRam8((r5 + 12), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r4 = 0x805F0000u;
    r4 = (r4 + 5276);
    addr_lhax_803909AC_loc_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_803909AC_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r5 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 76));
    MemoryInline::FlatWriteRam8((r5 + 13), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    addr_lhax_803909C4_loc_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_803909C4_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r5 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 77));
    MemoryInline::FlatWriteRam8((r5 + 14), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    addr_lhax_803909DC_loc_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_803909DC_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWriteRam16((r5 + 20), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return r4;
}

}

extern "C" void func_8039098C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8039098C_ra8_0_10_0(ctx, ctx->gpr[3]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8039098C func_8039098C preserves=true fpr_mask=0x00000000
