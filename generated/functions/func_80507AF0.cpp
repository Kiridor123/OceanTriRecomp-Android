#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80507AF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r13 = ctx->gpr[13];

    goto loc_80507AF0;

loc_80507AF0:
{
    r0 = MemoryInline::FlatRead32((r13 + -13936));
}

loc_80507AF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_return;
    }
}

loc_80507AFC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13936), r0);
    MemoryInline::FlatWrite32((r13 + -13932), r0);
    ctx->gpr[0] = r0;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80507AF0 func_80507AF0 preserves=true fpr_mask=0x00000000
