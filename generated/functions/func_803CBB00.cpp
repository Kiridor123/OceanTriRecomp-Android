#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803CBBFC(CpuContext* ctx);
extern "C" uint64_t func_803CBBFC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803FA14C(CpuContext* ctx);
extern "C" uint64_t func_803FA14C_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803CBB00_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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

    MKW_GUEST_ENTER(0x803CBB00u);
    goto loc_803CBB00;

loc_803CBB00:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r3 = r30;
    ctx->lr = 0x803CBB28u;
    if constexpr (KnownRegArgsCpuCall<0x803FA14Cu>(&func_803FA14C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_803FA14C_6F8 = func_803FA14C_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803FA14C_6F8);
        r4 = static_cast<uint32_t>(regargs_result_803FA14C_6F8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803FA14Cu>(ctx);
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
    r31 = (r3 & 65535);
    r0 = MemoryInline::FlatRead32((r29 + 4124));
    r0 = (r0 + r31);
}

loc_803CBB38:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1024))) {
        goto loc_803CBB54;
    }
}

loc_803CBB3C:
{
    r3 = r29;
    // inline leaf 0x803CC078 (7 guest instruction(s))
}

loc_inl0_0x803CC078:
{
    r0 = MemoryInline::FlatRead8((r3 + 8776));
}

loc_inl0_0x803CC080:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x803CC08C;
    }
}

loc_inl0_0x803CC084:
{
    r3 = MemoryInline::FlatRead32((r3 + 8772));
    goto loc_inl0_cont_803CC078;
}

loc_inl0_0x803CC08C:
{
    r3 = 512;
}

loc_inl0_cont_803CC078:
{
    // end of inlined leaf 0x803CC078
    r0 = MemoryInline::FlatRead32((r29 + 4124));
    r0 = (r0 + r31);
}

loc_803CBB50:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_803CBB70;
    }
}

loc_803CBB54:
{
    r3 = r29;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x803CBB68u;
    if constexpr (KnownRegArgsCpuCall<0x803CBBFCu>(&func_803CBBFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_803CBBFC_1112 = func_803CBBFC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803CBBFC_1112);
        r4 = static_cast<uint32_t>(regargs_result_803CBBFC_1112 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803CBBFCu>(ctx);
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
    r0 = 1;
    MemoryInline::FlatWrite8((r29 + 4128), static_cast<uint8_t>(r0));
}

loc_803CBB70:
{
    r0 = MemoryInline::FlatRead32((r29 + 4124));
    r0 = (r0 + r31);
}

loc_803CBB7C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1024))) {
        goto loc_803CBB98;
    }
}

loc_803CBB80:
{
    r3 = r29;
    // inline leaf 0x803CC078 (7 guest instruction(s))
}

loc_inl1_0x803CC078:
{
    r0 = MemoryInline::FlatRead8((r3 + 8776));
}

loc_inl1_0x803CC080:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x803CC08C;
    }
}

loc_inl1_0x803CC084:
{
    r3 = MemoryInline::FlatRead32((r3 + 8772));
    goto loc_inl1_cont_803CC078;
}

loc_inl1_0x803CC08C:
{
    r3 = 512;
}

loc_inl1_cont_803CC078:
{
    // end of inlined leaf 0x803CC078
    r0 = MemoryInline::FlatRead32((r29 + 4124));
    r0 = (r0 + r31);
}

loc_803CBB94:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_803CBBB4;
    }
}

loc_803CBB98:
{
    r3 = r29;
    r4 = 0x80030000u;
    r4 = (r4 + 50);
    r5 = 9;
    r6 = 0x80000000u;
    // inline leaf 0x803CC0A4 (7 guest instruction(s))
}

loc_inl2_0x803CC0A4:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_0x803CC0AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x803CC0B0:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
    MemoryInline::FlatWrite32((r3 + 20), r5);
    MemoryInline::FlatWrite32((r3 + 24), r6);
    goto loc_inl2_cont_803CC0A4;
}

loc_inl2_return:
{
}

loc_inl2_cont_803CC0A4:
{
    // end of inlined leaf 0x803CC0A4
    goto loc_803CBBE0;
}

loc_803CBBB4:
{
    r3 = r30;
    // inline leaf 0x803FA0FC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x803FA0FC
    r4 = r3;
    r0 = MemoryInline::FlatRead32((r29 + 4124));
    r3 = (r29 + r0);
    r3 = (r3 + 3100);
    r5 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r29 + 4124));
    r0 = (r0 + r31);
    MemoryInline::FlatWrite32((r29 + 4124), r0);
}

loc_803CBBE0:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_803CBB00(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803CBB00_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803CBB00 func_803CBB00 preserves=true fpr_mask=0x00000000
