#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80126964(CpuContext* ctx);
extern "C" uint64_t func_80126964_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80127160(CpuContext* ctx);
extern "C" uint64_t func_80127160_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80129AD4(CpuContext* ctx);
extern "C" uint64_t func_80129AD4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012A268(CpuContext* ctx);
extern "C" uint64_t func_8012A268_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_8012A2B8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->gpr[5] = arg_r5;
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_8012A2B8;

loc_8012A2B8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_8012A2E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8012A2F0;
    }
}

loc_8012A2E4:
{
    r3 = r30;
    // inline leaf 0x801299E8 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 508), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 510), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 511), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801299E8
    goto loc_8012A398;
}

loc_8012A2F0:
{
    r0 = MemoryInline::FlatRead32((r30 + 456));
    r0 = (r0 & 512);
}

loc_8012A2FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8012A338;
    }
}

loc_8012A300:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126098_B44 = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_B44);
        r4 = static_cast<uint32_t>(regargs_result_80126098_B44 >> 32);
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
    ctx->lr = 0x8012A30Cu;
    if constexpr (KnownRegArgsCpuCall<0x80126964u>(&func_80126964)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126964_DD5 = func_80126964_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80126964_DD5);
        r4 = static_cast<uint32_t>(regargs_result_80126964_DD5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80126964u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8012A310:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012A338;
    }
}

loc_8012A314:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126098_1127 = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_1127);
        r4 = static_cast<uint32_t>(regargs_result_80126098_1127 >> 32);
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
    r4 = MemoryInline::FlatRead8((r30 + 481));
    ctx->lr = 0x8012A324u;
    if constexpr (KnownRegArgsCpuCall<0x80127160u>(&func_80127160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80127160_13EB = func_80127160_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80127160_13EB);
        r4 = static_cast<uint32_t>(regargs_result_80127160_13EB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80127160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8012A328:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012A338;
    }
}

loc_8012A32C:
{
    r3 = r30;
    // inline leaf 0x801299E8 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 508), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 510), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 511), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801299E8
    goto loc_8012A398;
}

loc_8012A338:
{
    r3 = r30;
    r4 = 21;
    ctx->lr = 0x8012A344u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80126520u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r12 = r3;
}

loc_8012A34C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8012A36C;
    }
}

loc_8012A350:
{
    r3 = r30;
    r4 = (r31 & 65535);
    ctr = r12;
    ctx->lr = 0x8012A360u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_8012A364:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8012A398;
    }
}

loc_8012A368:
{
    goto loc_8012A390;
}

loc_8012A36C:
{
    r3 = r30;
    r4 = (r31 & 65535);
    ctx->lr = 0x8012A378u;
    if constexpr (KnownRegArgsCpuCall<0x80129AD4u>(&func_80129AD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80129AD4_1D34 = func_80129AD4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80129AD4_1D34);
        r4 = static_cast<uint32_t>(regargs_result_80129AD4_1D34 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80129AD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8012A37C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8012A398;
    }
}

loc_8012A380:
{
    r3 = r30;
    if constexpr (KnownRegArgsCpuCall<0x8012A268u>(&func_8012A268)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012A268_208B = func_8012A268_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8012A268_208B);
        r4 = static_cast<uint32_t>(regargs_result_8012A268_208B >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012A268u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8012A38C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_8012A398;
    }
}

loc_8012A390:
{
    r3 = r30;
    // inline leaf 0x801299E8 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 508), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 510), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 511), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801299E8
}

loc_8012A398:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 2224), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012A2B8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012A2B8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8012A2B8 func_8012A2B8 preserves=true fpr_mask=0x00000000
