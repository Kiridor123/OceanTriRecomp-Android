#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80069EC0(CpuContext* ctx);
extern "C" uint64_t func_80069EC0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8006AC78_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_8006AC78;

loc_8006AC78:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
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

loc_8006ACBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006ACD4;
    }
}

loc_8006ACC0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8006ACCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006ACD4;
    }
}

loc_8006ACD0:
{
    r10 = 0;
}

loc_8006ACD4:
{
}

loc_8006ACD8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8006ACF0;
    }
}

loc_8006ACDC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8006ACE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006ACF0;
    }
}

loc_8006ACEC:
{
    r9 = 0;
}

loc_8006ACF0:
{
}

loc_8006ACF4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8006AD08;
    }
}

loc_8006ACF8:
{
    r0 = (r11 + 1073741824);
}

loc_8006AD00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AD08;
    }
}

loc_8006AD04:
{
    r8 = 0;
}

loc_8006AD08:
{
}

loc_8006AD0C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006AD24;
    }
}

loc_8006AD10:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8006AD1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AD24;
    }
}

loc_8006AD20:
{
    r7 = 0;
}

loc_8006AD24:
{
}

loc_8006AD28:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8006AD40;
    }
}

loc_8006AD2C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8006AD38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AD40;
    }
}

loc_8006AD3C:
{
    r6 = 0;
}

loc_8006AD40:
{
}

loc_8006AD44:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8006AD5C;
    }
}

loc_8006AD48:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006AD54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AD5C;
    }
}

loc_8006AD58:
{
    r5 = 0;
}

loc_8006AD5C:
{
}

loc_8006AD60:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8006AD84;
    }
}

loc_8006AD64:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 164;
    r5 = 0x80590000u;
    r5 = (r5 + -10780);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006AD84u;
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
}

loc_8006AD84:
{
    r4 = 0;
}

loc_8006AD8C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(0))) {
        goto loc_8006ADA4;
    }
}

loc_8006AD90:
{
    r3 = MemoryInline::FlatRead32((r29 + 24));
    r0 = (r3 + -1);
}

loc_8006AD9C:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r0))) {
        goto loc_8006ADA4;
    }
}

loc_8006ADA0:
{
    r4 = 1;
}

loc_8006ADA4:
{
}

loc_8006ADA8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8006ADD8;
    }
}

loc_8006ADAC:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 165;
    r5 = 0x80590000u;
    r5 = (r5 + -10224);
    r6 = r30;
    r7 = 0;
    r8 = MemoryInline::FlatRead32((r29 + 24));
    r8 = (r8 + -1);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006ADD8u;
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
}

loc_8006ADD8:
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

loc_8006ADFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AE14;
    }
}

loc_8006AE00:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8006AE0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AE14;
    }
}

loc_8006AE10:
{
    r9 = 0;
}

loc_8006AE14:
{
}

loc_8006AE18:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8006AE30;
    }
}

loc_8006AE1C:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8006AE28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AE30;
    }
}

loc_8006AE2C:
{
    r8 = 0;
}

loc_8006AE30:
{
}

loc_8006AE34:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006AE48;
    }
}

loc_8006AE38:
{
    r0 = (r10 + 1073741824);
}

loc_8006AE40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AE48;
    }
}

loc_8006AE44:
{
    r7 = 0;
}

loc_8006AE48:
{
}

loc_8006AE4C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8006AE64;
    }
}

loc_8006AE50:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8006AE5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AE64;
    }
}

loc_8006AE60:
{
    r6 = 0;
}

loc_8006AE64:
{
}

loc_8006AE68:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8006AE80;
    }
}

loc_8006AE6C:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8006AE78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AE80;
    }
}

loc_8006AE7C:
{
    r5 = 0;
}

loc_8006AE80:
{
}

loc_8006AE84:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8006AE9C;
    }
}

loc_8006AE88:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006AE94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AE9C;
    }
}

loc_8006AE98:
{
    r4 = 0;
}

loc_8006AE9C:
{
}

loc_8006AEA0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8006AEC4;
    }
}

loc_8006AEA4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 166;
    r5 = 0x80590000u;
    r5 = (r5 + -10664);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006AEC4u;
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
}

loc_8006AEC4:
{
    r3 = r29;
    r4 = r30;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 64));
    ctr = r12;
    ctx->lr = 0x8006AEDCu;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r26 = r3;
    r25 = 0;
    r24 = 0;
    r27 = 0;
    r28 = 0;
    goto loc_8006AF1C;
}

loc_8006AEF4:
{
    r3 = r31;
    r4 = r24;
    ctx->lr = 0x8006AF00u;
    if constexpr (KnownRegArgsCpuCall<0x80069EC0u>(&func_80069EC0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80069EC0_2C66 = func_80069EC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80069EC0_2C66);
        r4 = static_cast<uint32_t>(regargs_result_80069EC0_2C66 >> 32);
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
        InvokeDirectCpu<0x80069EC0u>(ctx);
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
}

loc_8006AF04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8006AF14;
    }
}

loc_8006AF08:
{
    r25 = 1;
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r3_addr_2 = (r3 + r27);
    MemoryInline::FlatWrite16(r3_addr_2, static_cast<uint16_t>(r28));
}

loc_8006AF14:
{
    r27 = (r27 + 2);
    r24 = (r24 + 1);
}

loc_8006AF1C:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
}

loc_8006AF24:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(r0))) {
        goto loc_8006AEF4;
    }
}

loc_8006AF28:
{
}

loc_8006AF2C:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8006AF40;
    }
}

loc_8006AF30:
{
    r3 = r29;
    r4 = 4;
    r5 = 1;
    // inline leaf 0x800649EC (11 guest instruction(s))
}

loc_inl1_0x800649EC:
{
}

loc_inl1_0x800649F0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80064A04;
    }
}

loc_inl1_0x800649F4:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_inl1_cont_800649EC;
}

loc_inl1_0x80064A04:
{
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r0 = ~(r4 | r4);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_inl1_cont_800649EC:
{
    // end of inlined leaf 0x800649EC
}

loc_8006AF40:
{
    r3 = MemoryInline::FlatRead32((r29 + 28));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_4 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_4, r31);
    r3 = r31;
    r4 = 65536;
    r4 = (r4 + 2);
    r5 = 0;
    r6 = r29;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8006AF70u;
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = r26;
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8006AC78(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8006AC78_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8006AC78 func_8006AC78 preserves=true fpr_mask=0x00000000
