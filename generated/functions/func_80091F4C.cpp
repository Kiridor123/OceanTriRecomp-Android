#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80091F4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r31_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80091F4Cu);
    goto loc_80091F4C;

loc_80091F4C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = (r3 + 1);
    // inline leaf 0x80091FCC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8(r3);
    // end of inlined leaf 0x80091FCC
    r0 = (r3 & 255);
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r31 = (r31_rot_0 & -16777216);
    r3 = r30;
    r30 = (r30 + 1);
    // inline leaf 0x80091FCC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8(r3);
    // end of inlined leaf 0x80091FCC
    r0 = (r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_0 & -65536);
    r31 = (r31 | r0);
    r3 = r30;
    r30 = (r30 + 1);
    // inline leaf 0x80091FCC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8(r3);
    // end of inlined leaf 0x80091FCC
    r0 = (r3 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r31 = (r31 | r0);
    r3 = r30;
    // inline leaf 0x80091FCC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8(r3);
    // end of inlined leaf 0x80091FCC
    r0 = (r3 & 255);
    r31 = (r31 | r0);
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_80091F4C_statefree(uint32_t native_r1, uint32_t native_r3, uint32_t native_lr)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r1 = native_r1;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r30 = 0;
    uint32_t cached_r31 = 0;

    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r31_rot_0 = 0;

    MKW_GUEST_ENTER(0x80091F4Cu);
    goto loc_80091F4C;

loc_80091F4C:
{
    MemoryInline::FlatWriteRam32((cached_r1 + -16), cached_r1);
    cached_r1 = (cached_r1 + -16);
    cached_r0 = native_lr;
    MemoryInline::FlatWriteRam32((cached_r1 + 20), cached_r0);
    cached_r30 = (cached_r3 + 1);
    // inline leaf 0x80091FCC (2 guest instruction(s))
    cached_r3 = MemoryInline::FlatRead8(cached_r3);
    // end of inlined leaf 0x80091FCC
    cached_r0 = (cached_r3 & 255);
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(24));
    cached_r31 = (r31_rot_0 & -16777216);
    cached_r3 = cached_r30;
    cached_r30 = (cached_r30 + 1);
    // inline leaf 0x80091FCC (2 guest instruction(s))
    cached_r3 = MemoryInline::FlatRead8(cached_r3);
    // end of inlined leaf 0x80091FCC
    cached_r0 = (cached_r3 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(16));
    cached_r0 = (r0_rot_0 & -65536);
    cached_r31 = (cached_r31 | cached_r0);
    cached_r3 = cached_r30;
    cached_r30 = (cached_r30 + 1);
    // inline leaf 0x80091FCC (2 guest instruction(s))
    cached_r3 = MemoryInline::FlatRead8(cached_r3);
    // end of inlined leaf 0x80091FCC
    cached_r0 = (cached_r3 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(cached_r0), static_cast<uint32_t>(8));
    cached_r0 = (r0_rot_1 & -256);
    cached_r31 = (cached_r31 | cached_r0);
    cached_r3 = cached_r30;
    // inline leaf 0x80091FCC (2 guest instruction(s))
    cached_r3 = MemoryInline::FlatRead8(cached_r3);
    // end of inlined leaf 0x80091FCC
    cached_r0 = (cached_r3 & 255);
    cached_r31 = (cached_r31 | cached_r0);
    cached_r3 = cached_r31;
    cached_r0 = MemoryInline::FlatRead32((cached_r1 + 20));
    native_lr = cached_r0;
    cached_r1 = (cached_r1 + 16);


return { static_cast<uint64_t>(cached_r1), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x80091F4C symbol=func_80091F4C_statefree gpr_in=0x0000000A gpr_out=0x0000000A fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=1


// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80091F4C func_80091F4C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80091F4C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80091F4C(ctx);
    return ctx->gpr[3];
}
