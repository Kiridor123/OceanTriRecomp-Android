#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D3050_rac0_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;
    uint32_t ctr = ctx->ctr;

    goto loc_800D3050;

loc_800D3050:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32((r13 + -17584));
    r31 = (r3 + 112);
    r0 = 1024;
    ctr = r0;
}

loc_800D3070:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800D3078:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D309C;
    }
}

loc_800D307C:
{
    r3 = r31;
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
    MemoryInline::FlatWrite16(r31, static_cast<uint16_t>(r0));
    r3 = r31;
    goto loc_800D30A8;
}

loc_800D309C:
{
    r31 = (r31 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800D3070;
    }
}

loc_800D30A4:
{
    r3 = 0;
}

loc_800D30A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return;
}

}

extern "C" void func_800D3050(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_800D3050_rac0_0_0_0(ctx, ctx->gpr[6], ctx->gpr[7]);
}

// RECOMP_GUEST_ABI gpr_read=0x00002003 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D3050 func_800D3050 preserves=true fpr_mask=0x00000000
