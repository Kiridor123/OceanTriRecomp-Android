#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CFC04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x800CFC04u);
    goto loc_800CFC04;

loc_800CFC04:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r3;
    r3 = 0x80660000u;
    r31 = (r3 + -21920);
    r3 = (r31 + 1980);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r0 = 255;
    MemoryInline::FlatWriteRam8((r31 + 1983), static_cast<uint8_t>(r0));
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
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_800CFC04_statefree_v0(uint32_t native_r1, uint32_t native_r3, uint32_t native_r31, uint32_t native_lr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r31 = 0;

    MKW_GUEST_ENTER(0x800CFC04u);
    goto loc_800CFC04;

loc_800CFC04:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -16), cached_r1);
    cached_r1 = (cached_r1 + -16);
    cached_r0 = native_lr;
    MemoryInline::FlatWriteRam32((cached_r1 + 20), cached_r0);
    cached_r4 = cached_r3;
    cached_r3 = 0x80660000u;
    cached_r31 = (cached_r3 + -21920);
    cached_r3 = (cached_r31 + 1980);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    cached_r0 = MemoryInline::FlatRead8(cached_r4);
    MemoryInline::FlatWriteRam8(cached_r3, static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 1));
    MemoryInline::FlatWriteRam8((cached_r3 + 1), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 2));
    MemoryInline::FlatWriteRam8((cached_r3 + 2), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 3));
    MemoryInline::FlatWriteRam8((cached_r3 + 3), static_cast<uint8_t>(cached_r0));
    // end of inlined leaf 0x8004C554
    cached_r0 = 255;
    MemoryInline::FlatWriteRam8((cached_r31 + 1983), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead32((cached_r1 + 20));
    native_lr = cached_r0;
    cached_r1 = (cached_r1 + 16);


return static_cast<uint64_t>(cached_r1);
}


    return static_cast<uint64_t>(cached_r1);
}
// RECOMP_STATE_FREE_ABI address=0x800CFC04 symbol=func_800CFC04_statefree_v0 gpr_in=0x8000000A gpr_out=0x00000002 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1

extern "C" MKW_PPC_NO_INLINE uint64_t func_800CFC04_statefree(uint32_t native_r1, uint32_t native_r3, uint32_t native_lr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    uint32_t cached_r31 = 0;

    MKW_GUEST_ENTER(0x800CFC04u);
    goto loc_800CFC04;

loc_800CFC04:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -16), cached_r1);
    cached_r1 = (cached_r1 + -16);
    cached_r0 = native_lr;
    MemoryInline::FlatWriteRam32((cached_r1 + 20), cached_r0);
    cached_r4 = cached_r3;
    cached_r3 = 0x80660000u;
    cached_r31 = (cached_r3 + -21920);
    cached_r3 = (cached_r31 + 1980);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    cached_r0 = MemoryInline::FlatRead8(cached_r4);
    MemoryInline::FlatWriteRam8(cached_r3, static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 1));
    MemoryInline::FlatWriteRam8((cached_r3 + 1), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 2));
    MemoryInline::FlatWriteRam8((cached_r3 + 2), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead8((cached_r4 + 3));
    MemoryInline::FlatWriteRam8((cached_r3 + 3), static_cast<uint8_t>(cached_r0));
    // end of inlined leaf 0x8004C554
    cached_r0 = 255;
    MemoryInline::FlatWriteRam8((cached_r31 + 1983), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead32((cached_r1 + 20));
    native_lr = cached_r0;
    cached_r1 = (cached_r1 + 16);


return static_cast<uint64_t>(cached_r1);
}


    return static_cast<uint64_t>(cached_r1);
}
// RECOMP_STATE_FREE_ABI address=0x800CFC04 symbol=func_800CFC04_statefree gpr_in=0x0000000A gpr_out=0x00000002 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800CFC04 func_800CFC04 preserves=true fpr_mask=0x00000000


extern "C" uint64_t func_800CFC04_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_800CFC04(ctx);
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
}
