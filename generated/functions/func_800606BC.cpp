#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051884(CpuContext* ctx);
extern "C" uint64_t func_80051884_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005D5B8(CpuContext* ctx);
extern "C" uint64_t func_8005D5B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80060F8C(CpuContext* ctx);
extern "C" uint64_t func_80060F8C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80060FD0(CpuContext* ctx);
extern "C" uint64_t func_80060FD0_ra0_2_18_0(CpuContext*, double);
extern "C" void func_80060FD4(CpuContext* ctx);
extern "C" uint64_t func_80060FD4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80061010(CpuContext* ctx);
extern "C" uint64_t func_80061010_ra38_2e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80061054(CpuContext* ctx);
extern "C" uint64_t func_80061054_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800610CC(CpuContext* ctx);
extern "C" uint32_t func_800610CC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800606BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80060958_loc_0 = 0;
    uint32_t addr_lfsx_80060ABC_loc_0 = 0;
    uint32_t addr_psqx_80060F0C_loc_0 = 0;
    uint32_t addr_psqx_80060F18_loc_0 = 0;
    uint32_t addr_psqx_80060F24_loc_0 = 0;
    uint32_t addr_psqx_80060F30_loc_0 = 0;
    uint32_t addr_psqx_80060F3C_loc_0 = 0;
    uint32_t addr_psqx_80060F48_loc_0 = 0;
    uint32_t addr_psqx_80060F54_loc_0 = 0;
    uint32_t addr_psqx_80060F60_loc_0 = 0;
    uint32_t addr_psqx_80060F6C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_10 = 0;
    uint32_t r3_psq_tmp_11 = 0;
    uint32_t r3_psq_tmp_12 = 0;
    uint32_t r3_psq_tmp_13 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_psq_tmp_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
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
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800606BCu);
    goto loc_800606BC;

loc_800606BC:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -368), 0, 376u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -368), r1);
    r1 = (r1 + -368);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 372u, (r1 + 372), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 352u, (r1 + 352), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 360);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 336u, (r1 + 336), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 344);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 320u, (r1 + 320), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 328);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 304u, (r1 + 304), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 288u, (r1 + 288), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 272u, (r1 + 272), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 256u, (r1 + 256), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 240u, (r1 + 240), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 224u, (r1 + 224), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    r11 = (r1 + 224);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r20 = r3;
    r21 = r4;
    r22 = r5;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_80060748:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80060760;
    }
}

loc_8006074C:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_80060758:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80060760;
    }
}

loc_8006075C:
{
    r10 = 0;
}

loc_80060760:
{
}

loc_80060764:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8006077C;
    }
}

loc_80060768:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80060774:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006077C;
    }
}

loc_80060778:
{
    r9 = 0;
}

loc_8006077C:
{
}

loc_80060780:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80060794;
    }
}

loc_80060784:
{
    r0 = (r11 + 1073741824);
}

loc_8006078C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80060794;
    }
}

loc_80060790:
{
    r8 = 0;
}

loc_80060794:
{
}

loc_80060798:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800607B0;
    }
}

loc_8006079C:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800607A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800607B0;
    }
}

loc_800607AC:
{
    r7 = 0;
}

loc_800607B0:
{
}

loc_800607B4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800607CC;
    }
}

loc_800607B8:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800607C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800607CC;
    }
}

loc_800607C8:
{
    r6 = 0;
}

loc_800607CC:
{
}

loc_800607D0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800607E8;
    }
}

loc_800607D4:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800607E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800607E8;
    }
}

loc_800607E4:
{
    r5 = 0;
}

loc_800607E8:
{
}

loc_800607EC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80060810;
    }
}

loc_800607F0:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 669;
    r5 = 0x80590000u;
    r5 = (r5 + -17356);
    r6 = r20;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80060810u;
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

loc_80060810:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r21 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80060834:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006084C;
    }
}

loc_80060838:
{
    r3 = (r21 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80060844:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006084C;
    }
}

loc_80060848:
{
    r9 = 0;
}

loc_8006084C:
{
}

loc_80060850:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80060868;
    }
}

