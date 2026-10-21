#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804D2170_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x804D2170u);
    goto loc_804D2170;

loc_804D2170:
{
    r7 = 0;
    r4 = 268435456;
    r4 = (r4 + 2);
    r3 = 0x90000000u;
    r3 = (r3 + 2047);
    r6 = 268435456;
    r6 = (r6 + 42);
    r5 = -805306368;
    r5 = (r5 + 4095);
    // isync @ 0x804D2194 (no-op)
    // mtspr 568 (unknown SPR) @ 0x804D2198
    PPC_WriteSpr(568, r7);
    // mtspr 569 (unknown SPR) @ 0x804D219C
    PPC_WriteSpr(569, r4);
    // mtspr 568 (unknown SPR) @ 0x804D21A0
    PPC_WriteSpr(568, r3);
    // isync @ 0x804D21A4 (no-op)
    // mtspr 560 (unknown SPR) @ 0x804D21A8
    PPC_WriteSpr(560, r7);
    // mtspr 561 (unknown SPR) @ 0x804D21AC
    PPC_WriteSpr(561, r7);
    // isync @ 0x804D21B0 (no-op)
    // mtspr 570 (unknown SPR) @ 0x804D21B4
    PPC_WriteSpr(570, r7);
    // mtspr 571 (unknown SPR) @ 0x804D21B8
    PPC_WriteSpr(571, r6);
    // mtspr 570 (unknown SPR) @ 0x804D21BC
    PPC_WriteSpr(570, r5);
    // isync @ 0x804D21C0 (no-op)
    // mtspr 562 (unknown SPR) @ 0x804D21C4
    PPC_WriteSpr(562, r7);
    // mtspr 563 (unknown SPR) @ 0x804D21C8
    PPC_WriteSpr(563, r7);
    // isync @ 0x804D21CC (no-op)
    r4 = 335544320;
    r4 = (r4 + 2);
    r3 = -1811939328;
    r3 = (r3 + 1023);
    r6 = 369098752;
    r6 = (r6 + 2);
    r5 = -1778384896;
    r5 = (r5 + 511);
    // isync @ 0x804D21F0 (no-op)
    // mtspr 572 (unknown SPR) @ 0x804D21F4
    PPC_WriteSpr(572, r7);
    // mtspr 573 (unknown SPR) @ 0x804D21F8
    PPC_WriteSpr(573, r4);
    // mtspr 572 (unknown SPR) @ 0x804D21FC
    PPC_WriteSpr(572, r3);
    // isync @ 0x804D2200 (no-op)
    // mtspr 564 (unknown SPR) @ 0x804D2204
    PPC_WriteSpr(564, r7);
    // mtspr 565 (unknown SPR) @ 0x804D2208
    PPC_WriteSpr(565, r7);
    // isync @ 0x804D220C (no-op)
    // mtspr 574 (unknown SPR) @ 0x804D2210
    PPC_WriteSpr(574, r7);
    // mtspr 575 (unknown SPR) @ 0x804D2214
    PPC_WriteSpr(575, r6);
    // mtspr 574 (unknown SPR) @ 0x804D2218
    PPC_WriteSpr(574, r5);
    // isync @ 0x804D221C (no-op)
    // mtspr 566 (unknown SPR) @ 0x804D2220
    PPC_WriteSpr(566, r7);
    // mtspr 567 (unknown SPR) @ 0x804D2224
    PPC_WriteSpr(567, r7);
    // isync @ 0x804D2228 (no-op)
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

extern "C" void func_804D2170(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D2170_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x000000F8 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D2170 func_804D2170 preserves=true fpr_mask=0x00000000
