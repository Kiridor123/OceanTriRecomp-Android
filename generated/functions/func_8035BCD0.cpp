#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8035BCD0_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8035BCD0;

loc_8035BCD0:
{
    r3 = MemoryInline::FlatRead8((r3 + 827));
    // inline leaf 0x803BDF30 (16 guest instruction(s))
}

loc_inl0_0x803BDF30:
{
    r4 = MemoryInline::FlatRead32((r13 + -16840));
    r0 = MemoryInline::FlatRead32((r4 + 32));
}

loc_inl0_0x803BDF3C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_inl0_0x803BDF48;
    }
}

loc_inl0_0x803BDF40:
{
    r3 = 0;
    goto loc_inl0_cont_803BDF30;
}

loc_inl0_0x803BDF48:
{
    r4 = MemoryInline::FlatRead32((r4 + 28));
    r0 = (r3 * 548);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_inl0_0x803BDF5C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl0_0x803BDF68;
    }
}

loc_inl0_0x803BDF60:
{
    r3 = r4;
    goto loc_inl0_cont_803BDF30;
}

loc_inl0_0x803BDF68:
{
    r3 = 0;
}

loc_inl0_cont_803BDF30:
{
    // end of inlined leaf 0x803BDF30
}

loc_8035BCDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8035BD54;
    }
}

loc_8035BCE0:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_8035BCE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8035BD18;
    }
}

loc_8035BCEC:
{
}

loc_8035BCF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8035BD24;
    }
}

loc_8035BCF4:
{
}

loc_8035BCF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(15))) {
        goto loc_8035BD30;
    }
}

loc_8035BCFC:
{
}

loc_8035BD00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8035BD3C;
    }
}

loc_8035BD04:
{
}

loc_8035BD08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8035BD3C;
    }
}

loc_8035BD0C:
{
}

loc_8035BD10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(14))) {
        goto loc_8035BD3C;
    }
}

loc_8035BD14:
{
    goto loc_8035BD48;
}

loc_8035BD18:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 826), static_cast<uint8_t>(r0));
    goto loc_8035BFB4;
}

loc_8035BD24:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 826), static_cast<uint8_t>(r0));
    goto loc_8035BFB4;
}

loc_8035BD30:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 826), static_cast<uint8_t>(r0));
    goto loc_8035BFB4;
}

loc_8035BD3C:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 826), static_cast<uint8_t>(r0));
    goto loc_8035BFB4;
}

loc_8035BD48:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 826), static_cast<uint8_t>(r0));
    goto loc_8035BFB4;
}

loc_8035BD54:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 826), static_cast<uint8_t>(r0));
}

loc_8035BFB4:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    return r3;
}

}

extern "C" void func_8035BCD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8035BCD0_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x8000200B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8035BCD0 func_8035BCD0 preserves=true fpr_mask=0x00000000
