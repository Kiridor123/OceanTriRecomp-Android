#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804DF720(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    goto loc_804DF720;

loc_804DF720:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8046EB60u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804DF734:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804DF798;
    }
}

loc_804DF738:
{
    r0 = MemoryInline::FlatRead32((r13 + -14740));
}

loc_804DF740:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DF798;
    }
}

loc_804DF744:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80471FD0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80760000u;
    MemoryInline::FlatWrite32((r13 + -14732), r3);
    r4 = (r4 + -25368);
    r6 = 0;
    MemoryInline::FlatWrite32((r13 + -14744), r4);
    r5 = 0;
    r4 = 0;
    goto loc_804DF77C;
}

loc_804DF768:
{
    r0 = MemoryInline::FlatRead32((r13 + -14744));
    r6 = (r6 + 1);
    r3 = (r0 + r5);
    r5 = (r5 + 148);
    MemoryInline::FlatWrite32((r3 + 8), r4);
}

loc_804DF77C:
{
    r0 = MemoryInline::FlatRead32((r13 + -14732));
}

loc_804DF784:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r0))) {
        goto loc_804DF768;
    }
}

loc_804DF788:
{
    r3 = 0;
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -14736), r3);
    MemoryInline::FlatWrite32((r13 + -14740), r0);
}

loc_804DF798:
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804DF720 func_804DF720 preserves=true fpr_mask=0x00000000
