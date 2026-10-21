#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB340(CpuContext* ctx);
extern "C" uint32_t func_800AB340_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800C05D8(CpuContext* ctx);
extern "C" uint64_t func_800C05D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800C07E8_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_800C0C74_loc_0 = 0;
    uint32_t addr_psqx_800C0C80_loc_0 = 0;
    uint32_t addr_psqx_800C0C8C_loc_0 = 0;
    uint32_t addr_psqx_800C0C98_loc_0 = 0;
    uint32_t addr_psqx_800C0CA4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800C07E8u);
    goto loc_800C07E8;

loc_800C07E8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -320), 0, 328u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -320), r1);
    r1 = (r1 + -320);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 324u, (r1 + 324), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 304u, (r1 + 304), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 288u, (r1 + 288), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 272u, (r1 + 272), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 256u, (r1 + 256), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 240u, (r1 + 240), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 240);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    f28.d = f1.d;
    f29.d = f2.d;
    f30.d = f3.d;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800C086C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0884;
    }
}

loc_800C0870:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C087C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0884;
    }
}

loc_800C0880:
{
    r10 = 0;
}

loc_800C0884:
{
}

loc_800C0888:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800C08A0;
    }
}

loc_800C088C:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C0898:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C08A0;
    }
}

loc_800C089C:
{
    r9 = 0;
}

loc_800C08A0:
{
}

loc_800C08A4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C08B8;
    }
}

loc_800C08A8:
{
    r0 = (r11 + 1073741824);
}

loc_800C08B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C08B8;
    }
}

loc_800C08B4:
{
    r8 = 0;
}

loc_800C08B8:
{
}

loc_800C08BC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C08D4;
    }
}

loc_800C08C0:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C08CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C08D4;
    }
}

loc_800C08D0:
{
    r7 = 0;
}

loc_800C08D4:
{
}

loc_800C08D8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C08F0;
    }
}

loc_800C08DC:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C08E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C08F0;
    }
}

loc_800C08EC:
{
    r6 = 0;
}

loc_800C08F0:
{
}

loc_800C08F4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C090C;
    }
}

loc_800C08F8:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C0904:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C090C;
    }
}

loc_800C0908:
{
    r5 = 0;
}

loc_800C090C:
{
}

loc_800C0910:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C0934;
    }
}

loc_800C0914:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19616);
    r4 = 246;
    r5 = 0x80590000u;
    r5 = (r5 + 19648);
    r6 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C0934u;
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

loc_800C0934:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r28 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800C0958:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0970;
    }
}

loc_800C095C:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C0968:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0970;
    }
}

loc_800C096C:
{
    r9 = 0;
}

loc_800C0970:
{
}

loc_800C0974:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C098C;
    }
}

loc_800C0978:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C0984:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C098C;
    }
}

loc_800C0988:
{
    r8 = 0;
}

loc_800C098C:
{
}

loc_800C0990:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C09A4;
    }
}

loc_800C0994:
{
    r0 = (r10 + 1073741824);
}

loc_800C099C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C09A4;
    }
}

loc_800C09A0:
{
    r7 = 0;
}

loc_800C09A4:
{
}

loc_800C09A8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C09C0;
    }
}

loc_800C09AC:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C09B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C09C0;
    }
}

loc_800C09BC:
{
    r6 = 0;
}

loc_800C09C0:
{
}

loc_800C09C4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C09DC;
    }
}

loc_800C09C8:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C09D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C09DC;
    }
}

loc_800C09D8:
{
    r5 = 0;
}

loc_800C09DC:
{
}

loc_800C09E0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C09F8;
    }
}

loc_800C09E4:
{
    r3 = (r28 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C09F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C09F8;
    }
}

loc_800C09F4:
{
    r4 = 0;
}

loc_800C09F8:
{
}

loc_800C09FC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C0A20;
    }
}

loc_800C0A00:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19616);
    r4 = 247;
    r5 = 0x80590000u;
    r5 = (r5 + 19700);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C0A20u;
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

loc_800C0A20:
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

loc_800C0A44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0A5C;
    }
}

loc_800C0A48:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C0A54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0A5C;
    }
}

loc_800C0A58:
{
    r9 = 0;
}

loc_800C0A5C:
{
}

loc_800C0A60:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C0A78;
    }
}

loc_800C0A64:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C0A70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0A78;
    }
}

loc_800C0A74:
{
    r8 = 0;
}

loc_800C0A78:
{
}

loc_800C0A7C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C0A90;
    }
}

loc_800C0A80:
{
    r0 = (r10 + 1073741824);
}

loc_800C0A88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0A90;
    }
}

loc_800C0A8C:
{
    r7 = 0;
}

loc_800C0A90:
{
}

loc_800C0A94:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C0AAC;
    }
}

loc_800C0A98:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C0AA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0AAC;
    }
}

loc_800C0AA8:
{
    r6 = 0;
}

loc_800C0AAC:
{
}

