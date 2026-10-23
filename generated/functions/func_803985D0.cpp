#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80217CCC(CpuContext* ctx);
extern "C" uint64_t func_80217CCC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803985D0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803985D0;

loc_803985D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0;
    r30 = 0;
    r29 = 0;
    r0 = (r4 & 255);
}

loc_80398600:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80398620;
    }
}

loc_80398604:
{
}

loc_80398608:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80398620;
    }
}

loc_8039860C:
{
}

loc_80398610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80398628;
    }
}

loc_80398614:
{
}

loc_80398618:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80398630;
    }
}

loc_8039861C:
{
    goto loc_80398638;
}

loc_80398620:
{
    r31 = (r3 + 12400);
    goto loc_80398640;
}

loc_80398628:
{
    r31 = (r3 + 12592);
    goto loc_80398640;
}

loc_80398630:
{
    r30 = (r3 + 12784);
    goto loc_80398640;
}

loc_80398638:
{
    r3 = 0;
    goto loc_803986D0;
}

loc_80398640:
{
}

loc_80398644:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80398698;
    }
}

loc_80398648:
{
    r28 = 0;
}

loc_8039864C:
{
    r3 = MemoryInline::FlatRead16(r31);
}

loc_80398654:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80398688;
    }
}

loc_80398658:
{
    r0 = MemoryInline::FlatRead16((r31 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80398660:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80398688;
    }
}

loc_80398664:
{
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl0_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl0_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl0_0x8029F758;
    }
}

loc_inl0_0x8029F754:
{
    r3 = 0;
}

loc_inl0_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl0_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r0 & 16);
}

loc_80398674:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80398688;
    }
}

loc_80398678:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r0 = MemoryInline::FlatRead16((r31 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r3 * r0);
    r29 = (r29 + r0);
}

loc_80398688:
{
    r28 = (r28 + 1);
    r31 = (r31 + 4);
}

loc_80398694:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(48))) {
        goto loc_8039864C;
    }
}

loc_80398698:
{
}

loc_8039869C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_803986CC;
    }
}

loc_803986A0:
{
    r31 = 0;
}

loc_803986A4:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_803986AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803986BC;
    }
}

loc_803986B0:
{
    r3 = r30;
    ctx->lr = 0x803986B8u;
    if constexpr (KnownRegArgsCpuCall<0x80217CCCu>(&func_80217CCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80217CCC_1073 = func_80217CCC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217CCC_1073);
        r4 = static_cast<uint32_t>(regargs_result_80217CCC_1073 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80217CCCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r29 = (r29 + r3);
}

loc_803986BC:
{
    r31 = (r31 + 1);
    r30 = (r30 + 12);
}

loc_803986C8:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(40))) {
        goto loc_803986A4;
    }
}

loc_803986CC:
{
    r3 = r29;
}

loc_803986D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803985D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803985D0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803985D0 func_803985D0 preserves=true fpr_mask=0x00000000
