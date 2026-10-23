#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808231F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_808231F0;

loc_808231F0:
{
}

loc_808231F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_80823208;
    }
}

loc_808231F8:
{
    r5 = 0x80870000u;
    r0 = 1;
    r5 = MemoryInline::FlatRead32((r5 + -32304));
    MemoryInline::FlatWrite8((r5 + 146), static_cast<uint8_t>(r0));
}

loc_80823208:
{
    r5 = 0x80870000u;
    r5 = MemoryInline::FlatRead32((r5 + -32304));
    r12 = MemoryInline::FlatRead32((r5 + 524));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_80823218:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8082321C:
{
    ctr = r12;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectJump(ctr, ctx);
    return;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FF9 gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808231F0 func_808231F0 preserves=true fpr_mask=0x00000000
