#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804BA7C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804BA7C0u);
    goto loc_804BA7C0;

loc_804BA7C0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = -872349696;
    r30 = 97;
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r5 + 124));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(22));
    r0_mrot_0 = (r0_rot_0 & 4194304);
    r0_mdest_0 = (r0 & -4194305);
    r0 = (r0_mdest_0 | r0_mrot_0);
    MemoryInline::FlatWrite32((r5 + 124), r0);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r30));
    r0 = MemoryInline::FlatRead32((r5 + 124));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    ctx->lr = 0x804BA804u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804B99B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r30));
    r0 = (r29 | 1744830464);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    ctx->lr = 0x804BA814u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x804B99B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FDE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804BA7C0 func_804BA7C0 preserves=true fpr_mask=0x00000000
