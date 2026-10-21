#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005854C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x8005854Cu);
    goto loc_8005854C;

loc_8005854C:
{
    r4 = 0x80670000u;
    r4 = (r4 + -11912);
    r4 = (r4 + 288);
    // inline leaf 0x80040410 (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteFloat32((r3 + 4), f0.d);
    // end of inlined leaf 0x80040410
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE void func_8005854C_statefree(uint32_t native_r3)
{

    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    PPC_FPR cached_f0 = PPC_FPR{};

    MKW_GUEST_ENTER(0x8005854Cu);
    goto loc_8005854C;

loc_8005854C:
{
    cached_r4 = 0x80670000u;
    cached_r4 = (cached_r4 + -11912);
    cached_r4 = (cached_r4 + 288);
    // inline leaf 0x80040410 (5 guest instruction(s))
    cached_f0.d = MemoryInline::FlatReadFloat32(cached_r4);
    MemoryInline::FlatWriteFloat32(cached_r3, cached_f0.d);
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r4 + 4));
    MemoryInline::FlatWriteFloat32((cached_r3 + 4), cached_f0.d);
    // end of inlined leaf 0x80040410
return;
}

}
// RECOMP_STATE_FREE_ABI address=0x8005854C symbol=func_8005854C_statefree gpr_in=0x00000008 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005854C func_8005854C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8005854C_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8005854C(ctx);
    return ctx->gpr[4];
}
