#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A288(CpuContext* ctx);
extern "C" uint64_t func_8026A288_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802BC6C0(CpuContext* ctx);
extern "C" uint64_t func_802BC6C0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8025D9B8_ra38_1f8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_8025D9B8;

loc_8025D9B8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r4 = 10;
    // inline leaf 0x80277CAC (2 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 1408), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x80277CAC
    r3 = r30;
    r4 = 10;
    // inline leaf 0x80277BA8 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 918), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x80277BA8
    r3 = r30;
    // inline leaf 0x8027AC70 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1467), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8027AC70
    r3 = MemoryInline::FlatRead8((r30 + 5));
}

loc_8025D9F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8025DA84;
    }
}

loc_8025D9FC:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 119), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 24), static_cast<uint8_t>(r0));
}

loc_8025DA18:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_8025DA48;
    }
}

loc_8025DA1C:
{
    r3 = r30;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x8025DA30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80275B68u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = r30;
    r4 = 503;
    r5 = 4;
    r6 = 0;
    ctx->lr = 0x8025DA44u;
    if constexpr (KnownRegArgsCpuCall<0x8026A288u>(&func_8026A288)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8026A288_D40 = func_8026A288_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A288_D40);
        r4 = static_cast<uint32_t>(regargs_result_8026A288_D40 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8026A288u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_8025DA70;
}

loc_8025DA48:
{
    r3 = r30;
    r4 = 3;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x8025DA5Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x80275B68u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = r30;
    r4 = 523;
    r5 = 4;
    r6 = 0;
    ctx->lr = 0x8025DA70u;
    if constexpr (KnownRegArgsCpuCall<0x8026A288u>(&func_8026A288)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8026A288_15CB = func_8026A288_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A288_15CB);
        r4 = static_cast<uint32_t>(regargs_result_8026A288_15CB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8026A288u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8025DA70:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8025DA7C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8025DA84;
    }
}

loc_8025DA80:
{
    ctx->lr = 0x8025DA84u;
    if constexpr (KnownRegArgsCpuCall<0x802BC6C0u>(&func_802BC6C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802BC6C0_1C74 = func_802BC6C0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802BC6C0_1C74);
        r4 = static_cast<uint32_t>(regargs_result_802BC6C0_1C74 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802BC6C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8025DA84:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8025D9B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8025D9B8_ra38_1f8_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8025D9B8 func_8025D9B8 preserves=true fpr_mask=0x00000000
