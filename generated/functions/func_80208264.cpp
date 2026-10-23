#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FE264(CpuContext* ctx);
extern "C" uint64_t func_801FE264_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801FE518(CpuContext* ctx);
extern "C" uint32_t func_801FE518_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802FB9AC(CpuContext* ctx);
extern "C" uint64_t func_802FB9AC_ra0_0_18_0(CpuContext*);

extern "C" uint64_t func_80208264_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_80208264;

loc_80208264:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x8020827Cu;
    if constexpr (KnownRegArgsCpuCall<0x801FE518u>(&func_801FE518)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_801FE518_52F = func_801FE518_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_801FE518_52F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801FE518u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80208280:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802082EC;
    }
}

loc_80208284:
{
    r3 = r31;
    // inline leaf 0x801FE228 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 168));
    // end of inlined leaf 0x801FE228
    r3 = (r3 & 65535);
    r0 = (r3 + -1177);
}

loc_80208298:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_802082C4;
    }
}

loc_8020829C:
{
    r0 = MemoryInline::FlatRead8((r31 + 480));
}

loc_802082A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802083B0;
    }
}

loc_802082A8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 480), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 21;
    r5 = 1;
    ctx->lr = 0x802082C0u;
    if constexpr (KnownRegArgsCpuCall<0x801FE264u>(&func_801FE264)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801FE264_AE8 = func_801FE264_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801FE264_AE8);
        r4 = static_cast<uint32_t>(regargs_result_801FE264_AE8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801FE264u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802083B0;
}

loc_802082C4:
{
    r0 = MemoryInline::FlatRead8((r31 + 480));
}

loc_802082CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802083B0;
    }
}

loc_802082D0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 480), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 21;
    r5 = 0;
    ctx->lr = 0x802082E8u;
    if constexpr (KnownRegArgsCpuCall<0x801FE264u>(&func_801FE264)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801FE264_F7A = func_801FE264_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801FE264_F7A);
        r4 = static_cast<uint32_t>(regargs_result_801FE264_F7A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801FE264u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802083B0;
}

loc_802082EC:
{
    r3 = r31;
    r4 = 11;
    // inline leaf 0x801FE390 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 80));
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r4 & 255);
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x801FE390
}

loc_802082FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80208368;
    }
}

loc_80208300:
{
    r3 = r31;
    // inline leaf 0x801FE228 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 168));
    // end of inlined leaf 0x801FE228
    r3 = (r3 & 65535);
    r0 = (r3 + -1023);
}

loc_80208314:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80208340;
    }
}

loc_80208318:
{
    r0 = MemoryInline::FlatRead8((r31 + 480));
}

loc_80208320:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802083B0;
    }
}

loc_80208324:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 480), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 22;
    r5 = 0;
    ctx->lr = 0x8020833Cu;
    if constexpr (KnownRegArgsCpuCall<0x801FE264u>(&func_801FE264)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801FE264_17F9 = func_801FE264_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801FE264_17F9);
        r4 = static_cast<uint32_t>(regargs_result_801FE264_17F9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801FE264u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802083B0;
}

loc_80208340:
{
    r0 = MemoryInline::FlatRead8((r31 + 480));
}

loc_80208348:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802083B0;
    }
}

loc_8020834C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 480), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 22;
    r5 = 1;
    ctx->lr = 0x80208364u;
    if constexpr (KnownRegArgsCpuCall<0x801FE264u>(&func_801FE264)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801FE264_1C8C = func_801FE264_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801FE264_1C8C);
        r4 = static_cast<uint32_t>(regargs_result_801FE264_1C8C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801FE264u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_802083B0;
}

loc_80208368:
{
    r3 = r31;
    r4 = 7;
    // inline leaf 0x801FE390 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 80));
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r4 & 255);
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x801FE390
}

loc_80208378:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802083B0;
    }
}

loc_8020837C:
{
    ctx->lr = 0x80208380u;
    if constexpr (KnownRegArgsCpuCall<0x802FB9ACu>(&func_802FB9AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_802FB9AC_2284 = func_802FB9AC_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_802FB9AC_2284);
        r4 = static_cast<uint32_t>(regargs_result_802FB9AC_2284 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802FB9ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_80208388:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802083B0;
    }
}

loc_8020838C:
{
    r0 = MemoryInline::FlatRead8((r31 + 480));
}

loc_80208394:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802083B0;
    }
}

loc_80208398:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 480), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 24;
    r5 = 0;
    ctx->lr = 0x802083B0u;
    if constexpr (KnownRegArgsCpuCall<0x801FE264u>(&func_801FE264)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801FE264_2786 = func_801FE264_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801FE264_2786);
        r4 = static_cast<uint32_t>(regargs_result_801FE264_2786 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801FE264u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802083B0:
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

extern "C" void func_80208264(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80208264_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80208264 func_80208264 preserves=true fpr_mask=0x00000000
