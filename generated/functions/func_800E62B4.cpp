#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E62B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800E62B4u);
    goto loc_800E62B4;

loc_800E62B4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E5F9Cu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 36));
    r0 = (r4 + 65536);
}

loc_800E62EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_800E6300;
    }
}

loc_800E62F0:
{
}

loc_800E62F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800E6300;
    }
}

loc_800E62F8:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 36), r0);
}

loc_800E6300:
{
    r5 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r5 + 65536);
}

loc_800E630C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_800E6340;
    }
}

loc_800E6310:
{
    r4 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 44), r0);
}

loc_800E6320:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_800E6340;
    }
}

loc_800E6324:
{
    r0 = MemoryInline::FlatRead8((r3 + 58));
}

loc_800E632C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800E6340;
    }
}

loc_800E6330:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r3 + 58), static_cast<uint8_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 32), r0);
}

loc_800E6340:
{
    r3 = r29;
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x800E6350u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E9720u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r3 = r29;
    r4 = r31;
    ctx->lr = 0x800E635Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E6378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E62B4 func_800E62B4 preserves=true fpr_mask=0x00000000
