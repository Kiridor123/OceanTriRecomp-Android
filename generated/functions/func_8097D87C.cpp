#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8097D87C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8097D87C;

loc_8097D87C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x8097D2B4 (5 guest instruction(s))
    r0 = 0;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2150), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8097D2B4
    r31 = 0x809D0000u;
    r3 = MemoryInline::FlatRead32((r31 + 13672));
    r3 = MemoryInline::FlatRead32((r3 + 1032));
    ctx->lr = 0x8097D8A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800D4CC8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 13672));
    r3 = MemoryInline::FlatRead32((r3 + 412));
    ctx->lr = 0x8097D8ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800D4CC8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 13672));
    r3 = MemoryInline::FlatRead32((r3 + 1820));
    ctx->lr = 0x8097D8B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800D4CC8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 13672));
    r3 = MemoryInline::FlatRead32((r3 + 4120));
    ctx->lr = 0x8097D8C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800D4CC8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FF6 gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8097D87C func_8097D87C preserves=true fpr_mask=0x00000000
