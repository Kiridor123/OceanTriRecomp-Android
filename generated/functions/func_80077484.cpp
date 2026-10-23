#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80077484_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint8_t mkw_fifo_burst_0[9];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80077484;

loc_80077484:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r3 = 16;
    // inline leaf 0x800774F4 (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r0);
    // end of inlined leaf 0x800774F4
    r3 = 0;
    // inline leaf 0x800774E4 (4 guest instruction(s))
    r0 = (r3 & 65535);
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[1] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[2] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800774E4
    r3 = (r30 & 65535);
    // inline leaf 0x800774E4 (4 guest instruction(s))
    r0 = (r3 & 65535);
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[3] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[4] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800774E4
    r3 = r31;
    // inline leaf 0x800774D8 (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 9u);
    // end of inlined leaf 0x800774D8
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80077484(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80077484_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80077484 func_80077484 preserves=true fpr_mask=0x00000000
