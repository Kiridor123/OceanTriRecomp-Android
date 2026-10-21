#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80130A74_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80130A74u);
    goto loc_80130A74;

loc_80130A74:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r5 = (r4 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 2218));
}

loc_80130A94:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_80130B10;
    }
}

loc_80130A98:
{
    MemoryInline::FlatWrite8((r3 + 2218), static_cast<uint8_t>(r4));
}

loc_80130AA0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80130AB0;
    }
}

loc_80130AA4:
{
}

loc_80130AA8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_80130AC8;
    }
}

loc_80130AAC:
{
    goto loc_80130B10;
}

loc_80130AB0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 2216), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 2214), static_cast<uint16_t>(r0));
    r4 = 4;
    // inline leaf 0x8012CF00 (6 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 1940));
    r0 = ~(r4 | r4);
    r0 = (r0 & 65535);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r3 + 1940), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8012CF00
    goto loc_80130B10;
}

loc_80130AC8:
{
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80126098_7DE = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_7DE);
        r4 = static_cast<uint32_t>(regargs_result_80126098_7DE >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead32((r3 + 160));
    r3 = MemoryInline::FlatRead32((r3 + 40));
}

loc_80130AD8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80130AE8;
    }
}

loc_80130ADC:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 2216), static_cast<uint16_t>(r0));
    goto loc_80130AF0;
}

loc_80130AE8:
{
    r0 = 1800;
    MemoryInline::FlatWrite16((r31 + 2216), static_cast<uint16_t>(r0));
}

loc_80130AF0:
{
    r0 = MemoryInline::FlatRead16((r31 + 1100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80130AF8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(900))) {
        goto loc_80130B04;
    }
}

loc_80130AFC:
{
    r0 = 900;
    MemoryInline::FlatWrite16((r31 + 1100), static_cast<uint16_t>(r0));
}

loc_80130B04:
{
    r3 = r31;
    r4 = 4;
    // inline leaf 0x8012CF00 (6 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 1940));
    r0 = ~(r4 | r4);
    r0 = (r0 & 65535);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r3 + 1940), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8012CF00
}

loc_80130B10:
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

extern "C" void func_80130A74(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80130A74_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80130A74 func_80130A74 preserves=true fpr_mask=0x00000000
