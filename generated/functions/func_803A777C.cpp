#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A777C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];

    goto loc_803A777C;

loc_803A777C:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = (r3 + 204);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803A7790:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A7794:
{
    r3 = (r3 + 12);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803A77A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77A4:
{
    r3 = (r3 + 12);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803A77B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77B4:
{
    r3 = (r3 + 12);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803A77C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77C4:
{
    r3 = (r3 + 12);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803A77D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77D4:
{
    r3 = (r3 + 12);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803A77E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77E4:
{
    r3 = (r3 + 12);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803A77F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77F4:
{
    r3 = (r3 + 12);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803A7800:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A7804:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_ALWAYS_INLINE_BODY MkwStateFreeResult2 func_803A777C_statefree_v0(uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;

    goto loc_803A777C;

loc_803A777C:
{
    cached_r3 = 0x806B0000u;
    cached_r3 = (cached_r3 + -12348);
    cached_r3 = (cached_r3 + 204);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A7790:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A7794:
{
    cached_r3 = (cached_r3 + 12);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A77A0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77A4:
{
    cached_r3 = (cached_r3 + 12);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A77B0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77B4:
{
    cached_r3 = (cached_r3 + 12);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A77C0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77C4:
{
    cached_r3 = (cached_r3 + 12);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A77D0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77D4:
{
    cached_r3 = (cached_r3 + 12);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A77E0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77E4:
{
    cached_r3 = (cached_r3 + 12);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A77F0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77F4:
{
    cached_r3 = (cached_r3 + 12);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A7800:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A7804:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_return:
{

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x803A777C symbol=func_803A777C_statefree_v0 gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0

extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_803A777C_statefree(uint32_t native_cr, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;

    uint32_t cr0_0 = 0;

    goto loc_803A777C;

loc_803A777C:
{
    cached_r3 = 0x806B0000u;
    cached_r3 = (cached_r3 + -12348);
    cached_r3 = (cached_r3 + 204);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A7790:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A7794:
{
    cached_r3 = (cached_r3 + 12);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A77A0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77A4:
{
    cached_r3 = (cached_r3 + 12);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A77B0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77B4:
{
    cached_r3 = (cached_r3 + 12);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A77C0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77C4:
{
    cached_r3 = (cached_r3 + 12);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A77D0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77D4:
{
    cached_r3 = (cached_r3 + 12);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A77E0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77E4:
{
    cached_r3 = (cached_r3 + 12);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A77F0:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A77F4:
{
    cached_r3 = (cached_r3 + 12);
    cached_r0 = MemoryInline::FlatRead8(cached_r3);
}

loc_803A7800:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_803A7804:
{
    cached_r3 = 0;

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

loc_return:
{

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x803A777C symbol=func_803A777C_statefree gpr_in=0x00000000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x01 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00000009 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A777C func_803A777C preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_803A777C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    ctx->gpr[3] = arg_r3;
    [[clang::noinline]] func_803A777C(ctx);
    return ctx->gpr[3];
}
