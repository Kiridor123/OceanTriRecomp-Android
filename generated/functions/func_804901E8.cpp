#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804901E8_rac0_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[7] = arg_r7;

    MKW_GUEST_ENTER(0x804901E8u);
    goto loc_804901E8;

loc_804901E8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0;
    r5 = 324;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 0x80740000u;
    r3 = (r31 + -6480);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x80490000u;
    r5 = (r31 + -6480);
    r6 = 1;
    r4 = 64;
    r3 = (r3 + 784);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r5 + 202), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam16((r5 + 204), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam8((r5 + 262), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam16((r5 + 264), static_cast<uint16_t>(r4));
    MemoryInline::FlatWriteRam32((r5 + 44), r3);
    MemoryInline::FlatWriteRam8((r5 + 321), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804901E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804901E8_rac0_0_18_0(ctx, ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804901E8 func_804901E8 preserves=true fpr_mask=0x00000000
