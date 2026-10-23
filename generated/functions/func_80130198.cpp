#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126054(CpuContext* ctx);
extern "C" uint64_t func_80126054_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80130198_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80130198;

loc_80130198:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r31 = r4;
    r4 = MemoryInline::FlatRead8((r3 + 482));
}

loc_801301C0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801301D4;
    }
}

loc_801301C4:
{
    r0 = (r4 + 253);
    r0 = (r0 & 255);
}

loc_801301D0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80130280;
    }
}

loc_801301D4:
{
    r0 = MemoryInline::FlatRead8((r3 + 554));
    r0 = (r0 & 128);
}

loc_801301E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80130204;
    }
}

loc_801301E4:
{
    r0 = MemoryInline::FlatRead32((r3 + 456));
    r0 = (r0 & 32);
}

loc_801301F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80130280;
    }
}

loc_801301F4:
{
    r0 = MemoryInline::FlatRead16((r3 + 552));
    r0 = (r0 & 1);
}

loc_80130200:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80130280;
    }
}

loc_80130204:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126098_851 = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_851);
        r4 = static_cast<uint32_t>(regargs_result_80126098_851 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r30 = MemoryInline::FlatRead32((r3 + 64));
    r0 = (r31 & 255);
}

loc_80130218:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80130278;
    }
}

loc_8013021C:
{
}

loc_80130220:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80130278;
    }
}

loc_80130224:
{
    r3 = r29;
    // inline leaf 0x801302A0 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 554));
    r3 = (r0 & 127);
    // end of inlined leaf 0x801302A0
    r31 = (r3 & 255);
    goto loc_8013026C;
}

loc_80130234:
{
    r3 = MemoryInline::FlatRead8((r29 + 480));
    ctx->lr = 0x8013023Cu;
    if constexpr (KnownRegArgsCpuCall<0x80126054u>(&func_80126054)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126054_D79 = func_80126054_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80126054_D79);
        r4 = static_cast<uint32_t>(regargs_result_80126054_D79 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80126054u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80130240:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80130268;
    }
}

loc_80130244:
{
    r3 = MemoryInline::FlatRead8((r30 + 1));
    r0 = MemoryInline::FlatRead8((r29 + 481));
}

loc_80130250:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80130268;
    }
}

loc_80130254:
{
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_8013025C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r31))) {
        goto loc_80130268;
    }
}

loc_80130260:
{
    r3 = 0;
    goto loc_80130284;
}

loc_80130268:
{
    r30 = (r30 + 3);
}

loc_8013026C:
{
    r4 = MemoryInline::FlatRead8(r30);
}

loc_80130274:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(255))) {
        goto loc_80130234;
    }
}

loc_80130278:
{
    r3 = 1;
    goto loc_80130284;
}

loc_80130280:
{
    r3 = 0;
}

loc_80130284:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80130198(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80130198_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80130198 func_80130198 preserves=true fpr_mask=0x00000000
