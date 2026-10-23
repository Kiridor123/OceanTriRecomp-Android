#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B5A48(CpuContext* ctx);
extern "C" uint32_t func_800B5A48_ra8_2_8_0(CpuContext*, uint32_t, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800C5A08_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r5_psq_tmp_0 = 0;
    uint32_t r5_psq_tmp_1 = 0;
    uint32_t r5_psq_tmp_2 = 0;
    uint32_t r5_psq_tmp_3 = 0;
    uint32_t r5_psq_tmp_4 = 0;
    uint32_t r5_psq_tmp_5 = 0;
    uint32_t r5_psq_tmp_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800C5A08;

loc_800C5A08:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
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

loc_800C5A4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5A64;
    }
}

loc_800C5A50:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800C5A5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5A64;
    }
}

loc_800C5A60:
{
    r10 = 0;
}

loc_800C5A64:
{
}

loc_800C5A68:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800C5A80;
    }
}

loc_800C5A6C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800C5A78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5A80;
    }
}

loc_800C5A7C:
{
    r9 = 0;
}

loc_800C5A80:
{
}

loc_800C5A84:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C5A98;
    }
}

loc_800C5A88:
{
    r0 = (r11 + 1073741824);
}

loc_800C5A90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5A98;
    }
}

loc_800C5A94:
{
    r8 = 0;
}

loc_800C5A98:
{
}

loc_800C5A9C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C5AB4;
    }
}

loc_800C5AA0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800C5AAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5AB4;
    }
}

loc_800C5AB0:
{
    r7 = 0;
}

loc_800C5AB4:
{
}

loc_800C5AB8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C5AD0;
    }
}

loc_800C5ABC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800C5AC8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5AD0;
    }
}

loc_800C5ACC:
{
    r6 = 0;
}

loc_800C5AD0:
{
}

loc_800C5AD4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C5AEC;
    }
}

loc_800C5AD8:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C5AE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5AEC;
    }
}

loc_800C5AE8:
{
    r5 = 0;
}

loc_800C5AEC:
{
}

loc_800C5AF0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C5B14;
    }
}

loc_800C5AF4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19616);
    r4 = 1386;
    r5 = 0x80590000u;
    r5 = (r5 + 20172);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C5B14u;
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

loc_800C5B14:
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

loc_800C5B38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5B50;
    }
}

loc_800C5B3C:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C5B48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5B50;
    }
}

loc_800C5B4C:
{
    r9 = 0;
}

loc_800C5B50:
{
}

loc_800C5B54:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C5B6C;
    }
}

loc_800C5B58:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C5B64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5B6C;
    }
}

loc_800C5B68:
{
    r8 = 0;
}

loc_800C5B6C:
{
}

loc_800C5B70:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C5B84;
    }
}

loc_800C5B74:
{
    r0 = (r10 + 1073741824);
}

loc_800C5B7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5B84;
    }
}

loc_800C5B80:
{
    r7 = 0;
}

loc_800C5B84:
{
}

loc_800C5B88:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C5BA0;
    }
}

loc_800C5B8C:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C5B98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5BA0;
    }
}

loc_800C5B9C:
{
    r6 = 0;
}

loc_800C5BA0:
{
}

loc_800C5BA4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C5BBC;
    }
}

loc_800C5BA8:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C5BB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5BBC;
    }
}

loc_800C5BB8:
{
    r5 = 0;
}

loc_800C5BBC:
{
}

loc_800C5BC0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C5BD8;
    }
}

loc_800C5BC4:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C5BD0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5BD8;
    }
}

loc_800C5BD4:
{
    r4 = 0;
}

loc_800C5BD8:
{
}

loc_800C5BDC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C5C00;
    }
}

loc_800C5BE0:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19616);
    r4 = 1387;
    r5 = 0x80590000u;
    r5 = (r5 + 19700);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C5C00u;
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

loc_800C5C00:
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

loc_800C5C24:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5C3C;
    }
}

loc_800C5C28:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C5C34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5C3C;
    }
}

loc_800C5C38:
{
    r9 = 0;
}

loc_800C5C3C:
{
}

loc_800C5C40:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C5C58;
    }
}

loc_800C5C44:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C5C50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5C58;
    }
}

loc_800C5C54:
{
    r8 = 0;
}

loc_800C5C58:
{
}

