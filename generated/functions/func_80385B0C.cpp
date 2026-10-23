#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80385B0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];

    goto loc_80385B0C;

loc_80385B0C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 361), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 362), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 363), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 413));
    MemoryInline::FlatWrite8((r3 + 414), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 415));
    MemoryInline::FlatWrite8((r3 + 416), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 413), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 415), static_cast<uint8_t>(r5));
}

loc_80385D04:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 246), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE uint64_t func_80385B0C_statefree(uint32_t native_r3, uint32_t native_r4, uint32_t native_r5)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;
    uint32_t cached_r4 = native_r4;
    uint32_t cached_r5 = native_r5;

    goto loc_80385B0C;

loc_80385B0C:
{
    cached_r0 = 0;
    MemoryInline::FlatWrite8((cached_r3 + 361), static_cast<uint8_t>(cached_r0));
    MemoryInline::FlatWrite8((cached_r3 + 362), static_cast<uint8_t>(cached_r0));
    MemoryInline::FlatWrite8((cached_r3 + 363), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 413));
    MemoryInline::FlatWrite8((cached_r3 + 414), static_cast<uint8_t>(cached_r0));
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 415));
    MemoryInline::FlatWrite8((cached_r3 + 416), static_cast<uint8_t>(cached_r0));
    MemoryInline::FlatWrite8((cached_r3 + 413), static_cast<uint8_t>(cached_r4));
    MemoryInline::FlatWrite8((cached_r3 + 415), static_cast<uint8_t>(cached_r5));
}

loc_80385D04:
{
    cached_r0 = 0;
    MemoryInline::FlatWrite8((cached_r3 + 246), static_cast<uint8_t>(cached_r0));
return static_cast<uint64_t>(cached_r0);
}


    return static_cast<uint64_t>(cached_r0);
}
// RECOMP_STATE_FREE_ABI address=0x80385B0C symbol=func_80385B0C_statefree gpr_in=0x00000038 gpr_out=0x00000001 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=0 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000001 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80385B0C func_80385B0C preserves=true fpr_mask=0x00000000


extern "C" void func_80385B0C_ra38_0_0_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    ctx->gpr[3] = arg_r3;
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    [[clang::noinline]] func_80385B0C(ctx);
}
