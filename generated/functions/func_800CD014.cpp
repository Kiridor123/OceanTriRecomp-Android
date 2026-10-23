#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A8A6C(CpuContext* ctx);
extern "C" uint32_t func_800A8A6C_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_800A9A18(CpuContext* ctx);
extern "C" uint64_t func_800A9A18_ra38_fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_800AA014(CpuContext* ctx);
extern "C" uint64_t func_800AA014_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800CD014_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800CD580_loc_0 = 0;
    uint32_t addr_psqx_800CD58C_loc_0 = 0;
    uint32_t addr_psqx_800CD598_loc_0 = 0;
    uint32_t addr_psqx_800CD5A4_loc_0 = 0;
    uint32_t addr_psqx_800CD5B0_loc_0 = 0;
    uint32_t addr_psqx_800CD5BC_loc_0 = 0;
    uint32_t addr_psqx_800CD5C8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t stackword13 = 0;
    uint32_t stackword14 = 0;
    uint32_t stackword15 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword23 = 0;
    uint32_t stackword24 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800CD014;

loc_800CD014:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -288), 0, 296u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 292u, (r1 + 292), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 272u, (r1 + 272), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 256u, (r1 + 256), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 240u, (r1 + 240), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 224u, (r1 + 224), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    r11 = (r1 + 176);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r21 = r3;
    r22 = r4;
    r23 = r5;
    r24 = r6;
    r29 = r7;
    r25 = r8;
    r26 = r9;
    f28.d = f1.d;
    r27 = r10;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800CD0A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD0C0;
    }
}

loc_800CD0AC:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800CD0B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD0C0;
    }
}

loc_800CD0BC:
{
    r10 = 0;
}

loc_800CD0C0:
{
}

loc_800CD0C4:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800CD0DC;
    }
}

loc_800CD0C8:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800CD0D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD0DC;
    }
}

loc_800CD0D8:
{
    r9 = 0;
}

loc_800CD0DC:
{
}

loc_800CD0E0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800CD0F4;
    }
}

loc_800CD0E4:
{
    r0 = (r11 + 1073741824);
}

loc_800CD0EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD0F4;
    }
}

loc_800CD0F0:
{
    r8 = 0;
}

loc_800CD0F4:
{
}

loc_800CD0F8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800CD110;
    }
}

loc_800CD0FC:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800CD108:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD110;
    }
}

loc_800CD10C:
{
    r7 = 0;
}

loc_800CD110:
{
}

loc_800CD114:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800CD12C;
    }
}

loc_800CD118:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800CD124:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD12C;
    }
}

loc_800CD128:
{
    r6 = 0;
}

loc_800CD12C:
{
}

loc_800CD130:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CD148;
    }
}

loc_800CD134:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800CD140:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD148;
    }
}

loc_800CD144:
{
    r5 = 0;
}

loc_800CD148:
{
}

loc_800CD14C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CD170;
    }
}

loc_800CD150:
{
    r3 = 0x80590000u;
    r3 = (r3 + 22176);
    r4 = 42;
    r5 = 0x80590000u;
    r5 = (r5 + 22188);
    r6 = r22;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CD170u;
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

loc_800CD170:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r23 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800CD194:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD1AC;
    }
}

loc_800CD198:
{
    r3 = (r23 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800CD1A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD1AC;
    }
}

loc_800CD1A8:
{
    r9 = 0;
}

loc_800CD1AC:
{
}

loc_800CD1B0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800CD1C8;
    }
}

loc_800CD1B4:
{
    r3 = (r23 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800CD1C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD1C8;
    }
}

loc_800CD1C4:
{
    r8 = 0;
}

loc_800CD1C8:
{
}

loc_800CD1CC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800CD1E0;
    }
}

loc_800CD1D0:
{
    r0 = (r10 + 1073741824);
}

loc_800CD1D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD1E0;
    }
}

loc_800CD1DC:
{
    r7 = 0;
}

loc_800CD1E0:
{
}

loc_800CD1E4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800CD1FC;
    }
}

loc_800CD1E8:
{
    r3 = (r23 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800CD1F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD1FC;
    }
}

loc_800CD1F8:
{
    r6 = 0;
}

loc_800CD1FC:
{
}

loc_800CD200:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CD218;
    }
}

loc_800CD204:
{
    r3 = (r23 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800CD210:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD218;
    }
}

