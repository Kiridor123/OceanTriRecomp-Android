#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800A89A8(CpuContext* ctx);
extern "C" uint64_t func_800A89A8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800AEE70(CpuContext* ctx);
extern "C" uint32_t func_800AEE70_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800C86E4(CpuContext* ctx);
extern "C" uint64_t func_800C86E4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800C8798(CpuContext* ctx);
extern "C" uint64_t func_800C8798_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800C884C(CpuContext* ctx);
extern "C" uint64_t func_800C884C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800C8900(CpuContext* ctx);
extern "C" uint64_t func_800C8900_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800C89B8(CpuContext* ctx);
extern "C" uint64_t func_800C89B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800C8A34(CpuContext* ctx);
extern "C" uint64_t func_800C8A34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800AEE70_statefree(uint32_t, uint32_t);

extern "C" void func_800C7D44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800C8634_loc_0 = 0;
    uint32_t addr_psqx_800C8640_loc_0 = 0;
    uint32_t addr_psqx_800C864C_loc_0 = 0;
    uint32_t addr_psqx_800C8658_loc_0 = 0;
    uint32_t addr_psqx_800C8664_loc_0 = 0;
    uint32_t addr_psqx_800C8670_loc_0 = 0;
    uint32_t addr_psqx_800C867C_loc_0 = 0;
    uint32_t addr_psqx_800C8688_loc_0 = 0;
    uint32_t addr_psqx_800C8694_loc_0 = 0;
    uint32_t addr_psqx_800C86A0_loc_0 = 0;
    uint32_t addr_psqx_800C86AC_loc_0 = 0;
    uint32_t addr_psqx_800C86B8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r0_subfic_ra_4 = 0;
    uint32_t r0_subfic_ra_5 = 0;
    uint32_t r0_subfic_ra_6 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_11 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f20 = ctx->fpr[20];
    PPC_FPR f21 = ctx->fpr[21];
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800C7D44u);
    goto loc_800C7D44;

loc_800C7D44:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -400), 0, 408u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -400), r1);
    r1 = (r1 + -400);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 404u, (r1 + 404), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 384u, (r1 + 384), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 368u, (r1 + 368), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 352u, (r1 + 352), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 336u, (r1 + 336), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 320u, (r1 + 320), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 304u, (r1 + 304), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 288u, (r1 + 288), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 272u, (r1 + 272), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 256u, (r1 + 256), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 240u, (r1 + 240), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 224u, (r1 + 224), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f20.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    r11 = (r1 + 208);
    // inline leaf 0x80457458 (18 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, false, true);
    // end of inlined leaf 0x80457458
    r15 = r3;
    r16 = r4;
    r17 = r5;
    r18 = r6;
    r19 = r7;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 120u, (r1 + 120), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_2, 128u, (r1 + 128), r0);
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800C7E00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7E18;
    }
}

loc_800C7E04:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C7E10:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7E18;
    }
}

loc_800C7E14:
{
    r10 = 0;
}

loc_800C7E18:
{
}

loc_800C7E1C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800C7E34;
    }
}

loc_800C7E20:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C7E2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7E34;
    }
}

loc_800C7E30:
{
    r9 = 0;
}

loc_800C7E34:
{
}

loc_800C7E38:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C7E4C;
    }
}

loc_800C7E3C:
{
    r0 = (r11 + 1073741824);
}

loc_800C7E44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7E4C;
    }
}

loc_800C7E48:
{
    r8 = 0;
}

loc_800C7E4C:
{
}

loc_800C7E50:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C7E68;
    }
}

loc_800C7E54:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C7E60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7E68;
    }
}

loc_800C7E64:
{
    r7 = 0;
}

loc_800C7E68:
{
}

loc_800C7E6C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C7E84;
    }
}

loc_800C7E70:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C7E7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7E84;
    }
}

loc_800C7E80:
{
    r6 = 0;
}

loc_800C7E84:
{
}

loc_800C7E88:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C7EA0;
    }
}

