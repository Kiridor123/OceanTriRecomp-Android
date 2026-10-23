#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D21B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_800D21B0;

loc_800D21B0:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead8((r3 + 2155));
}

loc_800D21C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800D21D0;
    }
}

loc_800D21C4:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 2160), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_800D21D0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r3 + 2160), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_800D21B0_statefree_v0(uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;

    goto loc_800D21B0;

loc_800D21B0:
{
    cached_r3 = 0x80660000u;
    cached_r3 = (cached_r3 + -21920);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 2155));
}

loc_800D21C0:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(1))) {
        goto loc_800D21D0;
    }
}

loc_800D21C4:
{
    cached_r0 = 1;
    MemoryInline::FlatWriteRam8((cached_r3 + 2160), static_cast<uint8_t>(cached_r0));

    return static_cast<uint64_t>(native_cr);
}

loc_800D21D0:
{
    cached_r0 = 0;
    MemoryInline::FlatWriteRam8((cached_r3 + 2160), static_cast<uint8_t>(cached_r0));

    return static_cast<uint64_t>(native_cr);
}


    return static_cast<uint64_t>(native_cr);
}
// RECOMP_STATE_FREE_ABI address=0x800D21B0 symbol=func_800D21B0_statefree_v0 gpr_in=0x00000000 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_800D21B0_statefree(uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;

    goto loc_800D21B0;

loc_800D21B0:
{
    cached_r3 = 0x80660000u;
    cached_r3 = (cached_r3 + -21920);
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 2155));
}

loc_800D21C0:
{
    if ((static_cast<uint32_t>(cached_r0) != static_cast<uint32_t>(1))) {
        goto loc_800D21D0;
    }
}

loc_800D21C4:
{
    cached_r0 = 1;
    MemoryInline::FlatWriteRam8((cached_r3 + 2160), static_cast<uint8_t>(cached_r0));

    return static_cast<uint64_t>(native_cr);
}

loc_800D21D0:
{
    cached_r0 = 0;
    MemoryInline::FlatWriteRam8((cached_r3 + 2160), static_cast<uint8_t>(cached_r0));

    return static_cast<uint64_t>(native_cr);
}


    return static_cast<uint64_t>(native_cr);
}
// RECOMP_STATE_FREE_ABI address=0x800D21B0 symbol=func_800D21B0_statefree gpr_in=0x00000000 gpr_out=0x00000000 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x01 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D21B0 func_800D21B0 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_800D21B0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_800D21B0(ctx);
    return ctx->gpr[3];
}
