#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB3EC(CpuContext* ctx);
extern "C" uint32_t func_800AB3EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800B5BC8(CpuContext* ctx);
extern "C" uint64_t func_800B5BC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800B69B8(CpuContext* ctx);
extern "C" uint32_t func_800B69B8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_800B69B8_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800B69B8_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_800B69B8_statefree_v1(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800B6E08_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800B7210_loc_0 = 0;
    uint32_t addr_psqx_800B721C_loc_0 = 0;
    uint32_t addr_psqx_800B7228_loc_0 = 0;
    uint32_t addr_psqx_800B7234_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800B6E08;

loc_800B6E08:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -240), 0, 248u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 244u, (r1 + 244), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_4, 224u, (r1 + 224), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 208u, (r1 + 208), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 192u, (r1 + 192), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_4, 176u, (r1 + 176), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 176);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r21 = r3;
    r22 = r4;
    r23 = r5;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_4, 104u, (r1 + 104), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_4, 112u, (r1 + 112), r0);
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800B6E7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B6E94;
    }
}

loc_800B6E80:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800B6E8C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B6E94;
    }
}

loc_800B6E90:
{
    r10 = 0;
}

loc_800B6E94:
{
}

loc_800B6E98:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B6EB0;
    }
}

loc_800B6E9C:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800B6EA8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B6EB0;
    }
}

loc_800B6EAC:
{
    r9 = 0;
}

loc_800B6EB0:
{
}

loc_800B6EB4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B6EC8;
    }
}

loc_800B6EB8:
{
    r0 = (r11 + 1073741824);
}

loc_800B6EC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B6EC8;
    }
}

loc_800B6EC4:
{
    r8 = 0;
}

loc_800B6EC8:
{
}

loc_800B6ECC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B6EE4;
    }
}

loc_800B6ED0:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800B6EDC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B6EE4;
    }
}

loc_800B6EE0:
{
    r7 = 0;
}

loc_800B6EE4:
{
}

loc_800B6EE8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B6F00;
    }
}

loc_800B6EEC:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800B6EF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B6F00;
    }
}

loc_800B6EFC:
{
    r6 = 0;
}

loc_800B6F00:
{
}

loc_800B6F04:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B6F1C;
    }
}

loc_800B6F08:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B6F14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B6F1C;
    }
}

loc_800B6F18:
{
    r5 = 0;
}

loc_800B6F1C:
{
}

loc_800B6F20:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B6F44;
    }
}

loc_800B6F24:
{
    r3 = 0x80590000u;
    r3 = (r3 + 16808);
    r4 = 609;
    r5 = 0x80590000u;
    r5 = (r5 + 16836);
    r6 = r22;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B6F44u;
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

loc_800B6F44:
{
    r31 = MemoryInline::FlatRead32(r22);
    r3 = MemoryInline::FlatRead32((r31 + 36));
    ctx->lr = 0x800B6F50u;
    if constexpr (KnownRegArgsCpuCall<0x800AB3ECu>(&func_800AB3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB3EC_20A7 = func_800AB3EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB3EC_20A7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800AB3ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r30 = r3;
    r3 = r21;
    r4 = r31;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x800B6F6Cu;
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
    ctx->fpr[8] = f8;
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
    r29 = r3;
    r3 = r21;
    r4 = r30;
    // inline leaf 0x800B69F8 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    r3 = (r0 & 2048);
    // end of inlined leaf 0x800B69F8
    r28 = r3;
    r3 = r21;
    r4 = r28;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x800B6F98u;
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
    ctx->fpr[8] = f8;
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
    r27 = r3;
    r3 = r21;
    r4 = r28;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x800B6FB4u;
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
    ctx->fpr[8] = f8;
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
    r26 = r3;
    r0 = MemoryInline::FlatRead8((r30 + 169));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31096));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31104));
    f29.d = PpcFmulsInline(f1.d, f0.d);
    r0 = MemoryInline::FlatRead8((r30 + 170));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f28.d = PpcFmulsInline(f1.d, f0.d);
    r3 = r21;
    r4 = r31;
    // inline leaf 0x800B5BB8 (4 guest instruction(s))
}