loc_80060854:
{
    r3 = (r21 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_80060860:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80060868;
    }
}

loc_80060864:
{
    r8 = 0;
}

loc_80060868:
{
}

loc_8006086C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80060880;
    }
}

loc_80060870:
{
    r0 = (r10 + 1073741824);
}

loc_80060878:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80060880;
    }
}

loc_8006087C:
{
    r7 = 0;
}

loc_80060880:
{
}

loc_80060884:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8006089C;
    }
}

loc_80060888:
{
    r3 = (r21 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80060894:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006089C;
    }
}

loc_80060898:
{
    r6 = 0;
}

loc_8006089C:
{
}

loc_800608A0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800608B8;
    }
}

loc_800608A4:
{
    r3 = (r21 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800608B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800608B8;
    }
}

loc_800608B4:
{
    r5 = 0;
}

loc_800608B8:
{
}

loc_800608BC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800608D4;
    }
}

loc_800608C0:
{
    r3 = (r21 & -16384);
    r0 = (r3 + 536870912);
}

loc_800608CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800608D4;
    }
}

loc_800608D0:
{
    r4 = 0;
}

loc_800608D4:
{
}

loc_800608D8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800608FC;
    }
}

loc_800608DC:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 670;
    r5 = 0x80590000u;
    r5 = (r5 + -16124);
    r6 = r21;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800608FCu;
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

loc_800608FC:
{
    r3 = MemoryInline::FlatRead32((r20 + 16));
    r7 = (r3 + -1);
}

loc_80060908:
{
    if ((static_cast<int32_t>(r22) <= static_cast<int32_t>(r7))) {
        goto loc_8006092C;
    }
}

loc_8006090C:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 671;
    r5 = 0x80590000u;
    r5 = (r5 + -17304);
    r6 = r22;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006092Cu;
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

loc_8006092C:
{
    r26 = 0;
    r27 = 0;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -32088));
    r28 = 0;
    r25 = 0;
    r24 = 0x80590000u;
    r23 = 0x80590000u;
    f23.d = f29.d;
    f24.d = f29.d;
    goto loc_800609C0;
}

loc_80060954:
{
    r3 = MemoryInline::FlatRead32((r20 + 32));
    addr_lfsx_80060958_loc_0 = (r3 + r25);
    f25.d = MemoryInline::FlatReadFloat32(addr_lfsx_80060958_loc_0);
    r3 = MemoryInline::FlatRead32((r20 + 28));
    r3_addr_2 = (r3 + r25);
    r29 = MemoryInline::FlatRead32(r3_addr_2);
}

loc_80060968:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800609B8;
    }
}

loc_8006096C:
{
    SetCRFloatResident(cr, 0, f24.d, f25.d);
}

loc_80060970:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800609B8;
    }
}

loc_80060974:
{
    r3 = r29;
    r4 = r22;
    ctx->lr = 0x80060980u;
    if constexpr (KnownRegArgsCpuCall<0x8005D5B8u>(&func_8005D5B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8005D5B8_3D3E = func_8005D5B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005D5B8_3D3E);
        r4 = static_cast<uint32_t>(regargs_result_8005D5B8_3D3E >> 32);
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
        InvokeDirectCpu<0x8005D5B8u>(ctx);
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

loc_80060984:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800609B8;
    }
}

loc_80060988:
{
    SetCRFloatResident(cr, 0, f25.d, f23.d);
}

loc_8006098C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800609A4;
    }
}

loc_80060990:
{
    r3 = (r24 + -17456);
    r4 = 685;
    r5 = (r23 + -16068);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800609A4u;
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

loc_800609A4:
{
    r27 = (r27 + 1);
    f29.d = static_cast<double>(PpcForceSingleValueInline(f29.d + f25.d));
}

loc_800609B0:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_800609B8;
    }
}

loc_800609B4:
{
    r26 = r29;
}

loc_800609B8:
{
    r25 = (r25 + 4);
    r28 = (r28 + 1);
}

loc_800609C0:
{
    r0 = MemoryInline::FlatRead32((r20 + 24));
}

loc_800609C8:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_80060954;
    }
}

