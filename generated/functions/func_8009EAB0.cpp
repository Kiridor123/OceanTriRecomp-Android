#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8009EAB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_8009EAB0;

loc_8009EAB0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8009EAFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EB14;
    }
}

loc_8009EB00:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8009EB0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EB14;
    }
}

loc_8009EB10:
{
    r10 = 0;
}

loc_8009EB14:
{
}

loc_8009EB18:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8009EB30;
    }
}

loc_8009EB1C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8009EB28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EB30;
    }
}

loc_8009EB2C:
{
    r9 = 0;
}

loc_8009EB30:
{
}

loc_8009EB34:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009EB48;
    }
}

loc_8009EB38:
{
    r0 = (r11 + 1073741824);
}

loc_8009EB40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EB48;
    }
}

loc_8009EB44:
{
    r8 = 0;
}

loc_8009EB48:
{
}

loc_8009EB4C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009EB64;
    }
}

loc_8009EB50:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8009EB5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EB64;
    }
}

loc_8009EB60:
{
    r7 = 0;
}

loc_8009EB64:
{
}

loc_8009EB68:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009EB80;
    }
}

loc_8009EB6C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8009EB78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EB80;
    }
}

loc_8009EB7C:
{
    r6 = 0;
}

loc_8009EB80:
{
}

loc_8009EB84:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009EB9C;
    }
}

loc_8009EB88:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009EB94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EB9C;
    }
}

loc_8009EB98:
{
    r5 = 0;
}

loc_8009EB9C:
{
}

loc_8009EBA0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009EBC4;
    }
}

loc_8009EBA4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 769;
    r5 = 0x80590000u;
    r5 = (r5 + 9788);
    r6 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009EBC4u;
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

loc_8009EBC4:
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

loc_8009EBE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EC00;
    }
}

loc_8009EBEC:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009EBF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EC00;
    }
}

loc_8009EBFC:
{
    r9 = 0;
}

loc_8009EC00:
{
}

loc_8009EC04:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009EC1C;
    }
}

loc_8009EC08:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009EC14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EC1C;
    }
}

loc_8009EC18:
{
    r8 = 0;
}

loc_8009EC1C:
{
}

loc_8009EC20:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009EC34;
    }
}

loc_8009EC24:
{
    r0 = (r10 + 1073741824);
}

loc_8009EC2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EC34;
    }
}

loc_8009EC30:
{
    r7 = 0;
}

loc_8009EC34:
{
}

loc_8009EC38:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009EC50;
    }
}

loc_8009EC3C:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009EC48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EC50;
    }
}

loc_8009EC4C:
{
    r6 = 0;
}

loc_8009EC50:
{
}

loc_8009EC54:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009EC6C;
    }
}

loc_8009EC58:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009EC64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EC6C;
    }
}

loc_8009EC68:
{
    r5 = 0;
}

loc_8009EC6C:
{
}

loc_8009EC70:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009EC88;
    }
}

loc_8009EC74:
{
    r3 = (r28 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009EC80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EC88;
    }
}

loc_8009EC84:
{
    r4 = 0;
}

loc_8009EC88:
{
}

loc_8009EC8C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009ECB0;
    }
}

loc_8009EC90:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 770;
    r5 = 0x80590000u;
    r5 = (r5 + 10200);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009ECB0u;
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

loc_8009ECB0:
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

loc_8009ECD4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009ECEC;
    }
}

loc_8009ECD8:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009ECE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009ECEC;
    }
}

loc_8009ECE8:
{
    r9 = 0;
}

loc_8009ECEC:
{
}

loc_8009ECF0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009ED08;
    }
}

loc_8009ECF4:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009ED00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009ED08;
    }
}

loc_8009ED04:
{
    r8 = 0;
}

loc_8009ED08:
{
}

loc_8009ED0C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009ED20;
    }
}

loc_8009ED10:
{
    r0 = (r10 + 1073741824);
}

loc_8009ED18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009ED20;
    }
}

loc_8009ED1C:
{
    r7 = 0;
}

loc_8009ED20:
{
}

