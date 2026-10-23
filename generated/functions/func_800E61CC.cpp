#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E61CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800E61CC;

loc_800E61CC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r3 = MemoryInline::FlatRead32(r4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5F9Cu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r3 = MemoryInline::FlatRead32(r30);
    r4 = 1024;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E629Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800E6200:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E622C;
    }
}

loc_800E6204:
{
    r3 = MemoryInline::FlatRead32((r31 + 68));
}

loc_800E620C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E6214;
    }
}

loc_800E6210:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8046EE60u>(ctx);
}

loc_800E6214:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32(r30);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EDAECu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32(r30, r3);
    r3 = 1;
    goto loc_800E6284;
}

loc_800E622C:
{
    r3 = MemoryInline::FlatRead32(r30);
    r4 = 512;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E629Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800E623C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_800E6280;
    }
}

loc_800E6240:
{
    r3 = MemoryInline::FlatRead32(r30);
    r4 = 256;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800E629Cu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800E6250:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E6280;
    }
}

loc_800E6254:
{
    r3 = MemoryInline::FlatRead32((r31 + 68));
    r0 = MemoryInline::FlatRead16((r3 + 56));
}

loc_800E6260:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E6280;
    }
}

loc_800E6264:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8046EE60u>(ctx);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E4A58u>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32(r30);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800EDAECu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32(r30, r3);
    r3 = 1;
    goto loc_800E6284;
}

loc_800E6280:
{
    r3 = 0;
}

loc_800E6284:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E61CC func_800E61CC preserves=true fpr_mask=0x00000000
