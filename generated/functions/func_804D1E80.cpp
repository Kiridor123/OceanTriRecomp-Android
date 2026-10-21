#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804D1E80_ra0_0_18_0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    MKW_GUEST_ENTER(0x804D1E80u);
    goto loc_804D1E80;

loc_804D1E80:
{
    r7 = 0;
    r4 = 0;
    r4 = (r4 + 2);
    r3 = 0x80000000u;
    r3 = (r3 + 511);
    r6 = 16777216;
    r6 = (r6 + 2);
    r5 = 0x81000000u;
    r5 = (r5 + 255);
    // isync @ 0x804D1EA4 (no-op)
    // mtspr 536 (unknown SPR) @ 0x804D1EA8
    PPC_WriteSpr(536, r7);
    // mtspr 537 (unknown SPR) @ 0x804D1EAC
    PPC_WriteSpr(537, r4);
    // mtspr 536 (unknown SPR) @ 0x804D1EB0
    PPC_WriteSpr(536, r3);
    // isync @ 0x804D1EB4 (no-op)
    // mtspr 528 (unknown SPR) @ 0x804D1EB8
    PPC_WriteSpr(528, r7);
    // mtspr 529 (unknown SPR) @ 0x804D1EBC
    PPC_WriteSpr(529, r4);
    // mtspr 528 (unknown SPR) @ 0x804D1EC0
    PPC_WriteSpr(528, r3);
    // isync @ 0x804D1EC4 (no-op)
    // mtspr 540 (unknown SPR) @ 0x804D1EC8
    PPC_WriteSpr(540, r7);
    // mtspr 541 (unknown SPR) @ 0x804D1ECC
    PPC_WriteSpr(541, r6);
    // mtspr 540 (unknown SPR) @ 0x804D1ED0
    PPC_WriteSpr(540, r5);
    // isync @ 0x804D1ED4 (no-op)
    // mtspr 532 (unknown SPR) @ 0x804D1ED8
    PPC_WriteSpr(532, r7);
    // mtspr 533 (unknown SPR) @ 0x804D1EDC
    PPC_WriteSpr(533, r6);
    // mtspr 532 (unknown SPR) @ 0x804D1EE0
    PPC_WriteSpr(532, r5);
    // isync @ 0x804D1EE4 (no-op)
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

extern "C" void func_804D1E80(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D1E80_ra0_0_18_0(ctx);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000000 gpr_write=0x000000F8 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D1E80 func_804D1E80 preserves=true fpr_mask=0x00000000