loc_8009ED24:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009ED3C;
    }
}

loc_8009ED28:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009ED34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009ED3C;
    }
}

loc_8009ED38:
{
    r6 = 0;
}

loc_8009ED3C:
{
}

loc_8009ED40:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009ED58;
    }
}

loc_8009ED44:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009ED50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009ED58;
    }
}

loc_8009ED54:
{
    r5 = 0;
}

loc_8009ED58:
{
}

loc_8009ED5C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009ED74;
    }
}

loc_8009ED60:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009ED6C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009ED74;
    }
}

loc_8009ED70:
{
    r4 = 0;
}

loc_8009ED74:
{
}

loc_8009ED78:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009ED9C;
    }
}

loc_8009ED7C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 771;
    r5 = 0x80590000u;
    r5 = (r5 + 10252);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009ED9Cu;
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

loc_8009ED9C:
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

loc_8009EDC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EDD8;
    }
}

loc_8009EDC4:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009EDD0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EDD8;
    }
}

loc_8009EDD4:
{
    r9 = 0;
}

loc_8009EDD8:
{
}

loc_8009EDDC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009EDF4;
    }
}

loc_8009EDE0:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009EDEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EDF4;
    }
}

loc_8009EDF0:
{
    r8 = 0;
}

loc_8009EDF4:
{
}

loc_8009EDF8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009EE0C;
    }
}

loc_8009EDFC:
{
    r0 = (r10 + 1073741824);
}

loc_8009EE04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EE0C;
    }
}

loc_8009EE08:
{
    r7 = 0;
}

loc_8009EE0C:
{
}

loc_8009EE10:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009EE28;
    }
}

loc_8009EE14:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009EE20:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EE28;
    }
}

loc_8009EE24:
{
    r6 = 0;
}

loc_8009EE28:
{
}

loc_8009EE2C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009EE44;
    }
}

loc_8009EE30:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009EE3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EE44;
    }
}

loc_8009EE40:
{
    r5 = 0;
}

loc_8009EE44:
{
}

loc_8009EE48:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009EE60;
    }
}

loc_8009EE4C:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009EE58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009EE60;
    }
}

loc_8009EE5C:
{
    r4 = 0;
}

loc_8009EE60:
{
}

loc_8009EE64:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009EE88;
    }
}

loc_8009EE68:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 772;
    r5 = 0x80590000u;
    r5 = (r5 + 10304);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009EE88u;
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

loc_8009EE88:
{
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32(r31, r0);
    r3 = MemoryInline::FlatRead8((r27 + 4));
    r0 = (r3 & 64);
}

loc_8009EE9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009EF28;
    }
}

loc_8009EEA0:
{
    r5 = (r3 & 32);
}

loc_8009EEA8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009EEB8;
    }
}

loc_8009EEAC:
{
    r0 = MemoryInline::FlatRead8((r27 + 5));
}

loc_8009EEB4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8009EF28;
    }
}

loc_8009EEB8:
{
    r6 = MemoryInline::FlatRead32(r30);
    r0 = (r6 & 1);
}

loc_8009EEC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009EF00;
    }
}

loc_8009EEC8:
{
    r4 = (r29 + 1);
    r3 = MemoryInline::FlatRead16(r28);
    r0 = (r3 + -1);
}

loc_8009EED8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8009EF00;
    }
}

loc_8009EEDC:
{
}

loc_8009EEE0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009EEF4;
    }
}

loc_8009EEE4:
{
    r3 = MemoryInline::FlatRead8((r27 + 5));
    r0 = (r3 + -1);
}

loc_8009EEF0:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(r0))) {
        goto loc_8009EF00;
    }
}

loc_8009EEF4:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8009EF00:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r3 & 1);
}

loc_8009EF0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009EF28;
    }
}

loc_8009EF10:
{
}

loc_8009EF14:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8009EF28;
    }
}

loc_8009EF18:
{
}

loc_8009EF1C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8009EF28;
    }
}

loc_8009EF20:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_8009EF28:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009EAB0 func_8009EAB0 preserves=true fpr_mask=0x00000000