loc_800C7E8C:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C7E98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7EA0;
    }
}

loc_800C7E9C:
{
    r5 = 0;
}

loc_800C7EA0:
{
}

loc_800C7EA4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C7EC8;
    }
}

loc_800C7EA8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 20496);
    r4 = 881;
    r5 = 0x80590000u;
    r5 = (r5 + 20564);
    r6 = r16;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C7EC8u;
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

loc_800C7EC8:
{
    r24 = 0;
    r23 = 0;
    r27 = r16;
    r26 = r15;
    r25 = r16;
    r28 = 0x80590000u;
    r29 = 0x80590000u;
    r31 = 0x80590000u;
    f27.d = MemoryInline::FlatReadFloat64((r2 + -30888));
    f28.d = MemoryInline::FlatReadFloat32((r2 + -30900));
    f26.d = MemoryInline::FlatReadFloat32((r2 + -30908));
    f29.d = MemoryInline::FlatReadFloat64((r2 + -30880));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -30896));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -30912));
}

loc_800C7F00:
{
    r0 = MemoryInline::FlatRead32((r15 + 212));
}

loc_800C7F08:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_800C8610;
    }
}

loc_800C7F0C:
{
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryInline::FlatRead32((r27 + 136));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800C7F34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7F4C;
    }
}

loc_800C7F38:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C7F44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7F4C;
    }
}

loc_800C7F48:
{
    r10 = 0;
}

loc_800C7F4C:
{
}

loc_800C7F50:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800C7F68;
    }
}

loc_800C7F54:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C7F60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7F68;
    }
}

loc_800C7F64:
{
    r9 = 0;
}

loc_800C7F68:
{
}

loc_800C7F6C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C7F80;
    }
}

loc_800C7F70:
{
    r0 = (r11 + 1073741824);
}

loc_800C7F78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7F80;
    }
}

loc_800C7F7C:
{
    r8 = 0;
}

loc_800C7F80:
{
}

loc_800C7F84:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C7F9C;
    }
}

loc_800C7F88:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C7F94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7F9C;
    }
}

loc_800C7F98:
{
    r7 = 0;
}

loc_800C7F9C:
{
}

loc_800C7FA0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C7FB8;
    }
}

loc_800C7FA4:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C7FB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7FB8;
    }
}

loc_800C7FB4:
{
    r5 = 0;
}

loc_800C7FB8:
{
}

loc_800C7FBC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C7FD4;
    }
}

loc_800C7FC0:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C7FCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7FD4;
    }
}

loc_800C7FD0:
{
    r4 = 0;
}

loc_800C7FD4:
{
}

loc_800C7FD8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C7FF0;
    }
}

loc_800C7FDC:
{
    r3 = (r28 + 20496);
    r4 = 890;
    r5 = (r29 + 20616);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C7FF0u;
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

loc_800C7FF0:
{
    r30 = MemoryInline::FlatRead32((r27 + 136));
}

loc_800C7FF8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800C8610;
    }
}

loc_800C7FFC:
{
    r3 = r16;
    r4 = r23;
    ctx->lr = 0x800C8008u;
    if constexpr (KnownRegArgsCpuCall<0x800C8A34u>(&func_800C8A34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800C8A34_3D00 = func_800C8A34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800C8A34_3D00);
        r4 = static_cast<uint32_t>(regargs_result_800C8A34_3D00 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C8A34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r22 = r3;
    r3 = r16;
    r4 = r23;
    ctx->lr = 0x800C8018u;
    if constexpr (KnownRegArgsCpuCall<0x800C89B8u>(&func_800C89B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800C89B8_40AB = func_800C89B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800C89B8_40AB);
        r4 = static_cast<uint32_t>(regargs_result_800C89B8_40AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C89B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r21 = r3;
}

loc_800C8020:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(0))) {
        goto loc_800C8048;
    }
}

loc_800C8024:
{
    r0 = MemoryInline::FlatRead32((r26 + 4));
}

loc_800C802C:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_800C8048;
    }
}

