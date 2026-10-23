#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804EC060_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];

    goto loc_804EC060;

loc_804EC060:
{
    r0 = MemoryInline::FlatRead16((r13 + -14198));
    r4 = 0x80760000u;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    r4 = (r4 + -10352);
}

loc_804EC074:
{
    r4_addr_0 = (r4 + r3);
    r7 = MemoryInline::FlatRead32(r4_addr_0);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_return;
    }
}

loc_804EC07C:
{
    r0 = MemoryInline::FlatRead16((r7 + 2436));
    r3 = 1717960704;
    r6 = MemoryInline::FlatRead8((r7 + 2435));
    r4 = (r3 + 26215);
    r3 = (r0 * 100);
    r0 = 100;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r5 = (r5_rot_1 & -8);
    r5 = (r5 + r6);
    r5 = (r5 & 65535);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 65535);
    r5 = (r5 + r3);
    r3 = (r5 & 65535);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r3))) >> 32));
    r3 = (static_cast<int32_t>(r3) >> 2);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r3 = (r3 + r4);
    r5 = (r3 & 65535);
}

loc_804EC0C4:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(100))) {
        goto loc_804EC0CC;
    }
}

loc_804EC0C8:
{
    r0 = r5;
}

loc_804EC0CC:
{
    MemoryInline::FlatWrite8((r7 + 2435), static_cast<uint8_t>(r0));
    r4 = 0;
    r3 = (r0 & 65535);
    MemoryInline::FlatWrite16((r7 + 2436), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead8((r7 + 2253));
}

loc_804EC0E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804EC128;
    }
}

loc_804EC0E8:
{
}

loc_804EC0EC:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(85))) {
        goto loc_804EC0FC;
    }
}

loc_804EC0F0:
{
    MemoryInline::FlatWrite8((r7 + 2253), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r7 + 2254), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804EC0FC:
{
}

loc_804EC100:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(80))) {
        goto loc_return;
    }
}

loc_804EC104:
{
    r3 = MemoryInline::FlatRead8((r7 + 2254));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r7 + 2254), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_804EC118:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(20))) {
        goto loc_return;
    }
}

loc_804EC11C:
{
    MemoryInline::FlatWrite8((r7 + 2253), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r7 + 2254), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804EC128:
{
}

loc_804EC12C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(75))) {
        goto loc_804EC140;
    }
}

loc_804EC130:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r7 + 2253), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r7 + 2254), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804EC140:
{
}

loc_804EC144:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(80))) {
        goto loc_return;
    }
}

loc_804EC148:
{
    r3 = MemoryInline::FlatRead8((r7 + 2254));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r7 + 2254), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_804EC15C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_804EC160:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r7 + 2253), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r7 + 2254), static_cast<uint8_t>(r4));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804EC060(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804EC060_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804EC060 func_804EC060 preserves=true fpr_mask=0x00000000
