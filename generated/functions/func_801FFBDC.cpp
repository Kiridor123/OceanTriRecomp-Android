#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E2948(CpuContext* ctx);
extern "C" uint64_t func_800E2948_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801FFBDC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x801FFBDCu);
    goto loc_801FFBDC;

loc_801FFBDC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r28 = r3;
    r31 = 0;
    r30 = MemoryInline::FlatRead32((r2 + -16664));
}

loc_801FFC08:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_801FFCE4;
    }
}

loc_801FFC0C:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801FFC14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(6))) {
        goto loc_801FFC84;
    }
}

loc_801FFC18:
{
    r29 = 0;
    goto loc_801FFC70;
}

loc_801FFC20:
{
}

loc_801FFC24:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(6))) {
        goto loc_801FFC50;
    }
}

loc_801FFC28:
{
}

loc_801FFC2C:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(7))) {
        goto loc_801FFC50;
    }
}

loc_801FFC30:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r31);
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r4 = r29;
    r5 = 4;
    r6 = (r1 + 20);
    r7 = 1;
    ctx->lr = 0x801FFC4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    goto loc_801FFC6C;
}

loc_801FFC50:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r30);
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r4 = r29;
    r5 = 4;
    r6 = (r1 + 16);
    r7 = 1;
    ctx->lr = 0x801FFC6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
}

loc_801FFC6C:
{
    r29 = (r29 + 1);
}

loc_801FFC70:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    ctx->lr = 0x801FFC78u;
    if constexpr (KnownRegArgsCpuCall<0x800E2948u>(&func_800E2948)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800E2948_C07 = func_800E2948_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2948_C07);
        r4 = static_cast<uint32_t>(regargs_result_800E2948_C07 >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x800E2948u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801FFC7C:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r3))) {
        goto loc_801FFC20;
    }
}

loc_801FFC80:
{
    goto loc_801FFCE4;
}

loc_801FFC84:
{
    r29 = 0;
    goto loc_801FFCD4;
}

loc_801FFC8C:
{
}

loc_801FFC90:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(5))) {
        goto loc_801FFCB4;
    }
}

loc_801FFC94:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r4 = r29;
    r5 = 4;
    r6 = (r1 + 12);
    r7 = 1;
    ctx->lr = 0x801FFCB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    goto loc_801FFCD0;
}

loc_801FFCB4:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r3 = MemoryInline::FlatRead32((r28 + 8));
    r4 = r29;
    r5 = 4;
    r6 = (r1 + 8);
    r7 = 1;
    ctx->lr = 0x801FFCD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
}

loc_801FFCD0:
{
    r29 = (r29 + 1);
}

loc_801FFCD4:
{
    r3 = MemoryInline::FlatRead32((r28 + 8));
    ctx->lr = 0x801FFCDCu;
    if constexpr (KnownRegArgsCpuCall<0x800E2948u>(&func_800E2948)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800E2948_15DD = func_800E2948_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2948_15DD);
        r4 = static_cast<uint32_t>(regargs_result_800E2948_15DD >> 32);
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x800E2948u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_801FFCE0:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r3))) {
        goto loc_801FFC8C;
    }
}

loc_801FFCE4:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801FFBDC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801FFBDC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801FFBDC func_801FFBDC preserves=true fpr_mask=0x00000000
