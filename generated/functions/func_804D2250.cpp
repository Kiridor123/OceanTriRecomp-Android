#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804D2250_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x804D2250u);
    goto loc_804D2250;

loc_804D2250:
{
    r7 = 0;
    r4 = 268435456;
    r4 = (r4 + 2);
    r3 = 0x90000000u;
    r3 = (r3 + 4095);
    r6 = 268435456;
    r6 = (r6 + 42);
    r5 = -805306368;
    r5 = (r5 + 4095);
    // isync @ 0x804D2274 (no-op)
    // mtspr 568 (unknown SPR) @ 0x804D2278
    PPC_WriteSpr(568, r7);
    // mtspr 569 (unknown SPR) @ 0x804D227C
    PPC_WriteSpr(569, r4);
    // mtspr 568 (unknown SPR) @ 0x804D2280
    PPC_WriteSpr(568, r3);
    // isync @ 0x804D2284 (no-op)
    // mtspr 560 (unknown SPR) @ 0x804D2288
    PPC_WriteSpr(560, r7);
    // mtspr 561 (unknown SPR) @ 0x804D228C
    PPC_WriteSpr(561, r7);
    // isync @ 0x804D2290 (no-op)
    // mtspr 570 (unknown SPR) @ 0x804D2294
    PPC_WriteSpr(570, r7);
    // mtspr 571 (unknown SPR) @ 0x804D2298
    PPC_WriteSpr(571, r6);
    // mtspr 570 (unknown SPR) @ 0x804D229C
    PPC_WriteSpr(570, r5);
    // isync @ 0x804D22A0 (no-op)
    // mtspr 562 (unknown SPR) @ 0x804D22A4
    PPC_WriteSpr(562, r7);
    // mtspr 563 (unknown SPR) @ 0x804D22A8
    PPC_WriteSpr(563, r7);
    // isync @ 0x804D22AC (no-op)
    // mtspr 564 (unknown SPR) @ 0x804D22B0
    PPC_WriteSpr(564, r7);
    // mtspr 565 (unknown SPR) @ 0x804D22B4
    PPC_WriteSpr(565, r7);
    // isync @ 0x804D22B8 (no-op)
    // mtspr 566 (unknown SPR) @ 0x804D22BC
    PPC_WriteSpr(566, r7);
    // mtspr 567 (unknown SPR) @ 0x804D22C0
    PPC_WriteSpr(567, r7);
    // isync @ 0x804D22C4 (no-op)
    // mtspr 572 (unknown SPR) @ 0x804D22C8
    PPC_WriteSpr(572, r7);
    // mtspr 573 (unknown SPR) @ 0x804D22CC
    PPC_WriteSpr(573, r7);
    // isync @ 0x804D22D0 (no-op)
    // mtspr 574 (unknown SPR) @ 0x804D22D4
    PPC_WriteSpr(574, r7);
    // mtspr 575 (unknown SPR) @ 0x804D22D8
    PPC_WriteSpr(575, r7);
    // isync @ 0x804D22DC (no-op)
    r3 = ctx->msr;
    r3 = (r3 | 48);
    ctx->srr1 = r3;
    r3 = ctx->lr;
    ctx->srr0 = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D2250(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D2250_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x000000F8 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D2250 func_804D2250 preserves=true fpr_mask=0x00000000
