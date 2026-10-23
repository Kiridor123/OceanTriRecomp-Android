#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E4998(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    goto loc_800E4998;

loc_800E4998:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E4914u>(ctx);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E4A7Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E4A64u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800E49B8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E49D8;
    }
}

loc_800E49BC:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 2;
    ctx->lr = 0x800E49C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EDCB4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E4A7Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E4A44u>(ctx);
    goto loc_800E4A34;
}

loc_800E49D8:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E4A7Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E4A64u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800E49E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E4A08;
    }
}

loc_800E49EC:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 2;
    ctx->lr = 0x800E49F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EDE14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E4A7Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E4A44u>(ctx);
    goto loc_800E4A34;
}

loc_800E4A08:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E4A7Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E4A64u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800E4A18:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E4A34;
    }
}

loc_800E4A1C:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 2;
    ctx->lr = 0x800E4A28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EDEC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E4A7Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E4A44u>(ctx);
}

loc_800E4A34:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E4998 func_800E4998 preserves=true fpr_mask=0x00000000
