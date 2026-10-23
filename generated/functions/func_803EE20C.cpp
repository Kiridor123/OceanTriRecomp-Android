#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803EE20C_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_803EE20C;

loc_803EE20C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
}

loc_803EE228:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803EE2C4;
    }
}

loc_803EE22C:
{
    r0 = MemoryInline::FlatRead8((r3 + 978));
}

loc_803EE234:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EE2B0;
    }
}

loc_803EE238:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r3 + 1104));
}

loc_803EE244:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_803EE24C;
    }
}

loc_803EE248:
{
    MemoryInline::FlatWrite32((r3 + 1104), r5);
}

loc_803EE24C:
{
    r0 = MemoryInline::FlatRead32((r3 + 1104));
}

loc_803EE254:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_803EE260;
    }
}

loc_803EE258:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 1104), r0);
}

loc_803EE260:
{
    r28 = 0;
    r31 = r4;
    r30 = (r4 + 4);
    r29 = (r3 + 1108);
    goto loc_803EE2A0;
}

loc_803EE274:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_803EE27C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803EE290;
    }
}

loc_803EE280:
{
    r3 = r29;
    r4 = r30;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803EE290:
{
    r31 = (r31 + 8);
    r30 = (r30 + 8);
    r29 = (r29 + 8);
    r28 = (r28 + 1);
}

loc_803EE2A0:
{
    r0 = MemoryInline::FlatRead32((r27 + 1104));
}

loc_803EE2A8:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r0))) {
        goto loc_803EE274;
    }
}

loc_803EE2AC:
{
    goto loc_803EE2C4;
}

loc_803EE2B0:
{
    r3 = (r3 + 1104);
    r5 = 36;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 978), static_cast<uint8_t>(r0));
}

loc_803EE2C4:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803EE20C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803EE20C_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803EE20C func_803EE20C preserves=true fpr_mask=0x00000000