loc_800CD214:
{
    r5 = 0;
}

loc_800CD218:
{
}

loc_800CD21C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CD234;
    }
}

loc_800CD220:
{
    r3 = (r23 & -16384);
    r0 = (r3 + 536870912);
}

loc_800CD22C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD234;
    }
}

loc_800CD230:
{
    r4 = 0;
}

loc_800CD234:
{
}

loc_800CD238:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800CD25C;
    }
}

loc_800CD23C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 22176);
    r4 = 43;
    r5 = 0x80590000u;
    r5 = (r5 + 22240);
    r6 = r23;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CD25Cu;
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

loc_800CD25C:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r25 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800CD280:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD298;
    }
}

loc_800CD284:
{
    r3 = (r25 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800CD290:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD298;
    }
}

loc_800CD294:
{
    r9 = 0;
}

loc_800CD298:
{
}

loc_800CD29C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800CD2B4;
    }
}

loc_800CD2A0:
{
    r3 = (r25 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800CD2AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD2B4;
    }
}

loc_800CD2B0:
{
    r8 = 0;
}

loc_800CD2B4:
{
}

loc_800CD2B8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800CD2CC;
    }
}

loc_800CD2BC:
{
    r0 = (r10 + 1073741824);
}

loc_800CD2C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD2CC;
    }
}

loc_800CD2C8:
{
    r7 = 0;
}

loc_800CD2CC:
{
}

loc_800CD2D0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800CD2E8;
    }
}

loc_800CD2D4:
{
    r3 = (r25 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800CD2E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD2E8;
    }
}

loc_800CD2E4:
{
    r6 = 0;
}

loc_800CD2E8:
{
}

loc_800CD2EC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800CD304;
    }
}

loc_800CD2F0:
{
    r3 = (r25 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800CD2FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD304;
    }
}

loc_800CD300:
{
    r5 = 0;
}

loc_800CD304:
{
}

loc_800CD308:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800CD320;
    }
}

loc_800CD30C:
{
    r3 = (r25 & -16384);
    r0 = (r3 + 536870912);
}

loc_800CD318:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800CD320;
    }
}

loc_800CD31C:
{
    r4 = 0;
}

loc_800CD320:
{
}

loc_800CD324:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800CD348;
    }
}

loc_800CD328:
{
    r3 = 0x80590000u;
    r3 = (r3 + 22176);
    r4 = 44;
    r5 = 0x80590000u;
    r5 = (r5 + 22292);
    r6 = r25;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800CD348u;
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

loc_800CD348:
{
}

loc_800CD34C:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(1))) {
        goto loc_800CD57C;
    }
}

loc_800CD350:
{
    r28 = 0;
    r30 = (r29 & 131072);
    r29 = (r29 & 67108864);
    f30.d = MemoryInline::FlatReadFloat64((r2 + -30632));
    r31 = 1127219200;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -30644));
    f25.d = MemoryInline::FlatReadFloat32((r2 + -30648));
    f26.d = MemoryInline::FlatReadFloat32((r2 + -30640));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -30636));
    goto loc_800CD574;
}

loc_800CD378:
{
}

loc_800CD37C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_800CD390;
    }
}

loc_800CD380:
{
    r3 = (r22 + 236);
    ctx->lr = 0x800CD388u;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_4050 = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_4050;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800A8A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f29.d = f1.d;
    goto loc_800CD3D0;
}

loc_800CD390:
{
}

loc_800CD394:
{
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(1))) {
        goto loc_800CD3CC;
    }
}

loc_800CD398:
{
    r0 = (r28 ^ -2147483648);
    stackword13 = r0;
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    stackword14 = r31;
    MemoryInline::FlatWriteRam32((r1 + 104), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword14), static_cast<uint32_t>(stackword13));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    r0 = (r24 + -1);
    r0 = (r0 ^ -2147483648);
    stackword15 = r0;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    stackword16 = r31;
    MemoryInline::FlatWriteRam32((r1 + 112), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword16), static_cast<uint32_t>(stackword15));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_800CD3D0;
}

loc_800CD3CC:
{
    f29.d = MemoryInline::FlatReadFloat32((r2 + -30648));
}

loc_800CD3D0:
{
}

loc_800CD3D4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800CD3DC;
    }
}

loc_800CD3D8:
{
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f31.d));
}

