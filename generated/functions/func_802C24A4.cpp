#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802C24A4_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802C24A4;

loc_802C24A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    // inline leaf 0x803C48B4 (4 guest instruction(s))
    r3 = 0x806D0000u;
    r3 = (r3 + 20384);
    r3 = MemoryInline::FlatRead8((r3 + 2));
    // end of inlined leaf 0x803C48B4
    r0 = (r3 & 255);
}

loc_802C24D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(27))) {
        goto loc_802C24E4;
    }
}

loc_802C24D8:
{
}

loc_802C24DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(33))) {
        goto loc_802C2514;
    }
}

loc_802C24E0:
{
    goto loc_802C2554;
}

loc_802C24E4:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_802C24EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802C2554;
    }
}

loc_802C24F0:
{
    r0 = (r30 & 255);
}

loc_802C24F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802C2554;
    }
}

loc_802C24FC:
{
    r0 = 100;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_802C2558;
}

loc_802C2514:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_802C251C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_802C2530;
    }
}

loc_802C2520:
{
}

loc_802C2524:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(26))) {
        goto loc_802C2530;
    }
}

loc_802C2528:
{
}

loc_802C252C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(35))) {
        goto loc_802C2554;
    }
}

loc_802C2530:
{
    r0 = (r30 & 255);
}

loc_802C2538:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802C2554;
    }
}

loc_802C253C:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_802C2558;
}

loc_802C2554:
{
    r3 = 0;
}

loc_802C2558:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_802C24A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802C24A4_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C24A4 func_802C24A4 preserves=true fpr_mask=0x00000000
