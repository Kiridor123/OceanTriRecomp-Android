#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80842190(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x80842190u);
    goto loc_80842190;

loc_80842190:
{
    r5 = 0x80870000u;
    r5 = (r5 + -32096);
    r5_addr_0 = (r5 + r3);
    r6 = MemoryInline::FlatRead8(r5_addr_0);
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_808421A4:
{
    r4 = 0x80870000u;
    r0 = -1;
    r4 = (r4 + -32112);
    r5_addr_1 = (r5 + r3);
    MemoryInline::FlatWrite8(r5_addr_1, static_cast<uint8_t>(r0));
    r4_addr_0 = (r4 + r6);
    MemoryInline::FlatWrite8(r4_addr_0, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000071 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80842190 func_80842190 preserves=true fpr_mask=0x00000000