loc_800C8030:
{
    r0 = MemoryInline::FlatRead32((r26 + 24));
}

loc_800C8038:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(r0))) {
        goto loc_800C8048;
    }
}

loc_800C803C:
{
    r0 = MemoryInline::FlatRead32((r26 + 28));
}

loc_800C8044:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_800C815C;
    }
}

loc_800C8048:
{
    r24 = 1;
    MemoryInline::FlatWrite32((r26 + 4), r30);
    MemoryInline::FlatWrite32((r26 + 24), r22);
    MemoryInline::FlatWrite32((r26 + 28), r3);
    r20 = MemoryInline::FlatRead8((r30 + 12));
}

loc_800C8060:
{
    if ((static_cast<uint32_t>(r20) <= static_cast<uint32_t>(6))) {
        goto loc_800C80D4;
    }
}

loc_800C8064:
{
    r0 = (r20 + -8);
}

loc_800C806C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_800C807C;
    }
}

loc_800C8070:
{
}

loc_800C8074:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(14))) {
        goto loc_800C80D4;
    }
}

loc_800C8078:
{
    goto loc_800C8104;
}

loc_800C807C:
{
    r3 = (r1 + 28);
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r5 = MemoryInline::FlatRead8((r30 + 13));
    r6 = MemoryInline::FlatRead16((r30 + 14));
    ctx->lr = 0x800C8090u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8E00u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r1 + 28);
    r4 = MemoryInline::FlatRead32((r15 + 212));
    ctx->lr = 0x800C809Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8E30u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r0 = MemoryInline::FlatRead32((r15 + 212));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 40);
    r4 = MemoryInline::FlatRead32((r30 + 28));
    r5 = MemoryInline::FlatRead16((r30 + 4));
    r6 = MemoryInline::FlatRead16((r30 + 6));
    r7 = r20;
    r8 = r22;
    r9 = r21;
    r0 = MemoryInline::FlatRead8((r30 + 20));
    r0_subfic_ra_2 = r0;
    r0 = (1 - r0_subfic_ra_2);
    r10_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r10 = (r10_rot_2 & 1);
    ctx->lr = 0x800C80D0u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x804B88B0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800C8118;
}

loc_800C80D4:
{
    r3 = (r1 + 40);
    r4 = MemoryInline::FlatRead32((r30 + 28));
    r5 = MemoryInline::FlatRead16((r30 + 4));
    r6 = MemoryInline::FlatRead16((r30 + 6));
    r7 = r20;
    r8 = r22;
    r9 = r21;
    r0 = MemoryInline::FlatRead8((r30 + 20));
    r0_subfic_ra_3 = r0;
    r0 = (1 - r0_subfic_ra_3);
    r10_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r10 = (r10_rot_3 & 1);
    ctx->lr = 0x800C8100u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x804B86A0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_800C8118;
}

