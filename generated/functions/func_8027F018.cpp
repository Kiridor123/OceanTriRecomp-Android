#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027F018(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_8027F018;

loc_8027F018:
{
    r0 = (r3 & 255);
}

loc_8027F020:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(12))) {
        goto loc_8027F038;
    }
}

loc_8027F024:
{
}

loc_8027F028:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_8027F04C;
    }
}

loc_8027F02C:
{
}

loc_8027F030:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_8027F05C;
    }
}

loc_8027F034:
{
    goto loc_8027F064;
}

loc_8027F038:
{
}

loc_8027F03C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(16))) {
        goto loc_8027F064;
    }
}

loc_8027F040:
{
}

loc_8027F044:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(14))) {
        goto loc_8027F04C;
    }
}

loc_8027F048:
{
    goto loc_8027F054;
}

loc_8027F04C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8027F054:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8027F05C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8027F064:
{
    r3 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_8027F018_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    goto loc_8027F018;

loc_8027F018:
{
    cached_r0 = (cached_r3 & 255);
}

loc_8027F020:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(12))) {
        goto loc_8027F038;
    }
}

loc_8027F024:
{
}

loc_8027F028:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(7))) {
        goto loc_8027F04C;
    }
}

loc_8027F02C:
{
}

loc_8027F030:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(1))) {
        goto loc_8027F05C;
    }
}

loc_8027F034:
{
    goto loc_8027F064;
}

loc_8027F038:
{
}

loc_8027F03C:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(16))) {
        goto loc_8027F064;
    }
}

loc_8027F040:
{
}

loc_8027F044:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(14))) {
        goto loc_8027F04C;
    }
}

loc_8027F048:
{
    goto loc_8027F054;
}

loc_8027F04C:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_8027F054:
{
    cached_r3 = 2;

    return static_cast<uint64_t>(cached_r3);
}

loc_8027F05C:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}

loc_8027F064:
{
    cached_r3 = 255;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x8027F018 symbol=func_8027F018_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_8027F018_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    goto loc_8027F018;

loc_8027F018:
{
    cached_r0 = (cached_r3 & 255);
}

loc_8027F020:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(12))) {
        goto loc_8027F038;
    }
}

loc_8027F024:
{
}

loc_8027F028:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(7))) {
        goto loc_8027F04C;
    }
}

loc_8027F02C:
{
}

loc_8027F030:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(1))) {
        goto loc_8027F05C;
    }
}

loc_8027F034:
{
    goto loc_8027F064;
}

loc_8027F038:
{
}

loc_8027F03C:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(16))) {
        goto loc_8027F064;
    }
}

loc_8027F040:
{
}

loc_8027F044:
{
    if ((static_cast<int32_t>(cached_r0) >= static_cast<int32_t>(14))) {
        goto loc_8027F04C;
    }
}

loc_8027F048:
{
    goto loc_8027F054;
}

loc_8027F04C:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_8027F054:
{
    cached_r3 = 2;

    return static_cast<uint64_t>(cached_r3);
}

loc_8027F05C:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}

loc_8027F064:
{
    cached_r3 = 255;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x8027F018 symbol=func_8027F018_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027F018 func_8027F018 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8027F018_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8027F018(ctx);
    return ctx->gpr[3];
}
