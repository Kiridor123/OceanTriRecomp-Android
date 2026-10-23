#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A4F24(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];

    goto loc_803A4F24;

loc_803A4F24:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = (r3 + 21104);
    // inline leaf 0x803A4EF4 (12 guest instruction(s))
}

loc_inl0_0x803A4EF4:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_inl0_0x803A4F00:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_inl0_0x803A4F1C;
    }
}

loc_inl0_0x803A4F04:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_inl0_0x803A4F10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x803A4F1C;
    }
}

loc_inl0_0x803A4F14:
{
    r3 = 1;
    goto loc_inl0_cont_803A4EF4;
}

loc_inl0_0x803A4F1C:
{
    r3 = 0;
}

loc_inl0_cont_803A4EF4:
{
    // end of inlined leaf 0x803A4EF4
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    return;
}

}
extern "C" MKW_PPC_NO_INLINE MkwStateFreeResult2 func_803A4F24_statefree(uint32_t native_r13, uint32_t native_xer)
{

    uint32_t cached_r0 = 0;
    uint32_t cached_r3 = 0;
    uint32_t cached_r13 = native_r13;

    uint32_t cr0_0 = 0;

    goto loc_803A4F24;

loc_803A4F24:
{
    cached_r3 = MemoryInline::FlatRead32((cached_r13 + -17824));
    cached_r3 = (cached_r3 + 21104);
    // inline leaf 0x803A4EF4 (12 guest instruction(s))
}

loc_inl0_0x803A4EF4:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 6));
    cached_r0 = (static_cast<int32_t>(static_cast<int8_t>(cached_r0)));
}

loc_inl0_0x803A4F00:
{
    if ((static_cast<int32_t>(cached_r0) > static_cast<int32_t>(0))) {
        goto loc_inl0_0x803A4F1C;
    }
}

loc_inl0_0x803A4F04:
{
    cached_r0 = MemoryInline::FlatRead8((cached_r3 + 1));
    cached_r0 = (static_cast<int32_t>(static_cast<int8_t>(cached_r0)));
}

loc_inl0_0x803A4F10:
{
    if ((static_cast<int32_t>(cached_r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x803A4F1C;
    }
}

loc_inl0_0x803A4F14:
{
    cached_r3 = 1;
    goto loc_inl0_cont_803A4EF4;
}

loc_inl0_0x803A4F1C:
{
    cached_r3 = 0;
}

loc_inl0_cont_803A4EF4:
{
    // end of inlined leaf 0x803A4EF4

    return { static_cast<uint64_t>(cached_r0), static_cast<uint64_t>(cached_r3) };
}

}
// RECOMP_STATE_FREE_ABI address=0x803A4F24 symbol=func_803A4F24_statefree gpr_in=0x00002000 gpr_out=0x00000009 fpr_in=0x00000000 fpr_out=0x00000000 cr_in=0x00 cr_out=0x00 gqr_in=0x00 hid_in=0x00 hid_out=0x00 xer_in=1 ctr_in=0 lr_in=0


// RECOMP_GUEST_ABI gpr_read=0x00002000 gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A4F24 func_803A4F24 preserves=true fpr_mask=0x00000000


extern "C" uint32_t func_803A4F24_ra0_0_8_0(CpuContext* MKW_RESTRICT ctx)
{
    [[clang::noinline]] func_803A4F24(ctx);
    return ctx->gpr[3];
}