loc_800CD3DC:
{
    f0.d = MemoryInline::FlatReadFloat32(r25);
    f29.d = PpcFmulsInline(f29.d, f0.d);
    r3 = (r1 + 28);
    r4 = (r1 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 4));
    ctx->lr = 0x800CD3F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009C7C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r1 + 20);
    r4 = (r1 + 16);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 8));
    ctx->lr = 0x800CD404u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009C7C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 12));
    ctx->lr = 0x800CD414u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8009C7C4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r1 + 92);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f6.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PpcFmulsInline(f6.d, f5.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f3.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f0.d = PpcFmulsInline(f29.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f0.d = (-(f5.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f6.d, f4.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PpcFmulsInline(f29.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f6.d, f0.d);
    f0.d = PpcFmulsInline(f29.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    r3 = (r1 + 80);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f25.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f26.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f25.d);
    r3 = (r1 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f2.d = f25.d;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 100));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 56);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r21;
    r4 = (r1 + 56);
    r5 = r22;
    r6 = (r1 + 92);
    r7 = (r1 + 80);
    r8 = r6;
    r9 = (r1 + 68);
    ctx->lr = 0x800CD4C4u;
    if constexpr (KnownRegArgsCpuCall<0x800A9A18u>(&func_800A9A18)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800A9A18_6070 = func_800A9A18_ra38_fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_800A9A18_6070);
        r4 = static_cast<uint32_t>(regargs_result_800A9A18_6070 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800A9A18u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead32((r1 + 60));
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = MemoryInline::FlatRead32((r1 + 64));
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r3 = MemoryInline::FlatRead32((r1 + 92));
    r0 = MemoryInline::FlatRead32((r1 + 96));
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r0 = MemoryInline::FlatRead32((r1 + 100));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r3 = (r22 + 236);
    ctx->lr = 0x800CD4FCu;
    if constexpr (KnownRegArgsCpuCall<0x800A8A6Cu>(&func_800A8A6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800A8A6C_6C4F = func_800A8A6C_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_800A8A6C_6C4F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800A8A6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead8((r22 + 103));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    stackword23 = r0;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    stackword24 = r31;
    MemoryInline::FlatWriteRam32((r1 + 112), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword24), static_cast<uint32_t>(stackword23));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f0.d));
    r3 = r21;
    r4 = (r26 & 65535);
    f1.d = f28.d;
    r5 = r22;
    ctx->lr = 0x800CD538u;
    if constexpr (KnownRegArgsCpuCall<0x800AA014u>(&func_800AA014)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800AA014_7343 = func_800AA014_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_800AA014_7343);
        r4 = static_cast<uint32_t>(regargs_result_800AA014_7343 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800AA014u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = r3;
    r3 = r23;
    r4 = (r0 & 65535);
    r5 = (r1 + 44);
    r6 = (r1 + 32);
    r7 = r27;
    f1.d = f29.d;
    r8 = (r22 + 252);
    r9 = MemoryInline::FlatRead32((r22 + 248));
    r10 = MemoryInline::FlatRead16((r22 + 232));
    r12 = MemoryInline::FlatRead32((r3 + 28));
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x800CD570u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r28 = (r28 + 1);
}

loc_800CD574:
{
}

loc_800CD578:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r24))) {
        goto loc_800CD378;
    }
}

loc_800CD57C:
{
    r0 = 280;
    addr_psqx_800CD580_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CD580_loc_0));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 176), 0, 120u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 96u, (r1 + 272));
    r0 = 264;
    addr_psqx_800CD58C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CD58C_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 80u, (r1 + 256));
    r0 = 248;
    addr_psqx_800CD598_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CD598_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 64u, (r1 + 240));
    r0 = 232;
    addr_psqx_800CD5A4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CD5A4_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 48u, (r1 + 224));
    r0 = 216;
    addr_psqx_800CD5B0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CD5B0_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 32u, (r1 + 208));
    r0 = 200;
    addr_psqx_800CD5BC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CD5BC_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 16u, (r1 + 192));
    r0 = 184;
    addr_psqx_800CD5C8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800CD5C8_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, (r1 + 176));
    r11 = (r1 + 176);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::ReadResolved32(guest_range_3, 116u, (r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800CD014(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800CD014_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFE00FFFF fpr_write=0xFE00FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800CD014 func_800CD014 preserves=true fpr_mask=0x00000000
