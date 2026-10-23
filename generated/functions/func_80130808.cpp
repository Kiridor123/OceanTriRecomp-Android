#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801307DC(CpuContext* ctx);
extern "C" void func_801307DC_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80130808_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_80130808;

loc_80130808:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 1085));
}

loc_80130824:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80130834;
    }
}

loc_80130828:
{
}

loc_8013082C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80130880;
    }
}

loc_80130830:
{
    goto loc_80130894;
}

loc_80130834:
{
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80126098_5B7 = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_5B7);
        r4 = static_cast<uint32_t>(regargs_result_80126098_5B7 >> 32);
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
    r0 = MemoryInline::FlatRead8((r31 + 911));
}

loc_80130840:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80130850;
    }
}

loc_80130844:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 1090), static_cast<uint16_t>(r0));
    goto loc_80130894;
}

loc_80130850:
{
    r4 = MemoryInline::FlatRead16((r31 + 1090));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2148730960);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r31 + 1090), static_cast<uint16_t>(r0));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = MemoryInline::FlatRead32((r3 + 88));
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8013086C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_80130894;
    }
}

loc_80130870:
{
    r3 = r31;
    r4 = 0;
    // inline leaf 0x801307DC (11 guest instruction(s))
}

loc_inl0_0x801307DC:
{
    r0 = MemoryInline::FlatRead8((r3 + 1085));
    r5 = (r4 & 255);
}

loc_inl0_0x801307E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r5))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801307EC:
{
    MemoryInline::FlatWrite8((r3 + 1085), static_cast<uint8_t>(r4));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1090), static_cast<uint16_t>(r0));
}

loc_inl0_0x801307FC:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80130800:
{
    MemoryInline::FlatWrite8((r3 + 1082), static_cast<uint8_t>(r0));
    goto loc_inl0_cont_801307DC;
}

loc_inl0_return:
{
}

loc_inl0_cont_801307DC:
{
    // end of inlined leaf 0x801307DC
    goto loc_80130894;
}

loc_80130880:
{
    r0 = MemoryInline::FlatRead8((r3 + 911));
}

loc_80130888:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80130894;
    }
}

loc_8013088C:
{
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x801307DCu>(&func_801307DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_801307DC_ra38_0_0_0(ctx, r3, r4, r5);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x801307DCu>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    }
}

loc_80130894:
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

extern "C" void func_80130808(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80130808_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80130808 func_80130808 preserves=true fpr_mask=0x00000000