loc_800609CC:
{
}

loc_800609D0:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_800609E4;
    }
}

loc_800609D4:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r21, r0);
    r3 = r21;
    goto loc_80060F08;
}

loc_800609E4:
{
}

loc_800609E8:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(1))) {
        goto loc_80060A0C;
    }
}

loc_800609EC:
{
    r3 = r26;
    r4 = r21;
    r5 = r22;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x80060A08u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80060F08;
}

loc_80060A0C:
{
    r3 = r20;
    r4 = 8;
    // inline leaf 0x80064A18 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80064A18
    r26 = r3;
    r3 = r20;
    r4 = 16;
    // inline leaf 0x80064A18 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80064A18
    r27 = r3;
    f28.d = MemoryInline::FlatReadFloat32((r2 + -32088));
    f27.d = f28.d;
    f26.d = f28.d;
    r3 = (r1 + 40);
    f1.d = f28.d;
    f2.d = f28.d;
    f3.d = f28.d;
    f4.d = MemoryInline::FlatReadFloat32((r2 + -32084));
    // inline leaf 0x80061128 (5 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f4.d);
    // end of inlined leaf 0x80061128
    f25.d = MemoryInline::FlatReadFloat32((r2 + -32088));
    r3 = (r1 + 56);
    // inline leaf 0x80051754 (1 guest instruction(s))
    // end of inlined leaf 0x80051754
    f1.d = f29.d;
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f29.d = f1.d;
    r0 = -1;
    MemoryInline::FlatWrite32(r21, r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32088));
    MemoryInline::FlatWriteFloat32((r21 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r21 + 8), f0.d);
    MemoryInline::FlatWriteFloat32((r21 + 12), f0.d);
    r3 = (r21 + 28);
    // inline leaf 0x8050199C (8 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1496));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 24);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 40);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5, PPC_PsFromScalarInline(f0.d));
    // end of inlined leaf 0x8050199C
    r23 = 0;
    r25 = 0;
    f30.d = MemoryInline::FlatReadFloat32((r2 + -32088));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -32084));
    r29 = 0x80590000u;
    r30 = 0x80590000u;
    r31 = 0x80590000u;
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    goto loc_80060DC0;
}

loc_80060AA8:
{
    r3 = (r1 + 92);
    ctx->lr = 0x80060AB0u;
    if constexpr (KnownRegArgsCpuCall<0x800610CCu>(&func_800610CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800610CC_5C15 = func_800610CC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800610CC_5C15;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800610CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = MemoryInline::FlatRead32((r20 + 28));
    r3_addr_4 = (r3 + r25);
    r24 = MemoryInline::FlatRead32(r3_addr_4);
    r3 = MemoryInline::FlatRead32((r20 + 32));
    addr_lfsx_80060ABC_loc_0 = (r3 + r25);
    f24.d = MemoryInline::FlatReadFloat32(addr_lfsx_80060ABC_loc_0);
}

loc_80060AC4:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80060DB8;
    }
}

loc_80060AC8:
{
    SetCRFloatResident(cr, 0, f30.d, f24.d);
}

loc_80060ACC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060DB8;
    }
}

loc_80060AD0:
{
    r3 = r24;
    r4 = r22;
    ctx->lr = 0x80060ADCu;
    if constexpr (KnownRegArgsCpuCall<0x8005D5B8u>(&func_8005D5B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8005D5B8_6144 = func_8005D5B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005D5B8_6144);
        r4 = static_cast<uint32_t>(regargs_result_8005D5B8_6144 >> 32);
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
        InvokeDirectCpu<0x8005D5B8u>(ctx);
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

loc_80060AE0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80060DB8;
    }
}

loc_80060AE4:
{
    r3 = r24;
    r4 = (r1 + 92);
    r5 = r22;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 56));
    ctr = r12;
    ctx->lr = 0x80060B00u;
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
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r28 = r3;
    f23.d = PpcFmulsInline(f24.d, PPC_PsToScalarInline(f29.d));
    r24 = MemoryInline::FlatRead32(r3);
    r0 = (r24 & 1);
}

