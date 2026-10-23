#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80469CB0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_80469CB0;

loc_80469CB0:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // inline leaf 0x8046AA30 (10 guest instruction(s))
}

loc_inl0_0x8046AA30:
{
}

loc_inl0_0x8046AA34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8046AA38:
{
}

loc_inl0_0x8046AA3C:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(2))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8046AA40:
{
    r0 = (r3 * 2188);
    r3 = 0x806F0000u;
    r4 = 0;
    r3 = (r3 + 31264);
    r3_addr_0 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_0, r4);
    goto loc_inl0_cont_8046AA30;
}

loc_inl0_return:
{
}

loc_inl0_cont_8046AA30:
{
    // end of inlined leaf 0x8046AA30
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80469CB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80469CB0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80469CB0 func_80469CB0 preserves=true fpr_mask=0x00000000
