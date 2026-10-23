#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803D48BC(CpuContext* ctx);
extern "C" uint64_t func_803D48BC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803D26FC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_803D26FC;

loc_803D26FC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 76));
    ctr = r12;
    ctx->lr = 0x803D272Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_803D2730:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803D273C;
    }
}

loc_803D2734:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5136));
    goto loc_803D27AC;
}

loc_803D273C:
{
    r3 = r30;
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    if constexpr (KnownRegArgsCpuCall<0x803D48BCu>(&func_803D48BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803D48BC_96A = func_803D48BC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803D48BC_96A);
        r4 = static_cast<uint32_t>(regargs_result_803D48BC_96A >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803D48BCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803D2750:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_803D275C;
    }
}

loc_803D2754:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5136));
    goto loc_803D27AC;
}

loc_803D275C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
}

loc_803D2764:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r4))) {
        goto loc_803D2780;
    }
}

loc_803D2768:
{
    r3 = (r30 + 65536);
    r0 = (r0 * 2340);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 18516));
    // inline leaf 0x803CC060 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8692));
    // end of inlined leaf 0x803CC060
    goto loc_803D27AC;
}

loc_803D2780:
{
    r3 = (r30 + 65536);
    r0 = (r4 * 2340);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 18516));
    // inline leaf 0x803CC060 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8692));
    // end of inlined leaf 0x803CC060
    r3 = (r30 + 65536);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    r0 = (r0 * 2340);
    r3 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18492));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
}

loc_803D27AC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803D26FC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803D26FC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803D26FC func_803D26FC preserves=true fpr_mask=0x00000000