loc_80060B14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80060B2C;
    }
}

loc_80060B18:
{
    r3 = (r29 + -17456);
    r4 = 748;
    r5 = (r30 + -16032);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80060B2Cu;
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

loc_80060B2C:
{
    r0 = (r24 & 896);
}

loc_80060B34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80060B4C;
    }
}

loc_80060B38:
{
    r3 = (r29 + -17456);
    r4 = 755;
    r5 = (r31 + -15960);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80060B4Cu;
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

loc_80060B4C:
{
}

loc_80060B50:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80060B94;
    }
}

loc_80060B54:
{
    r0 = (r24 & 8);
}

loc_80060B5C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80060C04;
    }
}

loc_80060B60:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    ctx->lr = 0x80060B68u;
    if constexpr (KnownRegArgsCpuCall<0x80061054u>(&func_80061054)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80061054_7452 = func_80061054_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80061054_7452);
        r4 = static_cast<uint32_t>(regargs_result_80061054_7452 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80061054u>(ctx);
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
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    f0.d = PpcFmulsInline(f23.d, f1.d);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f28.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    ctx->lr = 0x80060B78u;
    if constexpr (KnownRegArgsCpuCall<0x80061054u>(&func_80061054)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80061054_7EDC = func_80061054_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80061054_7EDC);
        r4 = static_cast<uint32_t>(regargs_result_80061054_7EDC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80061054u>(ctx);
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
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    f0.d = PpcFmulsInline(f23.d, f1.d);
    f27.d = static_cast<double>(PpcForceSingleValueInline(f27.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 12));
    ctx->lr = 0x80060B88u;
    if constexpr (KnownRegArgsCpuCall<0x80061054u>(&func_80061054)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80061054_8967 = func_80061054_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80061054_8967);
        r4 = static_cast<uint32_t>(regargs_result_80061054_8967 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80061054u>(ctx);
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
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    f0.d = PpcFmulsInline(f23.d, f1.d);
    f26.d = static_cast<double>(PpcForceSingleValueInline(f26.d + f0.d));
    goto loc_80060C04;
}

loc_80060B94:
{
    r0 = (r24 & 8);
}

loc_80060B9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80060BE0;
    }
}

loc_80060BA0:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 12));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 12), f0.d);
    goto loc_80060C04;
}

loc_80060BE0:
{
    f0.d = MemoryInline::FlatReadFloat32((r21 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f23.d));
    MemoryInline::FlatWriteFloat32((r21 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f23.d));
    MemoryInline::FlatWriteFloat32((r21 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f23.d));
    MemoryInline::FlatWriteFloat32((r21 + 12), f0.d);
}

loc_80060C04:
{
}

loc_80060C08:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80060C64;
    }
}

loc_80060C0C:
{
    r3 = (r1 + 24);
    // inline leaf 0x80061050 (1 guest instruction(s))
    // end of inlined leaf 0x80061050
    r0 = (r24 & 32);
}

loc_80060C1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80060C30;
    }
}

loc_80060C20:
{
    r3 = (r1 + 24);
    r4 = (r28 + 28);
    ctx->lr = 0x80060C2Cu;
    if constexpr (KnownRegArgsCpuCall<0x80061010u>(&func_80061010)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80061010_9BB0 = func_80061010_ra38_2e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_80061010_9BB0);
        r4 = static_cast<uint32_t>(regargs_result_80061010_9BB0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f8 = ctx->fpr[8];
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
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80061010u>(ctx);
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
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    goto loc_80060C40;
}

loc_80060C30:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f30.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f31.d);
}

loc_80060C40:
{
    f25.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f24.d));
    f1.d = f25.d;
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f1.d = PpcFmulsInline(f24.d, PPC_PsToScalarInline(f1.d));
    r3 = (r1 + 40);
    r4 = r3;
    r5 = (r1 + 24);
    ctx->lr = 0x80060C60u;
    if constexpr (KnownRegArgsCpuCall<0x80060FD4u>(&func_80060FD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
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
        ctx->ctr = ctr;
        const auto regargs_result_80060FD4_A91C = func_80060FD4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80060FD4_A91C);
        r4 = static_cast<uint32_t>(regargs_result_80060FD4_A91C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f8 = ctx->fpr[8];
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
        ctr = ctx->ctr;
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
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80060FD4u>(ctx);
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
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctr = ctx->ctr;
    }
    f0.d = PPC_PsToScalarInline(f0.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    goto loc_80060D64;
}

loc_80060C64:
{
    r0 = (r24 & 32);
}

loc_80060C6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80060D3C;
    }
}

