#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80346250_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_80346250;

loc_80346250:
{
    r7 = MemoryInline::FlatRead8((r3 + 20));
    r6 = (r5 & 255);
}

loc_8034625C:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r6))) {
        goto loc_80346298;
    }
}

loc_80346260:
{
    r0 = MemoryInline::FlatRead8((r3 + 59));
}

loc_80346268:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r6))) {
        goto loc_8034627C;
    }
}

loc_8034626C:
{
    MemoryInline::FlatWrite8((r3 + 58), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 59), static_cast<uint8_t>(r5));
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

loc_8034627C:
{
    r5 = MemoryInline::FlatRead8((r3 + 58));
    r0 = (r4 & 255);
}

loc_80346288:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0))) {
        goto loc_803462C4;
    }
}

loc_8034628C:
{
    MemoryInline::FlatWrite8((r3 + 58), static_cast<uint8_t>(r4));
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

loc_80346298:
{
    r0 = MemoryInline::FlatRead8((r3 + 59));
}

loc_803462A0:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(r0))) {
        goto loc_803462C4;
    }
}

loc_803462A4:
{
    r6 = MemoryInline::FlatRead8((r3 + 58));
    r0 = (r4 & 255);
}

loc_803462B0:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_803462C4;
    }
}

loc_803462B4:
{
    MemoryInline::FlatWrite8((r3 + 58), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 59), static_cast<uint8_t>(r5));
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

loc_803462C4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return r3;
}

}

extern "C" void func_80346250(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80346250_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80346250 func_80346250 preserves=true fpr_mask=0x00000000