loc_800C5C5C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C5C70;
    }
}

loc_800C5C60:
{
    r0 = (r10 + 1073741824);
}

loc_800C5C68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5C70;
    }
}

loc_800C5C6C:
{
    r7 = 0;
}

loc_800C5C70:
{
}

loc_800C5C74:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C5C8C;
    }
}

loc_800C5C78:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C5C84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5C8C;
    }
}

loc_800C5C88:
{
    r6 = 0;
}

loc_800C5C8C:
{
}

loc_800C5C90:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C5CA8;
    }
}

loc_800C5C94:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C5CA0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5CA8;
    }
}

loc_800C5CA4:
{
    r5 = 0;
}

loc_800C5CA8:
{
}

loc_800C5CAC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C5CC4;
    }
}

loc_800C5CB0:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C5CBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C5CC4;
    }
}

loc_800C5CC0:
{
    r4 = 0;
}

loc_800C5CC4:
{
}

loc_800C5CC8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C5CEC;
    }
}

loc_800C5CCC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19616);
    r4 = 1388;
    r5 = 0x80590000u;
    r5 = (r5 + 20224);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C5CECu;
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

loc_800C5CEC:
{
    r3 = MemoryInline::FlatRead32(r30);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B5B30u>(ctx);
    r3 = ctx->gpr[3];
    r27 = r3;
    r3 = MemoryInline::FlatRead32(r30);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B8DACu>(ctx);
    r3 = ctx->gpr[3];
    r28 = r3;
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30944));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
}

loc_800C5D24:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_800C5D40;
    }
}

loc_800C5D28:
{
    r3 = (r1 + 20);
    r4 = (r27 + 172);
    r5 = (r31 + 172);
    // inline leaf 0x80050D58 (9 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_1 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_1, f0.d);
    // end of inlined leaf 0x80050D58
    r3 = (r1 + 20);
    ctx->lr = 0x800C5D40u;
    if constexpr (KnownRegArgsCpuCall<0x800B5A48u>(&func_800B5A48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_800B5A48_3872 = func_800B5A48_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_800B5A48_3872;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B5A48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_800C5D40:
{
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
}

loc_800C5D4C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800C5D64;
    }
}

loc_800C5D50:
{
    r3 = (r1 + 8);
    r4 = (r28 + 172);
    r5 = (r31 + 172);
    // inline leaf 0x80050D58 (9 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_3 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_3));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_3, f0.d);
    // end of inlined leaf 0x80050D58
    goto loc_800C5D74;
}

loc_800C5D64:
{
    r3 = (r1 + 8);
    r4 = (r30 + 164);
    r5 = (r31 + 172);
    // inline leaf 0x80050D58 (9 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r5));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_4));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_4 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r5_psq_tmp_4));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 8);
    PPC_PsqStStackInline<1u, 0u>(ctx, r3_psq_tmp_4, f0.d);
    // end of inlined leaf 0x80050D58
}

loc_800C5D74:
{
    r3 = (r1 + 8);
    ctx->lr = 0x800C5D7Cu;
    if constexpr (KnownRegArgsCpuCall<0x800B5A48u>(&func_800B5A48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_800B5A48_470E = func_800B5A48_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_800B5A48_470E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B5A48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r3 = r29;
    r4 = (r1 + 20);
    r5 = (r1 + 8);
    // inline leaf 0x80050D58 (9 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r5));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r4_psq_tmp_6 = (r4 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 0u>(ctx, r4_psq_tmp_6));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    r5_psq_tmp_6 = (r5 + 8);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r5_psq_tmp_6));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f0.d, f1.d));
    // psq_store w=1 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_6 = (r3 + 8);
    PPC_PsqStGqrInline<1u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6, f0.d);
    // end of inlined leaf 0x80050D58
    r3 = r29;
    ctx->lr = 0x800C5D94u;
    if constexpr (KnownRegArgsCpuCall<0x800B5A48u>(&func_800B5A48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        const auto regargs_result_800B5A48_4FE0 = func_800B5A48_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_800B5A48_4FE0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B5A48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_800C5D98:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800C5DA8;
    }
}

loc_800C5D9C:
{
    r3 = r29;
    r4 = (r30 + 152);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_800C5DA8:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800C5A08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800C5A08_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800C5A08 func_800C5A08 preserves=true fpr_mask=0x00000000
