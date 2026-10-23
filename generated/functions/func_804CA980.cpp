#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804CCD80(CpuContext* ctx);
extern "C" uint64_t func_804CCD80_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_804CA980_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
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

    goto loc_804CA980;

loc_804CA980:
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

loc_804CA99C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804CA9E8;
    }
}

loc_804CA9A0:
{
    // inline leaf 0x804CC6D0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15096));
    // end of inlined leaf 0x804CC6D0
    r31 = r3;
    // inline leaf 0x804CC700 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20112));
    // end of inlined leaf 0x804CC700
    r31 = (r31 - r3);
    // inline leaf 0x804CC700 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20112));
    // end of inlined leaf 0x804CC700
    r0 = 262144;
}

loc_804CA9BC:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r0))) {
        goto loc_804CA9CC;
    }
}

loc_804CA9C0:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_804CA9D0;
}

loc_804CA9CC:
{
    r30 = r3;
}

loc_804CA9D0:
{
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804CCD80u>(&func_804CCD80)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCD80_8B6 = func_804CCD80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD80_8B6);
        r4 = static_cast<uint32_t>(regargs_result_804CCD80_8B6 >> 32);
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
        const auto regargs_result_804CCCC0_AE5 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_AE5);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_AE5 >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_804CAB44;
}

loc_804CA9E8:
{
    r31 = 0x80750000u;
    r31 = (r31 + -2240);
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_804CA9F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804CAA04;
    }
}

loc_804CA9FC:
{
    r0 = (r0 & 805306368);
}

loc_804CAA00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804CAA4C;
    }
}

loc_804CAA04:
{
    // inline leaf 0x804CC6D0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15096));
    // end of inlined leaf 0x804CC6D0
    r31 = r3;
    // inline leaf 0x804CC700 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20112));
    // end of inlined leaf 0x804CC700
    r31 = (r31 - r3);
    // inline leaf 0x804CC700 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20112));
    // end of inlined leaf 0x804CC700
    r0 = 262144;
}

loc_804CAA20:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r0))) {
        goto loc_804CAA30;
    }
}

loc_804CAA24:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_804CAA34;
}

loc_804CAA30:
{
    r30 = r3;
}

loc_804CAA34:
{
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804CCD80u>(&func_804CCD80)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCD80_11E5 = func_804CCD80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD80_11E5);
        r4 = static_cast<uint32_t>(regargs_result_804CCD80_11E5 >> 32);
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
        const auto regargs_result_804CCCC0_1417 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_1417);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_1417 >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_804CAB44;
}

loc_804CAA4C:
{
    // inline leaf 0x804CC700 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20112));
    // end of inlined leaf 0x804CC700
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_804CAA58:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_804CAB44;
    }
}

loc_804CAA5C:
{
    // inline leaf 0x804CC6D0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15096));
    // end of inlined leaf 0x804CC6D0
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_804CAA68:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_804CAAB4;
    }
}

loc_804CAA6C:
{
    // inline leaf 0x804CC6D0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15096));
    // end of inlined leaf 0x804CC6D0
    r31 = r3;
    // inline leaf 0x804CC700 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20112));
    // end of inlined leaf 0x804CC700
    r31 = (r31 - r3);
    // inline leaf 0x804CC700 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20112));
    // end of inlined leaf 0x804CC700
    r0 = 262144;
}

loc_804CAA88:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r0))) {
        goto loc_804CAA98;
    }
}

loc_804CAA8C:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_804CAA9C;
}

loc_804CAA98:
{
    r30 = r3;
}

loc_804CAA9C:
{
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804CCD80u>(&func_804CCD80)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCD80_1C27 = func_804CCD80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD80_1C27);
        r4 = static_cast<uint32_t>(regargs_result_804CCD80_1C27 >> 32);
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
        const auto regargs_result_804CCCC0_1E59 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_1E59);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_1E59 >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    goto loc_804CAB44;
}

loc_804CAAB4:
{
    // inline leaf 0x804CC700 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20112));
    // end of inlined leaf 0x804CC700
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r31 = (r0 - r3);
    // inline leaf 0x804CC700 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -20112));
    // end of inlined leaf 0x804CC700
    r0 = 262144;
}

loc_804CAACC:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(r0))) {
        goto loc_804CAADC;
    }
}

loc_804CAAD0:
{
    r30 = (r31 + -262144);
    r30 = (r3 + r30);
    goto loc_804CAAE0;
}

loc_804CAADC:
{
    r30 = r3;
}

loc_804CAAE0:
{
    r4 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804CCD80u>(&func_804CCD80)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCD80_2345 = func_804CCD80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD80_2345);
        r4 = static_cast<uint32_t>(regargs_result_804CCD80_2345 >> 32);
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
        const auto regargs_result_804CCCC0_2577 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_2577);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_2577 >> 32);
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
    // inline leaf 0x804CC6D0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15096));
    // end of inlined leaf 0x804CC6D0
}

loc_804CAB08:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r31))) {
        goto loc_804CAB44;
    }
}

loc_804CAB0C:
{
    // inline leaf 0x804CC6D0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -15096));
    // end of inlined leaf 0x804CC6D0
    r4 = (r3 - r31);
    r0 = 262144;
}

loc_804CAB1C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(r0))) {
        goto loc_804CAB2C;
    }
}

loc_804CAB20:
{
    r30 = (r4 + -262144);
    r30 = (r31 + r30);
    goto loc_804CAB30;
}

loc_804CAB2C:
{
    r30 = r31;
}

loc_804CAB30:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x804CCD80u>(&func_804CCD80)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_804CCD80_2AFA = func_804CCD80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD80_2AFA);
        r4 = static_cast<uint32_t>(regargs_result_804CCD80_2AFA >> 32);
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
        const auto regargs_result_804CCCC0_2D2C = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_2D2C);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_2D2C >> 32);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804CAB44:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CA980(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CA980_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804CA980 func_804CA980 preserves=true fpr_mask=0x00000000
