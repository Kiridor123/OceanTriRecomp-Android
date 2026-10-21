#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80455DEC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x80455DECu);
    goto loc_80455DEC;

loc_80455DEC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    // inline leaf 0x80455E30 (2 guest instruction(s))
    r3 = (r3 + 24892);
    // end of inlined leaf 0x80455E30
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80455E08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80455E14;
    }
}

loc_80455E0C:
{
    r3 = (r3 + 8);
    goto loc_80455E20;
}

loc_80455E14:
{
    // inline leaf 0x80376954 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16752));
    // end of inlined leaf 0x80376954
    r4 = 0;
    // inline leaf 0x803FE4A4 (11 guest instruction(s))
}

loc_inl3_0x803FE4A4:
{
}

loc_inl3_0x803FE4A8:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(7))) {
        goto loc_inl3_0x803FE4C8;
    }
}

loc_inl3_0x803FE4AC:
{
    r5 = (r3 + 65536);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead32((r3 + -10740));
    r3 = (r5 + r0);
    r3 = (r3 + -11255);
    goto loc_inl3_cont_803FE4A4;
}

loc_inl3_0x803FE4C8:
{
    r3 = 0;
}

loc_inl3_cont_803FE4A4:
{
    // end of inlined leaf 0x803FE4A4
}

loc_80455E20:
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

extern "C" void func_80455DEC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80455DEC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80455DEC func_80455DEC preserves=true fpr_mask=0x00000000
