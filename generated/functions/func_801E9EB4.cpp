#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_801E9EB4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_801E9EB4;

loc_801E9EB4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0;
    r0 = (r4 & 255);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r6 = (r6_rot_0 & -4);
    r5 = 0x805C0000u;
    r0 = (r5 + -30056);
    r6 = (r0 + r6);
    r5 = MemoryInline::FlatRead32((r13 + -17824));
    r5 = MemoryInline::FlatRead32((r5 + 16132));
    r0 = MemoryInline::FlatRead16((r6 + 2));
}

loc_801E9EEC:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_801E9EF4;
    }
}

loc_801E9EF0:
{
    r31 = 2;
}

loc_801E9EF4:
{
    r5 = MemoryInline::FlatRead8((r3 + 2));
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_801E9F00:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_801E9F0C;
    }
}

loc_801E9F04:
{
    r0 = (r5 + 1);
    r5 = (r0 & 255);
}

loc_801E9F0C:
{
    r3 = MemoryInline::FlatRead8(r6);
}

loc_801E9F14:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r3))) {
        goto loc_801E9F20;
    }
}

loc_801E9F18:
{
    r31 = -1;
    goto loc_801E9F84;
}

loc_801E9F20:
{
    r0 = (r4 & 255);
}

loc_801E9F28:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(8))) {
        goto loc_801E9F84;
    }
}

loc_801E9F2C:
{
}

loc_801E9F30:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(12))) {
        goto loc_801E9F84;
    }
}

loc_801E9F34:
{
}

loc_801E9F38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_801E9F50;
    }
}

loc_801E9F3C:
{
}

loc_801E9F40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_801E9F68;
    }
}

loc_801E9F44:
{
}

loc_801E9F48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_801E9F80;
    }
}

loc_801E9F4C:
{
    goto loc_801E9F84;
}

loc_801E9F50:
{
    r3 = 16;
    ctx->lr = 0x801E9F58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_801E9F5C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801E9F84;
    }
}

loc_801E9F60:
{
    r31 = -1;
    goto loc_801E9F84;
}

loc_801E9F68:
{
    r3 = 23;
    ctx->lr = 0x801E9F70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x802FB520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_801E9F74:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801E9F84;
    }
}

loc_801E9F78:
{
    r31 = -1;
    goto loc_801E9F84;
}

loc_801E9F80:
{
    r31 = -1;
}

loc_801E9F84:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801E9EB4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E9EB4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E9EB4 func_801E9EB4 preserves=true fpr_mask=0x00000000
