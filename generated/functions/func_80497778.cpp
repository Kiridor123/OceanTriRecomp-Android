#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80496070(CpuContext* ctx);
extern "C" uint64_t func_80496070_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint32_t func_80497778_rac8_1fe_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80497778u);
    goto loc_80497778;

loc_80497778:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80740000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 4;
    r4 = (r4 + -5120);
    r31 = (r4 + 8);
    r30 = r3;
    ctr = r0;
}

loc_804977A4:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_804977AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80497828;
    }
}

loc_804977B0:
{
    r3 = r31;
    r4 = 0;
    r5 = 92;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
    r4 = r30;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r3 = (r31 + 42);
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r5 = 0;
    r3 = 65536;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 86u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 4), r5);
    r0 = (r3 + -1);
    r4 = 0x80740000u;
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r31 + 40), static_cast<uint16_t>(r0));
    r4 = (r4 + -5120);
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r31 + 80), r5);
    MemoryInline::WriteResolved16(guest_range_0, 46u, (r31 + 50), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r31 + 32), r31);
    MemoryInline::WriteResolved16(guest_range_0, 52u, (r31 + 56), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead16((r4 + 1978));
    MemoryInline::WriteResolved16(guest_range_0, 84u, (r31 + 88), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 45u, (r31 + 49), static_cast<uint8_t>(r5));
    r3 = MemoryInline::FlatRead16((r4 + 1976));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r4 + 1976), static_cast<uint16_t>(r0));
    ctx->lr = 0x80497820u;
    if constexpr (KnownRegArgsCpuCall<0x80496070u>(&func_80496070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80496070_D2B = func_80496070_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80496070_D2B);
        r4 = static_cast<uint32_t>(regargs_result_80496070_D2B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80496070u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = r31;
    goto loc_80497834;
}

loc_80497828:
{
    r31 = (r31 + 92);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804977A4;
    }
}

loc_80497830:
{
    r3 = 0;
}

loc_80497834:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_80497778(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80497778_rac8_1fe_8_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000027CF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80497778 func_80497778 preserves=true fpr_mask=0x00000000
