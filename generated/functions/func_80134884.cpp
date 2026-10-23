#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80134884(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80134884;

loc_80134884:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    // inline leaf 0x8045B1B8 (4 guest instruction(s))
    r4 = (static_cast<int32_t>(r3) >> 31);
    r0 = (r4 ^ r3);
    r3 = (r0 - r4);
    // end of inlined leaf 0x8045B1B8
    r4 = (r31 & 65535);
}

loc_801348C0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r4))) {
        goto loc_801348D0;
    }
}

loc_801348C4:
{
    r0 = MemoryInline::FlatRead32((r28 + 892));
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_80134934;
}

loc_801348D0:
{
    r3 = MemoryInline::FlatRead8((r28 + 1155));
    r0 = (r3 & 2);
}

loc_801348DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801348F0;
    }
}

loc_801348E0:
{
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_80134934;
}

loc_801348F0:
{
    r0 = (r3 & 4);
}

loc_801348F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013490C;
    }
}

loc_801348FC:
{
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 - r4);
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_80134934;
}

loc_8013490C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_80134914:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80134928;
    }
}

loc_80134918:
{
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_80134934;
}

loc_80134928:
{
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 - r4);
    MemoryInline::FlatWrite32(r29, r0);
}

loc_80134934:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80134884 func_80134884 preserves=true fpr_mask=0x00000000