loc_80060C70:
{
}

loc_80060C74:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_80060CC0;
    }
}

loc_80060C78:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r28 + 28), 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r28 + 28));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 36u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 0u, (r1 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r28 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 4u, (r1 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r28 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 8u, (r1 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r28 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 68), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r28 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 16u, (r1 + 72), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r28 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 20u, (r1 + 76), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r28 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 24u, (r1 + 80), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r28 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r1 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r28 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_4, 32u, (r1 + 88), f0.d);
}

loc_80060CC0:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 36));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 36));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 44));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 44), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 48));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 52));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 52));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 52), f0.d);
    goto loc_80060D64;
}

loc_80060D3C:
{
}

loc_80060D40:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_80060D4C;
    }
}

loc_80060D44:
{
    r3 = (r1 + 56);
    // inline leaf 0x80501944 (9 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -1496));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -1492));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_7 = (r3 + 8);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_7, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge00Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_8 = (r3 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_8, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_9 = (r3 + 16);
    PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_9, f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 32), f1.d);
    // end of inlined leaf 0x80501944
    f2.d = PPC_PsToScalarInline(f2.d);
}

loc_80060D4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r21 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f23.d));
    MemoryInline::FlatWriteFloat32((r21 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f23.d));
    MemoryInline::FlatWriteFloat32((r21 + 48), f0.d);
}

loc_80060D64:
{
    r0 = (r24 & 64);
}

loc_80060D6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80060DAC;
    }
}

loc_80060D70:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 40));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 40));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 56));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 72));
    f1.d = PpcFmulsInline(f0.d, f23.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 72));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r21 + 72), f0.d);
}

loc_80060DAC:
{
    r0 = MemoryInline::FlatRead32(r21);
    r0 = (r0 & r24);
    MemoryInline::FlatWrite32(r21, r0);
}

loc_80060DB8:
{
    r25 = (r25 + 4);
    r23 = (r23 + 1);
}

loc_80060DC0:
{
    r0 = MemoryInline::FlatRead32((r20 + 24));
}

loc_80060DC8:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r0))) {
        goto loc_80060AA8;
    }
}

loc_80060DCC:
{
}

loc_80060DD0:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80060DF8;
    }
}

