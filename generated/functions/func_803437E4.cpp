#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803437E4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803437E4u);
    goto loc_803437E4;

loc_803437E4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0;
}

loc_803437F8:
{
    r3 = (r31 & 255);
    // inline leaf 0x803437BC (10 guest instruction(s))
    r0 = (r3 & 255);
    r4 = (r0 * 60);
    r0 = 0;
    r3 = 0x806C0000u;
    r3 = (r3 + 5408);
    r3_addr_2 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_2, static_cast<uint8_t>(r0));
    r0 = 255;
    r3 = (r3 + r4);
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x803437BC
    r31 = (r31 + 1);
}

loc_80343808:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(10))) {
        goto loc_803437F8;
    }
}

loc_8034380C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803437E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803437E4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803437E4 func_803437E4 preserves=true fpr_mask=0x00000000
