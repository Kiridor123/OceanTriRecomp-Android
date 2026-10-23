#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803907DC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803907DC;

loc_803907DC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r3 = MemoryInline::FlatRead16((r3 + 6));
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl0_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl0_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CEF8C;
    }
}

loc_inl0_0x800CEF88:
{
    r0 = 1;
}

loc_inl0_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_0 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl0_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r3));
    r4 = (r3 & 65535);
    r3 = 1374420992;
    r0 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r3 = (r4 - r0);
    r0 = (r31 & 255);
}

loc_80390830:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_8039083C;
    }
}

loc_80390834:
{
    r3 = MemoryInline::FlatRead16((r30 + 86));
    goto loc_80390840;
}

loc_8039083C:
{
    r3 = 0;
}

loc_80390840:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803907DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803907DC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803907DC func_803907DC preserves=true fpr_mask=0x00000000