loc_80060DD4:
{
    f1.d = f28.d;
    if constexpr (KnownRegArgsCpuCall<0x80060FD0u>(&func_80060FD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80060FD0_CF05 = func_80060FD0_ra0_2_18_0(ctx, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80060FD0_CF05);
        r4 = static_cast<uint32_t>(regargs_result_80060FD0_CF05 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80060FD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWriteFloat32((r21 + 4), f1.d);
    f1.d = f27.d;
    if constexpr (KnownRegArgsCpuCall<0x80060FD0u>(&func_80060FD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80060FD0_D43F = func_80060FD0_ra0_2_18_0(ctx, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80060FD0_D43F);
        r4 = static_cast<uint32_t>(regargs_result_80060FD0_D43F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80060FD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWriteFloat32((r21 + 8), f1.d);
    f1.d = f26.d;
    if constexpr (KnownRegArgsCpuCall<0x80060FD0u>(&func_80060FD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80060FD0_D979 = func_80060FD0_ra0_2_18_0(ctx, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80060FD0_D979);
        r4 = static_cast<uint32_t>(regargs_result_80060FD0_D979 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80060FD0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    MemoryInline::FlatWriteFloat32((r21 + 12), f1.d);
}

loc_80060DF8:
{
}

loc_80060DFC:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80060E40;
    }
}

loc_80060E00:
{
    f0.d = MemoryInline::FlatReadFloat32((r21 + 40));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 56));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r21 + 72));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r3 = (r21 + 28);
    r4 = (r1 + 40);
    ctx->lr = 0x80060E24u;
    if constexpr (KnownRegArgsCpuCall<0x80060F8Cu>(&func_80060F8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_80060F8C_E0CB = func_80060F8C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80060F8C_E0CB);
        r4 = static_cast<uint32_t>(regargs_result_80060F8C_E0CB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80060F8Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r21 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r21 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r21 + 72), f0.d);
    goto loc_80060EF8;
}

loc_80060E40:
{
    r20 = (r21 + 28);
    r22 = (r21 + 44);
    r23 = (r21 + 60);
    r3 = r23;
    r4 = r20;
    r5 = r22;
    ctx->lr = 0x80060E5Cu;
    if constexpr (KnownRegArgsCpuCall<0x80051884u>(&func_80051884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_80051884_E834 = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_E834);
        r4 = static_cast<uint32_t>(regargs_result_80051884_E834 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80051884u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r20;
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32088));
    SetCRFloatResident(cr, 0, f0.d, PPC_PsToScalarInline(f1.d));
}

loc_80060E6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80060E84;
    }
}

loc_80060E70:
{
    r3 = r23;
    // inline leaf 0x80050F40 (6 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80050F40
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32088));
    SetCRFloatResident(cr, 0, f0.d, PPC_PsToScalarInline(f1.d));
}

loc_80060E80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80060ED0;
    }
}

loc_80060E84:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 56), 0, 36u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 0u, (r1 + 56));
    guest_range_6 = MemoryInline::ResolveRangeHost((r21 + 28), 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_6, 0u, (r21 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 4u, (r1 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 4u, (r21 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 8u, (r1 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 8u, (r21 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 12u, (r1 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 16u, (r21 + 44), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 16u, (r1 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 20u, (r21 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 20u, (r1 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 24u, (r21 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 24u, (r1 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 32u, (r21 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 28u, (r1 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 36u, (r21 + 64), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_5, 32u, (r1 + 88));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 40u, (r21 + 68), f0.d);
    goto loc_80060EF8;
}

loc_80060ED0:
{
    r3 = r20;
    r4 = r20;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = r23;
    r4 = r23;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = r22;
    r4 = r23;
    r5 = r20;
    ctx->lr = 0x80060EF8u;
    if constexpr (KnownRegArgsCpuCall<0x80051884u>(&func_80051884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_80051884_FB6F = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_FB6F);
        r4 = static_cast<uint32_t>(regargs_result_80051884_FB6F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80051884u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80060EF8:
{
    r0 = MemoryInline::FlatRead32(r21);
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32(r21, r0);
    r3 = r21;
}

loc_80060F08:
{
    r0 = 360;
    addr_psqx_80060F0C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80060F0C_loc_0));
    guest_range_7 = MemoryInline::ResolveRangeHost((r1 + 224), 0, 152u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 128u, (r1 + 352));
    r0 = 344;
    addr_psqx_80060F18_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80060F18_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 112u, (r1 + 336));
    r0 = 328;
    addr_psqx_80060F24_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80060F24_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 96u, (r1 + 320));
    r0 = 312;
    addr_psqx_80060F30_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80060F30_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 80u, (r1 + 304));
    r0 = 296;
    addr_psqx_80060F3C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80060F3C_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 64u, (r1 + 288));
    r0 = 280;
    addr_psqx_80060F48_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80060F48_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 48u, (r1 + 272));
    r0 = 264;
    addr_psqx_80060F54_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80060F54_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 32u, (r1 + 256));
    r0 = 248;
    addr_psqx_80060F60_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80060F60_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 16u, (r1 + 240));
    r0 = 232;
    addr_psqx_80060F6C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80060F6C_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_7, 0u, (r1 + 224));
    r11 = (r1 + 224);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::ReadResolved32(guest_range_7, 148u, (r1 + 372));
    ctx->lr = r0;
    r1 = (r1 + 368);
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800606BC func_800606BC preserves=true fpr_mask=0x00000000
