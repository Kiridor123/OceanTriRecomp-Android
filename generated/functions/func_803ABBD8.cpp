#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A880C(CpuContext* ctx);
extern "C" uint32_t func_803A880C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803AB49C(CpuContext* ctx);
extern "C" uint64_t func_803AB49C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803AB678(CpuContext* ctx);
extern "C" uint64_t func_803AB678_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803ABBD8_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_803ABBD8;

loc_803ABBD8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r30 = r4;
    r3 = (r1 + 8);
    r4 = 0x80600000u;
    r4 = (r4 + -32104);
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r31;
    r4 = (r1 + 8);
    r5 = 1;
    ctx->lr = 0x803ABC18u;
    if constexpr (KnownRegArgsCpuCall<0x803AB49Cu>(&func_803AB49C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803AB49C_71D = func_803AB49C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AB49C_71D);
        r4 = static_cast<uint32_t>(regargs_result_803AB49C_71D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x803AB49Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    ctx->lr = 0x803ABC1Cu;
    if constexpr (KnownRegArgsCpuCall<0x803A880Cu>(&func_803A880C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803A880C_AAA = func_803A880C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803A880C_AAA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803A880Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    r3 = 0x806C0000u;
    r3 = (r3 + 31192);
    r4 = 0;
    r5 = 192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x806C0000u;
    r3 = (r3 + 31384);
    r4 = 0;
    r5 = 192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x806C0000u;
    r3 = (r3 + 31576);
    r4 = 0;
    r5 = 192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0x806C0000u;
    r3 = (r3 + 31768);
    r4 = 0;
    r5 = 192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = (r30 & 255);
}

loc_803ABC78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_803ABD28;
    }
}

loc_803ABC7C:
{
    r3 = r31;
    r4 = 0;
    r5 = 1;
    ctx->lr = 0x803ABC8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x803AA0C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
}

loc_803ABC90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803ABD28;
    }
}

loc_803ABC94:
{
    r4 = (r31 + 156);
    r3 = 0;
    goto loc_803ABCAC;
}

loc_803ABCA0:
{
    r0 = MemoryInline::FlatRead8((r4 + 3));
    r3 = (r3 + r0);
    r4 = (r4 + 4);
}

loc_803ABCAC:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_803ABCB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ABCA0;
    }
}

loc_803ABCB8:
{
    r7 = (r3 & 65535);
}

loc_803ABCC0:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_803ABCDC;
    }
}

loc_803ABCC4:
{
    r3 = (r1 + 8);
    r4 = (r31 + 156);
    r5 = 0x806C0000u;
    r5 = (r5 + 31192);
    r6 = 8;
    ctx->lr = 0x803ABCDCu;
    if constexpr (KnownRegArgsCpuCall<0x803AB678u>(&func_803AB678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803AB678_166D = func_803AB678_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AB678_166D);
        r4 = static_cast<uint32_t>(regargs_result_803AB678_166D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x803AB678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803ABCDC:
{
    r3 = (r31 + 200);
    r4 = 0;
    goto loc_803ABCF4;
}

loc_803ABCE8:
{
    r0 = MemoryInline::FlatRead8((r3 + 3));
    r4 = (r4 + r0);
    r3 = (r3 + 4);
}

loc_803ABCF4:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_803ABCFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803ABCE8;
    }
}

loc_803ABD00:
{
    r7 = (r4 & 65535);
}

loc_803ABD08:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_803ABD28;
    }
}

loc_803ABD0C:
{
    r3 = (r1 + 16);
    r4 = (r31 + 200);
    r5 = 0x806C0000u;
    r5 = (r5 + 31192);
    r5 = (r5 + 32);
    r6 = 8;
    ctx->lr = 0x803ABD28u;
    if constexpr (KnownRegArgsCpuCall<0x803AB678u>(&func_803AB678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_803AB678_1CED = func_803AB678_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AB678_1CED);
        r4 = static_cast<uint32_t>(regargs_result_803AB678_1CED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x803AB678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803ABD28:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803ABBD8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803ABBD8_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803ABBD8 func_803ABBD8 preserves=true fpr_mask=0x00000000
