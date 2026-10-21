#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804D1FE0_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x804D1FE0u);
    goto loc_804D1FE0;

loc_804D1FE0:
{
    r7 = 0;
    r4 = 268435456;
    r4 = (r4 + 2);
    r3 = 0x90000000u;
    r3 = (r3 + 1023);
    r6 = 268435456;
    r6 = (r6 + 42);
    r5 = -805306368;
    r5 = (r5 + 2047);
    // isync @ 0x804D2004 (no-op)
    // mtspr 568 (unknown SPR) @ 0x804D2008
    PPC_WriteSpr(568, r7);
    // mtspr 569 (unknown SPR) @ 0x804D200C
    PPC_WriteSpr(569, r4);
    // mtspr 568 (unknown SPR) @ 0x804D2010
    PPC_WriteSpr(568, r3);
    // isync @ 0x804D2014 (no-op)
    // mtspr 560 (unknown SPR) @ 0x804D2018
    PPC_WriteSpr(560, r7);
    // mtspr 561 (unknown SPR) @ 0x804D201C
    PPC_WriteSpr(561, r7);
    // isync @ 0x804D2020 (no-op)
    // mtspr 570 (unknown SPR) @ 0x804D2024
    PPC_WriteSpr(570, r7);
    // mtspr 571 (unknown SPR) @ 0x804D2028
    PPC_WriteSpr(571, r6);
    // mtspr 570 (unknown SPR) @ 0x804D202C
    PPC_WriteSpr(570, r5);
    // isync @ 0x804D2030 (no-op)
    // mtspr 562 (unknown SPR) @ 0x804D2034
    PPC_WriteSpr(562, r7);
    // mtspr 563 (unknown SPR) @ 0x804D2038
    PPC_WriteSpr(563, r7);
    // isync @ 0x804D203C (no-op)
    r4 = 301989888;
    r4 = (r4 + 2);
    r3 = 0x92000000u;
    r3 = (r3 + 511);
    r6 = 318767104;
    r6 = (r6 + 2);
    r5 = 0x93000000u;
    r5 = (r5 + 255);
    // isync @ 0x804D2060 (no-op)
    // mtspr 572 (unknown SPR) @ 0x804D2064
    PPC_WriteSpr(572, r7);
    // mtspr 573 (unknown SPR) @ 0x804D2068
    PPC_WriteSpr(573, r4);
    // mtspr 572 (unknown SPR) @ 0x804D206C
    PPC_WriteSpr(572, r3);
    // isync @ 0x804D2070 (no-op)
    // mtspr 564 (unknown SPR) @ 0x804D2074
    PPC_WriteSpr(564, r7);
    // mtspr 565 (unknown SPR) @ 0x804D2078
    PPC_WriteSpr(565, r7);
    // isync @ 0x804D207C (no-op)
    // mtspr 574 (unknown SPR) @ 0x804D2080
    PPC_WriteSpr(574, r7);
    // mtspr 575 (unknown SPR) @ 0x804D2084
    PPC_WriteSpr(575, r6);
    // mtspr 574 (unknown SPR) @ 0x804D2088
    PPC_WriteSpr(574, r5);
    // isync @ 0x804D208C (no-op)
    // mtspr 566 (unknown SPR) @ 0x804D2090
    PPC_WriteSpr(566, r7);
    // mtspr 567 (unknown SPR) @ 0x804D2094
    PPC_WriteSpr(567, r7);
    // isync @ 0x804D2098 (no-op)
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

extern "C" void func_804D1FE0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D1FE0_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x000000F8 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D1FE0 func_804D1FE0 preserves=true fpr_mask=0x00000000
