#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB3EC(CpuContext* ctx);
extern "C" uint32_t func_800AB3EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800BF87C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800BFD10_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r27_rot_0 = 0;
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
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800BF87C;

loc_800BF87C:
{
    MemoryHw::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryHw::FlatWriteRam32((r1 + 180), r0);
    MemoryHw::FlatWriteRamFloat64((r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 160);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryHw::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r4 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r5 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BF8C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BF8E0;
    }
}

loc_800BF8CC:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BF8D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BF8E0;
    }
}

loc_800BF8DC:
{
    r10 = 0;
}

loc_800BF8E0:
{
}

loc_800BF8E4:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BF8FC;
    }
}

loc_800BF8E8:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BF8F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BF8FC;
    }
}

loc_800BF8F8:
{
    r9 = 0;
}

loc_800BF8FC:
{
}

loc_800BF900:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BF914;
    }
}

loc_800BF904:
{
    r0 = (r11 + 1073741824);
}

loc_800BF90C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BF914;
    }
}

loc_800BF910:
{
    r8 = 0;
}

loc_800BF914:
{
}

loc_800BF918:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BF930;
    }
}

loc_800BF91C:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BF928:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BF930;
    }
}

loc_800BF92C:
{
    r7 = 0;
}

loc_800BF930:
{
}

loc_800BF934:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BF94C;
    }
}

loc_800BF938:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BF944:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BF94C;
    }
}

loc_800BF948:
{
    r6 = 0;
}

loc_800BF94C:
{
}

loc_800BF950:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BF968;
    }
}

loc_800BF954:
{
    r3 = (r5 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BF960:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BF968;
    }
}

loc_800BF964:
{
    r4 = 0;
}

loc_800BF968:
{
}

loc_800BF96C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800BF990;
    }
}

loc_800BF970:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19400);
    r4 = 92;
    r5 = 0x80590000u;
    r5 = (r5 + 19428);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BF990u;
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

loc_800BF990:
{
    r3 = r28;
    r4 = r29;
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800BFDE8u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryHw::FlatRead32((r30 + 36));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BF9C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BF9E0;
    }
}

loc_800BF9CC:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BF9D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BF9E0;
    }
}

loc_800BF9DC:
{
    r10 = 0;
}

loc_800BF9E0:
{
}

loc_800BF9E4:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BF9FC;
    }
}

loc_800BF9E8:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BF9F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BF9FC;
    }
}

loc_800BF9F8:
{
    r9 = 0;
}

loc_800BF9FC:
{
}

loc_800BFA00:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BFA14;
    }
}

loc_800BFA04:
{
    r0 = (r11 + 1073741824);
}

loc_800BFA0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BFA14;
    }
}

loc_800BFA10:
{
    r8 = 0;
}

loc_800BFA14:
{
}

loc_800BFA18:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BFA30;
    }
}

loc_800BFA1C:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BFA28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BFA30;
    }
}

loc_800BFA2C:
{
    r7 = 0;
}

loc_800BFA30:
{
}

loc_800BFA34:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BFA4C;
    }
}

loc_800BFA38:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BFA44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BFA4C;
    }
}

loc_800BFA48:
{
    r5 = 0;
}

loc_800BFA4C:
{
}

loc_800BFA50:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BFA68;
    }
}

loc_800BFA54:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BFA60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BFA68;
    }
}

loc_800BFA64:
{
    r4 = 0;
}

loc_800BFA68:
{
}

loc_800BFA6C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800BFA8C;
    }
}

loc_800BFA70:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19400);
    r4 = 96;
    r5 = 0x80590000u;
    r5 = (r5 + 19480);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BFA8Cu;
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

loc_800BFA8C:
{
    r3 = MemoryHw::FlatRead32((r30 + 36));
    ctx->lr = 0x800BFA94u;
    if constexpr (KnownRegArgsCpuCall<0x800AB3ECu>(&func_800AB3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB3EC_2440 = func_800AB3EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB3EC_2440;
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
    r31 = r3;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BFABC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BFAD4;
    }
}

loc_800BFAC0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800BFACC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BFAD4;
    }
}

loc_800BFAD0:
{
    r10 = 0;
}

loc_800BFAD4:
{
}

loc_800BFAD8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BFAF0;
    }
}

loc_800BFADC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800BFAE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BFAF0;
    }
}

loc_800BFAEC:
{
    r9 = 0;
}

loc_800BFAF0:
{
}

loc_800BFAF4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BFB08;
    }
}

loc_800BFAF8:
{
    r0 = (r11 + 1073741824);
}

loc_800BFB00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BFB08;
    }
}

loc_800BFB04:
{
    r8 = 0;
}

loc_800BFB08:
{
}

loc_800BFB0C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BFB24;
    }
}

loc_800BFB10:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800BFB1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BFB24;
    }
}

loc_800BFB20:
{
    r7 = 0;
}

loc_800BFB24:
{
}

loc_800BFB28:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BFB40;
    }
}

loc_800BFB2C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800BFB38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BFB40;
    }
}

loc_800BFB3C:
{
    r6 = 0;
}

loc_800BFB40:
{
}

