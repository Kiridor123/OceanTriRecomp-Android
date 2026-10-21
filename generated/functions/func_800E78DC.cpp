#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E78DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800E78DCu);
    goto loc_800E78DC;

loc_800E78DC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_800E78F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800E7948;
    }
}

loc_800E78F8:
{
    r3 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5F9Cu>(ctx);
    r3 = ctx->gpr[3];
    r5 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 76));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800E790C:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(r0))) {
        goto loc_800E7918;
    }
}

loc_800E7910:
{
    r31 = r0;
    goto loc_800E792C;
}

loc_800E7918:
{
    r0 = MemoryInline::FlatRead16((r3 + 78));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (0 - r0);
}

loc_800E7924:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r0))) {
        goto loc_800E792C;
    }
}

loc_800E7928:
{
    r31 = r0;
}

loc_800E792C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 68));
    r4 = MemoryInline::FlatRead32((r5 + 64));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r5 = MemoryInline::FlatRead16((r5 + 16));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    ctx->lr = 0x800E7948u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E8EC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
}

loc_800E7948:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E78DC func_800E78DC preserves=true fpr_mask=0x00000000
