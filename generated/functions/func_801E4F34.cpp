#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E4EA8(CpuContext* ctx);
extern "C" uint64_t func_801E4EA8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_801E4F34_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801E4F34u);
    goto loc_801E4F34;

loc_801E4F34:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 260));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 1064));
}

loc_801E4F58:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_801E4FC8;
    }
}

loc_801E4F5C:
{
    r4 = 0x806B0000u;
    r4 = (r4 + -12348);
    r4 = MemoryInline::FlatRead8((r4 + 176));
    r0 = (r4 + 255);
    r0 = (r0 & 255);
}

loc_801E4F74:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_801E4F8C;
    }
}

loc_801E4F78:
{
    r3 = 0;
    // inline leaf 0x800D0798 (4 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 2167), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x800D0798
    r3 = MemoryInline::FlatRead32((r31 + 300));
    // inline leaf 0x80275518 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 25), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80275518
    goto loc_801E4FC8;
}

loc_801E4F8C:
{
    r0 = MemoryInline::FlatRead16((r3 + 36));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801E4F94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E4FA4;
    }
}

loc_801E4F98:
{
}

loc_801E4F9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801E4FB8;
    }
}

loc_801E4FA0:
{
    goto loc_801E4FC8;
}

loc_801E4FA4:
{
    r3 = 2;
    // inline leaf 0x800D0798 (4 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 2167), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x800D0798
    r3 = MemoryInline::FlatRead32((r31 + 300));
    ctx->lr = 0x801E4FB4u;
    if constexpr (KnownRegArgsCpuCall<0x801E4EA8u>(&func_801E4EA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801E4EA8_A74 = func_801E4EA8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801E4EA8_A74);
        r4 = static_cast<uint32_t>(regargs_result_801E4EA8_A74 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801E4EA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_801E4FC8;
}

loc_801E4FB8:
{
    r3 = 1;
    // inline leaf 0x800D0798 (4 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    MemoryInline::FlatWriteRam8((r4 + 2167), static_cast<uint8_t>(r3));
    // end of inlined leaf 0x800D0798
    r3 = MemoryInline::FlatRead32((r31 + 300));
    ctx->lr = 0x801E4FC8u;
    if constexpr (KnownRegArgsCpuCall<0x801E4EA8u>(&func_801E4EA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801E4EA8_E65 = func_801E4EA8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801E4EA8_E65);
        r4 = static_cast<uint32_t>(regargs_result_801E4EA8_E65 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801E4EA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_801E4FC8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801E4F34(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E4F34_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E4F34 func_801E4F34 preserves=true fpr_mask=0x00000000
