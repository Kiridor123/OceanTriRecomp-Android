#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8028BD58_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x8028BD58u);
    goto loc_8028BD58;

loc_8028BD58:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
}

loc_8028BD70:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8028BDA4;
    }
}

loc_8028BD74:
{
    r3 = MemoryInline::FlatRead32((r3 + 312));
}

loc_8028BD7C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8028BD84;
    }
}

loc_8028BD80:
{
    // inline leaf 0x800D8EA8 (5 guest instruction(s))
}

loc_inl0_0x800D8EA8:
{
}

loc_inl0_0x800D8EAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x800D8EB0:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_inl0_cont_800D8EA8;
}

loc_inl0_return:
{
}

loc_inl0_cont_800D8EA8:
{
    // end of inlined leaf 0x800D8EA8
}

loc_8028BD84:
{
    r3 = MemoryInline::FlatRead32((r31 + 316));
}

loc_8028BD8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8028BD94;
    }
}

loc_8028BD90:
{
    // inline leaf 0x800D8EA8 (5 guest instruction(s))
}

loc_inl1_0x800D8EA8:
{
}

loc_inl1_0x800D8EAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x800D8EB0:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_inl1_cont_800D8EA8;
}

loc_inl1_return:
{
}

loc_inl1_cont_800D8EA8:
{
    // end of inlined leaf 0x800D8EA8
}

loc_8028BD94:
{
    r3 = MemoryInline::FlatRead32((r31 + 320));
}

loc_8028BD9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8028BDA4;
    }
}

loc_8028BDA0:
{
    // inline leaf 0x800D8EA8 (5 guest instruction(s))
}

loc_inl2_0x800D8EA8:
{
}

loc_inl2_0x800D8EAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x800D8EB0:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_inl2_cont_800D8EA8;
}

loc_inl2_return:
{
}

loc_inl2_cont_800D8EA8:
{
    // end of inlined leaf 0x800D8EA8
}

loc_8028BDA4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_8028BD58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8028BD58_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8028BD58 func_8028BD58 preserves=true fpr_mask=0x00000000
