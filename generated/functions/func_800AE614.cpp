#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AE614(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800AE614;

loc_800AE614:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = MemoryInline::FlatRead32((r3 + 56));
    r31 = 1;
    goto loc_800AE668;
}

loc_800AE63C:
{
    r3 = r30;
    // inline leaf 0x800A52AC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 12));
    // end of inlined leaf 0x800A52AC
}

loc_800AE648:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_800AE65C;
    }
}

loc_800AE64C:
{
    r0 = MemoryInline::FlatRead32((r30 + 216));
}

loc_800AE654:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_800AE65C;
    }
}

loc_800AE658:
{
    MemoryInline::FlatWrite32((r30 + 216), r31);
}

loc_800AE65C:
{
    r0 = MemoryInline::FlatRead16((r29 + 66));
    r3 = (r30 + r0);
    r30 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800AE668:
{
}

loc_800AE66C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_800AE63C;
    }
}

loc_800AE670:
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

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AE614 func_800AE614 preserves=true fpr_mask=0x00000000
