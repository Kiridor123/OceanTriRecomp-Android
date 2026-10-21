#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805172AC(CpuContext* ctx);
extern "C" uint32_t func_805172AC_rad0_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80517320(CpuContext* ctx);
extern "C" uint32_t func_80517320_ra38_1e_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80517324(CpuContext* ctx);
extern "C" uint64_t func_80517324_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80517328(CpuContext* ctx);
extern "C" uint64_t func_80517328_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8051732C(CpuContext* ctx);
extern "C" uint64_t func_8051732C_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8051BD68(CpuContext* ctx);
extern "C" uint64_t func_8051BD68_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80519228_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
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

    MKW_GUEST_ENTER(0x80519228u);
    goto loc_80519228;

loc_80519228:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    ctx->lr = 0x80519248u;
    if constexpr (KnownRegArgsCpuCall<0x8051BD68u>(&func_8051BD68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8051BD68_8B5 = func_8051BD68_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8051BD68_8B5);
        r4 = static_cast<uint32_t>(regargs_result_8051BD68_8B5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8051BD68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    // inline leaf 0x8051BDDC (2 guest instruction(s))
    r3 = (r3 + 2056);
    // end of inlined leaf 0x8051BDDC
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32((r3 + 12));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r29 = MemoryInline::FlatRead32((r30 + 40));
}

loc_80519260:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80519268;
    }
}

loc_80519264:
{
    r29 = (r30 + 224);
}

loc_80519268:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x80517324u>(&func_80517324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80517324_D3A = func_80517324_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80517324_D3A);
        r4 = static_cast<uint32_t>(regargs_result_80517324_D3A >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80517324u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80519274:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8051928C;
    }
}

loc_80519278:
{
    r3 = r29;
    r4 = (r31 + 4);
    if constexpr (KnownRegArgsCpuCall<0x80517328u>(&func_80517328)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80517328_104D = func_80517328_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80517328_104D);
        r4 = static_cast<uint32_t>(regargs_result_80517328_104D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80517328u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_80519288:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805192D0;
    }
}

loc_8051928C:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x80519298u;
    if constexpr (KnownRegArgsCpuCall<0x805172ACu>(&func_805172AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[5] = r5;
        const auto regargs_result_805172AC_1466 = func_805172AC_rad0_1fe_10_0(ctx, r4, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_805172AC_1466;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x805172ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8051929C:
{
    MemoryInline::FlatWrite32((r31 + 788), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805192D8;
    }
}

loc_805192A4:
{
    r0 = MemoryInline::FlatRead32((r30 + 12));
}

loc_805192AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805192C0;
    }
}

loc_805192B0:
{
    r0 = 12;
    r3 = 0;
    MemoryInline::FlatWrite32((r31 + 816), r0);
    goto loc_80519360;
}

loc_805192C0:
{
    r0 = 4;
    r3 = 0;
    MemoryInline::FlatWrite32((r31 + 816), r0);
    goto loc_80519360;
}

loc_805192D0:
{
    r0 = MemoryInline::FlatRead32((r31 + 792));
    MemoryInline::FlatWrite32((r31 + 788), r0);
}

loc_805192D8:
{
    r3 = (r31 + 4);
    r4 = 256;
    ctx->lr = 0x805192E4u;
    if constexpr (KnownRegArgsCpuCall<0x8051732Cu>(&func_8051732C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8051732C_1D3B = func_8051732C_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_8051732C_1D3B);
        r4 = static_cast<uint32_t>(regargs_result_8051732C_1D3B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8051732Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x80517324u>(&func_80517324)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80517324_20A3 = func_80517324_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80517324_20A3);
        r4 = static_cast<uint32_t>(regargs_result_80517324_20A3 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80517324u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r5 = r3;
    r4 = r29;
    r3 = (r31 + 4);
    if constexpr (KnownRegArgsCpuCall<0x80517320u>(&func_80517320)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_80517320_2324 = func_80517320_ra38_1e_10_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r4 = regargs_result_80517320_2324;
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80517320u>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r0 = MemoryInline::FlatRead32((r30 + 32));
    MemoryInline::FlatWrite32((r31 + 796), r0);
    r0 = MemoryInline::FlatRead32((r30 + 12));
}

loc_8051930C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80519318;
    }
}

loc_80519310:
{
    r0 = MemoryInline::FlatRead32((r30 + 480));
    MemoryInline::FlatWrite32((r31 + 796), r0);
}

loc_80519318:
{
    r3 = MemoryInline::FlatRead32((r31 + 788));
    r0 = MemoryInline::FlatRead32((r31 + 792));
}

loc_80519324:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80519344;
    }
}

loc_80519328:
{
    r3 = MemoryInline::FlatRead32((r31 + 796));
    r0 = MemoryInline::FlatRead32((r31 + 800));
}

loc_80519334:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80519344;
    }
}

loc_80519338:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
}

loc_80519340:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8051934C;
    }
}

loc_80519344:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 824), r0);
}

loc_8051934C:
{
    r4 = MemoryInline::FlatRead32((r31 + 788));
    r3 = 1;
    r0 = MemoryInline::FlatRead32((r31 + 796));
    MemoryInline::FlatWrite32((r31 + 792), r4);
    MemoryInline::FlatWrite32((r31 + 800), r0);
}

loc_80519360:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80519228(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80519228_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80519228 func_80519228 preserves=true fpr_mask=0x00000000
