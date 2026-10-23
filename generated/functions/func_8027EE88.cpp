#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027ED7C(CpuContext* ctx);
extern "C" uint64_t func_8027ED7C_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8027EE88_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];

    goto loc_8027EE88;

loc_8027EE88:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead8(r3);
    r0 = (r4 + -7);
}

loc_8027EEA8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_8027EED0;
    }
}

loc_8027EEAC:
{
    r0 = (r4 + -14);
}

loc_8027EEB4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027EED0;
    }
}

loc_8027EEB8:
{
    r0 = (r4 + -12);
}

loc_8027EEC0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8027EEEC;
    }
}

loc_8027EEC4:
{
}

loc_8027EEC8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(11))) {
        goto loc_8027EEE0;
    }
}

loc_8027EECC:
{
    goto loc_8027EF18;
}

loc_8027EED0:
{
    r3 = r31;
    ctx->lr = 0x8027EED8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8027ED10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = MemoryInline::FlatRead16(r3);
    goto loc_8027EF20;
}

loc_8027EEE0:
{
    ctx->lr = 0x8027EEE4u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_7B5 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_7B5);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_7B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryInline::FlatRead16(r3);
    goto loc_8027EF20;
}

loc_8027EEEC:
{
    ctx->lr = 0x8027EEF0u;
    if constexpr (KnownRegArgsCpuCall<0x8027ED7Cu>(&func_8027ED7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ED7C_AD3 = func_8027ED7C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027ED7C_AD3);
        r4 = static_cast<uint32_t>(regargs_result_8027ED7C_AD3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ED7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = MemoryInline::FlatRead16((r31 + 2));
}

loc_8027EEF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027EF08;
    }
}

loc_8027EEFC:
{
    r3 = MemoryInline::FlatRead16(r3);
}

loc_8027EF04:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8027EF20;
    }
}

loc_8027EF08:
{
    r3 = 65536;
    r3 = (r3 + -1);
    goto loc_8027EF20;
}

loc_8027EF18:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_8027EF20:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027EE88(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027EE88_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8027EE88 func_8027EE88 preserves=true fpr_mask=0x00000000
