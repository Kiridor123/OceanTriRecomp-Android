#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" uint64_t func_803BEF70_rac8_1f8_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    goto loc_803BEF70;

loc_803BEF70:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r30 = 0x806B0000u;
    r31 = (r30 + -12348);
    r29 = MemoryInline::FlatRead32((r31 + 172));
    r3 = r29;
    r4 = 0;
    r5 = 8192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r29 + 44), r28);
    r0 = 31;
    MemoryInline::FlatWriteRam8((r30 + -12348), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWriteRam8((r31 + 8), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    r3 = (r29 + 16);
    r4 = 0;
    r5 = 5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
    // inline leaf 0x803BEF1C (21 guest instruction(s))
}

loc_inl0_0x803BEF1C:
{
    r4 = 0x806C0000u;
    r4 = (r4 + 6576);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r4));
}

loc_inl0_0x803BEF34:
{
    if ((static_cast<int32_t>(r4) > static_cast<int32_t>(1))) {
        goto loc_inl0_0x803BEF48;
    }
}

loc_inl0_0x803BEF38:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    goto loc_inl0_cont_803BEF1C;
}

loc_inl0_0x803BEF48:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r3 + 12));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = (r4 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_inl0_0x803BEF60:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x803BEF64:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    goto loc_inl0_cont_803BEF1C;
}

loc_inl0_return:
{
}

loc_inl0_cont_803BEF1C:
{
    // end of inlined leaf 0x803BEF1C
    r3 = 5;
    ctx->lr = 0x803BEFECu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800DBC94_E8B = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_E8B);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_E8B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BEF70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BEF70_rac8_1f8_18_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7], ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003E0E gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FF8 fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFE cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803BEF70 func_803BEF70 preserves=true fpr_mask=0x00000000
