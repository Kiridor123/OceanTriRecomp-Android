#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8019267C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];

    MKW_GUEST_ENTER(0x8019267Cu);
    goto loc_8019267C;

loc_8019267C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22620));
    MemoryInline::FlatWriteFloat32((r3 + 848), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22616));
    MemoryInline::FlatWriteFloat32((r3 + 852), f0.d);
    r4 = 1;
    // inline leaf 0x801923AC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 861));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite8((r3 + 861), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801923AC
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_8019267C_statefree(uint32_t native_r2, uint32_t native_r3, PPC_FPR native_f0)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r2 = native_r2;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = 0;
    PPC_FPR cached_f0 = PPC_FPR{};

    MKW_GUEST_ENTER(0x8019267Cu);
    goto loc_8019267C;

loc_8019267C:
{
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r2 + -22620));
    MemoryInline::FlatWriteFloat32((cached_r3 + 848), cached_f0.d);
    cached_f0.d = MemoryInline::FlatReadFloat32((cached_r2 + -22616));
    MemoryInline::FlatWriteFloat32((cached_r3 + 852), cached_f0.d);
    cached_r4 = 1;
    // inline leaf 0x801923AC (4 guest instruction(s))
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 861));
    cached_r0 = (cached_r0 | cached_r4);
    MemoryInline::FlatWrite8((cached_r3 + 861), static_cast<uint8_t>(cached_r0));
    // end of inlined leaf 0x801923AC

return { static_cast<uint64_t>(cached_r4), cached_f0.raw };
}

}
// RECOMP_STATE_FREE_ABI address=0x8019267C symbol=func_8019267C_statefree gpr_in=0x0000000C gpr_out=0x00000010 fpr_in=0x00000000 fpr_out=0x00000001 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x0000000C gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8019267C func_8019267C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8019267C_ra8_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8019267C(ctx);
    return ctx->gpr[4];
}
