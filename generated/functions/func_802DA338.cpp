#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802DA338_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802DA338u);
    goto loc_802DA338;

loc_802DA338:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = 0x806C0000u;
    r30 = (r4 + -888);
    r29 = 16;
    r31 = (r3 & 255);
}

loc_802DA360:
{
    r3 = r30;
    // inline leaf 0x802DA31C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1));
    // end of inlined leaf 0x802DA31C
    r0 = (r3 & 255);
}

loc_802DA370:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_802DA37C;
    }
}

loc_802DA374:
{
    r3 = r30;
    // inline leaf 0x802DA264 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802DA264
}

loc_802DA37C:
{
    r29 = (r29 + -1);
    r30 = (r30 + 32);
}

loc_802DA388:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(0))) {
        goto loc_802DA360;
    }
}

loc_802DA38C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_802DA338(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802DA338_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DA338 func_802DA338 preserves=true fpr_mask=0x00000000
