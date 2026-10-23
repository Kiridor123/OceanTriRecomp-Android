#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80041050_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r6_rot_6 = 0;
    uint32_t r6_rot_7 = 0;
    uint32_t r6_rot_8 = 0;

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

    goto loc_80041050;

loc_80041050:
{
    r10 = r4;
    r9 = 0;
    r8 = 0;
    r5 = 0;
    r7 = 65536;
}

loc_80041064:
{
}

loc_80041068:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8004108C;
    }
}

loc_8004106C:
{
    r9 = (r7 + -32768);
    r0 = MemoryInline::FlatRead16(r3);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6 = (r6_rot_2 & 255);
    r0 = (r0 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & -256);
    r0 = (r6 | r0);
    r8 = (r0 & 65535);
    r3 = (r3 + 2);
}

loc_8004108C:
{
    r0 = (r8 & r9);
}

loc_80041094:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80041134;
    }
}

loc_80041098:
{
    r0 = MemoryInline::FlatRead16(r3);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6 = (r6_rot_4 & 255);
    r0 = (r0 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -256);
    r0 = (r6 | r0);
    r11 = (r0 & 65535);
    r3 = (r3 + 2);
    r6_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(21));
    r6 = (r6_rot_5 & 2097151);
}

loc_800410BC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800410C8;
    }
}

loc_800410C0:
{
    r11 = (r11 & 2047);
    goto loc_800410E4;
}

loc_800410C8:
{
    r0 = MemoryInline::FlatRead16(r3);
    r6_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r6 = (r6_rot_6 & 255);
    r0 = (r0 & 255);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_5 & -256);
    r0 = (r6 | r0);
    r6 = (r0 & 65535);
    r3 = (r3 + 2);
}

loc_800410E4:
{
}

loc_800410E8:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_8004110C;
    }
}

loc_800410EC:
{
}

loc_800410F0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8004114C;
    }
}

loc_800410F4:
{
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r5));
    r4 = (r4 + 2);
    r6 = (r6 + -1);
}

loc_80041104:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800410F4;
    }
}

loc_80041108:
{
    goto loc_80041144;
}

loc_8004110C:
{
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r11 = (r4 - r0);
}

loc_80041114:
{
    r0 = MemoryInline::FlatRead16(r11);
    r11 = (r11 + 2);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = (r4 + 2);
    r6 = (r6 + -1);
}

loc_8004112C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80041114;
    }
}

loc_80041130:
{
    goto loc_80041144;
}

loc_80041134:
{
    r0 = MemoryInline::FlatRead16(r3);
    r3 = (r3 + 2);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = (r4 + 2);
}

loc_80041144:
{
    r9 = (static_cast<int32_t>(r9) >> 1);
    goto loc_80041064;
}

loc_8004114C:
{
    r3 = (r4 - r10);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80041050(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80041050_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80041050 func_80041050 preserves=true fpr_mask=0x00000000
