#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B6160(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t mkw_fifo_burst_0[12];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_804B6160;

loc_804B6160:
{
}

loc_804B6164:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(25))) {
        goto loc_804B616C;
    }
}

loc_804B6168:
{
    r3 = 10;
}

loc_804B616C:
{
    r6 = -872349696;
    r8 = (r3 + -9);
    r7 = 8;
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r7);
    r0 = (r8 | 160);
    r3 = (r4 & 1073741823);
    mkw_fifo_burst_0[1] = static_cast<uint8_t>(r0);
    r0 = (r8 | 176);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>(mkw_fifo_word);
    }
    mkw_fifo_burst_0[6] = static_cast<uint8_t>(r7);
    mkw_fifo_burst_0[7] = static_cast<uint8_t>(r0);
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r5);
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 12u);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x000001C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B6160 func_804B6160 preserves=true fpr_mask=0x00000000
