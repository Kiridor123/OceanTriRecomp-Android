#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808420E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x808420E0u);
    goto loc_808420E0;

loc_808420E0:
{
    r4 = 0x80870000u;
    r0 = 16;
    r4 = (r4 + -32112);
    r6 = 0;
    ctr = r0;
    // nop
}

loc_808420F8:
{
    r0 = MemoryInline::FlatRead8(r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80842124;
    }
}

loc_80842104:
{
    r5 = 0x80870000u;
    r4 = 0x80870000u;
    r5 = (r5 + -32112);
    r4 = (r4 + -32096);
    r5_addr_0 = (r5 + r6);
    MemoryInline::FlatWrite8(r5_addr_0, static_cast<uint8_t>(r3));
    r4_addr_0 = (r4 + r3);
    MemoryInline::FlatWrite8(r4_addr_0, static_cast<uint8_t>(r6));
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

loc_80842124:
{
    r4 = (r4 + 1);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808420F8;
    }
}

loc_80842130:
{
    r3 = -1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808420E0 func_808420E0 preserves=true fpr_mask=0x00000000
