#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009ACFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8009ACFC;

loc_8009ACFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r3 = 8;
    // inline leaf 0x8009AB9C (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8009AB9C
    r3 = (r30 & 255);
    // inline leaf 0x8009AB9C (4 guest instruction(s))
    r0 = (r3 & 255);
    r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8009AB9C
    r3 = r31;
    // inline leaf 0x8009AB80 (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x8009AB80
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_8009ACFC_statefree(uint32_t native_r1, uint32_t native_r3, uint32_t native_r4, uint32_t native_lr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r30 = 0;
    uint32_t cached_r31 = 0;

    goto loc_8009ACFC;

loc_8009ACFC:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -16), cached_r1);
    cached_r1 = (cached_r1 + -16);
    cached_r0 = native_lr;
    MemoryInline::FlatWriteRam32((cached_r1 + 20), cached_r0);
    cached_r30 = cached_r3;
    cached_r31 = cached_r4;
    cached_r3 = 8;
    // inline leaf 0x8009AB9C (4 guest instruction(s))
    cached_r0 = (cached_r3 & 255);
    cached_r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(cached_r0));
    // end of inlined leaf 0x8009AB9C
    cached_r3 = (cached_r30 & 255);
    // inline leaf 0x8009AB9C (4 guest instruction(s))
    cached_r0 = (cached_r3 & 255);
    cached_r3 = -872349696;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(cached_r0));
    // end of inlined leaf 0x8009AB9C
    cached_r3 = cached_r31;
    // inline leaf 0x8009AB80 (3 guest instruction(s))
    cached_r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(cached_r3));
    // end of inlined leaf 0x8009AB80
    cached_r0 = MemoryInline::FlatRead32((cached_r1 + 20));
    native_lr = cached_r0;
    cached_r1 = (cached_r1 + 16);



    return static_cast<uint64_t>(cached_r1);
}


    return static_cast<uint64_t>(cached_r1);
}
// RECOMP_STATE_FREE_ABI address=0x8009ACFC symbol=func_8009ACFC_statefree gpr_in=0x0000001A gpr_out=0x00000002 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009ACFC func_8009ACFC preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_8009ACFC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    [[clang::noinline]] func_8009ACFC(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
