#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805082C0(CpuContext* ctx);
extern "C" uint64_t func_805082C0_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_80507E00_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_80507E00;

loc_80507E00:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r12 = MemoryInline::FlatRead32((r13 + -13916));
    r27 = r3;
    r28 = r4;
    r3 = 9;
    r5 = 32;
    ctr = r12;
    r4 = (r4 + 32);
    ctx->lr = 0x80507E34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    ctr = ctx->ctr;
}

loc_80507E38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80507E44;
    }
}

loc_80507E3C:
{
    r31 = 0;
    goto loc_80507E58;
}

loc_80507E44:
{
    r4 = 1146552320;
    r31 = (r3 + 32);
    r0 = (r4 + 17229);
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r28);
}

loc_80507E58:
{
}

loc_80507E5C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_80507E68;
    }
}

loc_80507E60:
{
    r31 = 0;
    goto loc_80507EB4;
}

loc_80507E68:
{
}

loc_80507E6C:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80507EB4;
    }
}

loc_80507E70:
{
    r30 = MemoryInline::FlatRead32((r27 + -28));
    r29 = (r27 + -32);
    r3 = r31;
    r4 = r27;
}

loc_80507E84:
{
    r5 = r30;
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(r28))) {
        goto loc_80507E90;
    }
}

loc_80507E8C:
{
    r5 = r28;
}

loc_80507E90:
{
    if constexpr (KnownRegArgsCpuCall<0x805082C0u>(&func_805082C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_805082C0_E01 = func_805082C0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_805082C0_E01);
        r4 = static_cast<uint32_t>(regargs_result_805082C0_E01 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805082C0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
}

loc_80507E98:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80507EB4;
    }
}

loc_80507E9C:
{
    r12 = MemoryInline::FlatRead32((r13 + -13920));
    r4 = r29;
    r5 = r30;
    r3 = 9;
    ctr = r12;
    ctx->lr = 0x80507EB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    ctr = ctx->ctr;
}

loc_80507EB4:
{
    r11 = (r1 + 32);
    r3 = r31;
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80507E00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80507E00_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80507E00 func_80507E00 preserves=true fpr_mask=0x00000000
