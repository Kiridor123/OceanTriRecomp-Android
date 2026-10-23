#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009EF58(CpuContext* ctx);
extern "C" uint64_t func_8009EF58_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800A30A8(CpuContext* ctx);
extern "C" uint64_t func_800A30A8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800A3440(CpuContext* ctx);
extern "C" uint64_t func_800A3440_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800A1728_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_800A1728;

loc_800A1728:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    r31 = r9;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800A177C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1794;
    }
}

loc_800A1780:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800A178C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1794;
    }
}

loc_800A1790:
{
    r10 = 0;
}

loc_800A1794:
{
}

loc_800A1798:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A17B0;
    }
}

loc_800A179C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800A17A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A17B0;
    }
}

loc_800A17AC:
{
    r9 = 0;
}

loc_800A17B0:
{
}

loc_800A17B4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A17C8;
    }
}

loc_800A17B8:
{
    r0 = (r11 + 1073741824);
}

loc_800A17C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A17C8;
    }
}

loc_800A17C4:
{
    r8 = 0;
}

loc_800A17C8:
{
}

loc_800A17CC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A17E4;
    }
}

loc_800A17D0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800A17DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A17E4;
    }
}

loc_800A17E0:
{
    r7 = 0;
}

loc_800A17E4:
{
}

loc_800A17E8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A1800;
    }
}

loc_800A17EC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800A17F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1800;
    }
}

loc_800A17FC:
{
    r6 = 0;
}

loc_800A1800:
{
}

loc_800A1804:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A181C;
    }
}

loc_800A1808:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A1814:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A181C;
    }
}

loc_800A1818:
{
    r5 = 0;
}

loc_800A181C:
{
}

loc_800A1820:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A1844;
    }
}

loc_800A1824:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1822;
    r5 = 0x80590000u;
    r5 = (r5 + 10636);
    r6 = r25;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A1844u;
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

loc_800A1844:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r27 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800A1868:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1880;
    }
}

loc_800A186C:
{
    r3 = (r27 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A1878:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1880;
    }
}

loc_800A187C:
{
    r9 = 0;
}

loc_800A1880:
{
}

loc_800A1884:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A189C;
    }
}

loc_800A1888:
{
    r3 = (r27 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A1894:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A189C;
    }
}

loc_800A1898:
{
    r8 = 0;
}

loc_800A189C:
{
}

loc_800A18A0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A18B4;
    }
}

loc_800A18A4:
{
    r0 = (r10 + 1073741824);
}

loc_800A18AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A18B4;
    }
}

loc_800A18B0:
{
    r7 = 0;
}

loc_800A18B4:
{
}

loc_800A18B8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A18D0;
    }
}

loc_800A18BC:
{
    r3 = (r27 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A18C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A18D0;
    }
}

loc_800A18CC:
{
    r6 = 0;
}

loc_800A18D0:
{
}

loc_800A18D4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A18EC;
    }
}

loc_800A18D8:
{
    r3 = (r27 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A18E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A18EC;
    }
}

loc_800A18E8:
{
    r5 = 0;
}

loc_800A18EC:
{
}

loc_800A18F0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A1908;
    }
}

loc_800A18F4:
{
    r3 = (r27 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A1900:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1908;
    }
}

loc_800A1904:
{
    r4 = 0;
}

loc_800A1908:
{
}

loc_800A190C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A1930;
    }
}

loc_800A1910:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1823;
    r5 = 0x80590000u;
    r5 = (r5 + 9788);
    r6 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A1930u;
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

loc_800A1930:
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

loc_800A1954:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A196C;
    }
}

loc_800A1958:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A1964:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A196C;
    }
}

loc_800A1968:
{
    r9 = 0;
}

loc_800A196C:
{
}

loc_800A1970:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A1988;
    }
}

loc_800A1974:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A1980:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1988;
    }
}

loc_800A1984:
{
    r8 = 0;
}

loc_800A1988:
{
}

loc_800A198C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A19A0;
    }
}

loc_800A1990:
{
    r0 = (r10 + 1073741824);
}

loc_800A1998:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A19A0;
    }
}

loc_800A199C:
{
    r7 = 0;
}

loc_800A19A0:
{
}

loc_800A19A4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A19BC;
    }
}

loc_800A19A8:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A19B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A19BC;
    }
}

loc_800A19B8:
{
    r6 = 0;
}

loc_800A19BC:
{
}

loc_800A19C0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A19D8;
    }
}

loc_800A19C4:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A19D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A19D8;
    }
}

loc_800A19D4:
{
    r5 = 0;
}

loc_800A19D8:
{
}

loc_800A19DC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A19F4;
    }
}

loc_800A19E0:
{
    r3 = (r28 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A19EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A19F4;
    }
}

loc_800A19F0:
{
    r4 = 0;
}

loc_800A19F4:
{
}

loc_800A19F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A1A1C;
    }
}

loc_800A19FC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1824;
    r5 = 0x80590000u;
    r5 = (r5 + 10528);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A1A1Cu;
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

loc_800A1A1C:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r29 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_800A1A40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1A58;
    }
}

loc_800A1A44:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A1A50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1A58;
    }
}

loc_800A1A54:
{
    r9 = 0;
}

loc_800A1A58:
{
}

loc_800A1A5C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A1A74;
    }
}

loc_800A1A60:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A1A6C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1A74;
    }
}

loc_800A1A70:
{
    r8 = 0;
}

loc_800A1A74:
{
}

loc_800A1A78:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A1A8C;
    }
}

loc_800A1A7C:
{
    r0 = (r10 + 1073741824);
}

loc_800A1A84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1A8C;
    }
}

