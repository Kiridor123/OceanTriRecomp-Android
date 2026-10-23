#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800C6140(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_800C6140;

loc_800C6140:
{
    r5 = 0;
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r5));
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 212), r0);
    MemoryInline::FlatWrite32((r3 + 216), r0);
    MemoryInline::FlatWrite32((r3 + 220), r0);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 16);
}

loc_800C6164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C6174;
    }
}

loc_800C6168:
{
    MemoryInline::FlatWrite32((r3 + 212), r5);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r0));
}

loc_800C6174:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 32);
}

loc_800C6180:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C6194;
    }
}

loc_800C6184:
{
    r5 = MemoryInline::FlatRead8((r3 + 208));
    MemoryInline::FlatWrite32((r3 + 216), r5);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r0));
}

loc_800C6194:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 64);
}

loc_800C61A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C61B4;
    }
}

loc_800C61A4:
{
    r4 = MemoryInline::FlatRead8((r3 + 208));
    MemoryInline::FlatWrite32((r3 + 220), r4);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 208), static_cast<uint8_t>(r0));
}

loc_800C61B4:
{
    r3 = MemoryInline::FlatRead8((r3 + 208));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804B6400u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C6140 func_800C6140 preserves=true fpr_mask=0x00000000
