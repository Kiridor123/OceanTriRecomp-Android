#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B5A48(CpuContext* ctx);
extern "C" uint32_t func_800B5A48_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800B8A50_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800B8A50;

loc_800B8A50:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800B8A98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8AB0;
    }
}

loc_800B8A9C:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800B8AA8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8AB0;
    }
}

loc_800B8AAC:
{
    r10 = 0;
}

loc_800B8AB0:
{
}

loc_800B8AB4:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B8ACC;
    }
}

loc_800B8AB8:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800B8AC4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8ACC;
    }
}

loc_800B8AC8:
{
    r9 = 0;
}

loc_800B8ACC:
{
}

loc_800B8AD0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B8AE4;
    }
}

loc_800B8AD4:
{
    r0 = (r11 + 1073741824);
}

loc_800B8ADC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8AE4;
    }
}

loc_800B8AE0:
{
    r8 = 0;
}

loc_800B8AE4:
{
}

loc_800B8AE8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B8B00;
    }
}

loc_800B8AEC:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800B8AF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8B00;
    }
}

loc_800B8AFC:
{
    r7 = 0;
}

loc_800B8B00:
{
}

loc_800B8B04:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B8B1C;
    }
}

loc_800B8B08:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800B8B14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8B1C;
    }
}

loc_800B8B18:
{
    r6 = 0;
}

loc_800B8B1C:
{
}

loc_800B8B20:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B8B38;
    }
}

loc_800B8B24:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B8B30:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8B38;
    }
}

loc_800B8B34:
{
    r5 = 0;
}

loc_800B8B38:
{
}

loc_800B8B3C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B8B60;
    }
}

loc_800B8B40:
{
    r3 = 0x80590000u;
    r3 = (r3 + 16808);
    r4 = 1002;
    r5 = 0x80590000u;
    r5 = (r5 + 17416);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B8B60u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800B8B60:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r30 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800B8B84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8B9C;
    }
}

loc_800B8B88:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800B8B94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8B9C;
    }
}

loc_800B8B98:
{
    r9 = 0;
}

loc_800B8B9C:
{
}

loc_800B8BA0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B8BB8;
    }
}

loc_800B8BA4:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800B8BB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8BB8;
    }
}

loc_800B8BB4:
{
    r8 = 0;
}

loc_800B8BB8:
{
}

loc_800B8BBC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B8BD0;
    }
}

loc_800B8BC0:
{
    r0 = (r10 + 1073741824);
}

loc_800B8BC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8BD0;
    }
}

loc_800B8BCC:
{
    r7 = 0;
}

loc_800B8BD0:
{
}

loc_800B8BD4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B8BEC;
    }
}

loc_800B8BD8:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800B8BE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8BEC;
    }
}

loc_800B8BE8:
{
    r6 = 0;
}

loc_800B8BEC:
{
}

loc_800B8BF0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B8C08;
    }
}

loc_800B8BF4:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800B8C00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8C08;
    }
}

loc_800B8C04:
{
    r5 = 0;
}

loc_800B8C08:
{
}

loc_800B8C0C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B8C24;
    }
}

loc_800B8C10:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B8C1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8C24;
    }
}

loc_800B8C20:
{
    r4 = 0;
}

loc_800B8C24:
{
}

loc_800B8C28:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800B8C4C;
    }
}

loc_800B8C2C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 16808);
    r4 = 1003;
    r5 = 0x80590000u;
    r5 = (r5 + 16948);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B8C4Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800B8C4C:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800B8C70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8C88;
    }
}

loc_800B8C74:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800B8C80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8C88;
    }
}

loc_800B8C84:
{
    r9 = 0;
}

loc_800B8C88:
{
}

loc_800B8C8C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B8CA4;
    }
}

loc_800B8C90:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800B8C9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8CA4;
    }
}

loc_800B8CA0:
{
    r8 = 0;
}

loc_800B8CA4:
{
}

loc_800B8CA8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B8CBC;
    }
}

loc_800B8CAC:
{
    r0 = (r10 + 1073741824);
}

loc_800B8CB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8CBC;
    }
}

loc_800B8CB8:
{
    r7 = 0;
}

loc_800B8CBC:
{
}

loc_800B8CC0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B8CD8;
    }
}

loc_800B8CC4:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800B8CD0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8CD8;
    }
}

loc_800B8CD4:
{
    r6 = 0;
}

loc_800B8CD8:
{
}

loc_800B8CDC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B8CF4;
    }
}

loc_800B8CE0:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800B8CEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8CF4;
    }
}

loc_800B8CF0:
{
    r5 = 0;
}

loc_800B8CF4:
{
}

loc_800B8CF8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B8D10;
    }
}

loc_800B8CFC:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B8D08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8D10;
    }
}

loc_800B8D0C:
{
    r4 = 0;
}

loc_800B8D10:
{
}

loc_800B8D14:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800B8D38;
    }
}

loc_800B8D18:
{
    r3 = 0x80590000u;
    r3 = (r3 + 16808);
    r4 = 1004;
    r5 = 0x80590000u;
    r5 = (r5 + 17468);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B8D38u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800B8D38:
{
    r3 = MemoryInline::FlatRead32(r30);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B8DACu>(ctx);
    r3 = ctx->gpr[3];
    r5 = r3;
}

loc_800B8D4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800B8D64;
    }
}

loc_800B8D50:
{
    r3 = r29;
    r4 = (r31 + 172);
    r5 = (r5 + 172);
    // inline leaf 0x80050D58 (9 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_0 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_0));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, f0.d);
    // end of inlined leaf 0x80050D58
    goto loc_800B8D74;
}

loc_800B8D64:
{
    r3 = r29;
    r4 = (r31 + 172);
    r5 = (r30 + 164);
    // inline leaf 0x80050D58 (9 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f0.d);
    // end of inlined leaf 0x80050D58
}

loc_800B8D74:
{
    r3 = r29;
    ctx->lr = 0x800B8D7Cu;
    if constexpr (KnownRegArgsCpuCall<0x800B5A48u>(&func_800B5A48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800B5A48_37EF = func_800B5A48_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_800B5A48_37EF;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B5A48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_800B8D80:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800B8D90;
    }
}

loc_800B8D84:
{
    r3 = r29;
    r4 = (r30 + 152);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_800B8D90:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800B8A50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800B8A50_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x80000000 fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B8A50 func_800B8A50 preserves=true fpr_mask=0x00000000
