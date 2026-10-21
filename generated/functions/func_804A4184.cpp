#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804A4184_rad0_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4, uint32_t arg_r6, uint32_t arg_r7)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804A4184u);
    goto loc_804A4184;

loc_804A4184:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x80740000u;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 4;
    r3 = (r3 + -2048);
    r31 = (r3 + 60);
    ctr = r0;
}

loc_804A41AC:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_804A41B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A41D4;
    }
}

loc_804A41B8:
{
    r3 = r31;
    r4 = 0;
    r5 = 1144;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r31 + 24), r31);
    r3 = r31;
    goto loc_804A41E4;
}

loc_804A41D4:
{
    r4 = (r4 + 1);
    r31 = (r31 + 1144);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804A41AC;
    }
}

loc_804A41E0:
{
    r3 = 0;
}

loc_804A41E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r4;
}

}

extern "C" void func_804A4184(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804A4184_rad0_0_10_0(ctx, ctx->gpr[4], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000013 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A4184 func_804A4184 preserves=true fpr_mask=0x00000000
