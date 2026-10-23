#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B8FA0(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t mkw_fifo_burst_0[10];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    goto loc_804B8FA0;

loc_804B8FA0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x804B8FB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x804B99B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r5 = -872349696;
    r3 = 1711276032;
    r6 = 97;
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r6);
    r4 = (r3 + 4096);
    r0 = (r3 + 4352);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r4);
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[5] = static_cast<uint8_t>(r6);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 10u);
    ctx->lr = 0x804B8FD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x804B99B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFE gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B8FA0 func_804B8FA0 preserves=true fpr_mask=0x00000000
