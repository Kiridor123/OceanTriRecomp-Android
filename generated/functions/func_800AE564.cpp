#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AE564(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800AE564;

loc_800AE564:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r31 = 0;
    MemoryInline::FlatWrite32((r3 + 84), r31);
    r30 = MemoryInline::FlatRead32((r3 + 56));
    goto loc_800AE5EC;
}

loc_800AE598:
{
}

loc_800AE59C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800AE5AC;
    }
}

loc_800AE5A0:
{
    r0 = MemoryInline::FlatRead16((r30 + 226));
}

loc_800AE5A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800AE5E0;
    }
}

loc_800AE5AC:
{
    r3 = MemoryInline::FlatRead16((r30 + 226));
}

loc_800AE5B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800AE5C0;
    }
}

loc_800AE5B8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r30 + 226), static_cast<uint16_t>(r0));
}

loc_800AE5C0:
{
    r3 = r30;
    // inline leaf 0x800A52AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x800A52AC
}

loc_800AE5CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_800AE5E0;
    }
}

loc_800AE5D0:
{
    r0 = MemoryInline::FlatRead32((r30 + 216));
}

loc_800AE5D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_800AE5E0;
    }
}

loc_800AE5DC:
{
    MemoryInline::FlatWrite32((r30 + 216), r31);
}

loc_800AE5E0:
{
    r0 = MemoryInline::FlatRead16((r28 + 66));
    r3 = (r30 + r0);
    r30 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800AE5EC:
{
}

loc_800AE5F0:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_800AE598;
    }
}

loc_800AE5F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AE564 func_800AE564 preserves=true fpr_mask=0x00000000
