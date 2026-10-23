#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80069EC0(CpuContext* ctx);
extern "C" uint64_t func_80069EC0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8006AF8C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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

    goto loc_8006AF8C;

loc_8006AF8C:
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

loc_8006AFCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AFE4;
    }
}

loc_8006AFD0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8006AFDC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AFE4;
    }
}

loc_8006AFE0:
{
    r10 = 0;
}

loc_8006AFE4:
{
}

loc_8006AFE8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8006B000;
    }
}

loc_8006AFEC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8006AFF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006B000;
    }
}

loc_8006AFFC:
{
    r9 = 0;
}

loc_8006B000:
{
}

loc_8006B004:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8006B018;
    }
}

loc_8006B008:
{
    r0 = (r11 + 1073741824);
}

loc_8006B010:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006B018;
    }
}

loc_8006B014:
{
    r8 = 0;
}

loc_8006B018:
{
}

loc_8006B01C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006B034;
    }
}

loc_8006B020:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8006B02C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006B034;
    }
}

loc_8006B030:
{
    r7 = 0;
}

loc_8006B034:
{
}

loc_8006B038:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8006B050;
    }
}

loc_8006B03C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8006B048:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006B050;
    }
}

loc_8006B04C:
{
    r6 = 0;
}

loc_8006B050:
{
}

loc_8006B054:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8006B06C;
    }
}

loc_8006B058:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006B064:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006B06C;
    }
}

loc_8006B068:
{
    r5 = 0;
}

loc_8006B06C:
{
}

loc_8006B070:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8006B094;
    }
}

loc_8006B074:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 199;
    r5 = 0x80590000u;
    r5 = (r5 + -10780);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006B094u;
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

loc_8006B094:
{
    r4 = 0;
}

loc_8006B09C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(0))) {
        goto loc_8006B0B4;
    }
}

loc_8006B0A0:
{
    r3 = MemoryInline::FlatRead32((r29 + 24));
    r0 = (r3 + -1);
}

loc_8006B0AC:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r0))) {
        goto loc_8006B0B4;
    }
}

loc_8006B0B0:
{
    r4 = 1;
}

loc_8006B0B4:
{
}

loc_8006B0B8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8006B0E8;
    }
}

loc_8006B0BC:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 200;
    r5 = 0x80590000u;
    r5 = (r5 + -10224);
    r6 = r30;
    r7 = 0;
    r8 = MemoryInline::FlatRead32((r29 + 24));
    r8 = (r8 + -1);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006B0E8u;
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

loc_8006B0E8:
{
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r31 = (r31_rot_0 & -4);
    r3 = MemoryInline::FlatRead32((r29 + 28));
    r3_addr_0 = (r3 + r31);
    r30 = MemoryInline::FlatRead32(r3_addr_0);
}

loc_8006B0F8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8006B2AC;
    }
}

loc_8006B0FC:
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

loc_8006B120:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006B138;
    }
}

loc_8006B124:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8006B130:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006B138;
    }
}

loc_8006B134:
{
    r9 = 0;
}

loc_8006B138:
{
}

loc_8006B13C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8006B154;
    }
}

loc_8006B140:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8006B14C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006B154;
    }
}

loc_8006B150:
{
    r8 = 0;
}

loc_8006B154:
{
}

loc_8006B158:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006B16C;
    }
}

loc_8006B15C:
{
    r0 = (r10 + 1073741824);
}

loc_8006B164:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006B16C;
    }
}

loc_8006B168:
{
    r7 = 0;
}

loc_8006B16C:
{
}

loc_8006B170:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8006B188;
    }
}

loc_8006B174:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8006B180:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006B188;
    }
}

loc_8006B184:
{
    r6 = 0;
}

loc_8006B188:
{
}

loc_8006B18C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8006B1A4;
    }
}

loc_8006B190:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8006B19C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006B1A4;
    }
}

loc_8006B1A0:
{
    r5 = 0;
}

loc_8006B1A4:
{
}

loc_8006B1A8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8006B1C0;
    }
}

loc_8006B1AC:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006B1B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006B1C0;
    }
}

loc_8006B1BC:
{
    r4 = 0;
}

loc_8006B1C0:
{
}

loc_8006B1C4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8006B1E8;
    }
}

loc_8006B1C8:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 206;
    r5 = 0x80590000u;
    r5 = (r5 + -10168);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006B1E8u;
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

loc_8006B1E8:
{
    r3 = r30;
    r28 = 65536;
    r4 = (r28 + 3);
    r5 = 0;
    r6 = r29;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8006B20Cu;
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
    goto loc_8006B288;
}

loc_8006B228:
{
    r24 = (r28 + -32768);
    r23 = 0;
    r27 = 0;
    goto loc_8006B26C;
}

loc_8006B238:
{
    r3 = MemoryInline::FlatRead32((r29 + 28));
    r3_addr_4 = (r3 + r27);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
}

loc_8006B244:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8006B264;
    }
}

loc_8006B248:
{
    r4 = r25;
    ctx->lr = 0x8006B250u;
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
        const auto regargs_result_80069EC0_305E = func_80069EC0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80069EC0_305E);
        r4 = static_cast<uint32_t>(regargs_result_80069EC0_305E >> 32);
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

loc_8006B254:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8006B264;
    }
}

loc_8006B258:
{
    r26 = 1;
    r24 = 0;
    goto loc_8006B278;
}

loc_8006B264:
{
    r27 = (r27 + 4);
    r23 = (r23 + 1);
}

loc_8006B26C:
{
    r0 = MemoryInline::FlatRead32((r29 + 24));
}

loc_8006B274:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(r0))) {
        goto loc_8006B238;
    }
}

loc_8006B278:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r3_addr_6 = (r3 + r31);
    MemoryInline::FlatWrite16(r3_addr_6, static_cast<uint16_t>(r24));
    r31 = (r31 + 2);
    r25 = (r25 + 1);
}

loc_8006B288:
{
    r0 = MemoryInline::FlatRead32((r29 + 16));
}

loc_8006B290:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(r0))) {
        goto loc_8006B228;
    }
}

loc_8006B294:
{
}

loc_8006B298:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_8006B2AC;
    }
}

loc_8006B29C:
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

loc_8006B2AC:
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

extern "C" void func_8006AF8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8006AF8C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8006AF8C func_8006AF8C preserves=true fpr_mask=0x00000000
