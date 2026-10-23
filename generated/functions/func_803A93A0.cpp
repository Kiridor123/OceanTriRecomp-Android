#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF2E4(CpuContext* ctx);
extern "C" uint32_t func_800CF2E4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803A880C(CpuContext* ctx);
extern "C" uint32_t func_803A880C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803A93A0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_803A93A0;

loc_803A93A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x803A93B8u;
    if constexpr (KnownRegArgsCpuCall<0x800CF2E4u>(&func_800CF2E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CF2E4_43C = func_800CF2E4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CF2E4_43C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CF2E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A93BC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_803A9468;
    }
}

loc_803A93C0:
{
    ctx->lr = 0x803A93C4u;
    if constexpr (KnownRegArgsCpuCall<0x803A880Cu>(&func_803A880C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A880C_76E = func_803A880C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A880C_76E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A880Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A93C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A9468;
    }
}

loc_803A93CC:
{
    r5 = MemoryInline::FlatRead32((r3 + 60));
}

loc_803A93D4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_803A9468;
    }
}

loc_803A93D8:
{
    r4 = (r31 & 65535);
}

loc_803A93E0:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(32))) {
        goto loc_803A93F0;
    }
}

loc_803A93E4:
{
    r0 = MemoryInline::FlatRead32((r5 + 896));
    r3 = (r0 & 255);
    goto loc_803A946C;
}

loc_803A93F0:
{
    r5 = 0;
    r0 = MemoryInline::FlatRead16((r3 + 1132));
}

loc_803A93FC:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_803A9454;
    }
}

loc_803A9400:
{
    r5 = 1;
    r0 = MemoryInline::FlatRead16((r3 + 1134));
}

loc_803A940C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_803A9454;
    }
}

loc_803A9410:
{
    r5 = 2;
    r0 = MemoryInline::FlatRead16((r3 + 1136));
}

loc_803A941C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_803A9454;
    }
}

loc_803A9420:
{
    r5 = 3;
    r0 = MemoryInline::FlatRead16((r3 + 1138));
}

loc_803A942C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_803A9454;
    }
}

loc_803A9430:
{
    r5 = 4;
    r0 = MemoryInline::FlatRead16((r3 + 1140));
}

loc_803A943C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_803A9454;
    }
}

loc_803A9440:
{
    r5 = 5;
    r0 = MemoryInline::FlatRead16((r3 + 1142));
}

loc_803A944C:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_803A9454;
    }
}

loc_803A9450:
{
    r5 = 6;
}

loc_803A9454:
{
}

loc_803A9458:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(6))) {
        goto loc_803A9468;
    }
}

loc_803A945C:
{
    r3 = (r3 + r5);
    r3 = MemoryInline::FlatRead8((r3 + 1144));
    goto loc_803A946C;
}

loc_803A9468:
{
    r3 = 0;
}

loc_803A946C:
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

extern "C" void func_803A93A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A93A0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A93A0 func_803A93A0 preserves=true fpr_mask=0x00000000
