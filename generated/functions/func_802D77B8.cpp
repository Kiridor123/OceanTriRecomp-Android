#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802D77B8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_802D77B8;

loc_802D77B8:
{
    r7 = (r3 & 255);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r8 = (r8_rot_0 & -4);
    r6 = 0x805D0000u;
    r3 = (r7 + r8);
    r6 = (r6 + 18784);
    r3_addr_0 = (r3 + r6);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r4 = (r4 & 255);
    r3 = (r4 + r8);
    r3_addr_1 = (r3 + r6);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r8 = (r8_rot_1 & -4);
    r3 = (r4 + r8);
    r3_addr_2 = (r3 + r6);
    r0 = MemoryInline::FlatRead8(r3_addr_2);
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    r3 = (r7 + r8);
    r3_addr_3 = (r3 + r6);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D77B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D77B8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000001D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D77B8 func_802D77B8 preserves=true fpr_mask=0x00000000
