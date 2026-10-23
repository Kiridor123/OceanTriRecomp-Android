#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80346A94_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80346A94;

loc_80346A94:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 6300;
    r3 = MemoryInline::FlatRead8((r3 + 19));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl0_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl0_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802B06E4:
{
    r3 = r0;
    goto loc_inl0_cont_802B06CC;
}

loc_inl0_return:
{
}

loc_inl0_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_80346AC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80346AD4;
    }
}

loc_80346AC4:
{
    r0 = MemoryInline::FlatRead8((r30 + 20));
}

loc_80346ACC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80346AD4;
    }
}

loc_80346AD0:
{
    r31 = 3600;
}

loc_80346AD4:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_80346A94(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80346A94_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000000B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80346A94 func_80346A94 preserves=true fpr_mask=0x00000000
