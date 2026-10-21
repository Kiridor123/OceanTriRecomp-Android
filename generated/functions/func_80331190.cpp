#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80331190_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;

    MKW_GUEST_ENTER(0x80331190u);
    goto loc_80331190;

loc_80331190:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r3 + 10));
}

loc_803311A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_803311B4;
    }
}

loc_803311A8:
{
    r0 = MemoryInline::FlatRead16((r3 + 880));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803311B0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803311BC;
    }
}

loc_803311B4:
{
    r3 = 0;
    goto loc_803311F4;
}

loc_803311BC:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_803311C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_803311D0;
    }
}

loc_803311C8:
{
    r3 = 0;
    goto loc_803311F4;
}

loc_803311D0:
{
    r0 = MemoryInline::FlatRead8((r3 + 24));
}

loc_803311D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803311E8;
    }
}

loc_803311DC:
{
    // inline leaf 0x80331168 (10 guest instruction(s))
}

loc_inl0_0x80331168:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_inl0_0x80331170:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(8))) {
        goto loc_inl0_0x80331188;
    }
}

loc_inl0_0x80331174:
{
    r0 = MemoryInline::FlatRead8((r3 + 1478));
}

loc_inl0_0x8033117C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x80331188;
    }
}

loc_inl0_0x80331180:
{
    r3 = 1;
    goto loc_inl0_cont_80331168;
}

loc_inl0_0x80331188:
{
    r3 = 0;
}

loc_inl0_cont_80331168:
{
    // end of inlined leaf 0x80331168
}

loc_803311E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803311F0;
    }
}

loc_803311E8:
{
    r3 = 1;
    goto loc_803311F4;
}

loc_803311F0:
{
    r3 = 0;
}

loc_803311F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80331190(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80331190_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80331190 func_80331190 preserves=true fpr_mask=0x00000000
