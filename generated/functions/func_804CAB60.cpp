#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CCD80(CpuContext* ctx);
extern "C" uint64_t func_804CCD80_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_804CAB60_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804CAB60u);
    goto loc_804CAB60;

loc_804CAB60:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x804D31C0u>(ctx);
    r3 = ctx->gpr[3];
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_804CAB7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804CABC8;
    }
}

loc_804CAB80:
{
    // inline leaf 0x804CC6C0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15092));
    // end of inlined leaf 0x804CC6C0
    r31 = r3;
    // inline leaf 0x804CC6F0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20108));
    // end of inlined leaf 0x804CC6F0
    r31 = (r31 - r3);
    // inline leaf 0x804CC6F0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20108));
    // end of inlined leaf 0x804CC6F0
    r0 = 262144;
}

loc_804CAB9C:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r0))) {
        goto loc_804CABAC;
    }
}

loc_804CABA0:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_804CABB0;
}

loc_804CABAC:
{
    r30 = r3;
}

loc_804CABB0:
{
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804CCD80u>(&func_804CCD80)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCD80_881 = func_804CCD80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD80_881);
        r4 = static_cast<uint32_t>(regargs_result_804CCD80_881 >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCD80u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r30;
    r4 = 262144;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCCC0_AA1 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_AA1);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_AA1 >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_804CAD2C;
}

loc_804CABC8:
{
    r31 = 0x80750000u;
    r31 = (r31 + -2240);
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_804CABD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804CABEC;
    }
}

loc_804CABDC:
{
    r3 = (r0 & 805306368);
    r0 = (r3 + -268435456);
}

loc_804CABE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_804CAC34;
    }
}

loc_804CABEC:
{
    // inline leaf 0x804CC6C0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15092));
    // end of inlined leaf 0x804CC6C0
    r31 = r3;
    // inline leaf 0x804CC6F0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20108));
    // end of inlined leaf 0x804CC6F0
    r31 = (r31 - r3);
    // inline leaf 0x804CC6F0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20108));
    // end of inlined leaf 0x804CC6F0
    r0 = 262144;
}

loc_804CAC08:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r0))) {
        goto loc_804CAC18;
    }
}

loc_804CAC0C:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_804CAC1C;
}

loc_804CAC18:
{
    r30 = r3;
}

loc_804CAC1C:
{
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804CCD80u>(&func_804CCD80)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCD80_116F = func_804CCD80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD80_116F);
        r4 = static_cast<uint32_t>(regargs_result_804CCD80_116F >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCD80u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r30;
    r4 = 262144;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCCC0_1392 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_1392);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_1392 >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_804CAD2C;
}

loc_804CAC34:
{
    // inline leaf 0x804CC6F0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20108));
    // end of inlined leaf 0x804CC6F0
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_804CAC40:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_804CAD2C;
    }
}

loc_804CAC44:
{
    // inline leaf 0x804CC6C0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15092));
    // end of inlined leaf 0x804CC6C0
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_804CAC50:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_804CAC9C;
    }
}

loc_804CAC54:
{
    // inline leaf 0x804CC6C0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15092));
    // end of inlined leaf 0x804CC6C0
    r31 = r3;
    // inline leaf 0x804CC6F0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20108));
    // end of inlined leaf 0x804CC6F0
    r31 = (r31 - r3);
    // inline leaf 0x804CC6F0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20108));
    // end of inlined leaf 0x804CC6F0
    r0 = 262144;
}

loc_804CAC70:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r0))) {
        goto loc_804CAC80;
    }
}

loc_804CAC74:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_804CAC84;
}

loc_804CAC80:
{
    r30 = r3;
}

loc_804CAC84:
{
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804CCD80u>(&func_804CCD80)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCD80_1B4E = func_804CCD80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD80_1B4E);
        r4 = static_cast<uint32_t>(regargs_result_804CCD80_1B4E >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCD80u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r30;
    r4 = 262144;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCCC0_1D71 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_1D71);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_1D71 >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_804CAD2C;
}

loc_804CAC9C:
{
    // inline leaf 0x804CC6F0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20108));
    // end of inlined leaf 0x804CC6F0
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r31 = (r0 - r3);
    // inline leaf 0x804CC6F0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20108));
    // end of inlined leaf 0x804CC6F0
    r0 = 262144;
}

loc_804CACB4:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r0))) {
        goto loc_804CACC4;
    }
}

loc_804CACB8:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_804CACC8;
}

loc_804CACC4:
{
    r30 = r3;
}

loc_804CACC8:
{
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804CCD80u>(&func_804CCD80)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCD80_222A = func_804CCD80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD80_222A);
        r4 = static_cast<uint32_t>(regargs_result_804CCD80_222A >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCD80u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r30;
    r4 = 262144;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCCC0_244D = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_244D);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_244D >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = 0x80750000u;
    r3 = (r3 + -2240);
    r31 = MemoryInline::FlatRead32((r3 + 16));
    // inline leaf 0x804CC6C0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15092));
    // end of inlined leaf 0x804CC6C0
}

loc_804CACF0:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r31))) {
        goto loc_804CAD2C;
    }
}

loc_804CACF4:
{
    // inline leaf 0x804CC6C0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15092));
    // end of inlined leaf 0x804CC6C0
    r4 = (r3 - r31);
    r0 = 262144;
}

loc_804CAD04:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_804CAD14;
    }
}

loc_804CAD08:
{
    r30 = (r4 + -262144);
    r30 = (r31 + r30);
    goto loc_804CAD18;
}

loc_804CAD14:
{
    r30 = r31;
}

loc_804CAD18:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804CCD80u>(&func_804CCD80)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCD80_2995 = func_804CCD80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD80_2995);
        r4 = static_cast<uint32_t>(regargs_result_804CCD80_2995 >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCD80u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = r30;
    r4 = 262144;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCCC0_2BB8 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_2BB8);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_2BB8 >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804CAD2C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CAB60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CAB60_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CAB60 func_804CAB60 preserves=true fpr_mask=0x00000000
