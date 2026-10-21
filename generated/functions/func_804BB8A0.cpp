#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804BB8A0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x804BB8A0u);
    goto loc_804BB8A0;

loc_804BB8A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r13 + -15352));
}

loc_804BB8B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BB8DC;
    }
}

loc_804BB8B8:
{
    // inline leaf 0x804D5CF0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -14976));
    // end of inlined leaf 0x804D5CF0
    MemoryInline::FlatWrite32((r13 + -15336), r3);
    // inline leaf 0x804D5D00 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20056));
    // end of inlined leaf 0x804D5D00
    r4 = MemoryInline::FlatRead32((r13 + -15336));
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -15340), r3);
    MemoryInline::FlatWrite32((r13 + -15344), r4);
    MemoryInline::FlatWrite32((r13 + -15348), r3);
    MemoryInline::FlatWrite8((r13 + -15352), static_cast<uint8_t>(r0));
}

loc_804BB8DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BB8A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BB8A0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BB8A0 func_804BB8A0 preserves=true fpr_mask=0x00000000
