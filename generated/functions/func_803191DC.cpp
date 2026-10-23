#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803191DC_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_803191DC;

loc_803191DC:
{
    r8 = 0;
    r7 = MemoryInline::FlatRead8((r3 + 1));
}

loc_803191E8:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(3))) {
        goto loc_8031921C;
    }
}

loc_803191EC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 6));
}

loc_803191FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031921C;
    }
}

loc_80319200:
{
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r6 = (r0 & 255);
    r0 = (r6 + -10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r8 = 1;
}

loc_8031921C:
{
    r7 = (r7 + 1);
    r0 = (r7 & 255);
}

loc_80319228:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(3))) {
        goto loc_80319260;
    }
}

loc_8031922C:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r6 = (r3 + r0);
    r6 = MemoryInline::FlatRead16((r6 + 6));
}

loc_8031923C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80319260;
    }
}

loc_80319240:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r4_addr_1 = (r4 + r0);
    MemoryInline::FlatWrite16(r4_addr_1, static_cast<uint16_t>(r6));
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_1 & 255);
    r0 = (r3 + -10);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r5_addr_1 = (r5 + r8);
    MemoryInline::FlatWrite8(r5_addr_1, static_cast<uint8_t>(r0));
    r8 = (r8 + 1);
}

loc_80319260:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r3;
}

}

extern "C" void func_803191DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803191DC_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803191DC func_803191DC preserves=true fpr_mask=0x00000000