loc_800C8104:
{
    r3 = (r28 + 20496);
    r4 = 954;
    r5 = (r31 + 20696);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C8118u;
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

loc_800C8118:
{
    r0 = MemoryInline::FlatRead8((r30 + 20));
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f27.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f0.d));
    r3 = (r1 + 40);
    r4 = MemoryInline::FlatRead8((r30 + 21));
    r5 = MemoryInline::FlatRead8((r30 + 22));
    f1.d = f26.d;
    f3.d = MemoryInline::FlatReadFloat32((r30 + 24));
    r6 = 0;
    r7 = 0;
    r8 = 0;
    ctx->lr = 0x800C8150u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8900u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r1 + 40);
    r4 = MemoryInline::FlatRead32((r15 + 212));
    ctx->lr = 0x800C815Cu;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8DA0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_800C815C:
{
    r3 = r16;
    r4 = r23;
    ctx->lr = 0x800C8168u;
    if constexpr (KnownRegArgsCpuCall<0x800C8900u>(&func_800C8900)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800C8900_65F9 = func_800C8900_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800C8900_65F9);
        r4 = static_cast<uint32_t>(regargs_result_800C8900_65F9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C8900u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    r3 = r16;
    r4 = r23;
    ctx->lr = 0x800C8184u;
    if constexpr (KnownRegArgsCpuCall<0x800C884Cu>(&func_800C884C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800C884C_6A65 = func_800C884C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800C884C_6A65);
        r4 = static_cast<uint32_t>(regargs_result_800C884C_6A65 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C884Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    r3 = r16;
    r4 = r23;
    ctx->lr = 0x800C81A0u;
    if constexpr (KnownRegArgsCpuCall<0x800C8798u>(&func_800C8798)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800C8798_6ED1 = func_800C8798_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800C8798_6ED1);
        r4 = static_cast<uint32_t>(regargs_result_800C8798_6ED1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C8798u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 128));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    r3 = r16;
    r4 = r23;
    ctx->lr = 0x800C81BCu;
    if constexpr (KnownRegArgsCpuCall<0x800C86E4u>(&func_800C86E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800C86E4_733D = func_800C86E4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800C86E4_733D);
        r4 = static_cast<uint32_t>(regargs_result_800C86E4_733D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C86E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 124), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 120));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
}

loc_800C81D0:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(0))) {
        goto loc_800C8254;
    }
}

loc_800C81D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 8));
    SetCRFloatResident(cr, 0, f25.d, f0.d);
}

loc_800C81DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C8254;
    }
}

loc_800C81E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 12));
    SetCRFloatResident(cr, 0, f24.d, f0.d);
}

loc_800C81E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C8254;
    }
}

loc_800C81EC:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 16));
    SetCRFloatResident(cr, 0, f23.d, f0.d);
}

loc_800C81F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C8254;
    }
}

loc_800C81F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r26 + 20));
    SetCRFloatResident(cr, 0, f22.d, f0.d);
}

loc_800C8200:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C8254;
    }
}

loc_800C8204:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 76));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800C8210:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C8254;
    }
}

loc_800C8214:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 80));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 36));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800C8220:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C8254;
    }
}

loc_800C8224:
{
    f1.d = MemoryInline::FlatReadFloat32((r27 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800C8230:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C8254;
    }
}

loc_800C8234:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 44));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800C8240:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C8254;
    }
}

loc_800C8244:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 48));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800C8250:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C8610;
    }
}

loc_800C8254:
{
    r24 = 1;
    guest_range_3 = MemoryInline::ResolveRangeHost((r26 + 8), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f25.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f24.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, (r26 + 8), f25.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r26 + 12), f24.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f23.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f22.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r26 + 16), f23.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r26 + 20), f22.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r25 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r26 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r26 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 100));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r26 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 112));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r26 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 116));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r26 + 48), f0.d);
    r3 = (r1 + 72);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 72);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    f2.d = MemoryInline::FlatReadFloat32((r25 + 112));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 116));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r27 + 100));
    SetCRFloatResident(cr, 0, f26.d, f1.d);
}

loc_800C82B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C8314;
    }
}

loc_800C82BC:
{
    f21.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f30.d));
    f20.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    r3 = (r1 + 24);
    r4 = (r1 + 20);
    ctx->lr = 0x800C82D0u;
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
    ctx->cr = cr;
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f3.d = MemoryInline::FlatReadFloat32((r1 + 20));
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = (-(f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f2.d);
    f0.d = PpcFmulsInline(f3.d, f21.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    f0.d = PpcFmulsInline(f2.d, f20.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f0.d = PpcFmulsInline(f2.d, f21.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    f0.d = PpcFmulsInline(f3.d, f20.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
}

loc_800C8314:
{
    SetCRFloatResident(cr, 0, f31.d, f25.d);
}

loc_800C8318:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C834C;
    }
}

loc_800C831C:
{
    SetCRFloatResident(cr, 0, f31.d, f24.d);
}

loc_800C8320:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C834C;
    }
}

loc_800C8324:
{
    f0.d = MemoryInline::FlatReadFloat32((r25 + 76));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_800C832C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C834C;
    }
}

