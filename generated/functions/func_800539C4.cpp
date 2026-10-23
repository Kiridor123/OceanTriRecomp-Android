#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800539C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_800539C4;

loc_800539C4:
{
    r7 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r7 + -12896));
    r0 = (r0 & -131073);
    r0 = (r0 | 8192);
    MemoryInline::FlatWriteRam32((r7 + -12896), r0);
    r7 = (r7 + -12896);
    MemoryInline::FlatWriteRam32((r7 + 68), r3);
    MemoryInline::FlatWriteRam32((r7 + 72), r4);
    MemoryInline::FlatWriteRam32((r7 + 76), r5);
    MemoryInline::FlatWriteRam32((r7 + 80), r6);
    r0 = (r7 + 68);
    MemoryInline::FlatWriteRam32((r7 + 12), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[7] = r7;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_800539C4_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5, uint32_t native_r6)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;
    uint32_t cached_r6 = native_r6;
    uint32_t cached_r7 = 0;

    goto loc_800539C4;

loc_800539C4:
{
    cached_r7 = 0x80670000u;
    cached_r0 = MemoryInline::FlatRead32((cached_r7 + -12896));
    cached_r0 = (cached_r0 & -131073);
    cached_r0 = (cached_r0 | 8192);
    MemoryInline::FlatWriteRam32((cached_r7 + -12896), cached_r0);
    cached_r7 = (cached_r7 + -12896);
    MemoryInline::FlatWriteRam32((cached_r7 + 68), cached_r3);
    MemoryInline::FlatWriteRam32((cached_r7 + 72), cached_r4);
    MemoryInline::FlatWriteRam32((cached_r7 + 76), cached_r5);
    MemoryInline::FlatWriteRam32((cached_r7 + 80), cached_r6);
    cached_r0 = (cached_r7 + 68);
    MemoryInline::FlatWriteRam32((cached_r7 + 12), cached_r0);

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r7) };
}

}
// RECOMP_STATE_FREE_ABI address=0x800539C4 symbol=func_800539C4_statefree gpr_in=0x00000078 gpr_out=0x00000081 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000078 gpr_write=0x00000081 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800539C4 func_800539C4 preserves=true fpr_mask=0x00000000


extern "C" void func_800539C4_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    [[clang::noinline]] func_800539C4(ctx);
}
