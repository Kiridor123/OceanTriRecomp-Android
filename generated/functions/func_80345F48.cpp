#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80345D24(CpuContext* ctx);
extern "C" uint64_t func_80345D24_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80345F48_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_80345F48;

loc_80345F48:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r5;
    r4 = (r4 & 255);
    ctx->lr = 0x80345F64u;
    if constexpr (KnownRegArgsCpuCall<0x80345D24u>(&func_80345D24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80345D24_3CD = func_80345D24_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80345D24_3CD);
        r4 = static_cast<uint32_t>(regargs_result_80345D24_3CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80345D24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80345F68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80345F98;
    }
}

loc_80345F6C:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r31 & 255);
    goto loc_80345F8C;
}

loc_80345F78:
{
}

loc_80345F7C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80345F88;
    }
}

loc_80345F80:
{
    r3 = 1;
    goto loc_80345F9C;
}

loc_80345F88:
{
    r4 = (r4 + 1);
}

loc_80345F8C:
{
    r3 = MemoryInline::FlatRead8(r4);
}

loc_80345F94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(255))) {
        goto loc_80345F78;
    }
}

loc_80345F98:
{
    r3 = 0;
}

loc_80345F9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80345F48(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80345F48_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80345F48 func_80345F48 preserves=true fpr_mask=0x00000000