loc_inl2_0x800B5BB8:
{
    r3 = (r4 + 56);
}

loc_inl2_0x800B5BC0:
{
    r3 = MemoryInline::FlatRead16((r3 + 24));
}

loc_inl2_cont_800B5BB8:
{
    // end of inlined leaf 0x800B5BB8
    r20 = r3;
    r3 = r21;
    r4 = r30;
    // inline leaf 0x800B5BAC (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r4 + 178));
    r3 = (r0 & 192);
    // end of inlined leaf 0x800B5BAC
}

loc_800B7018:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(64))) {
        goto loc_800B7024;
    }
}

loc_800B701C:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -31100));
    goto loc_800B7040;
}

loc_800B7024:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31096));
    r0 = (r20 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    // inline leaf 0x80061110 (6 guest instruction(s))
    PpcSetPairedFprInline(f0, PPC_Fres(PPC_PsFromScalarInline(f1.d)));
    PpcSetPairedFprInline(f2, PPC_PsAddInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f0.d));
    PpcSetPairedFprInline(f0, PPC_PsNmsubInline(PPC_PsFromScalarInline(f1.d), f0.d, f2.d));
    f1.d = f0.d;
    // end of inlined leaf 0x80061110
    f30.d = f1.d;
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f30.d = PPC_PsToScalarInline(f30.d);
}

loc_800B7040:
{
    r25 = 0;
    r24 = 1;
}

loc_800B704C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_800B7058;
    }
}

loc_800B7050:
{
    r25 = r20;
    r24 = -1;
}

loc_800B7058:
{
    r3 = (r1 + 24);
    ctx->lr = 0x800B7060u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800B69B8u) && KnownTranslatedCpuCall<0x800B69B8u>::kAvailable && !KnownTranslatedCpuCall<0x800B69B8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800B69B8u>()) {
        const auto state_free_result_800B69B8_3DB4 = func_800B69B8_statefree_v0(r1, r3, r31, 0x800B7060u);
        r1 = static_cast<uint32_t>(state_free_result_800B69B8_3DB4);
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800B69B8u>(ctx);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = (r1 + 64);
    ctx->lr = 0x800B7068u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800B69B8u) && KnownTranslatedCpuCall<0x800B69B8u>::kAvailable && !KnownTranslatedCpuCall<0x800B69B8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800B69B8u>()) {
        const auto state_free_result_800B69B8_45AD = func_800B69B8_statefree_v1(r1, r3, r31, 0x800B7068u);
        r0 = static_cast<uint32_t>(state_free_result_800B69B8_45AD[0]);
        r1 = static_cast<uint32_t>(state_free_result_800B69B8_45AD[1]);
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800B69B8u>(ctx);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r31;
    r12 = r27;
    ctr = r12;
    ctx->lr = 0x800B7078u;
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
    ctx->fpr[8] = f8;
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
    r20 = r3;
    r3 = r21;
    r4 = (r1 + 24);
    r5 = r22;
    r6 = r23;
    r7 = r20;
    r8 = r29;
    f1.d = f29.d;
    f2.d = f28.d;
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31096));
    r0 = (r25 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f3.d = PpcFmulsInline(f30.d, f0.d);
    ctx->lr = 0x800B70B8u;
    if constexpr (KnownRegArgsCpuCall<0x800B5BC8u>(&func_800B5BC8)) {
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
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800B5BC8_5543 = func_800B5BC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800B5BC8_5543);
        r4 = static_cast<uint32_t>(regargs_result_800B5BC8_5543 >> 32);
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800B5BC8u>(ctx);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r25 = (r25 + r24);
    r3 = (r1 + 64);
    r4 = (r1 + 24);
    // inline leaf 0x800B6964 (21 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 12u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r4 + 12));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r4 + 16));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r5);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 16), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r4 + 24));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r4 + 28));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r5);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 28), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r3 + 32), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r4 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 36), f0.d);
    // end of inlined leaf 0x800B6964
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31096));
    r0 = (r25 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = PpcFmulsInline(f30.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 100), f0.d);
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800B5AC8u>(ctx);
    r3 = ctx->gpr[3];
    r27 = r3;
}

