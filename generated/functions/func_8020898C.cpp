#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CFAF4(CpuContext* ctx);
extern "C" uint64_t func_800CFAF4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8021B90C(CpuContext* ctx);
extern "C" uint32_t func_8021B90C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8020898C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_8020898C;

loc_8020898C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r5 = MemoryInline::FlatRead8((r3 + 22));
    r4 = 0x806B0000u;
    r4 = (r4 + -12348);
    r0 = MemoryInline::FlatRead8((r4 + 2));
}

loc_802089B8:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_802089C4;
    }
}

loc_802089BC:
{
    r3 = 0;
    goto loc_80208A40;
}

loc_802089C4:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_802089CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80208A3C;
    }
}

loc_802089D0:
{
    r3 = MemoryInline::FlatRead8((r30 + 21));
    r4 = MemoryInline::FlatRead8((r30 + 22));
    // inline leaf 0x8021B958 (10 guest instruction(s))
}

loc_inl0_0x8021B958:
{
    r0 = (r3 & 255);
}

loc_inl0_0x8021B960:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(21))) {
        goto loc_inl0_0x8021B978;
    }
}

loc_inl0_0x8021B964:
{
    r0 = (r4 & 255);
}

loc_inl0_0x8021B96C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_inl0_0x8021B978;
    }
}

loc_inl0_0x8021B970:
{
    r3 = 1;
    goto loc_inl0_cont_8021B958;
}

loc_inl0_0x8021B978:
{
    r3 = 0;
}

loc_inl0_cont_8021B958:
{
    // end of inlined leaf 0x8021B958
}

loc_802089E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802089EC;
    }
}

loc_802089E4:
{
    r3 = 0;
    goto loc_80208A40;
}

loc_802089EC:
{
    r3 = MemoryInline::FlatRead8((r30 + 21));
    r4 = MemoryInline::FlatRead8((r30 + 22));
    if constexpr (KnownRegArgsCpuCall<0x8021B90Cu>(&func_8021B90C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021B90C_B2E = func_8021B90C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8021B90C_B2E;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8021B90Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_802089FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80208A3C;
    }
}

loc_80208A00:
{
    r3 = 2;
    if constexpr (KnownRegArgsCpuCall<0x800CFAF4u>(&func_800CFAF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CFAF4_DCF = func_800CFAF4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800CFAF4_DCF);
        r4 = static_cast<uint32_t>(regargs_result_800CFAF4_DCF >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CFAF4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r4 = (r31 + r0);
    r3 = (r30 + 2821);
    r4 = (r4 + 2821);
    r5 = 10;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_11BA = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_11BA);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_11BA >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80208A30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80208A3C;
    }
}

loc_80208A34:
{
    r3 = 0;
    goto loc_80208A40;
}

loc_80208A3C:
{
    r3 = 1;
}

loc_80208A40:
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

extern "C" void func_8020898C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8020898C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8020898C func_8020898C preserves=true fpr_mask=0x00000000
