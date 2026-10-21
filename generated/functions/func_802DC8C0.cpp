#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802DE560(CpuContext* ctx);
extern "C" uint64_t func_802DE560_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8034C3BC(CpuContext* ctx);
extern "C" uint64_t func_8034C3BC_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8034C554(CpuContext* ctx);
extern "C" uint64_t func_8034C554_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802DC8C0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x802DC8C0u);
    goto loc_802DC8C0;

loc_802DC8C0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_802DC8D4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_802DC8FC;
    }
}

loc_802DC8D8:
{
}

loc_802DC8DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_802DC940;
    }
}

loc_802DC8E0:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r0 & 255);
    ctx->lr = 0x802DC8ECu;
    if constexpr (KnownRegArgsCpuCall<0x802DE560u>(&func_802DE560)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802DE560_5D3 = func_802DE560_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802DE560_5D3);
        r4 = static_cast<uint32_t>(regargs_result_802DE560_5D3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802DE560u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802DC8F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802DC940;
    }
}

loc_802DC8F4:
{
    r3 = 1;
    goto loc_802DC944;
}

loc_802DC8FC:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_802DC904:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DC910;
    }
}

loc_802DC908:
{
    r3 = 1;
    goto loc_802DC944;
}

loc_802DC910:
{
    r3 = r4;
    ctx->lr = 0x802DC918u;
    if constexpr (KnownRegArgsCpuCall<0x8034C3BCu>(&func_8034C3BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8034C3BC_A36 = func_8034C3BC_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8034C3BC_A36);
        r4 = static_cast<uint32_t>(regargs_result_8034C3BC_A36 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8034C3BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802DC91C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802DC928;
    }
}

loc_802DC920:
{
    r3 = 1;
    goto loc_802DC944;
}

loc_802DC928:
{
    ctx->lr = 0x802DC92Cu;
    if constexpr (KnownRegArgsCpuCall<0x8034C554u>(&func_8034C554)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8034C554_DAE = func_8034C554_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8034C554_DAE);
        r4 = static_cast<uint32_t>(regargs_result_8034C554_DAE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8034C554u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 65535);
}

loc_802DC934:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802DC940;
    }
}

loc_802DC938:
{
    r3 = 2;
    goto loc_802DC944;
}

loc_802DC940:
{
    r3 = 0;
}

loc_802DC944:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DC8C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DC8C0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802DC8C0 func_802DC8C0 preserves=true fpr_mask=0x00000000
