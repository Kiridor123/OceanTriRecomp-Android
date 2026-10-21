#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804A4C30_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804A4C30u);
    goto loc_804A4C30;

loc_804A4C30:
{
    r0 = (r4 & 7);
    r8 = r3;
}

loc_804A4C3C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_804A4CF8;
    }
}

loc_804A4C40:
{
    r4 = 0x80620000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + -29312);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x804A4C58u:
        goto loc_804A4C58;
        break;
    case 0x804A4C64u:
        goto loc_804A4C64;
        break;
    case 0x804A4C70u:
        goto loc_804A4C70;
        break;
    case 0x804A4C7Cu:
        goto loc_804A4C7C;
        break;
    case 0x804A4C88u:
        goto loc_804A4C88;
        break;
    case 0x804A4C94u:
        goto loc_804A4C94;
        break;
    case 0x804A4CA4u:
        goto loc_804A4CA4;
        break;
    case 0x804A4CC4u:
        goto loc_804A4CC4;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_804A4C58:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_804A4CF8;
}

loc_804A4C64:
{
    r0 = 2;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_804A4CF8;
}

loc_804A4C70:
{
    r0 = 4;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_804A4CF8;
}

loc_804A4C7C:
{
    r0 = 8;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_804A4CF8;
}

loc_804A4C88:
{
    r0 = 16;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_804A4CF8;
}

loc_804A4C94:
{
    r0 = MemoryInline::FlatRead8(r3);
    r8 = (r3 + 1);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_804A4CF8;
}

loc_804A4CA4:
{
    r4 = MemoryInline::FlatRead8(r3);
    r8 = (r3 + 2);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r0 = (r3 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_804A4CF8;
}

loc_804A4CC4:
{
    r6 = MemoryInline::FlatRead8(r3);
    r8 = (r3 + 4);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = MemoryInline::FlatRead8((r3 + 1));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r7 = (r7_rot_1 & -16777216);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r6 = (r6_rot_1 & -65536);
    r4 = MemoryInline::FlatRead8((r3 + 3));
    r3 = (r7 + r6);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32(r5, r0);
}

loc_804A4CF8:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A4C30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A4C30_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001D9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A4C30 func_804A4C30 preserves=true fpr_mask=0x00000000
