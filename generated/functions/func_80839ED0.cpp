#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80839ED0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80839ED0u);
    goto loc_80839ED0;

loc_80839ED0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r30 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_80839EF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80839F04;
    }
}

loc_80839EFC:
{
    r3 = 0;
    goto loc_8083A000;
}

loc_80839F04:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + -1380319232);
}

loc_80839F10:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20053))) {
        goto loc_80839F58;
    }
}

loc_80839F14:
{
    r0 = MemoryInline::FlatRead16((r4 + 12));
    r3 = MemoryInline::FlatRead16((r4 + 14));
    r4 = (r4 + r0);
    ctr = r3;
}

loc_80839F28:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80839FC0;
    }
}

loc_80839F2C:
{
    // nop
}

loc_80839F30:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + -1179189248);
}

loc_80839F3C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20038))) {
        goto loc_80839F48;
    }
}

loc_80839F40:
{
    r5 = (r4 + 8);
    goto loc_80839FC0;
}

loc_80839F48:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (r4 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80839F30;
    }
}

loc_80839F54:
{
    goto loc_80839FC0;
}

loc_80839F58:
{
    r0 = MemoryInline::FlatRead16((r4 + 6));
}

loc_80839F60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(260))) {
        goto loc_80839F8C;
    }
}

loc_80839F64:
{
    r4 = 1380319232;
    r3 = r31;
    r4 = (r4 + 20052);
    r5 = 260;
    r6 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80836BF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_80839F80:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80839FB4;
    }
}

loc_80839F84:
{
    r3 = 0;
    goto loc_8083A000;
}

loc_80839F8C:
{
    r4 = 1380319232;
    r3 = r31;
    r4 = (r4 + 20052);
    r5 = 258;
    r6 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80836BF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_80839FA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80839FB4;
    }
}

loc_80839FAC:
{
    r3 = 0;
    goto loc_8083A000;
}

loc_80839FB4:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8083A030u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r5 = r3;
}

loc_80839FC0:
{
}

loc_80839FC4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80839FD0;
    }
}

loc_80839FC8:
{
    r3 = 0;
    goto loc_8083A000;
}

loc_80839FD0:
{
    r3 = r30;
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8083A1D0u>(ctx);
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 84));
    ctr = r12;
    ctx->lr = 0x80839FF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r4 = r3;
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x808397D0u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = 1;
}

loc_8083A000:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80839ED0 func_80839ED0 preserves=true fpr_mask=0x00000000
