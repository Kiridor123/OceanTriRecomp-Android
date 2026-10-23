#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081A6E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_8081A6E8;

loc_8081A6E8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r6 = (r4 + 2412);
}

loc_8081A704:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8081A76C;
    }
}

loc_8081A708:
{
    r4 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 17516));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    r4 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 17520));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r4 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 17444));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r3));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 17524));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 24);
    r4 = (r1 + 16);
    r5 = (r1 + 8);
    r6 = (r6 + 4);
    ctx->lr = 0x8081A76Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8005AC3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
}

loc_8081A76C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081A6E8 func_8081A6E8 preserves=true fpr_mask=0x00000000