loc_800C0AB0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C0AC8;
    }
}

loc_800C0AB4:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C0AC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0AC8;
    }
}

loc_800C0AC4:
{
    r5 = 0;
}

loc_800C0AC8:
{
}

loc_800C0ACC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C0AE4;
    }
}

loc_800C0AD0:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C0ADC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C0AE4;
    }
}

loc_800C0AE0:
{
    r4 = 0;
}

loc_800C0AE4:
{
}

loc_800C0AE8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800C0B0C;
    }
}

loc_800C0AEC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 19616);
    r4 = 248;
    r5 = 0x80590000u;
    r5 = (r5 + 19756);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C0B0Cu;
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

loc_800C0B0C:
{
    r3 = (r1 + 56);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 56);
    r4 = r28;
    r5 = r30;
    r12 = r31;
    ctr = r12;
    ctx->lr = 0x800C0B2Cu;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 168);
    r4 = r26;
    r5 = r28;
    r6 = r29;
    r7 = r30;
    r8 = (r1 + 56);
    r9 = (r30 + 172);
    ctx->lr = 0x800C0B4Cu;
    if constexpr (KnownRegArgsCpuCall<0x800C05D8u>(&func_800C05D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
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
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_800C05D8_3D24 = func_800C05D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800C05D8_3D24);
        r4 = static_cast<uint32_t>(regargs_result_800C05D8_3D24 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
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
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800C05D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r30;
    r4 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B5518u>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r30;
    // inline leaf 0x800AB410 (9 guest instruction(s))
}

loc_inl3_0x800AB410:
{
    r4 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 48));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 200));
}

loc_inl3_0x800AB428:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 88));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_inl3_cont_800AB410:
{
    // end of inlined leaf 0x800AB410
    f27.d = f1.d;
    r3 = r30;
    ctx->lr = 0x800C0B74u;
    if constexpr (KnownRegArgsCpuCall<0x800AB340u>(&func_800AB340)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_800AB340_49C4 = func_800AB340_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB340_49C4;
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
        InvokeDirectCpu<0x800AB340u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r3 = (r1 + 28);
    r4 = (r1 + 24);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    ctx->lr = 0x800C0B88u;
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
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
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = PpcFmulsInline(f0.d, f27.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -30944));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = PpcFmulsInline(f0.d, f27.d);
    f0.d = PpcFmulsInline(f28.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f29.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PpcFmulsInline(f29.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    r3 = (r1 + 120);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f1.d = PpcFmulsInline(f0.d, f27.d);
    f5.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = (-(f5.d));
    f3.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PpcFmulsInline(f28.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f0.d));
    f0.d = PpcFmulsInline(f5.d, f31.d);
    f0.d = PpcFmulsInline(f29.d, f0.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    f5.d = f2.d;
    f6.d = MemoryInline::FlatReadFloat32((r2 + -30940));
    f7.d = f2.d;
    f8.d = f2.d;
    // inline leaf 0x80077E54 (17 guest instruction(s))
    f11.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f4.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f6.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f6.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f7.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f7.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 28), f8.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f11.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f10.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 32), f11.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f10.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f9.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f9.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f0.d);
    }
    // end of inlined leaf 0x80077E54
    r3 = (r1 + 72);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 72);
    r4 = (r1 + 168);
    r5 = (r1 + 120);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80071120u>(ctx);
    r3 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 84));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 116));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = r27;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    // inline leaf 0x800B619C (3 guest instruction(s))
    r3 = 0x80690000u;
    r3 = (r3 + 28808);
    // end of inlined leaf 0x800B619C
    r5 = r3;
    r3 = (r27 + 12);
    r4 = (r1 + 72);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
    // inline leaf 0x800B6190 (3 guest instruction(s))
    r3 = 0x80690000u;
    r3 = (r3 + 28832);
    // end of inlined leaf 0x800B6190
    r5 = r3;
    r3 = (r27 + 24);
    r4 = (r1 + 72);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80501C48u>(ctx);
    MemoryInline::FlatWriteFloat32((r27 + 36), f30.d);
    r0 = 312;
    addr_psqx_800C0C74_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C0C74_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 216), 0, 112u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 88u, (r1 + 304));
    r0 = 296;
    addr_psqx_800C0C80_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C0C80_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 72u, (r1 + 288));
    r0 = 280;
    addr_psqx_800C0C8C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C0C8C_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 56u, (r1 + 272));
    r0 = 264;
    addr_psqx_800C0C98_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C0C98_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 40u, (r1 + 256));
    r0 = 248;
    addr_psqx_800C0CA4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800C0CA4_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 24u, (r1 + 240));
    r11 = (r1 + 240);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::ReadResolved32(guest_range_2, 108u, (r1 + 324));
    ctx->lr = r0;
    r1 = (r1 + 320);
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
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
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

extern "C" void func_800C07E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800C07E8_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C07E8 func_800C07E8 preserves=true fpr_mask=0x00000000
