#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB3EC(CpuContext* ctx);
extern "C" uint32_t func_800AB3EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800C0038(CpuContext* ctx);
extern "C" uint64_t func_800C0038_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800C0CF0(CpuContext* ctx);
extern "C" uint64_t func_800C0CF0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800C0FF8(CpuContext* ctx);
extern "C" uint64_t func_800C0FF8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800C1BE0(CpuContext* ctx);
extern "C" uint32_t func_800C1BE0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_800C1BE0_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800C1BE0_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_800C1BE0_statefree_v1(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_800C179C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800C1BA8_loc_0 = 0;
    uint32_t addr_psqx_800C1BB4_loc_0 = 0;
    uint32_t addr_psqx_800C1BC0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800C179C;

loc_800C179C:
{
    MemoryInline::FlatWriteRam32((r1 + -240), r1);
    r1 = (r1 + -240);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 224), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 208), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 192), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 192);
    // inline leaf 0x80457458 (18 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, false, true);
    // end of inlined leaf 0x80457458
    r20 = r3;
    r21 = r4;
    r22 = r5;
    r23 = r6;
    r24 = r7;
    r25 = r8;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 104), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 112), r0);
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800C1814:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C182C;
    }
}

loc_800C1818:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C1824:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C182C;
    }
}

loc_800C1828:
{
    r10 = 0;
}

loc_800C182C:
{
}

loc_800C1830:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800C1848;
    }
}

loc_800C1834:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C1840:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C1848;
    }
}

loc_800C1844:
{
    r9 = 0;
}

loc_800C1848:
{
}

loc_800C184C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C1860;
    }
}

loc_800C1850:
{
    r0 = (r11 + 1073741824);
}

loc_800C1858:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C1860;
    }
}

loc_800C185C:
{
    r8 = 0;
}

loc_800C1860:
{
}

loc_800C1864:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C187C;
    }
}

loc_800C1868:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C1874:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C187C;
    }
}

loc_800C1878:
{
    r7 = 0;
}

loc_800C187C:
{
}

loc_800C1880:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C1898;
    }
}

loc_800C1884:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C1890:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C1898;
    }
}

loc_800C1894:
{
    r6 = 0;
}

loc_800C1898:
{
}

loc_800C189C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C18B4;
    }
}

loc_800C18A0:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C18AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C18B4;
    }
}

loc_800C18B0:
{
    r5 = 0;
}

loc_800C18B4:
{
}

loc_800C18B8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C18DC;
    }
}

loc_800C18BC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19616);
    r4 = 403;
    r5 = 0x80590000u;
    r5 = (r5 + 19868);
    r6 = r21;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C18DCu;
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

loc_800C18DC:
{
    r16 = MemoryInline::FlatRead32(r21);
    r3 = MemoryInline::FlatRead32((r16 + 36));
    ctx->lr = 0x800C18E8u;
    if constexpr (KnownRegArgsCpuCall<0x800AB3ECu>(&func_800AB3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB3EC_1F6C = func_800AB3EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB3EC_1F6C;
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
    r17 = r3;
    r3 = r20;
    r4 = r16;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x800C1904u;
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
    r31 = r3;
    r3 = r20;
    r4 = r17;
    // inline leaf 0x800C1C24 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead16(r4);
    r3 = (r0 & 2048);
    // end of inlined leaf 0x800C1C24
    r18 = r3;
    r3 = r20;
    r4 = r18;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x800C1930u;
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
    r15 = r3;
    r3 = r20;
    r4 = r18;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x800C194Cu;
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
    r30 = r3;
    r3 = r20;
    r4 = r16;
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
    r19 = r3;
    r0 = MemoryInline::FlatRead8((r17 + 169));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30928));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30920));
    f29.d = PpcFmulsInline(f0.d, f1.d);
    r3 = 152;
    r4 = 0;
    r5 = (r19 * r22);
    r0 = (r5 + 1);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r5 = (r0 & 65535);
    ctx->lr = 0x800C19A0u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
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
    r3 = r20;
    r4 = r17;
    // inline leaf 0x800C1C18 (3 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r4 + 178));
    r3 = (r0 & 192);
    // end of inlined leaf 0x800C1C18
}

loc_800C19B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(64))) {
        goto loc_800C19BC;
    }
}

loc_800C19B4:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -30940));
    goto loc_800C19DC;
}

loc_800C19BC:
{
    r0 = (r19 + -1);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -30928));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
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

loc_800C19DC:
{
    r29 = 0;
    r28 = 1;
}

loc_800C19E8:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_800C19F4;
    }
}

loc_800C19EC:
{
    r29 = (r19 + -1);
    r28 = -1;
}

