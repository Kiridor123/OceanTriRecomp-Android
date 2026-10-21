#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012E0A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    MKW_GUEST_ENTER(0x8012E0A4u);
    goto loc_8012E0A4;

loc_8012E0A4:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_8012E0AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_8012E0BC;
    }
}

loc_8012E0B0:
{
}

loc_8012E0B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_8012E0FC;
    }
}

loc_8012E0B8:
{
    goto loc_8012E134;
}

loc_8012E0BC:
{
    r3 = MemoryInline::FlatRead8((r3 + 486));
    r0 = (r3 + -230);
}

loc_8012E0C8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8012E0EC;
    }
}

loc_8012E0CC:
{
    r0 = (r3 + -236);
}

loc_8012E0D4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8012E0F4;
    }
}

loc_8012E0D8:
{
}

loc_8012E0DC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(228))) {
        goto loc_8012E0EC;
    }
}

loc_8012E0E0:
{
}

loc_8012E0E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(234))) {
        goto loc_8012E0F4;
    }
}

loc_8012E0E8:
{
    goto loc_8012E134;
}

loc_8012E0EC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8012E0F4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8012E0FC:
{
    r0 = MemoryInline::FlatRead8((r3 + 486));
}

loc_8012E104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(52))) {
        goto loc_8012E124;
    }
}

loc_8012E108:
{
}

loc_8012E10C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(54))) {
        goto loc_8012E124;
    }
}

loc_8012E110:
{
}

loc_8012E114:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(53))) {
        goto loc_8012E12C;
    }
}

loc_8012E118:
{
}

loc_8012E11C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(55))) {
        goto loc_8012E12C;
    }
}

loc_8012E120:
{
    goto loc_8012E134;
}

loc_8012E124:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8012E12C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_8012E134:
{
    r3 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY uint64_t func_8012E0A4_statefree_v0(uint32_t native_r3, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x8012E0A4u);
    goto loc_8012E0A4;

loc_8012E0A4:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 485));
}

loc_8012E0AC:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(10))) {
        goto loc_8012E0BC;
    }
}

loc_8012E0B0:
{
}

loc_8012E0B4:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(11))) {
        goto loc_8012E0FC;
    }
}

loc_8012E0B8:
{
    goto loc_8012E134;
}

loc_8012E0BC:
{
    cached_r3 = MemoryInline::FlatRead8((cached_r3 + 486));
    cached_r0 = (cached_r3 + -230);
}

loc_8012E0C8:
{
    if ((static_cast<uint32_t>(cached_r0) <= static_cast<uint32_t>(3))) {
        goto loc_8012E0EC;
    }
}

loc_8012E0CC:
{
    cached_r0 = (cached_r3 + -236);
}

loc_8012E0D4:
{
    if ((static_cast<uint32_t>(cached_r0) <= static_cast<uint32_t>(3))) {
        goto loc_8012E0F4;
    }
}

loc_8012E0D8:
{
}

loc_8012E0DC:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(228))) {
        goto loc_8012E0EC;
    }
}

loc_8012E0E0:
{
}

loc_8012E0E4:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(234))) {
        goto loc_8012E0F4;
    }
}

loc_8012E0E8:
{
    goto loc_8012E134;
}

loc_8012E0EC:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}

loc_8012E0F4:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_8012E0FC:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 486));
}

loc_8012E104:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(52))) {
        goto loc_8012E124;
    }
}

loc_8012E108:
{
}

loc_8012E10C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(54))) {
        goto loc_8012E124;
    }
}

loc_8012E110:
{
}

loc_8012E114:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(53))) {
        goto loc_8012E12C;
    }
}

loc_8012E118:
{
}

loc_8012E11C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(55))) {
        goto loc_8012E12C;
    }
}

loc_8012E120:
{
    goto loc_8012E134;
}

loc_8012E124:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}

loc_8012E12C:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_8012E134:
{
    cached_r3 = 255;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x8012E0A4 symbol=func_8012E0A4_statefree_v0 gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE uint64_t func_8012E0A4_statefree(uint32_t native_r3, uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = native_r3;

    uint32_t cr0_0 = 0;

    MKW_GUEST_ENTER(0x8012E0A4u);
    goto loc_8012E0A4;

loc_8012E0A4:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 485));
}

loc_8012E0AC:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(10))) {
        goto loc_8012E0BC;
    }
}

loc_8012E0B0:
{
}

loc_8012E0B4:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(11))) {
        goto loc_8012E0FC;
    }
}

loc_8012E0B8:
{
    goto loc_8012E134;
}

loc_8012E0BC:
{
    cached_r3 = MemoryInline::FlatRead8((cached_r3 + 486));
    cached_r0 = (cached_r3 + -230);
}

loc_8012E0C8:
{
    if ((static_cast<uint32_t>(cached_r0) <= static_cast<uint32_t>(3))) {
        goto loc_8012E0EC;
    }
}

loc_8012E0CC:
{
    cached_r0 = (cached_r3 + -236);
}

loc_8012E0D4:
{
    if ((static_cast<uint32_t>(cached_r0) <= static_cast<uint32_t>(3))) {
        goto loc_8012E0F4;
    }
}

loc_8012E0D8:
{
}

loc_8012E0DC:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(228))) {
        goto loc_8012E0EC;
    }
}

loc_8012E0E0:
{
}

loc_8012E0E4:
{
    if ((static_cast<int32_t>(cached_r3) == static_cast<int32_t>(234))) {
        goto loc_8012E0F4;
    }
}

loc_8012E0E8:
{
    goto loc_8012E134;
}

loc_8012E0EC:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}

loc_8012E0F4:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_8012E0FC:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 486));
}

loc_8012E104:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(52))) {
        goto loc_8012E124;
    }
}

loc_8012E108:
{
}

loc_8012E10C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(54))) {
        goto loc_8012E124;
    }
}

loc_8012E110:
{
}

loc_8012E114:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(53))) {
        goto loc_8012E12C;
    }
}

loc_8012E118:
{
}

loc_8012E11C:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(55))) {
        goto loc_8012E12C;
    }
}

loc_8012E120:
{
    goto loc_8012E134;
}

loc_8012E124:
{
    cached_r3 = 0;

    return static_cast<uint64_t>(cached_r3);
}

loc_8012E12C:
{
    cached_r3 = 1;

    return static_cast<uint64_t>(cached_r3);
}

loc_8012E134:
{
    cached_r3 = 255;

    return static_cast<uint64_t>(cached_r3);
}


    return static_cast<uint64_t>(cached_r3);
}
// RECOMP_STATE_FREE_ABI address=0x8012E0A4 symbol=func_8012E0A4_statefree gpr_in=0x00000008 gpr_out=0x00000008 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012E0A4 func_8012E0A4 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_8012E0A4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_8012E0A4(ctx);
    return ctx->gpr[3];
}
