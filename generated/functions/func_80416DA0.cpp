#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80416DA0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];

    goto loc_80416DA0;

loc_80416DA0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x803E24E0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16608));
    // end of inlined leaf 0x803E24E0
}

loc_80416DB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80416DC0;
    }
}

loc_80416DB8:
{
    // inline leaf 0x803E24E0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16608));
    // end of inlined leaf 0x803E24E0
    // inline leaf 0x80447E60 (11 guest instruction(s))
}

loc_inl2_0x80447E60:
{
    r0 = MemoryInline::FlatRead8((r3 + 13));
}

loc_inl2_0x80447E68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80447E6C:
{
    r4 = 1;
    MemoryInline::FlatWrite32((r3 + 216), r4);
    MemoryInline::FlatWrite32((r3 + 220), r4);
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 224), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 15), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    goto loc_inl2_cont_80447E60;
}

loc_inl2_return:
{
}

loc_inl2_cont_80447E60:
{
    // end of inlined leaf 0x80447E60
}

loc_80416DC0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80416DA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80416DA0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80416DA0 func_80416DA0 preserves=true fpr_mask=0x00000000
