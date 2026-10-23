#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8081BE50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8081BE50;

loc_8081BE50:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0;
    r30 = r4;
    r29 = r3;
    goto loc_8081BE9C;
}

loc_8081BE78:
{
    r3 = (r29 + 24);
    r4 = (r31 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80839DE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8081BE8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_8081BE98;
    }
}

loc_8081BE90:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8081BEAC;
}

loc_8081BE98:
{
    r31 = (r31 + 1);
}

loc_8081BE9C:
{
    r0 = MemoryInline::FlatRead16((r29 + 16));
}

loc_8081BEA4:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(r0))) {
        goto loc_8081BE78;
    }
}

loc_8081BEA8:
{
    r3 = 0;
}

loc_8081BEAC:
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

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8081BE50 func_8081BE50 preserves=true fpr_mask=0x00000000
