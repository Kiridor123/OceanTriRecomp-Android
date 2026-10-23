#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801E9B0C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];

    goto loc_801E9B0C;

loc_801E9B0C:
{
    r7 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = 1;
    r4 = 0x806B0000u;
    r5 = (r4 + -12348);
    r6 = 0;
    r3 = (r3 & 255);
    r4 = (r6 * 12);
    r4 = (r7 + r4);
    r4 = MemoryInline::FlatRead8((r4 + 16184));
}

loc_801E9B34:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(2))) {
        goto loc_801E9B40;
    }
}

loc_801E9B38:
{
    MemoryInline::FlatWriteRam8((r5 + 125), static_cast<uint8_t>(r6));
    goto loc_801E9B58;
}

loc_801E9B40:
{
    r4 = MemoryInline::FlatRead8((r5 + 125));
}

loc_801E9B48:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801E9B58;
    }
}

loc_801E9B4C:
{
}

loc_801E9B50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E9B58;
    }
}

loc_801E9B54:
{
    MemoryInline::FlatWriteRam8((r5 + 125), static_cast<uint8_t>(r0));
}

loc_801E9B58:
{
    r4 = 1;
    r4 = (r4 * 12);
    r4 = (r7 + r4);
    r4 = MemoryInline::FlatRead8((r4 + 16184));
}

loc_801E9B6C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(2))) {
        goto loc_801E9B78;
    }
}

loc_801E9B70:
{
    MemoryInline::FlatWriteRam8((r5 + 126), static_cast<uint8_t>(r6));
    goto loc_801E9B90;
}

loc_801E9B78:
{
    r4 = MemoryInline::FlatRead8((r5 + 126));
}

loc_801E9B80:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801E9B90;
    }
}

loc_801E9B84:
{
}

loc_801E9B88:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E9B90;
    }
}

loc_801E9B8C:
{
    MemoryInline::FlatWriteRam8((r5 + 126), static_cast<uint8_t>(r0));
}

loc_801E9B90:
{
    r4 = 2;
    r4 = (r4 * 12);
    r4 = (r7 + r4);
    r4 = MemoryInline::FlatRead8((r4 + 16184));
}

loc_801E9BA4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(2))) {
        goto loc_801E9BB0;
    }
}

loc_801E9BA8:
{
    MemoryInline::FlatWriteRam8((r5 + 127), static_cast<uint8_t>(r6));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_801E9BB0:
{
    r4 = MemoryInline::FlatRead8((r5 + 127));
}

loc_801E9BB8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801E9BBC:
{
}

loc_801E9BC0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_801E9BC4:
{
    MemoryInline::FlatWriteRam8((r5 + 127), static_cast<uint8_t>(r0));
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

extern "C" void func_801E9B0C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E9B0C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E9B0C func_801E9B0C preserves=true fpr_mask=0x00000000
