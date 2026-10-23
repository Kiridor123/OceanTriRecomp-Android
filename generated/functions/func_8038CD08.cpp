#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80104918(CpuContext* ctx);
extern "C" uint64_t func_80104918_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_801049B0(CpuContext* ctx);
extern "C" uint64_t func_801049B0_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_801066F8(CpuContext* ctx);
extern "C" uint64_t func_801066F8_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8010D314(CpuContext* ctx);
extern "C" uint64_t func_8010D314_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8013599C(CpuContext* ctx);
extern "C" uint64_t func_8013599C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801359B4(CpuContext* ctx);
extern "C" uint64_t func_801359B4_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8038CD08_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t addr_psqx_8038D0E8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8038CD08;

loc_8038CD08:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    f31.d = f1.d;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = (r28 & 255);
}

loc_8038CD4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8038CD64;
    }
}

loc_8038CD50:
{
}

loc_8038CD54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8038CF4C;
    }
}

loc_8038CD58:
{
}

loc_8038CD5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8038D094;
    }
}

loc_8038CD60:
{
    goto loc_8038D0E4;
}

loc_8038CD64:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 392), 0, 162u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 160u, (r27 + 552));
    r0 = (r0 & 6);
}

loc_8038CD70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8038CEC8;
    }
}

loc_8038CD74:
{
    r0 = (r29 & 255);
}

loc_8038CD7C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(42))) {
        goto loc_8038CF0C;
    }
}

loc_8038CD80:
{
    r3 = 0x805F0000u;
    r3 = (r3 + 4216);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8038CD98u:
        goto loc_8038CD98;
        break;
    case 0x8038CEC4u:
        goto loc_8038CEC4;
        break;
    case 0x8038CDFCu:
        goto loc_8038CDFC;
        break;
    case 0x8038CE60u:
        goto loc_8038CE60;
        break;
    case 0x8038CF0Cu:
        goto loc_8038CF0C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_8038CD98:
{
    r29 = 13;
}

loc_8038CDA0:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(255))) {
        goto loc_8038CDE0;
    }
}

loc_8038CDA4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r27 + 392));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -6660));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r27 + 528));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r27 + 400));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r3 = 15;
    r4 = (r1 + 8);
    r5 = (r27 + 444);
    f1.d = f31.d;
    r6 = MemoryInline::ReadResolved8(guest_range_0, 89u, (r27 + 481));
    ctx->lr = 0x8038CDDCu;
    if constexpr (KnownRegArgsCpuCall<0x801049B0u>(&func_801049B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_801049B0_19FE = func_801049B0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801049B0_19FE);
        r4 = static_cast<uint32_t>(regargs_result_801049B0_19FE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801049B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8038CF0C;
}

loc_8038CDE0:
{
    r3 = r27;
    r4 = r30;
    r5 = 15;
    r6 = r31;
    f1.d = f31.d;
    ctx->lr = 0x8038CDF8u;
    if constexpr (KnownRegArgsCpuCall<0x80104918u>(&func_80104918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80104918_201A = func_80104918_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104918_201A);
        r4 = static_cast<uint32_t>(regargs_result_80104918_201A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80104918u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8038CF0C;
}

loc_8038CDFC:
{
    r29 = 12;
}

loc_8038CE04:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(255))) {
        goto loc_8038CE44;
    }
}

loc_8038CE08:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r27 + 392));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -6660));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r27 + 528));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r27 + 400));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r3 = 14;
    r4 = (r1 + 8);
    r5 = (r27 + 444);
    f1.d = f31.d;
    r6 = MemoryInline::ReadResolved8(guest_range_0, 89u, (r27 + 481));
    ctx->lr = 0x8038CE40u;
    if constexpr (KnownRegArgsCpuCall<0x801049B0u>(&func_801049B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_801049B0_2974 = func_801049B0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801049B0_2974);
        r4 = static_cast<uint32_t>(regargs_result_801049B0_2974 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801049B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8038CF0C;
}

loc_8038CE44:
{
    r3 = r27;
    r4 = r30;
    r5 = 14;
    r6 = r31;
    f1.d = f31.d;
    ctx->lr = 0x8038CE5Cu;
    if constexpr (KnownRegArgsCpuCall<0x80104918u>(&func_80104918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80104918_2F90 = func_80104918_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104918_2F90);
        r4 = static_cast<uint32_t>(regargs_result_80104918_2F90 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80104918u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8038CF0C;
}

loc_8038CE60:
{
    r29 = 19;
}

loc_8038CE68:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(255))) {
        goto loc_8038CEA8;
    }
}

