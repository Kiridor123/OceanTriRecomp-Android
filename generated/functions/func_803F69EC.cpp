#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803F69EC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];

    MKW_GUEST_ENTER(0x803F69ECu);
    goto loc_803F69EC;

loc_803F69EC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_803F6A00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803F6A20;
    }
}

loc_803F6A04:
{
    r4 = 0x800A0000u;
    r4 = (r4 + 4);
    r5 = 0;
    r6 = 0;
    // inline leaf 0x803F656C (7 guest instruction(s))
}

loc_inl0_0x803F656C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_0x803F6574:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x803F6578:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl0_cont_803F656C;
}

loc_inl0_return:
{
}

loc_inl0_cont_803F656C:
{
    // end of inlined leaf 0x803F656C
    r3 = -1;
    goto loc_803F6A5C;
}

loc_803F6A20:
{
}

loc_803F6A24:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803F6A44;
    }
}

loc_803F6A28:
{
    r4 = 0x800A0000u;
    r4 = (r4 + 3);
    r5 = 0;
    r6 = 0;
    // inline leaf 0x803F656C (7 guest instruction(s))
}

loc_inl1_0x803F656C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_0x803F6574:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x803F6578:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 8), r5);
    MemoryInline::FlatWrite32((r3 + 12), r6);
    goto loc_inl1_cont_803F656C;
}

loc_inl1_return:
{
}

loc_inl1_cont_803F656C:
{
    // end of inlined leaf 0x803F656C
    r3 = -1;
    goto loc_803F6A5C;
}

loc_803F6A44:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 64), r4);
    r3 = 0;
}

loc_803F6A5C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803F69EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803F69EC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803F69EC func_803F69EC preserves=true fpr_mask=0x00000000
