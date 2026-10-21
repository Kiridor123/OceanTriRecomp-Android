#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081EBF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8081EBF0u);
    goto loc_8081EBF0;

loc_8081EBF0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r5;
    r30 = r4;
    r29 = r3;
    // inline leaf 0x8081F450 (3 guest instruction(s))
    r3 = 0x80870000u;
    r3 = MemoryInline::FlatRead32((r3 + -32304));
    // end of inlined leaf 0x8081F450
    r4 = r29;
    r5 = r30;
    r6 = r31;
    // inline leaf 0x808282E0 (4 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 1121), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1122), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 1123), static_cast<uint8_t>(r6));
    // end of inlined leaf 0x808282E0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081EBF0 func_8081EBF0 preserves=true fpr_mask=0x00000000