loc_8038CE6C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r27 + 392));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -6660));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 136u, (r27 + 528));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r27 + 400));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r3 = 15;
    r4 = (r1 + 8);
    r5 = (r27 + 444);
    f1.d = f31.d;
    r6 = MemoryInline::ReadResolved8(guest_range_0, 89u, (r27 + 481));
    ctx->lr = 0x8038CEA4u;
    if constexpr (KnownRegArgsCpuCall<0x801049B0u>(&func_801049B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_801049B0_38EA = func_801049B0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801049B0_38EA);
        r4 = static_cast<uint32_t>(regargs_result_801049B0_38EA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801049B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8038CF0C;
}

loc_8038CEA8:
{
    r3 = r27;
    r4 = r30;
    r5 = 15;
    r6 = r31;
    f1.d = f31.d;
    ctx->lr = 0x8038CEC0u;
    if constexpr (KnownRegArgsCpuCall<0x80104918u>(&func_80104918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80104918_3F06 = func_80104918_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104918_3F06);
        r4 = static_cast<uint32_t>(regargs_result_80104918_3F06 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80104918u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8038CF0C;
}

loc_8038CEC4:
{
    goto loc_8038D0E4;
}

loc_8038CEC8:
{
    r3 = (r29 & 255);
    r0 = (r3 + -12);
}

loc_8038CED4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(13))) {
        goto loc_8038D0E4;
    }
}

loc_8038CED8:
{
}

loc_8038CEDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(38))) {
        goto loc_8038CEE4;
    }
}

loc_8038CEE0:
{
    goto loc_8038D0E4;
}

loc_8038CEE4:
{
}

loc_8038CEE8:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(255))) {
        goto loc_8038CF0C;
    }
}

loc_8038CEEC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r27 + 392));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -6660));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 132u, (r27 + 524));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r27 + 400));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
}

loc_8038CF0C:
{
}

loc_8038CF10:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(255))) {
        goto loc_8038CF30;
    }
}

loc_8038CF14:
{
    r3 = (r29 & 255);
    r4 = (r1 + 8);
    r5 = (r27 + 444);
    f1.d = f31.d;
    r6 = MemoryInline::FlatRead8((r27 + 481));
    ctx->lr = 0x8038CF2Cu;
    if constexpr (KnownRegArgsCpuCall<0x801049B0u>(&func_801049B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_801049B0_4AA6 = func_801049B0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801049B0_4AA6);
        r4 = static_cast<uint32_t>(regargs_result_801049B0_4AA6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801049B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8038D0E4;
}

loc_8038CF30:
{
    r3 = r27;
    r4 = r30;
    r5 = (r29 & 255);
    r6 = r31;
    f1.d = f31.d;
    ctx->lr = 0x8038CF48u;
    if constexpr (KnownRegArgsCpuCall<0x80104918u>(&func_80104918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80104918_50CB = func_80104918_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104918_50CB);
        r4 = static_cast<uint32_t>(regargs_result_80104918_50CB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80104918u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8038D0E4;
}

loc_8038CF4C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 392), 0, 162u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 160u, (r27 + 552));
    r0 = (r0 & 6);
}

loc_8038CF58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8038D03C;
    }
}

loc_8038CF5C:
{
    r0 = (r29 & 255);
}

loc_8038CF64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8038CF7C;
    }
}

loc_8038CF68:
{
}

loc_8038CF6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8038CF7C;
    }
}

loc_8038CF70:
{
}

loc_8038CF74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8038CFDC;
    }
}

loc_8038CF78:
{
    goto loc_8038D03C;
}

loc_8038CF7C:
{
}

loc_8038CF80:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(255))) {
        goto loc_8038CFC0;
    }
}

loc_8038CF84:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r27 + 392));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -6660));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 136u, (r27 + 528));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r27 + 400));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r3 = 17;
    r4 = (r1 + 8);
    r5 = (r27 + 444);
    f1.d = f31.d;
    r6 = MemoryInline::ReadResolved8(guest_range_1, 89u, (r27 + 481));
    ctx->lr = 0x8038CFBCu;
    if constexpr (KnownRegArgsCpuCall<0x801049B0u>(&func_801049B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_801049B0_5D5E = func_801049B0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801049B0_5D5E);
        r4 = static_cast<uint32_t>(regargs_result_801049B0_5D5E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801049B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8038D0E4;
}

loc_8038CFC0:
{
    r3 = r27;
    r4 = r30;
    r5 = 17;
    r6 = r31;
    f1.d = f31.d;
    ctx->lr = 0x8038CFD8u;
    if constexpr (KnownRegArgsCpuCall<0x80104918u>(&func_80104918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80104918_637A = func_80104918_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104918_637A);
        r4 = static_cast<uint32_t>(regargs_result_80104918_637A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80104918u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8038D0E4;
}

loc_8038CFDC:
{
}

loc_8038CFE0:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(255))) {
        goto loc_8038D020;
    }
}

