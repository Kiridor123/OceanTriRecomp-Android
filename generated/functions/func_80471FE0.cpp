#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80471FE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80471FE0u);
    goto loc_80471FE0;

loc_80471FE0:
{
    r0 = MemoryInline::FlatRead32((r13 + -15912));
}

loc_80471FE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80472018;
    }
}

loc_80471FEC:
{
    r5 = MemoryInline::FlatRead32((r13 + -15908));
    r3 = MemoryInline::FlatRead32((r13 + -15904));
    r4 = (r5 + 1);
    r6 = MemoryInline::FlatRead32((r13 + -15900));
    r0 = PPC_Divwu(static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
    r0 = (r0 * r3);
    r3 = (r5 * 56);
    r0 = (r4 - r0);
    MemoryInline::FlatWrite32((r13 + -15908), r0);
    r3 = (r6 + r3);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

loc_80472018:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80471FE0 func_80471FE0 preserves=true fpr_mask=0x00000000
