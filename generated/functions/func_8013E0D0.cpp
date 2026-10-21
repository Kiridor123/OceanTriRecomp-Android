#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80140744(CpuContext* ctx);
extern "C" uint32_t func_80140744_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801407DC(CpuContext* ctx);
extern "C" uint64_t func_801407DC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8013E0D0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x8013E0D0u);
    goto loc_8013E0D0;

loc_8013E0D0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r4;
    r31 = 0;
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8013E0F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013E10C;
    }
}

loc_8013E0F8:
{
}

loc_8013E0FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8013E128;
    }
}

loc_8013E100:
{
}

loc_8013E104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(255))) {
        goto loc_8013E15C;
    }
}

loc_8013E108:
{
    goto loc_8013E1BC;
}

loc_8013E10C:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r3 + 2548), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8((r3 + 2549), static_cast<uint8_t>(r0));
    r0 = (r4 + 3);
    MemoryInline::FlatWrite32((r3 + 2544), r0);
    goto loc_8013E1C8;
}

loc_8013E128:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 2548), static_cast<uint8_t>(r0));
    r3 = 49;
    r4 = MemoryInline::FlatRead8(r4);
    if constexpr (KnownRegArgsCpuCall<0x80140744u>(&func_80140744)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80140744_9E6 = func_80140744_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80140744_9E6;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80140744u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 255);
    r30 = (r30 + r0);
    r3 = r30;
    r4 = 49;
    r5 = 1;
    ctx->lr = 0x8013E154u;
    if constexpr (KnownRegArgsCpuCall<0x801407DCu>(&func_801407DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_801407DC_C5D = func_801407DC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_801407DC_C5D);
        r4 = static_cast<uint32_t>(regargs_result_801407DC_C5D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x801407DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
    goto loc_8013E1C8;
}

loc_8013E15C:
{
    r5 = MemoryInline::FlatRead8((r3 + 2548));
}

loc_8013E164:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8013E184;
    }
}

loc_8013E168:
{
}

loc_8013E16C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_8013E194;
    }
}

loc_8013E170:
{
}

loc_8013E174:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(255))) {
        goto loc_8013E1C8;
    }
}

loc_8013E178:
{
    r4 = 14;
    // inline leaf 0x80140B5C (6 guest instruction(s))
}

loc_inl0_0x80140B5C:
{
    r6 = r3;
    r3 = (r4 & 255);
    r4 = r5;
    r5 = MemoryInline::FlatRead8((r6 + 3));
}

loc_inl0_0x80140B70:
{
}

loc_inl0_cont_80140B5C:
{
    // end of inlined leaf 0x80140B5C
    goto loc_8013E1C8;
}

loc_8013E184:
{
    r31 = -1;
    r0 = MemoryInline::FlatRead32((r3 + 2544));
    MemoryInline::FlatWrite32((r3 + 2392), r0);
    goto loc_8013E1C8;
}

loc_8013E194:
{
    r4 = MemoryInline::FlatRead8((r3 + 2549));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite8((r3 + 2549), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_8013E1A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8013E1C8;
    }
}

loc_8013E1AC:
{
    r31 = -1;
    r0 = MemoryInline::FlatRead32((r3 + 2544));
    MemoryInline::FlatWrite32((r3 + 2392), r0);
    goto loc_8013E1C8;
}

loc_8013E1BC:
{
    r4 = 0;
    r5 = 0;
    // inline leaf 0x80140B5C (6 guest instruction(s))
}

loc_inl1_0x80140B5C:
{
    r6 = r3;
    r3 = (r4 & 255);
    r4 = r5;
    r5 = MemoryInline::FlatRead8((r6 + 3));
}

loc_inl1_0x80140B70:
{
}

loc_inl1_cont_80140B5C:
{
    // end of inlined leaf 0x80140B5C
}

loc_8013E1C8:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8013E0D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013E0D0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013E0D0 func_8013E0D0 preserves=true fpr_mask=0x00000000
