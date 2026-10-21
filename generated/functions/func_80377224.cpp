#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80208BAC(CpuContext* ctx);
extern "C" uint32_t func_80208BAC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80377224_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;

    MKW_GUEST_ENTER(0x80377224u);
    goto loc_80377224;

loc_80377224:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 2820), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 51));
    MemoryInline::FlatWrite8((r3 + 2816), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 52));
    MemoryInline::FlatWrite8((r3 + 2817), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 53));
    MemoryInline::FlatWrite8((r3 + 2818), static_cast<uint8_t>(r0));
    r6 = MemoryInline::FlatRead8((r4 + 50));
    MemoryInline::FlatWrite8((r3 + 22), static_cast<uint8_t>(r6));
    r0 = (r5 & 255);
}

loc_80377270:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803772B8;
    }
}

loc_80377274:
{
    r0 = MemoryInline::FlatRead8((r4 + 50));
}

loc_8037727C:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_803772B8;
    }
}

loc_80377280:
{
    r3 = MemoryInline::FlatRead8((r3 + 10));
    r4 = MemoryInline::FlatRead16((r30 + 12));
    if constexpr (KnownRegArgsCpuCall<0x80208BACu>(&func_80208BAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80208BAC_808 = func_80208BAC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80208BAC_808;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80208BACu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_80377290:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803772F4;
    }
}

loc_80377294:
{
    r3 = (r30 + 144);
    r4 = (r31 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r30;
    r4 = 0x806C0000u;
    r4 = (r4 + 6576);
    r4 = MemoryInline::FlatRead16((r4 + 5772));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    ctx->lr = 0x803772B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8020A0BCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    goto loc_803772F4;
}

loc_803772B8:
{
    r3 = (r3 + 60);
    r4 = (r4 + 36);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r30 + 72);
    r4 = (r30 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r30 + 144);
    r4 = (r30 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead16((r31 + 48));
    MemoryInline::FlatWrite32((r30 + 88), r0);
    MemoryInline::FlatWrite32((r30 + 168), r0);
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x803772F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8020A0BCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_803772F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80377224(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80377224_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80377224 func_80377224 preserves=true fpr_mask=0x00000000
