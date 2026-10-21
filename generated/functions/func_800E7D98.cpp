#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E7D98(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x800E7D98u);
    goto loc_800E7D98;

loc_800E7D98:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    ctx->lr = 0x800E7DACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E5FA4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E4A64u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800E7DBC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E7DDC;
    }
}

loc_800E7DC0:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 1;
    ctx->lr = 0x800E7DCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EDCB4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E4A44u>(ctx);
    goto loc_800E7E38;
}

loc_800E7DDC:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E4A64u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800E7DEC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E7E0C;
    }
}

loc_800E7DF0:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 1;
    ctx->lr = 0x800E7DFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EDE14u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E4A44u>(ctx);
    goto loc_800E7E38;
}

loc_800E7E0C:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E4A64u>(ctx);
    r3 = ctx->gpr[3];
}

loc_800E7E1C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E7E38;
    }
}

loc_800E7E20:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 1;
    ctx->lr = 0x800E7E2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EDEC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x800E5778u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E4A44u>(ctx);
}

loc_800E7E38:
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
// RECOMP_REGISTRATION base 0x800E7D98 func_800E7D98 preserves=true fpr_mask=0x00000000