loc_800B70F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800B7114;
    }
}

loc_800B70F8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 16808);
    r4 = 655;
    r5 = 0x80590000u;
    r5 = (r5 + 17172);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B7114u;
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

loc_800B7114:
{
    r3 = (r1 + 8);
    r4 = (r22 + 164);
    r5 = (r27 + 172);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    ctx->lr = 0x800B7130u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r25 = (r25 + r24);
    r3 = r21;
    r4 = r30;
    // inline leaf 0x800B695C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r4 + 176));
    // end of inlined leaf 0x800B695C
    r7 = r3;
    r3 = r21;
    r4 = (r1 + 24);
    r5 = (r1 + 64);
    r6 = r23;
    r8 = MemoryInline::FlatRead32((r22 + 212));
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x800B61A8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r31;
    r4 = r20;
    r12 = r26;
    ctr = r12;
    ctx->lr = 0x800B7170u;
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
    ctx->fpr[8] = f8;
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
    r27 = r3;
    f31.d = MemoryInline::FlatReadFloat64((r2 + -31096));
    goto loc_800B7204;
}

loc_800B717C:
{
    r3 = (r1 + 24);
    r4 = (r1 + 64);
    // inline leaf 0x800B6964 (21 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 16));
    MemoryInline::FlatWriteRam32((r3 + 12), r5);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::FlatWriteRam32((r3 + 20), r0);
    r5 = MemoryInline::FlatRead32((r4 + 24));
    r0 = MemoryInline::FlatRead32((r4 + 28));
    MemoryInline::FlatWriteRam32((r3 + 24), r5);
    MemoryInline::FlatWriteRam32((r3 + 28), r0);
    r0 = MemoryInline::FlatRead32((r4 + 32));
    MemoryInline::FlatWriteRam32((r3 + 32), r0);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 36));
    MemoryInline::FlatWriteRamFloat32((r3 + 36), f0.d);
    // end of inlined leaf 0x800B6964
    r3 = r21;
    r4 = (r1 + 64);
    r5 = r22;
    r6 = r23;
    r7 = r27;
    r8 = r29;
    f1.d = f29.d;
    f2.d = f28.d;
    r0 = (r25 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f3.d = PpcFmulsInline(f30.d, f0.d);
    ctx->lr = 0x800B71C0u;
    if constexpr (KnownRegArgsCpuCall<0x800B5BC8u>(&func_800B5BC8)) {
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
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800B5BC8_80B4 = func_800B5BC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800B5BC8_80B4);
        r4 = static_cast<uint32_t>(regargs_result_800B5BC8_80B4 >> 32);
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[28] = f28;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800B5BC8u>(ctx);
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
        f28 = ctx->fpr[28];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r21;
    r4 = r30;
    // inline leaf 0x800B695C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r4 + 176));
    // end of inlined leaf 0x800B695C
    r7 = r3;
    r3 = r21;
    r4 = (r1 + 24);
    r5 = (r1 + 64);
    r6 = r23;
    r8 = MemoryInline::FlatRead32((r22 + 212));
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x800B61A8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r31;
    r4 = r27;
    r12 = r26;
    ctr = r12;
    ctx->lr = 0x800B71FCu;
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
    ctx->fpr[8] = f8;
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
    r27 = r3;
    r25 = (r25 + r24);
}

loc_800B7204:
{
}

loc_800B7208:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_800B717C;
    }
}

loc_800B720C:
{
    r0 = 232;
    addr_psqx_800B7210_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B7210_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 224));
    r0 = 216;
    addr_psqx_800B721C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B721C_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 208));
    r0 = 200;
    addr_psqx_800B7228_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B7228_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 192));
    r0 = 184;
    addr_psqx_800B7234_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800B7234_loc_0));
    f28.d = MemoryInline::FlatReadFloat64((r1 + 176));
    r11 = (r1 + 176);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
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
    ctx->fpr[8] = f8;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800B6E08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800B6E08_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF800FFFF fpr_write=0xF800FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800B6E08 func_800B6E08 preserves=true fpr_mask=0x00000000
