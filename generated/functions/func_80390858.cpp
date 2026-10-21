#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80390858_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];

    MKW_GUEST_ENTER(0x80390858u);
    goto loc_80390858;

loc_80390858:
{
    r4 = (r4 & 65535);
    r0 = (r4 & 32768);
}

loc_80390864:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8039093C;
    }
}

loc_80390868:
{
    r0 = (r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = 0x805F0000u;
    r4 = (r4 + 5360);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryAlias::FlatRead32(r4_addr_0);
    r8 = MemoryAlias::FlatRead16((r3 + 6));
    r5 = (static_cast<int32_t>(r8) >> 2);
    r3 = 1717960704;
    r7 = (r3 + 26215);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r3 = (static_cast<int32_t>(r3) >> 1);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r3 = (r3 + r4);
    r3 = (r3 * 5);
    r3 = (r5 - r3);
    r9 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & -2);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & -2);
    r5 = (r0 + r3);
    r3 = MemoryAlias::FlatRead16(r5);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r4 = (r3 & 255);
    r3 = 0x80660000u;
    r6 = (r3 + -19148);
    MemoryAlias::FlatWriteRam8((r6 + 12), static_cast<uint8_t>(r4));
    r3 = MemoryAlias::FlatRead16((r5 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryAlias::FlatWriteRam16((r6 + 16), static_cast<uint16_t>(r3));
    r4 = (static_cast<int32_t>(r8) >> 3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r3 = (r3_rot_2 & -1073741824);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r3 = (r3 - r4);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -1);
    r3 = (r3 + r4);
    r3 = (r9 + r3);
    r5 = (r3 + 1);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r7)) * static_cast<int64_t>(static_cast<int32_t>(r5))) >> 32));
    r3 = (static_cast<int32_t>(r3) >> 1);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_2 & 1);
    r3 = (r3 + r4);
    r3 = (r3 * 5);
    r3 = (r5 - r3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & -2);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & -2);
    r3 = (r0 + r3);
    r0 = MemoryAlias::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryAlias::FlatWriteRam8((r6 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r6 + 18), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWriteRam8((r6 + 14), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWriteRam16((r6 + 20), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8039093C:
{
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r4 = (r4_rot_3 & -8);
    r3 = 0x805C0000u;
    r0 = (r3 + 1976);
    r4 = (r0 + r4);
    r0 = MemoryAlias::FlatRead16(r4);
    r0 = (r0 & 255);
    r3 = 0x80660000u;
    r3 = (r3 + -19148);
    MemoryAlias::FlatWriteRam8((r3 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryAlias::FlatRead16((r4 + 4));
    r0 = (r0 & 255);
    MemoryAlias::FlatWriteRam8((r3 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryAlias::FlatRead16((r4 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryAlias::FlatWriteRam16((r3 + 18), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryAlias::FlatWriteRam8((r3 + 14), static_cast<uint8_t>(r0));
    MemoryAlias::FlatWriteRam16((r3 + 20), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80390858(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80390858_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80390858 func_80390858 preserves=true fpr_mask=0x00000000
