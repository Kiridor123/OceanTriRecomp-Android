#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012FE04(CpuContext* ctx);
extern "C" uint64_t func_8012FE04_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012FEA0(CpuContext* ctx);
extern "C" uint32_t func_8012FEA0_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_8012FF18(CpuContext* ctx);
extern "C" uint32_t func_8012FF18_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_801302D0(CpuContext* ctx);
extern "C" uint64_t func_801302D0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80130348(CpuContext* ctx);
extern "C" uint64_t func_80130348_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8013036C(CpuContext* ctx);
extern "C" uint64_t func_8013036C_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8012FF9C_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x8012FF9Cu);
    goto loc_8012FF9C;

loc_8012FF9C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = MemoryInline::FlatRead8((r3 + 482));
    r0 = (r4 + -3);
}

loc_8012FFBC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8012FFDC;
    }
}

loc_8012FFC0:
{
}

loc_8012FFC4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8012FFDC;
    }
}

loc_8012FFC8:
{
}

loc_8012FFCC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_8012FFE8;
    }
}

loc_8012FFD0:
{
}

loc_8012FFD4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80130014;
    }
}

loc_8012FFD8:
{
    goto loc_80130050;
}

loc_8012FFDC:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 524));
    MemoryInline::FlatWriteFloat32((r3 + 396), f0.d);
    goto loc_80130058;
}

loc_8012FFE8:
{
    r0 = MemoryInline::FlatRead8((r3 + 783));
}

loc_8012FFF0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80130000;
    }
}

loc_8012FFF4:
{
    ctx->lr = 0x8012FFF8u;
    if constexpr (KnownRegArgsCpuCall<0x801302D0u>(&func_801302D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_801302D0_A56 = func_801302D0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801302D0_A56);
        r4 = static_cast<uint32_t>(regargs_result_801302D0_A56 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801302D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    ctx->lr = 0x80130000u;
    if constexpr (KnownRegArgsCpuCall<0x8012FEA0u>(&func_8012FEA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012FEA0_D84 = func_8012FEA0_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012FEA0_D84;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012FEA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_80130000:
{
    r3 = r31;
    ctx->lr = 0x80130008u;
    if constexpr (KnownRegArgsCpuCall<0x80130348u>(&func_80130348)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_80130348_1081 = func_80130348_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80130348_1081);
        r4 = static_cast<uint32_t>(regargs_result_80130348_1081 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80130348u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    ctx->lr = 0x80130010u;
    if constexpr (KnownRegArgsCpuCall<0x8012FE04u>(&func_8012FE04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012FE04_13AD = func_8012FE04_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012FE04_13AD);
        r4 = static_cast<uint32_t>(regargs_result_8012FE04_13AD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012FE04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_80130058;
}

loc_80130014:
{
    r0 = MemoryInline::FlatRead8((r3 + 483));
}

loc_8013001C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80130028;
    }
}

loc_80130020:
{
    // inline leaf 0x80136E58 (9 guest instruction(s))
}

loc_inl0_0x80136E58:
{
    r0 = MemoryInline::FlatRead8((r3 + 572));
}

loc_inl0_0x80136E60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x80136E6C;
    }
}

loc_inl0_0x80136E64:
{
    r3 = 0;
    goto loc_inl0_cont_80136E58;
}

loc_inl0_0x80136E6C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 576));
    MemoryInline::FlatWriteFloat32((r3 + 396), f0.d);
    r3 = 1;
}

loc_inl0_cont_80136E58:
{
    // end of inlined leaf 0x80136E58
    goto loc_80130040;
}

loc_80130028:
{
    r0 = MemoryInline::FlatRead8((r3 + 782));
}

loc_80130030:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80130040;
    }
}

loc_80130034:
{
    ctx->lr = 0x80130038u;
    if constexpr (KnownRegArgsCpuCall<0x8013036Cu>(&func_8013036C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_8013036C_1B04 = func_8013036C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013036C_1B04);
        r4 = static_cast<uint32_t>(regargs_result_8013036C_1B04 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8013036Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    ctx->lr = 0x80130040u;
    if constexpr (KnownRegArgsCpuCall<0x8012FF18u>(&func_8012FF18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012FF18_1E30 = func_8012FF18_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012FF18_1E30;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012FF18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_80130040:
{
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    ctx->lr = 0x8013004Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012FE04u>(&func_8012FE04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012FE04_2168 = func_8012FE04_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012FE04_2168);
        r4 = static_cast<uint32_t>(regargs_result_8012FE04_2168 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012FE04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    goto loc_80130058;
}

loc_80130050:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    ctx->lr = 0x80130058u;
    if constexpr (KnownRegArgsCpuCall<0x8012FE04u>(&func_8012FE04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_8012FE04_2542 = func_8012FE04_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012FE04_2542);
        r4 = static_cast<uint32_t>(regargs_result_8012FE04_2542 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012FE04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_80130058:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012FF9C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012FF9C_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012FF9C func_8012FF9C preserves=true fpr_mask=0x00000000
