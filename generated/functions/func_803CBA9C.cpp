#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_803CBA9C_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x803CBA9Cu);
    goto loc_803CBA9C;

loc_803CBA9C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 4128));
}

loc_803CBABC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803CBAC8;
    }
}

loc_803CBAC0:
{
    r3 = 0;
    goto loc_803CBAE8;
}

loc_803CBAC8:
{
    r0 = MemoryInline::FlatRead32((r3 + 4124));
    r31 = (1024 - r0);
    // inline leaf 0x803CC078 (7 guest instruction(s))
}

loc_inl0_0x803CC078:
{
    r0 = MemoryInline::FlatRead8((r3 + 8776));
}

loc_inl0_0x803CC080:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x803CC08C;
    }
}

loc_inl0_0x803CC084:
{
    r3 = MemoryInline::FlatRead32((r3 + 8772));
    goto loc_inl0_cont_803CC078;
}

loc_inl0_0x803CC08C:
{
    r3 = 512;
}

loc_inl0_cont_803CC078:
{
    // end of inlined leaf 0x803CC078
    r0 = MemoryInline::FlatRead32((r30 + 4124));
    r3 = (r3 - r0);
}

loc_803CBAE0:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(r3))) {
        goto loc_803CBAE8;
    }
}

loc_803CBAE4:
{
    r3 = r31;
}

loc_803CBAE8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_803CBA9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803CBA9C_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803CBA9C func_803CBA9C preserves=true fpr_mask=0x00000000
