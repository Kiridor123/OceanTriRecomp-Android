#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801076A4(CpuContext* ctx);
extern "C" uint64_t func_801076A4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" uint64_t func_801072B4_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_801072B4;

loc_801072B4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 22));
}

loc_801072E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80107360;
    }
}

loc_801072E4:
{
    r3 = (r31 & 255);
    r0 = (r3 + -3);
}

loc_801072F0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80107318;
    }
}

loc_801072F4:
{
}

loc_801072F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80107318;
    }
}

loc_801072FC:
{
}

loc_80107300:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(11))) {
        goto loc_80107318;
    }
}

loc_80107304:
{
}

loc_80107308:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(10))) {
        goto loc_8010732C;
    }
}

loc_8010730C:
{
}

loc_80107310:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(25))) {
        goto loc_8010732C;
    }
}

loc_80107314:
{
    goto loc_80107338;
}

loc_80107318:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80107324:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80107338;
    }
}

loc_80107328:
{
    goto loc_80107360;
}

loc_8010732C:
{
    r0 = MemoryInline::FlatRead8((r30 + 1));
}

loc_80107334:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80107360;
    }
}

loc_80107338:
{
    r3 = r30;
    r4 = (r31 & 255);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29432));
    r5 = MemoryInline::FlatRead8((r30 + 22));
    ctx->lr = 0x8010734Cu;
    if constexpr (KnownRegArgsCpuCall<0x801076A4u>(&func_801076A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801076A4_BB0 = func_801076A4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801076A4_BB0);
        r4 = static_cast<uint32_t>(regargs_result_801076A4_BB0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801076A4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_80107350:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80107360;
    }
}

loc_80107354:
{
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 56));
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r0));
}

loc_80107360:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801072B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801072B4_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x80000002 fpr_write=0x80000002 fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801072B4 func_801072B4 preserves=true fpr_mask=0x00000000