loc_800A1A88:
{
    r7 = 0;
}

loc_800A1A8C:
{
}

loc_800A1A90:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A1AA8;
    }
}

loc_800A1A94:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A1AA0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1AA8;
    }
}

loc_800A1AA4:
{
    r6 = 0;
}

loc_800A1AA8:
{
}

loc_800A1AAC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A1AC4;
    }
}

loc_800A1AB0:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A1ABC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1AC4;
    }
}

loc_800A1AC0:
{
    r5 = 0;
}

loc_800A1AC4:
{
}

loc_800A1AC8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A1AE0;
    }
}

loc_800A1ACC:
{
    r3 = (r29 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A1AD8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1AE0;
    }
}

loc_800A1ADC:
{
    r4 = 0;
}

loc_800A1AE0:
{
}

loc_800A1AE4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A1B08;
    }
}

loc_800A1AE8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1825;
    r5 = 0x80590000u;
    r5 = (r5 + 10464);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A1B08u;
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

loc_800A1B08:
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

loc_800A1B2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1B44;
    }
}

loc_800A1B30:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A1B3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1B44;
    }
}

loc_800A1B40:
{
    r9 = 0;
}

loc_800A1B44:
{
}

loc_800A1B48:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A1B60;
    }
}

loc_800A1B4C:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A1B58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1B60;
    }
}

loc_800A1B5C:
{
    r8 = 0;
}

loc_800A1B60:
{
}

loc_800A1B64:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A1B78;
    }
}

loc_800A1B68:
{
    r0 = (r10 + 1073741824);
}

loc_800A1B70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1B78;
    }
}

loc_800A1B74:
{
    r7 = 0;
}

loc_800A1B78:
{
}

loc_800A1B7C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A1B94;
    }
}

loc_800A1B80:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A1B8C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1B94;
    }
}

loc_800A1B90:
{
    r6 = 0;
}

loc_800A1B94:
{
}

loc_800A1B98:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A1BB0;
    }
}

loc_800A1B9C:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A1BA8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1BB0;
    }
}

loc_800A1BAC:
{
    r5 = 0;
}

loc_800A1BB0:
{
}

loc_800A1BB4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A1BCC;
    }
}

loc_800A1BB8:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A1BC4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1BCC;
    }
}

loc_800A1BC8:
{
    r4 = 0;
}

loc_800A1BCC:
{
}

loc_800A1BD0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A1BF4;
    }
}

loc_800A1BD4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1826;
    r5 = 0x80590000u;
    r5 = (r5 + 10584);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A1BF4u;
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

loc_800A1BF4:
{
    r0 = MemoryInline::FlatRead8((r25 + 2));
}

loc_800A1BFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A1C08;
    }
}

loc_800A1C00:
{
    r31 = (r25 + 12);
    goto loc_800A1C74;
}

loc_800A1C08:
{
    r3 = (r26 & 65535);
    r4 = MemoryInline::FlatRead16((r27 + 6));
    r5 = MemoryInline::FlatRead16((r25 + 12));
    r6 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8009EF58u>(&func_8009EF58)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8009EF58_4C33 = func_8009EF58_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009EF58_4C33);
        r4 = static_cast<uint32_t>(regargs_result_8009EF58_4C33 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8009EF58u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead8((r25 + 2));
    r0 = (r0 & 2);
}

loc_800A1C28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A1C4C;
    }
}

loc_800A1C2C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1860;
    r5 = 0x80590000u;
    r5 = (r5 + 10176);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A1C48u;
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
    goto loc_800A1C74;
}

loc_800A1C4C:
{
    r4 = MemoryInline::FlatRead16(r29);
}

loc_800A1C54:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800A1CF4;
    }
}

loc_800A1C58:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & 65535);
    r0 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r3 - r0);
    r0 = (r0 * 12);
    r3 = (r29 + r0);
    r31 = (r3 + 4);
}

loc_800A1C74:
{
    r0 = MemoryInline::FlatRead16((r31 + 10));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r28 + r0);
    r6 = MemoryInline::FlatRead32((r3 + 4));
}

loc_800A1C88:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800A1CF4;
    }
}

loc_800A1C8C:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
}

loc_800A1C94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A1CC8;
    }
}

loc_800A1C98:
{
    r3 = MemoryInline::FlatRead32((r30 + 200));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 188));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r3 + 16);
    r4 = r31;
    r5 = r30;
    r7 = MemoryInline::FlatRead16((r30 + 226));
    r8 = 0;
    r9 = 0;
    ctx->lr = 0x800A1CC4u;
    if constexpr (KnownRegArgsCpuCall<0x800A30A8u>(&func_800A30A8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A30A8_5985 = func_800A30A8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A30A8_5985);
        r4 = static_cast<uint32_t>(regargs_result_800A30A8_5985 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800A30A8u>(ctx);
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
    goto loc_800A1CF4;
}

loc_800A1CC8:
{
    r3 = MemoryInline::FlatRead32((r30 + 200));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 188));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r3 + 16);
    r4 = r31;
    r5 = r30;
    r7 = MemoryInline::FlatRead16((r30 + 226));
    r8 = 0;
    r9 = 0;
    ctx->lr = 0x800A1CF4u;
    if constexpr (KnownRegArgsCpuCall<0x800A3440u>(&func_800A3440)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A3440_63C3 = func_800A3440_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A3440_63C3);
        r4 = static_cast<uint32_t>(regargs_result_800A3440_63C3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x800A3440u>(ctx);
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
}

loc_800A1CF4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800A1728(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800A1728_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A1728 func_800A1728 preserves=true fpr_mask=0x00000000