loc_800C19F4:
{
    r3 = (r1 + 16);
    ctx->lr = 0x800C19FCu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C1BE0u) && KnownTranslatedCpuCall<0x800C1BE0u>::kAvailable && !KnownTranslatedCpuCall<0x800C1BE0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C1BE0u>()) {
        const auto state_free_result_800C1BE0_3E27 = func_800C1BE0_statefree_v0(r1, r3, r31, 0x800C19FCu);
        r1 = static_cast<uint32_t>(state_free_result_800C1BE0_3E27);
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
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800C1BE0u>(ctx);
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
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = (r1 + 44);
    ctx->lr = 0x800C1A04u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C1BE0u) && KnownTranslatedCpuCall<0x800C1BE0u>::kAvailable && !KnownTranslatedCpuCall<0x800C1BE0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C1BE0u>()) {
        const auto state_free_result_800C1BE0_4544 = func_800C1BE0_statefree_v0(r1, r3, r31, 0x800C1A04u);
        r1 = static_cast<uint32_t>(state_free_result_800C1BE0_4544);
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
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800C1BE0u>(ctx);
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
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = (r1 + 72);
    ctx->lr = 0x800C1A0Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800C1BE0u) && KnownTranslatedCpuCall<0x800C1BE0u>::kAvailable && !KnownTranslatedCpuCall<0x800C1BE0u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800C1BE0u>()) {
        const auto state_free_result_800C1BE0_4C61 = func_800C1BE0_statefree_v1(r1, r3, r31, 0x800C1A0Cu);
        r0 = static_cast<uint32_t>(state_free_result_800C1BE0_4C61[0]);
        r1 = static_cast<uint32_t>(state_free_result_800C1BE0_4C61[1]);
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
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800C1BE0u>(ctx);
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
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r27 = 0;
    r26 = 0;
    r3 = r16;
    r12 = r15;
    ctr = r12;
    ctx->lr = 0x800C1A24u;
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
    r15 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r25);
    r3 = r20;
    r4 = (r1 + 16);
    r5 = r21;
    r6 = r23;
    r7 = r15;
    r8 = r31;
    r9 = (r15 + 172);
    r10 = r24;
    f1.d = f29.d;
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30928));
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 108), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 104));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f2.d = PpcFmulsInline(f30.d, f0.d);
    ctx->lr = 0x800C1A6Cu;
    if constexpr (KnownRegArgsCpuCall<0x800C0038u>(&func_800C0038)) {
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800C0038_5AB9 = func_800C0038_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800C0038_5AB9);
        r4 = static_cast<uint32_t>(regargs_result_800C0038_5AB9 >> 32);
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800C0038u>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r29 = (r29 + r28);
    r3 = r16;
    r4 = r15;
    r12 = r30;
    ctr = r12;
    ctx->lr = 0x800C1A84u;
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
    r17 = r3;
    r3 = 1431633920;
    r19 = (r3 + 21846);
    f31.d = MemoryInline::FlatReadFloat64((r2 + -30928));
    goto loc_800C1B4C;
}

loc_800C1A98:
{
    r15 = r27;
    r27 = r26;
    r4 = (r26 + 1);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r19)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 3);
    r26 = (r4 - r0);
    r0 = (r26 * 28);
    r18 = (r1 + 16);
    r18 = (r18 + r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r25);
    r3 = r20;
    r4 = r18;
    r5 = r21;
    r6 = r23;
    r7 = r17;
    r8 = r31;
    r9 = (r17 + 172);
    r10 = r24;
    f1.d = f29.d;
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 112));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f2.d = PpcFmulsInline(f30.d, f0.d);
    ctx->lr = 0x800C1B04u;
    if constexpr (KnownRegArgsCpuCall<0x800C0038u>(&func_800C0038)) {
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800C0038_6D81 = func_800C0038_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800C0038_6D81);
        r4 = static_cast<uint32_t>(regargs_result_800C0038_6D81 >> 32);
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800C0038u>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = r20;
    r4 = r22;
    r0 = (r15 * 28);
    r5 = (r1 + 16);
    r5 = (r5 + r0);
    r0 = (r27 * 28);
    r6 = (r1 + 16);
    r6 = (r6 + r0);
    r7 = r18;
    r8 = r23;
    ctx->lr = 0x800C1B30u;
    if constexpr (KnownRegArgsCpuCall<0x800C0CF0u>(&func_800C0CF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800C0CF0_787E = func_800C0CF0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800C0CF0_787E);
        r4 = static_cast<uint32_t>(regargs_result_800C0CF0_787E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C0CF0u>(ctx);
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = r16;
    r4 = r17;
    r12 = r30;
    ctr = r12;
    ctx->lr = 0x800C1B44u;
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
    r17 = r3;
    r29 = (r29 + r28);
}

loc_800C1B4C:
{
}

loc_800C1B50:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_800C1A98;
    }
}

loc_800C1B54:
{
    r0 = (r26 * 28);
    r15 = (r1 + 16);
    r15 = (r15 + r0);
    r0 = (r27 * 28);
    r16 = (r1 + 16);
    r16 = (r16 + r0);
    r3 = r20;
    r4 = r22;
    r5 = r16;
    r6 = r15;
    r7 = r15;
    r8 = r23;
    ctx->lr = 0x800C1B88u;
    if constexpr (KnownRegArgsCpuCall<0x800C0CF0u>(&func_800C0CF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800C0CF0_861A = func_800C0CF0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800C0CF0_861A);
        r4 = static_cast<uint32_t>(regargs_result_800C0CF0_861A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C0CF0u>(ctx);
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = r20;
    r4 = r16;
    r5 = r15;
    r6 = r15;
    r7 = r23;
    ctx->lr = 0x800C1BA0u;
    if constexpr (KnownRegArgsCpuCall<0x800C0FF8u>(&func_800C0FF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800C0FF8_8DFD = func_800C0FF8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800C0FF8_8DFD);
        r4 = static_cast<uint32_t>(regargs_result_800C0FF8_8DFD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C0FF8u>(ctx);
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    // inline leaf 0x800C1554 (1 guest instruction(s))
    // end of inlined leaf 0x800C1554
    r0 = 232;
    addr_psqx_800C1BA8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C1BA8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 224));
    r0 = 216;
    addr_psqx_800C1BB4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C1BB4_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 208));
    r0 = 200;
    addr_psqx_800C1BC0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C1BC0_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 192));
    r11 = (r1 + 192);
    // inline leaf 0x804574A4 (18 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -68), 0, 68u, true, false);
    // end of inlined leaf 0x804574A4
    r0 = MemoryInline::FlatRead32((r1 + 244));
    ctx->lr = r0;
    r1 = (r1 + 240);
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE000FFFF fpr_write=0xE000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C179C func_800C179C preserves=true fpr_mask=0x00000000
