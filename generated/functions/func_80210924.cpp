#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80210924(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x80210924u);
    goto loc_80210924;

loc_80210924:
{
    r3 = (r3 & 65535);
    r0 = (r3 + -381);
}

loc_80210930:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8021095C;
    }
}

loc_80210934:
{
}

loc_80210938:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8021095C;
    }
}

loc_8021093C:
{
}

loc_80210940:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(53))) {
        goto loc_8021095C;
    }
}

loc_80210944:
{
}

loc_80210948:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(223))) {
        goto loc_8021095C;
    }
}

loc_8021094C:
{
}

loc_80210950:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(139))) {
        goto loc_8021095C;
    }
}

loc_80210954:
{
}

loc_80210958:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(395))) {
        goto loc_80210964;
    }
}

loc_8021095C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_80210964:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_80210924_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x80210924u);
    goto loc_80210924;

loc_80210924:
{
    cached_r3 = (cached_r3 & 65535);
    cached_r0 = (cached_r3 + -381);
}

loc_80210930:
{
    if ((static_cast<uint32_t>(cached_r0) <= static_cast<uint32_t>(1))) {
        goto loc_8021095C;
    }
}

loc_80210934:
{
}

loc_80210938:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(0))) {
        goto loc_8021095C;
    }
}

loc_8021093C:
{
}

loc_80210940:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(53))) {
        goto loc_8021095C;
    }
}

loc_80210944:
{
}

loc_80210948:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(223))) {
        goto loc_8021095C;
    }
}

loc_8021094C:
{
}

loc_80210950:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(139))) {
        goto loc_8021095C;
    }
}

loc_80210954:
{
}

loc_80210958:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(395))) {
        goto loc_80210964;
    }
}

loc_8021095C:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}

loc_80210964:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80210924 symbol=func_80210924_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_80210924_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x80210924u);
    goto loc_80210924;

loc_80210924:
{
    cached_r3 = (cached_r3 & 65535);
    cached_r0 = (cached_r3 + -381);
}

loc_80210930:
{
    if ((static_cast<uint32_t>(cached_r0) <= static_cast<uint32_t>(1))) {
        goto loc_8021095C;
    }
}

loc_80210934:
{
}

loc_80210938:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(0))) {
        goto loc_8021095C;
    }
}

loc_8021093C:
{
}

loc_80210940:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(53))) {
        goto loc_8021095C;
    }
}

loc_80210944:
{
}

loc_80210948:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(223))) {
        goto loc_8021095C;
    }
}

loc_8021094C:
{
}

loc_80210950:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(139))) {
        goto loc_8021095C;
    }
}

loc_80210954:
{
}

loc_80210958:
{
    if ((static_cast<int32_t>(cached_r3) != static_cast<int32_t>(395))) {
        goto loc_80210964;
    }
}

loc_8021095C:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}

loc_80210964:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x80210924 symbol=func_80210924_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80210924 func_80210924 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_80210924_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_80210924(ctx);
    return ctx->gpr[3];
}