loc_800C8330:
{
    f0.d = MemoryInline::FlatReadFloat32((r25 + 80));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_800C8338:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C834C;
    }
}

loc_800C833C:
{
    SetCRFloatResident(cr, 0, f26.d, f23.d);
}

loc_800C8340:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C834C;
    }
}

loc_800C8344:
{
    SetCRFloatResident(cr, 0, f26.d, f22.d);
}

loc_800C8348:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C83C4;
    }
}

loc_800C834C:
{
    f2.d = MemoryInline::FlatReadFloat32((r25 + 76));
    f3.d = PpcFmulsInline(f25.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 80));
    f4.d = PpcFmulsInline(f24.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    f0.d = PpcFmulsInline(f25.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f23.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 88));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f0.d));
    f0.d = PpcFmulsInline(f24.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f22.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
}

loc_800C83C4:
{
    r3 = (r1 + 16);
    r4 = MemoryInline::FlatRead32((r16 + 200));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800AEE70u) && KnownTranslatedCpuCall<0x800AEE70u>::kAvailable && !KnownTranslatedCpuCall<0x800AEE70u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800AEE70u>()) {
        const auto state_free_result_800AEE70_9B17 = func_800AEE70_statefree(r3, r4);
        r4 = static_cast<uint32_t>(state_free_result_800AEE70_9B17);
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
        ctx->fpr[20] = f20;
        ctx->fpr[21] = f21;
        ctx->fpr[22] = f22;
        ctx->fpr[23] = f23;
        ctx->fpr[24] = f24;
        ctx->fpr[25] = f25;
        ctx->fpr[26] = f26;
        ctx->fpr[27] = f27;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800AEE70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        f20 = ctx->fpr[20];
        f21 = ctx->fpr[21];
        f22 = ctx->fpr[22];
        f23 = ctx->fpr[23];
        f24 = ctx->fpr[24];
        f25 = ctx->fpr[25];
        f26 = ctx->fpr[26];
        f27 = ctx->fpr[27];
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 16);
    ctx->lr = 0x800C83D8u;
    if constexpr (KnownRegArgsCpuCall<0x800A89A8u>(&func_800A89A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A89A8_A37D = func_800A89A8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800A89A8_A37D);
        r4 = static_cast<uint32_t>(regargs_result_800A89A8_A37D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x800A89A8u>(ctx);
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
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_800C83DC:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_800C8490;
    }
}

loc_800C83E0:
{
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r4 & 4);
}

loc_800C83EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C843C;
    }
}

loc_800C83F0:
{
    r0 = MemoryInline::FlatRead8((r16 + 229));
    r0 = (r0 & 1);
}

loc_800C83FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C843C;
    }
}

loc_800C8400:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = PpcFmulsInline(f0.d, f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f0.d = PpcFmulsInline(f0.d, f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 80));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    goto loc_800C8490;
}

loc_800C843C:
{
    r0 = (r4 & 8);
}

loc_800C8444:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C8464;
    }
}

loc_800C8448:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = PpcFmulsInline(f0.d, f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
}

loc_800C8464:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r0 & 16);
}

loc_800C8470:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C8490;
    }
}

loc_800C8474:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f0.d = PpcFmulsInline(f0.d, f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 80));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
}

loc_800C8490:
{
}

loc_800C8494:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(1))) {
        goto loc_800C854C;
    }
}

loc_800C8498:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r0 & 32);
}

loc_800C84A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C84F4;
    }
}

loc_800C84A8:
{
    r0 = MemoryInline::FlatRead8((r16 + 229));
    r0 = (r0 & 1);
}

loc_800C84B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C84F4;
    }
}

loc_800C84B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = PpcFmulsInline(f0.d, f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f0.d = PpcFmulsInline(f0.d, f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 80));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    goto loc_800C854C;
}

loc_800C84F4:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r0 = (r0 & 64);
}

loc_800C8500:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C8520;
    }
}

loc_800C8504:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = PpcFmulsInline(f0.d, f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 76));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
}

