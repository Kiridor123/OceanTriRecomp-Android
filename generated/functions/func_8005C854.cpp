#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_8005C854_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];

    MKW_GUEST_ENTER(0x8005C854u);
    goto loc_8005C854;

loc_8005C854:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8005C85C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(16))) {
        goto loc_return;
    }
}

loc_8005C860:
{
    // inline leaf 0x8005B804 (14 guest instruction(s))
}

loc_inl0_0x8005B804:
{
    r4 = MemoryInline::FlatRead32((r13 + -17736));
}

loc_inl0_0x8005B80C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8005B810:
{
}

loc_inl0_0x8005B814:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8005B818:
{
}

loc_inl0_0x8005B81C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(16))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8005B820:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x80590000u;
    r3 = (r3 + -17520);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = (r4 + 65536);
    MemoryInline::FlatWrite32((r3 + 20600), r0);
    goto loc_inl0_cont_8005B804;
}

loc_inl0_return:
{
}

loc_inl0_cont_8005B804:
{
    // end of inlined leaf 0x8005B804
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    return r3;
}

}

extern "C" void func_8005C854(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_8005C854_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00002009 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005C854 func_8005C854 preserves=true fpr_mask=0x00000000
