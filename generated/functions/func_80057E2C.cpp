#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80057E2C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];

    MKW_GUEST_ENTER(0x80057E2Cu);
    goto loc_80057E2C;

loc_80057E2C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY void func_80057E2C_statefree_v0(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    MKW_GUEST_ENTER(0x80057E2Cu);
    goto loc_80057E2C;

loc_80057E2C:
{
    cached_r0 = (static_cast<int32_t>(static_cast<int16_t>(cached_r3)));
    cached_r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(cached_r0));
    cached_r0 = (static_cast<int32_t>(static_cast<int16_t>(cached_r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(cached_r0));

    return;
}

}
// RECOMP_STATE_FREE_ABI address=0x80057E2C symbol=func_80057E2C_statefree_v0 gpr_in=0x00000018 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_80057E2C_statefree(uint32_t native_r3, uint32_t native_r4)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;

    MKW_GUEST_ENTER(0x80057E2Cu);
    goto loc_80057E2C;

loc_80057E2C:
{
    cached_r0 = (static_cast<int32_t>(static_cast<int16_t>(cached_r3)));
    cached_r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(cached_r0));
    cached_r0 = (static_cast<int32_t>(static_cast<int16_t>(cached_r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(cached_r0));

    return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x80057E2C symbol=func_80057E2C_statefree gpr_in=0x00000018 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80057E2C func_80057E2C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80057E2C_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_80057E2C(ctx);
    return ctx->gpr[3];
}
