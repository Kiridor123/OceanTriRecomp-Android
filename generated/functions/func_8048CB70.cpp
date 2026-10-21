#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804780F0(CpuContext* ctx);
extern "C" uint64_t func_804780F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804787A0(CpuContext* ctx);
extern "C" uint32_t func_804787A0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804936B0(CpuContext* ctx);
extern "C" uint64_t func_804936B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80493B04(CpuContext* ctx);
extern "C" uint64_t func_80493B04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8048CB70_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8048CB70u);
    goto loc_8048CB70;

loc_8048CB70:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80740000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 2;
    r5 = (r5 + -7424);
    r31 = (r5 + 172);
    r5 = 0;
    ctr = r0;
}

loc_8048CB9C:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_8048CBA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048CBB8;
    }
}

loc_8048CBA8:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_8048CBB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8048CBB8;
    }
}

loc_8048CBB4:
{
    goto loc_8048CC28;
}

loc_8048CBB8:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r5 = (r5 + 1);
}

loc_8048CBC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048CBD8;
    }
}

loc_8048CBC8:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_8048CBD0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8048CBD8;
    }
}

loc_8048CBD4:
{
    goto loc_8048CC28;
}

loc_8048CBD8:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r5 = (r5 + 1);
}

loc_8048CBE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048CBF8;
    }
}

loc_8048CBE8:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_8048CBF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8048CBF8;
    }
}

loc_8048CBF4:
{
    goto loc_8048CC28;
}

loc_8048CBF8:
{
    r31 = (r31 + 96);
    r0 = MemoryInline::FlatRead8(r31);
    r5 = (r5 + 1);
}

loc_8048CC04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048CC18;
    }
}

loc_8048CC08:
{
    r0 = MemoryInline::FlatRead16((r31 + 6));
}

loc_8048CC10:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_8048CC18;
    }
}

loc_8048CC14:
{
    goto loc_8048CC28;
}

loc_8048CC18:
{
    r5 = (r5 + 1);
    r31 = (r31 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8048CB9C;
    }
}

loc_8048CC24:
{
    r31 = 0;
}

loc_8048CC28:
{
}

loc_8048CC2C:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8048CD34;
    }
}

loc_8048CC30:
{
}

loc_8048CC34:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8048CC58;
    }
}

loc_8048CC38:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_8048CC40:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_8048CC58;
    }
}

loc_8048CC44:
{
    r0 = 3;
    r4 = (r31 + 36);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    ctx->lr = 0x8048CC54u;
    if constexpr (KnownRegArgsCpuCall<0x80493B04u>(&func_80493B04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80493B04_11CD = func_80493B04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80493B04_11CD);
        r4 = static_cast<uint32_t>(regargs_result_80493B04_11CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80493B04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
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
    goto loc_8048CD34;
}

loc_8048CC58:
{
    r12 = MemoryInline::FlatRead32((r31 + 32));
}

loc_8048CC60:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(0))) {
        goto loc_8048CC74;
    }
}

loc_8048CC64:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r4 = 257;
    ctr = r12;
    ctx->lr = 0x8048CC74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
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

loc_8048CC74:
{
    r30 = MemoryInline::FlatRead16((r31 + 16));
    goto loc_8048CC88;
}

loc_8048CC7C:
{
    r3 = (r31 + 20);
    ctx->lr = 0x8048CC84u;
    if constexpr (KnownRegArgsCpuCall<0x804787A0u>(&func_804787A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804787A0_1CB6 = func_804787A0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804787A0_1CB6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804787A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->lr = 0x8048CC88u;
    if constexpr (KnownRegArgsCpuCall<0x804780F0u>(&func_804780F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804780F0_1F74 = func_804780F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804780F0_1F74);
        r4 = static_cast<uint32_t>(regargs_result_804780F0_1F74 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804780F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8048CC88:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
}

loc_8048CC90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8048CC7C;
    }
}

loc_8048CC94:
{
    r3 = 0x80740000u;
    r4 = 0;
    r3 = (r3 + -7424);
    r0 = 2;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r4));
    r4 = (r3 + 172);
    r3 = 0;
    ctr = r0;
}

loc_8048CCB4:
{
    r0 = MemoryInline::FlatRead8(r4);
}

loc_8048CCBC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048CCCC;
    }
}

loc_8048CCC0:
{
    r0 = MemoryInline::FlatRead16((r4 + 16));
}

loc_8048CCC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r30))) {
        goto loc_8048CD34;
    }
}

loc_8048CCCC:
{
    r0 = MemoryInline::FlatRead8((r4 + 96));
    r3 = (r3 + 1);
}

loc_8048CCD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048CCE8;
    }
}

loc_8048CCDC:
{
    r0 = MemoryInline::FlatRead16((r4 + 112));
}

loc_8048CCE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r30))) {
        goto loc_8048CD34;
    }
}

loc_8048CCE8:
{
    r0 = MemoryInline::FlatRead8((r4 + 192));
    r3 = (r3 + 1);
}

loc_8048CCF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048CD04;
    }
}

loc_8048CCF8:
{
    r0 = MemoryInline::FlatRead16((r4 + 208));
}

loc_8048CD00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r30))) {
        goto loc_8048CD34;
    }
}

loc_8048CD04:
{
    r0 = MemoryInline::FlatRead8((r4 + 288));
    r3 = (r3 + 1);
}

loc_8048CD10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8048CD20;
    }
}

loc_8048CD14:
{
    r0 = MemoryInline::FlatRead16((r4 + 304));
}

loc_8048CD1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r30))) {
        goto loc_8048CD34;
    }
}

loc_8048CD20:
{
    r3 = (r3 + 1);
    r4 = (r4 + 384);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8048CCB4;
    }
}

loc_8048CD2C:
{
    r3 = r30;
    ctx->lr = 0x8048CD34u;
    if constexpr (KnownRegArgsCpuCall<0x804936B0u>(&func_804936B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_804936B0_2ACC = func_804936B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804936B0_2ACC);
        r4 = static_cast<uint32_t>(regargs_result_804936B0_2ACC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804936B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r12 = ctx->gpr[12];
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
}

loc_8048CD34:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8048CB70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8048CB70_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8048CB70 func_8048CB70 preserves=true fpr_mask=0x00000000