loc_800C8520:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r0 = (r0 & 128);
}

loc_800C852C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800C854C;
    }
}

loc_800C8530:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    f0.d = PpcFmulsInline(f0.d, f28.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 80));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
}

loc_800C854C:
{
    r3 = MemoryInline::FlatRead16(r17);
    r0 = (r23 + 7);
    r0 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 1);
}

loc_800C8560:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800C85AC;
    }
}

loc_800C8564:
{
    r3 = (r1 + 72);
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    r4 = MemoryInline::FlatRead32((r15 + 212));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = (r0 - r4);
    r4 = (r4 + 30);
    r5 = 1;
    ctx->lr = 0x800C8584u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x804BACD0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_800C8588:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_800C8610;
    }
}

loc_800C858C:
{
    r3 = MemoryInline::FlatRead32((r15 + 212));
    r4 = 1;
    r5 = 4;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r6 = (r0 - r3);
    r6 = (r6 + 30);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x800C86D8u>(ctx);
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    goto loc_800C8610;
}

loc_800C85AC:
{
    r3 = r18;
    // inline leaf 0x800A611C (2 guest instruction(s))
    r3 = (r3 + 48);
    // end of inlined leaf 0x800A611C
    r4 = r3;
    r3 = (r1 + 72);
    r5 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = (r1 + 72);
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    r4 = MemoryInline::FlatRead32((r15 + 212));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = (r0 - r4);
    r4 = (r4 + 64);
    r5 = 0;
    ctx->lr = 0x800C85E4u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x804BACD0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_800C85E8:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_800C8610;
    }
}

loc_800C85EC:
{
    r3 = MemoryInline::FlatRead32((r15 + 212));
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r8 = (r0 - r3);
    r8 = (r8 + 64);
    ctx->lr = 0x800C8610u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x804B61B0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
}

loc_800C8610:
{
    r15 = (r15 + 4);
    r27 = (r27 + 4);
    r26 = (r26 + 48);
    r25 = (r25 + 8);
    r23 = (r23 + 1);
}

loc_800C8628:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(3))) {
        goto loc_800C7F00;
    }
}

loc_800C862C:
{
    r3 = r24;
    r0 = 392;
    addr_psqx_800C8634_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C8634_loc_0));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 208), 0, 200u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 176u, (r1 + 384));
    r0 = 376;
    addr_psqx_800C8640_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C8640_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 160u, (r1 + 368));
    r0 = 360;
    addr_psqx_800C864C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C864C_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 144u, (r1 + 352));
    r0 = 344;
    addr_psqx_800C8658_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C8658_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 128u, (r1 + 336));
    r0 = 328;
    addr_psqx_800C8664_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C8664_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 112u, (r1 + 320));
    r0 = 312;
    addr_psqx_800C8670_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C8670_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 96u, (r1 + 304));
    r0 = 296;
    addr_psqx_800C867C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C867C_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 80u, (r1 + 288));
    r0 = 280;
    addr_psqx_800C8688_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C8688_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 64u, (r1 + 272));
    r0 = 264;
    addr_psqx_800C8694_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C8694_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r1 + 256));
    r0 = 248;
    addr_psqx_800C86A0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f22, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C86A0_loc_0));
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r1 + 240));
    r0 = 232;
    addr_psqx_800C86AC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f21, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C86AC_loc_0));
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r1 + 224));
    r0 = 216;
    addr_psqx_800C86B8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f20, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C86B8_loc_0));
    f20.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r1 + 208));
    r11 = (r1 + 208);
    // inline leaf 0x804574A4 (18 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, true, false);
    // end of inlined leaf 0x804574A4
    r0 = MemoryInline::ReadResolved32(guest_range_4, 196u, (r1 + 404));
    ctx->lr = r0;
    r1 = (r1 + 400);
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
    ctx->fpr[20] = f20;
    ctx->fpr[21] = f21;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFFF03FFF fpr_write=0xFFF03FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C7D44 func_800C7D44 preserves=true fpr_mask=0x00000000
