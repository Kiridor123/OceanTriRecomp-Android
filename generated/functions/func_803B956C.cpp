#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803B94B4(CpuContext* ctx);
extern "C" uint64_t func_803B94B4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803B956C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x803B956Cu);
    goto loc_803B956C;

loc_803B956C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_803B9580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(33))) {
        goto loc_803B9590;
    }
}

loc_803B9584:
{
}

loc_803B9588:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(27))) {
        goto loc_803B95D0;
    }
}

loc_803B958C:
{
    goto loc_803B95D8;
}

loc_803B9590:
{
    // inline leaf 0x8035DDA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 826));
    // end of inlined leaf 0x8035DDA4
    r4 = (r3 & 255);
}

loc_803B959C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_803B95C0;
    }
}

loc_803B95A0:
{
}

loc_803B95A4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_803B95C8;
    }
}

loc_803B95A8:
{
    r3 = (r4 + -4);
    r0 = (4 - r4);
    r0 = ~(r3 | r0);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r3 = (r0 & 3);
    goto loc_803B95DC;
}

loc_803B95C0:
{
    r3 = 1;
    goto loc_803B95DC;
}

loc_803B95C8:
{
    r3 = 2;
    goto loc_803B95DC;
}

loc_803B95D0:
{
    r3 = 0;
    goto loc_803B95DC;
}

loc_803B95D8:
{
    if constexpr (KnownRegArgsCpuCall<0x803B94B4u>(&func_803B94B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B94B4_7A1 = func_803B94B4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B94B4_7A1);
        r4 = static_cast<uint32_t>(regargs_result_803B94B4_7A1 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B94B4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B95DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B956C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B956C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B956C func_803B956C preserves=true fpr_mask=0x00000000
