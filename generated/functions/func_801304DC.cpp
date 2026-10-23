#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8013046C(CpuContext* ctx);
extern "C" uint64_t func_8013046C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80130724(CpuContext* ctx);
extern "C" uint64_t func_80130724_ra18_e_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_801304DC_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];

    goto loc_801304DC;

loc_801304DC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r29 = r3;
    r30 = r4;
    r31 = 0;
    r0 = (r4 & 255);
}

loc_80130508:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(254))) {
        goto loc_80130518;
    }
}

loc_8013050C:
{
    r30 = 1;
    r31 = 1;
    goto loc_80130528;
}

loc_80130518:
{
}

loc_8013051C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_80130528;
    }
}

loc_80130520:
{
    r30 = 1;
    r31 = 2;
}

loc_80130528:
{
    r0 = (r30 & 255);
}

loc_80130530:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80130540;
    }
}

loc_80130534:
{
}

loc_80130538:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80130570;
    }
}

loc_8013053C:
{
    goto loc_80130584;
}

loc_80130540:
{
}

loc_80130544:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_8013055C;
    }
}

loc_80130548:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126098_925 = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_925);
        r4 = static_cast<uint32_t>(regargs_result_80126098_925 >> 32);
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
    r3 = MemoryInline::FlatRead32((r3 + 80));
    r4 = (r3 + 24);
    goto loc_80130590;
}

loc_8013055C:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126098_C1C = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_C1C);
        r4 = static_cast<uint32_t>(regargs_result_80126098_C1C >> 32);
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
    r3 = MemoryInline::FlatRead32((r3 + 80));
    r4 = (r3 + 12);
    goto loc_80130590;
}

loc_80130570:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126098_F13 = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_F13);
        r4 = static_cast<uint32_t>(regargs_result_80126098_F13 >> 32);
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
    r3 = MemoryInline::FlatRead32((r3 + 80));
    r4 = (r3 + 12);
    goto loc_80130590;
}

loc_80130584:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80126098_120A = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_120A);
        r4 = static_cast<uint32_t>(regargs_result_80126098_120A >> 32);
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
    r4 = MemoryInline::FlatRead32((r3 + 80));
}

loc_80130590:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r29 + 540);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r29;
    r4 = r31;
    ctx->lr = 0x801305BCu;
    if constexpr (KnownRegArgsCpuCall<0x80130724u>(&func_80130724)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80130724_175D = func_80130724_ra18_e_18_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80130724_175D);
        r4 = static_cast<uint32_t>(regargs_result_80130724_175D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80130724u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    r3 = MemoryInline::FlatRead8((r29 + 482));
    r0 = (r30 & 255);
}

loc_801305C8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_8013060C;
    }
}

loc_801305CC:
{
}

loc_801305D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801305E8;
    }
}

loc_801305D4:
{
}

loc_801305D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801305F4;
    }
}

loc_801305DC:
{
}

loc_801305E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80130600;
    }
}

loc_801305E4:
{
    goto loc_80130608;
}

loc_801305E8:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 524));
    MemoryInline::FlatWriteFloat32((r29 + 396), f0.d);
    goto loc_80130608;
}

loc_801305F4:
{
    r3 = r29;
    ctx->lr = 0x801305FCu;
    if constexpr (KnownRegArgsCpuCall<0x8013046Cu>(&func_8013046C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        const auto regargs_result_8013046C_1F10 = func_8013046C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013046C_1F10);
        r4 = static_cast<uint32_t>(regargs_result_8013046C_1F10 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8013046Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
    goto loc_80130608;
}

loc_80130600:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 524));
    MemoryInline::FlatWriteFloat32((r29 + 396), f0.d);
}

loc_80130608:
{
    MemoryInline::FlatWrite8((r29 + 482), static_cast<uint8_t>(r30));
}

loc_8013060C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801304DC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801304DC_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801304DC func_801304DC preserves=true fpr_mask=0x00000000
