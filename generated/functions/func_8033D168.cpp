#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8033D168_ra58_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;

    goto loc_8033D168;

loc_8033D168:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r30 = 0;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite32((r3 + 68), r30);
    r3 = (r3 + 18);
    r4 = 255;
    r5 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r31 + 112);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r31 + 18), static_cast<uint8_t>(r30));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 19), static_cast<uint8_t>(r0));
    r30 = 2;
    MemoryInline::FlatWrite16((r31 + 118), static_cast<uint16_t>(r30));
    r3 = 75;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8033D1CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8033D1E8;
    }
}

loc_8033D1D0:
{
    r0 = MemoryInline::FlatRead16((r31 + 118));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead16((r31 + 118));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 118), static_cast<uint16_t>(r0));
}

loc_8033D1E8:
{
    r3 = 76;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8004D2E0u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8033D1F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8033D214;
    }
}

loc_8033D1F8:
{
    r4 = 3;
    r0 = MemoryInline::FlatRead16((r31 + 118));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite8((r3 + 18), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead16((r31 + 118));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 118), static_cast<uint16_t>(r0));
}

loc_8033D214:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r5 = MemoryInline::FlatRead8((r3 + 20900));
    MemoryInline::FlatWrite8((r31 + 22), static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = MemoryInline::FlatRead8((r3 + 20901));
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r4));
    r0 = 1;
    r3 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
    r0 = (r3 | r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r31 + 114), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8033D168(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8033D168_ra58_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8033D168 func_8033D168 preserves=true fpr_mask=0x00000000
