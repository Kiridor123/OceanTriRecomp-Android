#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E0AF8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x800E0AF8u);
    goto loc_800E0AF8;

loc_800E0AF8:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r29 = r3;
    r31 = r4;
    r30 = r5;
    r3 = (r1 + 16);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r0 = MemoryInline::FlatRead32((r29 + 280));
}

loc_800E0B2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E0B80;
    }
}

loc_800E0B30:
{
    r3 = (r29 + 276);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F7Cu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 8);
    ctx->lr = 0x800E0B48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8006FE30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    r31 = (r3 * 48);
    r3 = MemoryInline::FlatRead32((r29 + 280));
    // inline leaf 0x800E0AF0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 236));
    // end of inlined leaf 0x800E0AF0
    r0 = r3;
    r3 = (r1 + 16);
    r4 = (r0 + r31);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80053340u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
    goto loc_800E0B90;
}

loc_800E0B80:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30312));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f0.d);
}

loc_800E0B90:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E0AF8 func_800E0AF8 preserves=true fpr_mask=0x00000000
