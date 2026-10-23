#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803BE9F8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_803BE9F8;

loc_803BE9F8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0 = MemoryInline::FlatRead8((r4 + 2224));
}

loc_803BEA1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BEA28;
    }
}

loc_803BEA20:
{
    r3 = 0;
    goto loc_803BEA78;
}

loc_803BEA28:
{
    r3 = (r3 & 255);
    // inline leaf 0x8004D1B0 (12 guest instruction(s))
}

loc_inl0_0x8004D1B0:
{
}

loc_inl0_0x8004D1B4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004D1C0;
    }
}

loc_inl0_0x8004D1B8:
{
    r3 = 0;
    goto loc_inl0_cont_8004D1B0;
}

loc_inl0_0x8004D1C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_inl0_0x8004D1C4:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & -256);
    r3 = 0x80670000u;
    r0 = (r3 + -13664);
    r3 = (r0 + r4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8004D1D8:
{
    r3 = 0;
    goto loc_inl0_cont_8004D1B0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8004D1B0:
{
    // end of inlined leaf 0x8004D1B0
}

loc_803BEA34:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803BEA40;
    }
}

loc_803BEA38:
{
    r3 = 0;
    goto loc_803BEA78;
}

loc_803BEA40:
{
    r0 = (r31 & 255);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 208));
    r4 = 0x80600000u;
    r4 = (r4 + -29464);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
}

loc_803BEA5C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_803BEA64;
    }
}

loc_803BEA60:
{
    r3 = r0;
}

loc_803BEA64:
{
    r0 = (r31 & 255);
}

loc_803BEA6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_803BEA78;
    }
}

loc_803BEA70:
{
    r0 = (r3 ^ 1);
    r3 = (r0 & 255);
}

loc_803BEA78:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BE9F8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BE9F8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BE9F8 func_803BE9F8 preserves=true fpr_mask=0x00000000
