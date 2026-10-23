#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80839880(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80839880;

loc_80839880:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_8083988C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808398EC;
    }
}

loc_8083989C:
{
    r7 = MemoryInline::FlatRead32((r3 + 4));
    r6 = (r3 + 4);
    r0 = 0;
    goto loc_808398D4;
}

loc_808398AC:
{
    r8 = MemoryInline::FlatRead32(r7);
    r5 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWrite32((r8 + 4), r5);
    MemoryInline::FlatWrite32(r5, r8);
    r5 = MemoryInline::FlatRead32(r3);
    r5 = (r5 + -1);
    MemoryInline::FlatWrite32(r3, r5);
    MemoryInline::FlatWrite32(r7, r0);
    MemoryInline::FlatWrite32((r7 + 4), r0);
    r7 = r8;
}

loc_808398D4:
{
}

loc_808398D8:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r6))) {
        goto loc_808398AC;
    }
}

loc_808398DC:
{
}

loc_808398E0:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_808398EC;
    }
}

loc_808398E4:
{
    r3 = r31;
    ctx->lr = 0x808398ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80040564u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
}

loc_808398EC:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80839880 func_80839880 preserves=true fpr_mask=0x00000000
