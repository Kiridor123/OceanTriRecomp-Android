#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E048(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_8027E048;

loc_8027E048:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_8027E050:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027E060;
    }
}

loc_8027E054:
{
}

loc_8027E058:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_8027E090;
    }
}

loc_8027E05C:
{
    goto loc_8027E0A4;
}

loc_8027E060:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_8027E068:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(171))) {
        goto loc_8027E080;
    }
}

loc_8027E06C:
{
}

loc_8027E070:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(174))) {
        goto loc_8027E080;
    }
}

loc_8027E074:
{
}

loc_8027E078:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(167))) {
        goto loc_8027E088;
    }
}

loc_8027E07C:
{
    goto loc_8027E0A4;
}

loc_8027E080:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8027E088:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8027E090:
{
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_8027E098:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_8027E0A4;
    }
}

loc_8027E09C:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8027E0A4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_8027E048_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    goto loc_8027E048;

loc_8027E048:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 10));
}

loc_8027E050:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_8027E060;
    }
}

loc_8027E054:
{
}

loc_8027E058:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(12))) {
        goto loc_8027E090;
    }
}

loc_8027E05C:
{
    goto loc_8027E0A4;
}

loc_8027E060:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 12));
}

loc_8027E068:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(171))) {
        goto loc_8027E080;
    }
}

loc_8027E06C:
{
}

loc_8027E070:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(174))) {
        goto loc_8027E080;
    }
}

loc_8027E074:
{
}

loc_8027E078:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(167))) {
        goto loc_8027E088;
    }
}

loc_8027E07C:
{
    goto loc_8027E0A4;
}

loc_8027E080:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_8027E088:
{
    cached_r3 = 3;

    return static_cast<uint64_t>(cached_r3);
}

loc_8027E090:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 12));
}

loc_8027E098:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(12))) {
        goto loc_8027E0A4;
    }
}

loc_8027E09C:
{
    cached_r3 = 2;

    return static_cast<uint64_t>(cached_r3);
}

loc_8027E0A4:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x8027E048 symbol=func_8027E048_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_8027E048_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    goto loc_8027E048;

loc_8027E048:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 10));
}

loc_8027E050:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_8027E060;
    }
}

loc_8027E054:
{
}

loc_8027E058:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(12))) {
        goto loc_8027E090;
    }
}

loc_8027E05C:
{
    goto loc_8027E0A4;
}

loc_8027E060:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 12));
}

loc_8027E068:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(171))) {
        goto loc_8027E080;
    }
}

loc_8027E06C:
{
}

loc_8027E070:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(174))) {
        goto loc_8027E080;
    }
}

loc_8027E074:
{
}

loc_8027E078:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(167))) {
        goto loc_8027E088;
    }
}

loc_8027E07C:
{
    goto loc_8027E0A4;
}

loc_8027E080:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_8027E088:
{
    cached_r3 = 3;

    return static_cast<uint64_t>(cached_r3);
}

loc_8027E090:
{
    cached_r0 = MemoryInline::FlatRead16((cached_r3 + 12));
}

loc_8027E098:
{
    if ((static_cast<int32_t>(cached_r0) != static_cast<int32_t>(12))) {
        goto loc_8027E0A4;
    }
}

loc_8027E09C:
{
    cached_r3 = 2;

    return static_cast<uint64_t>(cached_r3);
}

loc_8027E0A4:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x8027E048 symbol=func_8027E048_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027E048 func_8027E048 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8027E048_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8027E048(ctx);
    return ctx->gpr[3];
}
