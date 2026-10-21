#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005D720(CpuContext* ctx);
extern "C" uint64_t func_8005D720_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8005EACC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
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
    uint32_t r23 = ctx->gpr[23];
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

    MKW_GUEST_ENTER(0x8005EACCu);
    goto loc_8005EACC;

loc_8005EACC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r29 = r3;
    r30 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8005EB0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005EB24;
    }
}

loc_8005EB10:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8005EB1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005EB24;
    }
}

loc_8005EB20:
{
    r10 = 0;
}

loc_8005EB24:
{
}

loc_8005EB28:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8005EB40;
    }
}

loc_8005EB2C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8005EB38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005EB40;
    }
}

loc_8005EB3C:
{
    r9 = 0;
}

loc_8005EB40:
{
}

loc_8005EB44:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8005EB58;
    }
}

loc_8005EB48:
{
    r0 = (r11 + 1073741824);
}

loc_8005EB50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005EB58;
    }
}

loc_8005EB54:
{
    r8 = 0;
}

loc_8005EB58:
{
}

loc_8005EB5C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8005EB74;
    }
}

loc_8005EB60:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8005EB6C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005EB74;
    }
}

loc_8005EB70:
{
    r7 = 0;
}

loc_8005EB74:
{
}

loc_8005EB78:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8005EB90;
    }
}

loc_8005EB7C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8005EB88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005EB90;
    }
}

loc_8005EB8C:
{
    r6 = 0;
}

loc_8005EB90:
{
}

loc_8005EB94:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8005EBAC;
    }
}

loc_8005EB98:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8005EBA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005EBAC;
    }
}

loc_8005EBA8:
{
    r5 = 0;
}

loc_8005EBAC:
{
}

loc_8005EBB0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8005EBD4;
    }
}

loc_8005EBB4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 263;
    r5 = 0x80590000u;
    r5 = (r5 + -17356);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8005EBD4u;
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

loc_8005EBD4:
{
    r4 = 0;
}

loc_8005EBDC:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(0))) {
        goto loc_8005EBF4;
    }
}

loc_8005EBE0:
{
    r3 = MemoryInline::FlatRead32((r29 + 24));
    r0 = (r3 + -1);
}

loc_8005EBEC:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r0))) {
        goto loc_8005EBF4;
    }
}

loc_8005EBF0:
{
    r4 = 1;
}

loc_8005EBF4:
{
}

loc_8005EBF8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8005EC28;
    }
}

loc_8005EBFC:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 264;
    r5 = 0x80590000u;
    r5 = (r5 + -16680);
    r6 = r30;
    r7 = 0;
    r8 = MemoryInline::FlatRead32((r29 + 24));
    r8 = (r8 + -1);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8005EC28u;
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

loc_8005EC28:
{
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r31 = (r31_rot_0 & -4);
    r3 = MemoryInline::FlatRead32((r29 + 28));
    r3_addr_0 = (r3 + r31);
    r30 = MemoryInline::FlatRead32(r3_addr_0);
}

loc_8005EC38:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8005EDEC;
    }
}

loc_8005EC3C:
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

loc_8005EC60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005EC78;
    }
}

loc_8005EC64:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8005EC70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005EC78;
    }
}

loc_8005EC74:
{
    r9 = 0;
}

loc_8005EC78:
{
}

loc_8005EC7C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8005EC94;
    }
}

loc_8005EC80:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8005EC8C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005EC94;
    }
}

loc_8005EC90:
{
    r8 = 0;
}

loc_8005EC94:
{
}

loc_8005EC98:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8005ECAC;
    }
}

loc_8005EC9C:
{
    r0 = (r10 + 1073741824);
}

loc_8005ECA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005ECAC;
    }
}

loc_8005ECA8:
{
    r7 = 0;
}

loc_8005ECAC:
{
}

loc_8005ECB0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8005ECC8;
    }
}

loc_8005ECB4:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8005ECC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005ECC8;
    }
}

loc_8005ECC4:
{
    r6 = 0;
}

loc_8005ECC8:
{
}

loc_8005ECCC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8005ECE4;
    }
}

loc_8005ECD0:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8005ECDC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005ECE4;
    }
}

loc_8005ECE0:
{
    r5 = 0;
}

loc_8005ECE4:
{
}

loc_8005ECE8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8005ED00;
    }
}

loc_8005ECEC:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_8005ECF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8005ED00;
    }
}

loc_8005ECFC:
{
    r4 = 0;
}

loc_8005ED00:
{
}

loc_8005ED04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8005ED28;
    }
}

loc_8005ED08:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 271;
    r5 = 0x80590000u;
    r5 = (r5 + -16624);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8005ED28u;
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

loc_8005ED28:
{
    r3 = r30;
    r28 = 65536;
    r4 = (r28 + 3);
    r5 = 0;
    r6 = r29;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8005ED4Cu;
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
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r29 + 28));
    r3_addr_1 = (r3 + r31);
    MemoryInline::FlatWrite32(r3_addr_1, r0);
    r26 = 0;
    r25 = 0;
    r31 = 0;
    goto loc_8005EDC8;
}

loc_8005ED68:
{
    r24 = (r28 + -32768);
    r23 = 0;
    r27 = 0;
    goto loc_8005EDAC;
}

loc_8005ED78:
{
    r3 = MemoryInline::FlatRead32((r29 + 28));
    r3_addr_4 = (r3 + r27);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
}

loc_8005ED84:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8005EDA4;
    }
}

loc_8005ED88:
{
    r4 = r25;
    ctx->lr = 0x8005ED90u;
    if constexpr (KnownRegArgsCpuCall<0x8005D720u>(&func_8005D720)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8005D720_2DE7 = func_8005D720_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005D720_2DE7);
        r4 = static_cast<uint32_t>(regargs_result_8005D720_2DE7 >> 32);
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
        InvokeDirectCpu<0x8005D720u>(ctx);
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

loc_8005ED94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8005EDA4;
    }
}

loc_8005ED98:
{
    r26 = 1;
    r24 = 0;
    goto loc_8005EDB8;
}

loc_8005EDA4:
{
    r27 = (r27 + 4);
    r23 = (r23 + 1);
}

loc_8005EDAC:
{
    r0 = MemoryInline::FlatRead32((r29 + 24));
}

loc_8005EDB4:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r0))) {
        goto loc_8005ED78;
    }
}

loc_8005EDB8:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r3_addr_6 = (r3 + r31);
    MemoryInline::FlatWrite16(r3_addr_6, static_cast<uint16_t>(r24));
    r31 = (r31 + 2);
    r25 = (r25 + 1);
}

loc_8005EDC8:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
}

loc_8005EDD0:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(r0))) {
        goto loc_8005ED68;
    }
}

loc_8005EDD4:
{
}

loc_8005EDD8:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_8005EDEC;
    }
}

loc_8005EDDC:
{
    r3 = r29;
    r4 = 4;
    r5 = 0;
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

loc_8005EDEC:
{
    r3 = r30;
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
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

extern "C" void func_8005EACC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8005EACC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8005EACC func_8005EACC preserves=true fpr_mask=0x00000000
