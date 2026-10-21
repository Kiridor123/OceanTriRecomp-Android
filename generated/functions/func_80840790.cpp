#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80840790(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80840790u);
    goto loc_80840790;

loc_80840790:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x80870000u;
    r0 = MemoryInline::FlatRead8((r31 + -32120));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_808407E0;
    }
}

loc_808407B4:
{
    r30 = 0x80870000u;
    r3 = (r30 + -32132);
    // inline leaf 0x8083A910 (4 guest instruction(s))
    r4 = 0x80840000u;
    r4 = (r4 + 31960);
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x8083A910
    r4 = 0x80840000u;
    r5 = 0x80870000u;
    r3 = (r30 + -32132);
    r4 = (r4 + -22240);
    r5 = (r5 + -32160);
    // inline leaf 0x808197D0 (7 guest instruction(s))
    r6 = 0x80860000u;
    r0 = MemoryInline::FlatRead32((r6 + 21248));
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 21248), r5);
    // end of inlined leaf 0x808197D0
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + -32120), static_cast<uint8_t>(r0));
}

loc_808407E0:
{
    r30 = 0x80870000u;
    r0 = MemoryInline::FlatRead8((r30 + -32119));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8084081C;
    }
}

loc_808407F0:
{
    r31 = 0x80870000u;
    r3 = (r31 + -32124);
    // inline leaf 0x8083AE70 (4 guest instruction(s))
    r4 = 0x80840000u;
    r4 = (r4 + 31888);
    MemoryInline::FlatWriteRam32(r3, r4);
    // end of inlined leaf 0x8083AE70
    r4 = 0x80840000u;
    r5 = 0x80870000u;
    r3 = (r31 + -32124);
    r4 = (r4 + -20864);
    r5 = (r5 + -32148);
    // inline leaf 0x808197D0 (7 guest instruction(s))
    r6 = 0x80860000u;
    r0 = MemoryInline::FlatRead32((r6 + 21248));
    MemoryInline::FlatWriteRam32(r5, r0);
    MemoryInline::FlatWriteRam32((r5 + 4), r4);
    MemoryInline::FlatWriteRam32((r5 + 8), r3);
    MemoryInline::FlatWriteRam32((r6 + 21248), r5);
    // end of inlined leaf 0x808197D0
    r0 = 1;
    MemoryInline::FlatWriteRam8((r30 + -32119), static_cast<uint8_t>(r0));
}

loc_8084081C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80840790 func_80840790 preserves=true fpr_mask=0x00000000