loc_8038CFE4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r27 + 392));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -6660));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 136u, (r27 + 528));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r27 + 400));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    r3 = 16;
    r4 = (r1 + 8);
    r5 = (r27 + 444);
    f1.d = f31.d;
    r6 = MemoryInline::ReadResolved8(guest_range_1, 89u, (r27 + 481));
    ctx->lr = 0x8038D01Cu;
    if constexpr (KnownRegArgsCpuCall<0x801049B0u>(&func_801049B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_801049B0_6CC5 = func_801049B0_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801049B0_6CC5);
        r4 = static_cast<uint32_t>(regargs_result_801049B0_6CC5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801049B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8038D0E4;
}

loc_8038D020:
{
    r3 = r27;
    r4 = r30;
    r5 = 16;
    r6 = r31;
    f1.d = f31.d;
    ctx->lr = 0x8038D038u;
    if constexpr (KnownRegArgsCpuCall<0x80104918u>(&func_80104918)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_80104918_72E1 = func_80104918_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80104918_72E1);
        r4 = static_cast<uint32_t>(regargs_result_80104918_72E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80104918u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8038D0E4;
}

loc_8038D03C:
{
}

loc_8038D040:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(255))) {
        goto loc_8038D054;
    }
}

loc_8038D044:
{
    r3 = (r1 + 8);
    r4 = (r27 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_8038D064;
}

loc_8038D054:
{
    r3 = r27;
    r4 = r30;
    r5 = (r1 + 8);
    ctx->lr = 0x8038D064u;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8013599C_7A23 = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_7A23);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_7A23 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x8013599Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8038D064:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 524));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = r27;
    ctx->lr = 0x8038D074u;
    if constexpr (KnownRegArgsCpuCall<0x801359B4u>(&func_801359B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_801359B4_7F24 = func_801359B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359B4_7F24);
        r4 = static_cast<uint32_t>(regargs_result_801359B4_7F24 >> 32);
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
        InvokeDirectCpu<0x801359B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f31.d = PpcFmulsInline(f31.d, f1.d);
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead8((r27 + 481));
    r5 = (r29 & 255);
    r6 = r31;
    f1.d = f31.d;
    ctx->lr = 0x8038D090u;
    if constexpr (KnownRegArgsCpuCall<0x8010D314u>(&func_8010D314)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_8010D314_8411 = func_8010D314_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8010D314_8411);
        r4 = static_cast<uint32_t>(regargs_result_8010D314_8411 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8010D314u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
    goto loc_8038D0E4;
}

loc_8038D094:
{
}

loc_8038D098:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(255))) {
        goto loc_8038D0AC;
    }
}

loc_8038D09C:
{
    r3 = (r1 + 8);
    r4 = (r27 + 392);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    goto loc_8038D0BC;
}

loc_8038D0AC:
{
    r3 = r27;
    r4 = r30;
    r5 = (r1 + 8);
    ctx->lr = 0x8038D0BCu;
    if constexpr (KnownRegArgsCpuCall<0x8013599Cu>(&func_8013599C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        const auto regargs_result_8013599C_8B1D = func_8013599C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8013599C_8B1D);
        r4 = static_cast<uint32_t>(regargs_result_8013599C_8B1D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x8013599Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8038D0BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 524));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    r3 = r27;
    ctx->lr = 0x8038D0CCu;
    if constexpr (KnownRegArgsCpuCall<0x801359B4u>(&func_801359B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_801359B4_901E = func_801359B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359B4_901E);
        r4 = static_cast<uint32_t>(regargs_result_801359B4_901E >> 32);
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
        InvokeDirectCpu<0x801359B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f31.d = PpcFmulsInline(f31.d, f1.d);
    r3 = r27;
    r4 = (r1 + 8);
    r5 = (r29 & 255);
    f1.d = f31.d;
    ctx->lr = 0x8038D0E4u;
    if constexpr (KnownRegArgsCpuCall<0x801066F8u>(&func_801066F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        const auto regargs_result_801066F8_94DB = func_801066F8_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_801066F8_94DB);
        r4 = static_cast<uint32_t>(regargs_result_801066F8_94DB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801066F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        ctr = ctx->ctr;
    }
}

loc_8038D0E4:
{
    r0 = 56;
    addr_psqx_8038D0E8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8038D0E8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8038CD08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8038CD08_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8038CD08 func_8038CD08 preserves=true fpr_mask=0x00000000
