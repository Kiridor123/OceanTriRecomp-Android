#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_800E3DE0_rac8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r8_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r7 = arg_r7;
    uint32_t r8 = ctx->gpr[8];

    MKW_GUEST_ENTER(0x800E3DE0u);
    goto loc_800E3DE0;

loc_800E3DE0:
{
    r4 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x805A0000u;
    r3 = (r3 + -31520);
    r3_addr_0 = (r3 + r0);
    r8 = MemoryInline::FlatRead32(r3_addr_0);
    r7 = 0;
    r6 = r8;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & -2);
    r3 = 0x805A0000u;
    r4 = (r3 + -31496);
    goto loc_800E3E24;
}

loc_800E3E0C:
{
    r0 = (r7 + 1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r0 = (r8 + r0);
    MemoryInline::FlatWrite32(r6, r0);
    r6 = (r6 + 4);
    r7 = (r7 + 1);
}

loc_800E3E24:
{
    r4_addr_2 = (r4 + r5);
    r3 = MemoryInline::FlatRead16(r4_addr_2);
    r0 = (r3 + -1);
}

loc_800E3E30:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r0))) {
        goto loc_800E3E0C;
    }
}

loc_800E3E34:
{
    r3 = 0;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r8_addr_0 = (r8 + r0);
    MemoryInline::FlatWrite32(r8_addr_0, r3);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r3;
}

}

extern "C" void func_800E3DE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_800E3DE0_rac8_0_8_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001C8 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E3DE0 func_800E3DE0 preserves=true fpr_mask=0x00000000
