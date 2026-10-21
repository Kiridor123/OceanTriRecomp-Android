#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8034CAE0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;

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

    MKW_GUEST_ENTER(0x8034CAE0u);
    goto loc_8034CAE0;

loc_8034CAE0:
{
    r7 = 0x806B0000u;
    r9 = (r7 + -4792);
    r7 = MemoryInline::FlatRead32((r9 + 804));
}

loc_8034CAF0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8034CAFC;
    }
}

loc_8034CAF4:
{
    r3 = -1;
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

loc_8034CAFC:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r0 + r5);
    r8 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r3 - r8);
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r3 + r8);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r0 + r3);
    r6 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r4 - r6);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r4 + r6);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead32((r9 + 808));
    r11 = 0;
    ctr = r0;
}

loc_8034CB4C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8034CBB0;
    }
}

loc_8034CB50:
{
    r0 = MemoryInline::FlatRead8(r7);
}

loc_8034CB58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8034CBA4;
    }
}

loc_8034CB5C:
{
    r10 = MemoryInline::FlatRead16((r7 + 8));
    r10 = (r10 << 16);
    r10 = (static_cast<int32_t>(r10) >> 16);
    r0 = MemoryInline::FlatRead16((r7 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r10 + r0);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r9 = MemoryInline::FlatRead16((r7 + 10));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r0 = MemoryInline::FlatRead16((r7 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r9 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8034CB80:
{
    if ((static_cast<int32_t>(r10) > static_cast<int32_t>(r8))) {
        goto loc_8034CBA4;
    }
}

loc_8034CB84:
{
}

loc_8034CB88:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r5))) {
        goto loc_8034CBA4;
    }
}

loc_8034CB8C:
{
}

loc_8034CB90:
{
    if ((static_cast<int32_t>(r9) > static_cast<int32_t>(r4))) {
        goto loc_8034CBA4;
    }
}

loc_8034CB94:
{
}

loc_8034CB98:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_8034CBA4;
    }
}

loc_8034CB9C:
{
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r11)));
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

loc_8034CBA4:
{
    r11 = (r11 + 1);
    r7 = (r7 + 36);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8034CB50;
    }
}

loc_8034CBB0:
{
    r3 = -1;
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

extern "C" void func_8034CAE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8034CAE0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8034CAE0 func_8034CAE0 preserves=true fpr_mask=0x00000000
