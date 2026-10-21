#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800487DC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t mkw_fifo_burst_0[4];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x800487DCu);
    goto loc_800487DC;

loc_800487DC:
{
    r0 = (r3 & 255);
    r3 = -872349696;
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(r0);
    r0 = (r4 & 255);
    mkw_fifo_burst_0[1] = static_cast<uint8_t>(r0);
    r0 = (r5 & 255);
    mkw_fifo_burst_0[2] = static_cast<uint8_t>(r0);
    r0 = (r6 & 255);
    mkw_fifo_burst_0[3] = static_cast<uint8_t>(r0);
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 4u);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY void func_800487DC_statefree_v0(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5, uint32_t native_r6)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = native_r6;

    uint8_t mkw_fifo_burst_0[4];

    MKW_GUEST_ENTER(0x800487DCu);
    goto loc_800487DC;

loc_800487DC:
{
    cached_r0 = (cached_r3 & 255);
    cached_r3 = -872349696;
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(cached_r0);
    cached_r0 = (cached_r4 & 255);
    mkw_fifo_burst_0[1] = static_cast<uint8_t>(cached_r0);
    cached_r0 = (cached_r5 & 255);
    mkw_fifo_burst_0[2] = static_cast<uint8_t>(cached_r0);
    cached_r0 = (cached_r6 & 255);
    mkw_fifo_burst_0[3] = static_cast<uint8_t>(cached_r0);
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 4u);

    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x800487DC symbol=func_800487DC_statefree_v0 gpr_in=0x00000078 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_800487DC_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5, uint32_t native_r6)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = native_r6;

    uint8_t mkw_fifo_burst_0[4];

    MKW_GUEST_ENTER(0x800487DCu);
    goto loc_800487DC;

loc_800487DC:
{
    cached_r0 = (cached_r3 & 255);
    cached_r3 = -872349696;
    mkw_fifo_burst_0[0] = static_cast<uint8_t>(cached_r0);
    cached_r0 = (cached_r4 & 255);
    mkw_fifo_burst_0[1] = static_cast<uint8_t>(cached_r0);
    cached_r0 = (cached_r5 & 255);
    mkw_fifo_burst_0[2] = static_cast<uint8_t>(cached_r0);
    cached_r0 = (cached_r6 & 255);
    mkw_fifo_burst_0[3] = static_cast<uint8_t>(cached_r0);
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 4u);

    return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x800487DC symbol=func_800487DC_statefree gpr_in=0x00000078 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800487DC func_800487DC preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_800487DC_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    [[clang::noinline]] func_800487DC(ctx);
    return ctx->gpr[3];
}