loc_800BFB44:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BFB5C;
    }
}

loc_800BFB48:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BFB54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BFB5C;
    }
}

loc_800BFB58:
{
    r5 = 0;
}

loc_800BFB5C:
{
}

loc_800BFB60:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BFB84;
    }
}

loc_800BFB64:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19400);
    r4 = 98;
    r5 = 0x80590000u;
    r5 = (r5 + 19540);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BFB84u;
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

loc_800BFB84:
{
    r3 = MemoryHw::FlatRead8((r28 + 208));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r27_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r27 = (r27_rot_0 & 1);
    r3 = (r1 + 64);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = r30;
    r4 = (r1 + 64);
    ctx->lr = 0x800BFBA8u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800AE3C4u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 16);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = r29;
    r4 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B7E14u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 16);
    r4 = r3;
    r5 = (r1 + 64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = (r1 + 16);
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    r4 = 0;
    ctx->lr = 0x800BFBDCu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804BAB90u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = r28;
    r0 = MemoryHw::FlatRead16(r31);
    r4 = (r0 & 2048);
    r12 = MemoryHw::FlatRead32(r3);
    r12 = MemoryHw::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x800BFBF8u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r26 = r3;
    r3 = r28;
    r0 = MemoryHw::FlatRead16(r31);
    r4 = (r0 & 2048);
    r12 = MemoryHw::FlatRead32(r3);
    r12 = MemoryHw::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x800BFC18u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r25 = r3;
    r24 = 0;
    r23 = 1;
    r3 = r30;
    r12 = r26;
    ctr = r12;
    ctx->lr = 0x800BFC34u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r26 = r3;
    f31.d = MemoryHw::FlatReadFloat32((r2 + -30952));
    goto loc_800BFD04;
}

loc_800BFC40:
{
    r3 = r26;
    // inline leaf 0x800AB410 (9 guest instruction(s))
}

loc_inl4_0x800AB410:
{
    r4 = r3;
    f1.d = MemoryHw::FlatReadFloat32((r3 + 48));
    f0.d = MemoryHw::FlatReadFloat32((r3 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    r3 = MemoryHw::FlatRead32((r3 + 200));
}

loc_inl4_0x800AB428:
{
    f0.d = MemoryHw::FlatReadFloat32((r3 + 88));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_inl4_cont_800AB410:
{
    // end of inlined leaf 0x800AB410
    MemoryHw::FlatWriteRamFloat32((r1 + 8), f1.d);
    // inline leaf 0x800B5AAC (2 guest instruction(s))
    f1.d = MemoryHw::FlatReadFloat32((r2 + -31072));
    // end of inlined leaf 0x800B5AAC
    f0.d = MemoryHw::FlatReadFloat32((r1 + 8));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800BFC58:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800BFCEC;
    }
}

loc_800BFC5C:
{
    r3 = (r13 + -31440);
    r4 = (r1 + 8);
    // inline leaf 0x800BF614 (6 guest instruction(s))
}

loc_inl6_0x800BF614:
{
    f1.d = MemoryHw::FlatReadFloat32(r4);
    f0.d = MemoryHw::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl6_0x800BF620:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl6_return;
    }
}

loc_inl6_0x800BF624:
{
    r3 = r4;
    goto loc_inl6_cont_800BF614;
}

loc_inl6_return:
{
}

loc_inl6_cont_800BF614:
{
    // end of inlined leaf 0x800BF614
    f0.d = MemoryHw::FlatReadFloat32(r3);
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 112), f0.d);
    r4 = fctiwzword0;
    r3 = (r4 & 255);
}

loc_800BFC84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800BFCEC;
    }
}

loc_800BFC88:
{
    r0 = (r24 & 255);
}

loc_800BFC90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_800BFCC0;
    }
}

loc_800BFC94:
{
    r24 = r4;
    r4 = 5;
    ctx->lr = 0x800BFCA0u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804B7160u>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = r28;
    r4 = r26;
    r5 = r31;
    r6 = r29;
    r7 = r23;
    r8 = 1;
    ctx->lr = 0x800BFCBCu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800C694Cu>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800BFCDC;
}

loc_800BFCC0:
{
    r3 = r28;
    r4 = r26;
    r5 = r31;
    r6 = r29;
    r7 = r23;
    r8 = 0;
    ctx->lr = 0x800BFCDCu;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800C694Cu>(ctx);
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_800BFCDC:
{
    r23 = 0;
    r3 = (r26 + 172);
    r4 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800BFD30u>(ctx);
}

loc_800BFCEC:
{
    r3 = r30;
    r4 = r26;
    r12 = r25;
    ctr = r12;
    ctx->lr = 0x800BFD00u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r26 = r3;
}

loc_800BFD04:
{
}

loc_800BFD08:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_800BFC40;
    }
}

loc_800BFD0C:
{
    r0 = 168;
    addr_psqx_800BFD10_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800BFD10_loc_0));
    f31.d = MemoryHw::FlatReadFloat64((r1 + 160));
    r11 = (r1 + 160);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryHw::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryHw::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800BF87C func_800BF87C preserves=true fpr_mask=0x00000000
