#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804A1600_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;

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
    uint32_t ctr = ctx->ctr;

    goto loc_804A1600;

loc_804A1600:
{
    r0 = 53;
    r11 = (r3 + 1);
    r10 = r11;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r9 = 0;
    r6 = 28;
    r7 = 26;
    r8 = 25;
    ctr = r4;
}

loc_804A1628:
{
    r11 = (r11 + 1);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(0))) {
        goto loc_804A16D8;
    }
}

loc_804A1630:
{
    r0 = MemoryInline::FlatRead16(r5);
}

loc_804A1638:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804A165C;
    }
}

loc_804A163C:
{
    MemoryInline::FlatWrite8(r11, static_cast<uint8_t>(r8));
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r0 = (static_cast<int32_t>(r0) >> 8);
    MemoryInline::FlatWrite8((r11 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 4));
    MemoryInline::FlatWrite8((r11 + 2), static_cast<uint8_t>(r0));
    r11 = (r11 + 3);
    goto loc_804A16CC;
}

loc_804A165C:
{
}

loc_804A1660:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_804A169C;
    }
}

loc_804A1664:
{
    MemoryInline::FlatWrite8(r11, static_cast<uint8_t>(r7));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & 255);
    MemoryInline::FlatWrite8((r11 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 255);
    MemoryInline::FlatWrite8((r11 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_4 & 255);
    MemoryInline::FlatWrite8((r11 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite8((r11 + 4), static_cast<uint8_t>(r0));
    r11 = (r11 + 5);
    goto loc_804A16CC;
}

loc_804A169C:
{
    MemoryInline::FlatWrite8(r11, static_cast<uint8_t>(r6));
    r4 = 0;
    r11 = (r11 + 1);
    goto loc_804A16C0;
}

loc_804A16AC:
{
    r3 = (r5 + r4);
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead8((r3 + 4));
    MemoryInline::FlatWrite8(r11, static_cast<uint8_t>(r0));
    r11 = (r11 + 1);
}

loc_804A16C0:
{
    r0 = MemoryInline::FlatRead16(r5);
}

loc_804A16C8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_804A16AC;
    }
}

loc_804A16CC:
{
    r9 = (r9 + 1);
    r5 = (r5 + 20);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A1630;
    }
}

loc_804A16D8:
{
    r4 = (r11 - r10);
    r3 = r11;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A1600(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A1600_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804A1600 func_804A1600 preserves=true fpr_mask=0x00000000
