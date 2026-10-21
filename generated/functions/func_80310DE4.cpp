#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80310DE4_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80310DE4u);
    goto loc_80310DE4;

loc_80310DE4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r3 = (r3 & 65535);
    // inline leaf 0x8029F718 (10 guest instruction(s))
}

loc_inl0_0x8029F718:
{
    r0 = (r3 & 65535);
}

loc_inl0_0x8029F720:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(132))) {
        goto loc_inl0_0x8029F728;
    }
}

loc_inl0_0x8029F724:
{
    r3 = 0;
}

loc_inl0_0x8029F728:
{
    r0 = (r3 & 65535);
    r4 = (r0 * 12);
    r3 = 0x805E0000u;
    r0 = (r3 + -14472);
    r3 = (r0 + r4);
}

loc_inl0_cont_8029F718:
{
    // end of inlined leaf 0x8029F718
    r4 = 0;
}

loc_80310E08:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80310E14;
    }
}

loc_80310E0C:
{
    r3 = 0;
    goto loc_80310E64;
}

loc_80310E14:
{
    r0 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80310E1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80310E3C;
    }
}

loc_80310E20:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_80310E28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80310E38;
    }
}

loc_80310E2C:
{
    r0 = MemoryInline::FlatRead8((r3 + 9));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_80310E64;
}

loc_80310E38:
{
    r4 = 1;
}

loc_80310E3C:
{
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_80310E44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80310E60;
    }
}

loc_80310E48:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_80310E50:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(r0))) {
        goto loc_80310E60;
    }
}

loc_80310E54:
{
    r0 = MemoryInline::FlatRead8((r3 + 11));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    goto loc_80310E64;
}

loc_80310E60:
{
    r3 = 0;
}

loc_80310E64:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80310DE4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80310DE4_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80310DE4 func_80310DE4 preserves=true fpr_mask=0x00000000
