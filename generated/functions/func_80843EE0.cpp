#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80843EE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80843EE0;

loc_80843EE0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r6 = (r4 + 14);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r7 = MemoryInline::FlatRead16((r4 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r5 = MemoryInline::FlatRead16((r4 + 10));
}

loc_80843F08:
{
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r5));
    r6 = (r0 + r6);
    r6 = (r6 + -6);
    r0 = MemoryInline::FlatRead16((r4 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80843F2C;
    }
}

loc_80843F20:
{
}

loc_80843F24:
{
    if ((static_cast<uint32_t>(r7) == static_cast<uint32_t>(1))) {
        goto loc_80843F44;
    }
}

loc_80843F28:
{
    goto loc_80843F4C;
}

loc_80843F2C:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r3 + 8), static_cast<uint16_t>(r0));
    r4 = r6;
    r5 = 1;
    ctx->lr = 0x80843F40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80843DC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    goto loc_80843F4C;
}

loc_80843F44:
{
    r4 = r6;
    ctx->lr = 0x80843F4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x80843DC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
}

loc_80843F4C:
{
    r0 = MemoryInline::FlatRead16((r31 + 8));
    MemoryInline::FlatWrite32((r31 + 12), r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0xF000001F fpr_write=0xF000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80843EE0 func_80843EE0 preserves=true fpr_mask=0x00000000
