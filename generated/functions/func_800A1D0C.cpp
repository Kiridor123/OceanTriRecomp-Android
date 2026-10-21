#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8009D624(CpuContext* ctx);
extern "C" uint64_t func_8009D624_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_800A1310(CpuContext* ctx);
extern "C" uint64_t func_800A1310_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800A1728(CpuContext* ctx);
extern "C" uint64_t func_800A1728_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800A1D0C(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x800A1D0Cu);
    goto loc_800A1D0C;

loc_800A1D0C:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r31 = r5;
    r29 = r6;
    r30 = r7;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800A1D58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1D70;
    }
}

loc_800A1D5C:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800A1D68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1D70;
    }
}

loc_800A1D6C:
{
    r10 = 0;
}

loc_800A1D70:
{
}

loc_800A1D74:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A1D8C;
    }
}

loc_800A1D78:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800A1D84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1D8C;
    }
}

loc_800A1D88:
{
    r9 = 0;
}

loc_800A1D8C:
{
}

loc_800A1D90:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A1DA4;
    }
}

loc_800A1D94:
{
    r0 = (r11 + 1073741824);
}

loc_800A1D9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1DA4;
    }
}

loc_800A1DA0:
{
    r8 = 0;
}

loc_800A1DA4:
{
}

loc_800A1DA8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A1DC0;
    }
}

loc_800A1DAC:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800A1DB8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1DC0;
    }
}

loc_800A1DBC:
{
    r7 = 0;
}

loc_800A1DC0:
{
}

loc_800A1DC4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A1DDC;
    }
}

loc_800A1DC8:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800A1DD4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1DDC;
    }
}

loc_800A1DD8:
{
    r6 = 0;
}

loc_800A1DDC:
{
}

loc_800A1DE0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A1DF8;
    }
}

loc_800A1DE4:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A1DF0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1DF8;
    }
}

loc_800A1DF4:
{
    r5 = 0;
}

loc_800A1DF8:
{
}

loc_800A1DFC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A1E20;
    }
}

loc_800A1E00:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1896;
    r5 = 0x80590000u;
    r5 = (r5 + 10060);
    r6 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A1E20u;
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

loc_800A1E20:
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

loc_800A1E44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1E5C;
    }
}

loc_800A1E48:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A1E54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1E5C;
    }
}

loc_800A1E58:
{
    r9 = 0;
}

loc_800A1E5C:
{
}

loc_800A1E60:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A1E78;
    }
}

loc_800A1E64:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A1E70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1E78;
    }
}

loc_800A1E74:
{
    r8 = 0;
}

loc_800A1E78:
{
}

loc_800A1E7C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A1E90;
    }
}

loc_800A1E80:
{
    r0 = (r10 + 1073741824);
}

loc_800A1E88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1E90;
    }
}

loc_800A1E8C:
{
    r7 = 0;
}

loc_800A1E90:
{
}

loc_800A1E94:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A1EAC;
    }
}

loc_800A1E98:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A1EA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1EAC;
    }
}

loc_800A1EA8:
{
    r6 = 0;
}

loc_800A1EAC:
{
}

loc_800A1EB0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A1EC8;
    }
}

loc_800A1EB4:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A1EC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1EC8;
    }
}

loc_800A1EC4:
{
    r5 = 0;
}

loc_800A1EC8:
{
}

loc_800A1ECC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A1EE4;
    }
}

loc_800A1ED0:
{
    r3 = (r28 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A1EDC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1EE4;
    }
}

loc_800A1EE0:
{
    r4 = 0;
}

loc_800A1EE4:
{
}

loc_800A1EE8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A1F0C;
    }
}

loc_800A1EEC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 1897;
    r5 = 0x80590000u;
    r5 = (r5 + 10584);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A1F0Cu;
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

loc_800A1F0C:
{
    r3 = r27;
    r4 = (r1 + 48);
    r5 = (r1 + 44);
    r6 = (r1 + 40);
    r7 = (r1 + 36);
    r8 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x8009F290u>(ctx);
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r1 + 48));
    r5 = r31;
    r6 = (r1 + 12);
    r7 = (r1 + 28);
    r8 = (r1 + 24);
    r9 = (r1 + 9);
    ctx->lr = 0x800A1F48u;
    if constexpr (KnownRegArgsCpuCall<0x8009D624u>(&func_8009D624)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8009D624_22B3 = func_8009D624_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8009D624_22B3);
        r4 = static_cast<uint32_t>(regargs_result_8009D624_22B3 >> 32);
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
        InvokeDirectCpu<0x8009D624u>(ctx);
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
        cr = ctx->cr;
    }
    r3 = r30;
    r4 = MemoryInline::FlatRead32((r1 + 48));
    r5 = (r31 + 1);
    r6 = (r1 + 10);
    r7 = (r1 + 28);
    r8 = (r1 + 20);
    r9 = (r1 + 8);
    ctx->lr = 0x800A1F68u;
    if constexpr (KnownRegArgsCpuCall<0x8009D624u>(&func_8009D624)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8009D624_2A20 = func_8009D624_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8009D624_2A20);
        r4 = static_cast<uint32_t>(regargs_result_8009D624_2A20 >> 32);
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
        InvokeDirectCpu<0x8009D624u>(ctx);
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
        cr = ctx->cr;
    }
    r8 = MemoryInline::FlatRead32((r1 + 44));
    r31 = (r8 + 4);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = MemoryInline::FlatRead32((r1 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_800A1F7C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A20D0;
    }
}

loc_800A1F80:
{
    r4 = MemoryInline::FlatRead16((r1 + 12));
    r0 = MemoryInline::FlatRead16((r1 + 10));
}

loc_800A1F8C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_800A1FAC;
    }
}

loc_800A1F90:
{
    r0 = MemoryInline::FlatRead8((r1 + 9));
}

loc_800A1F98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A2550;
    }
}

loc_800A1F9C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 1;
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
}

loc_800A1FAC:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
}

loc_800A1FB4:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_800A2048;
    }
}

loc_800A1FB8:
{
    r3 = (r1 + 16);
    r5 = r31;
    r6 = 24;
    r7 = 0;
    r8 = MemoryInline::FlatRead16(r8);
    r8 = (r8 + -1);
    r9 = 1;
    ctx->lr = 0x800A1FD8u;
    if constexpr (KnownRegArgsCpuCall<0x800A1310u>(&func_800A1310)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1310_35CE = func_800A1310_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800A1310_35CE);
        r4 = static_cast<uint32_t>(regargs_result_800A1310_35CE >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1310u>(ctx);
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
        xer = ctx->xer;
    }
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r4 * 24);
    r27 = (r31 + r0);
    goto loc_800A2034;
}

loc_800A1FE8:
{
    r3 = MemoryInline::FlatRead16(r27);
    r0 = MemoryInline::FlatRead16((r1 + 12));
}

loc_800A1FF4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_800A2024;
    }
}

loc_800A1FF8:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
}

loc_800A2000:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r3))) {
        goto loc_800A2550;
    }
}

loc_800A2004:
{
    r3 = r27;
    r4 = (r29 & 65535);
    r5 = MemoryInline::FlatRead32((r1 + 48));
    r6 = MemoryInline::FlatRead32((r1 + 32));
    r7 = MemoryInline::FlatRead32((r1 + 36));
    r8 = r28;
    r9 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = 0x800A2024u;
    if constexpr (KnownRegArgsCpuCall<0x800A1728u>(&func_800A1728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1728_3EEA = func_800A1728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A1728_3EEA);
        r4 = static_cast<uint32_t>(regargs_result_800A1728_3EEA >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1728u>(ctx);
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
        xer = ctx->xer;
    }
}

loc_800A2024:
{
    r27 = (r27 + 24);
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r4 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
}

loc_800A2034:
{
    r3 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead16(r3);
}

loc_800A2040:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_800A1FE8;
    }
}

loc_800A2044:
{
    goto loc_800A2550;
}

loc_800A2048:
{
    r3 = (r1 + 16);
    r5 = r31;
    r6 = 24;
    r7 = 0;
    r8 = MemoryInline::FlatRead16(r8);
    r8 = (r8 + -1);
    r9 = 0;
    ctx->lr = 0x800A2068u;
    if constexpr (KnownRegArgsCpuCall<0x800A1310u>(&func_800A1310)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1310_4908 = func_800A1310_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800A1310_4908);
        r4 = static_cast<uint32_t>(regargs_result_800A1310_4908 >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1310u>(ctx);
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
        xer = ctx->xer;
    }
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r4 * 24);
    r27 = (r31 + r0);
    goto loc_800A20C4;
}

loc_800A2078:
{
    r3 = MemoryInline::FlatRead16(r27);
    r0 = MemoryInline::FlatRead16((r1 + 12));
}

loc_800A2084:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_800A20B4;
    }
}

loc_800A2088:
{
    r0 = MemoryInline::FlatRead16((r1 + 10));
}

loc_800A2090:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_800A2550;
    }
}

loc_800A2094:
{
    r3 = r27;
    r4 = (r29 & 65535);
    r5 = MemoryInline::FlatRead32((r1 + 48));
    r6 = MemoryInline::FlatRead32((r1 + 32));
    r7 = MemoryInline::FlatRead32((r1 + 36));
    r8 = r28;
    r9 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = 0x800A20B4u;
    if constexpr (KnownRegArgsCpuCall<0x800A1728u>(&func_800A1728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1728_5224 = func_800A1728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A1728_5224);
        r4 = static_cast<uint32_t>(regargs_result_800A1728_5224 >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1728u>(ctx);
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
        xer = ctx->xer;
    }
}

loc_800A20B4:
{
    r27 = (r27 + -24);
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r4 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
}

loc_800A20C4:
{
}

loc_800A20C8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_800A2078;
    }
}

loc_800A20CC:
{
    goto loc_800A2550;
}

loc_800A20D0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A20F0;
    }
}

loc_800A20D4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 2007;
    r5 = 0x80590000u;
    r5 = (r5 + 10692);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A20F0u;
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

loc_800A20F0:
{
    r3 = MemoryInline::FlatRead32((r1 + 48));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (r0 & 64);
}

loc_800A2100:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A2400;
    }
}

loc_800A2104:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r0 & 1);
}

loc_800A2110:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A21B0;
    }
}

loc_800A2114:
{
    r3 = (r1 + 16);
    r4 = MemoryInline::FlatRead16((r1 + 12));
    r5 = r31;
    r6 = 24;
    r7 = 0;
    r8 = MemoryInline::FlatRead32((r1 + 44));
    r8 = MemoryInline::FlatRead16(r8);
    r8 = (r8 + -1);
    r9 = 1;
    ctx->lr = 0x800A213Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A1310u>(&func_800A1310)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1310_60BD = func_800A1310_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800A1310_60BD);
        r4 = static_cast<uint32_t>(regargs_result_800A1310_60BD >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1310u>(ctx);
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
        xer = ctx->xer;
    }
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r4 * 24);
    r27 = (r31 + r0);
    goto loc_800A219C;
}

loc_800A214C:
{
    r4 = MemoryInline::FlatRead16(r27);
    r0 = MemoryInline::FlatRead16((r1 + 12));
}

loc_800A2158:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_800A218C;
    }
}

loc_800A215C:
{
    r5 = MemoryInline::FlatRead32((r1 + 48));
    r3 = MemoryInline::FlatRead16((r5 + 8));
    r0 = (r3 + -1);
}

loc_800A216C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_800A2238;
    }
}

loc_800A2170:
{
    r3 = r27;
    r4 = (r29 & 65535);
    r6 = MemoryInline::FlatRead32((r1 + 32));
    r7 = MemoryInline::FlatRead32((r1 + 36));
    r8 = r28;
    r9 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = 0x800A218Cu;
    if constexpr (KnownRegArgsCpuCall<0x800A1728u>(&func_800A1728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1728_69EA = func_800A1728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A1728_69EA);
        r4 = static_cast<uint32_t>(regargs_result_800A1728_69EA >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1728u>(ctx);
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
        xer = ctx->xer;
    }
}

loc_800A218C:
{
    r27 = (r27 + 24);
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r4 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
}

loc_800A219C:
{
    r3 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead16(r3);
}

loc_800A21A8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_800A214C;
    }
}

loc_800A21AC:
{
    goto loc_800A2238;
}

loc_800A21B0:
{
    r3 = (r1 + 16);
    r4 = MemoryInline::FlatRead16((r1 + 12));
    r5 = r31;
    r6 = 24;
    r7 = 0;
    r8 = MemoryInline::FlatRead32((r1 + 44));
    r8 = MemoryInline::FlatRead16(r8);
    r8 = (r8 + -1);
    r9 = 0;
    ctx->lr = 0x800A21D8u;
    if constexpr (KnownRegArgsCpuCall<0x800A1310u>(&func_800A1310)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1310_7464 = func_800A1310_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800A1310_7464);
        r4 = static_cast<uint32_t>(regargs_result_800A1310_7464 >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1310u>(ctx);
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
        xer = ctx->xer;
    }
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r4 * 24);
    r27 = (r31 + r0);
    goto loc_800A2230;
}

loc_800A21E8:
{
    r3 = MemoryInline::FlatRead16(r27);
    r0 = MemoryInline::FlatRead16((r1 + 12));
}

loc_800A21F4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_800A2220;
    }
}

loc_800A21F8:
{
}

loc_800A21FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800A2238;
    }
}

loc_800A2200:
{
    r3 = r27;
    r4 = (r29 & 65535);
    r5 = MemoryInline::FlatRead32((r1 + 48));
    r6 = MemoryInline::FlatRead32((r1 + 32));
    r7 = MemoryInline::FlatRead32((r1 + 36));
    r8 = r28;
    r9 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = 0x800A2220u;
    if constexpr (KnownRegArgsCpuCall<0x800A1728u>(&func_800A1728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1728_7D4F = func_800A1728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A1728_7D4F);
        r4 = static_cast<uint32_t>(regargs_result_800A1728_7D4F >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1728u>(ctx);
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
        xer = ctx->xer;
    }
}

loc_800A2220:
{
    r27 = (r27 + -24);
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r4 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
}

loc_800A2230:
{
}

loc_800A2234:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_800A21E8;
    }
}

loc_800A2238:
{
    r3 = MemoryInline::FlatRead32((r1 + 24));
    r30 = (r3 + 1);
    goto loc_800A2320;
}

loc_800A2244:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r0 & 1);
}

loc_800A2250:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A22BC;
    }
}

loc_800A2254:
{
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r27 = r31;
    goto loc_800A22A8;
}

loc_800A2264:
{
    r5 = MemoryInline::FlatRead32((r1 + 48));
    r4 = MemoryInline::FlatRead16(r27);
    r3 = MemoryInline::FlatRead16((r5 + 8));
    r0 = (r3 + -1);
}

loc_800A2278:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r0))) {
        goto loc_800A231C;
    }
}

loc_800A227C:
{
    r3 = r27;
    r4 = (r29 & 65535);
    r6 = MemoryInline::FlatRead32((r1 + 32));
    r7 = MemoryInline::FlatRead32((r1 + 36));
    r8 = r28;
    r9 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = 0x800A2298u;
    if constexpr (KnownRegArgsCpuCall<0x800A1728u>(&func_800A1728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1728_89F7 = func_800A1728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A1728_89F7);
        r4 = static_cast<uint32_t>(regargs_result_800A1728_89F7 >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1728u>(ctx);
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
        xer = ctx->xer;
    }
    r27 = (r27 + 24);
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r4 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
}

loc_800A22A8:
{
    r3 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead16(r3);
}

loc_800A22B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_800A2264;
    }
}

loc_800A22B8:
{
    goto loc_800A231C;
}

loc_800A22BC:
{
    r3 = MemoryInline::FlatRead32((r1 + 44));
    r3 = MemoryInline::FlatRead16(r3);
    r4 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r0 = (r4 * 24);
    r27 = (r31 + r0);
    goto loc_800A2314;
}

loc_800A22D8:
{
    r0 = MemoryInline::FlatRead16(r27);
}

loc_800A22E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800A231C;
    }
}

loc_800A22E4:
{
    r3 = r27;
    r4 = (r29 & 65535);
    r5 = MemoryInline::FlatRead32((r1 + 48));
    r6 = MemoryInline::FlatRead32((r1 + 32));
    r7 = MemoryInline::FlatRead32((r1 + 36));
    r8 = r28;
    r9 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = 0x800A2304u;
    if constexpr (KnownRegArgsCpuCall<0x800A1728u>(&func_800A1728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1728_960A = func_800A1728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A1728_960A);
        r4 = static_cast<uint32_t>(regargs_result_800A1728_960A >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1728u>(ctx);
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
        xer = ctx->xer;
    }
    r27 = (r27 + -24);
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r4 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
}

loc_800A2314:
{
}

loc_800A2318:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_800A22D8;
    }
}

loc_800A231C:
{
    r30 = (r30 + 1);
}

loc_800A2320:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_800A2328:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r0))) {
        goto loc_800A2244;
    }
}

loc_800A232C:
{
    r0 = (r0 & 1);
}

loc_800A2334:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800A2398;
    }
}

loc_800A2338:
{
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    goto loc_800A2384;
}

loc_800A2344:
{
    r3 = MemoryInline::FlatRead16((r1 + 10));
    r0 = MemoryInline::FlatRead16(r31);
}

loc_800A2350:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_800A2550;
    }
}

loc_800A2354:
{
    r3 = r31;
    r4 = (r29 & 65535);
    r5 = MemoryInline::FlatRead32((r1 + 48));
    r6 = MemoryInline::FlatRead32((r1 + 32));
    r7 = MemoryInline::FlatRead32((r1 + 36));
    r8 = r28;
    r9 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = 0x800A2374u;
    if constexpr (KnownRegArgsCpuCall<0x800A1728u>(&func_800A1728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1728_A2C6 = func_800A1728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A1728_A2C6);
        r4 = static_cast<uint32_t>(regargs_result_800A1728_A2C6 >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1728u>(ctx);
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
        xer = ctx->xer;
    }
    r31 = (r31 + 24);
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r4 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
}

loc_800A2384:
{
    r3 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead16(r3);
}

loc_800A2390:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_800A2344;
    }
}

loc_800A2394:
{
    goto loc_800A2550;
}

loc_800A2398:
{
    r3 = MemoryInline::FlatRead32((r1 + 44));
    r3 = MemoryInline::FlatRead16(r3);
    r4 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r0 = (r4 * 24);
    r27 = (r31 + r0);
    goto loc_800A23F4;
}

loc_800A23B4:
{
    r3 = MemoryInline::FlatRead16((r1 + 10));
    r0 = MemoryInline::FlatRead16(r27);
}

loc_800A23C0:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_800A2550;
    }
}

loc_800A23C4:
{
    r3 = r27;
    r4 = (r29 & 65535);
    r5 = MemoryInline::FlatRead32((r1 + 48));
    r6 = MemoryInline::FlatRead32((r1 + 32));
    r7 = MemoryInline::FlatRead32((r1 + 36));
    r8 = r28;
    r9 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = 0x800A23E4u;
    if constexpr (KnownRegArgsCpuCall<0x800A1728u>(&func_800A1728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1728_AF0A = func_800A1728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A1728_AF0A);
        r4 = static_cast<uint32_t>(regargs_result_800A1728_AF0A >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1728u>(ctx);
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
        xer = ctx->xer;
    }
    r27 = (r27 + -24);
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r4 = (r3 + -1);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
}

loc_800A23F4:
{
}

loc_800A23F8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_800A23B4;
    }
}

loc_800A23FC:
{
    goto loc_800A2550;
}

loc_800A2400:
{
    r3 = (r1 + 16);
    r4 = MemoryInline::FlatRead16((r1 + 12));
    r5 = r31;
    r6 = 24;
    r7 = 0;
    r8 = MemoryInline::FlatRead32((r1 + 44));
    r8 = MemoryInline::FlatRead16(r8);
    r8 = (r8 + -1);
    r9 = 1;
    ctx->lr = 0x800A2428u;
    if constexpr (KnownRegArgsCpuCall<0x800A1310u>(&func_800A1310)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1310_B91E = func_800A1310_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800A1310_B91E);
        r4 = static_cast<uint32_t>(regargs_result_800A1310_B91E >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1310u>(ctx);
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
        xer = ctx->xer;
    }
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r4 * 24);
    r27 = (r31 + r0);
    goto loc_800A2478;
}

loc_800A2438:
{
    r3 = MemoryInline::FlatRead16(r27);
    r0 = MemoryInline::FlatRead16((r1 + 12));
}

loc_800A2444:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_800A2468;
    }
}

loc_800A2448:
{
    r3 = r27;
    r4 = (r29 & 65535);
    r5 = MemoryInline::FlatRead32((r1 + 48));
    r6 = MemoryInline::FlatRead32((r1 + 32));
    r7 = MemoryInline::FlatRead32((r1 + 36));
    r8 = r28;
    r9 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = 0x800A2468u;
    if constexpr (KnownRegArgsCpuCall<0x800A1728u>(&func_800A1728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1728_C181 = func_800A1728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A1728_C181);
        r4 = static_cast<uint32_t>(regargs_result_800A1728_C181 >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1728u>(ctx);
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
        xer = ctx->xer;
    }
}

loc_800A2468:
{
    r27 = (r27 + 24);
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r4 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
}

loc_800A2478:
{
    r3 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead16(r3);
}

loc_800A2484:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_800A2438;
    }
}

loc_800A2488:
{
    r3 = MemoryInline::FlatRead32((r1 + 24));
    r30 = (r3 + 1);
    goto loc_800A24E8;
}

loc_800A2494:
{
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    r27 = r31;
    goto loc_800A24D4;
}

loc_800A24A4:
{
    r3 = r27;
    r4 = (r29 & 65535);
    r5 = MemoryInline::FlatRead32((r1 + 48));
    r6 = MemoryInline::FlatRead32((r1 + 32));
    r7 = MemoryInline::FlatRead32((r1 + 36));
    r8 = r28;
    r9 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = 0x800A24C4u;
    if constexpr (KnownRegArgsCpuCall<0x800A1728u>(&func_800A1728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1728_CCC1 = func_800A1728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A1728_CCC1);
        r4 = static_cast<uint32_t>(regargs_result_800A1728_CCC1 >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1728u>(ctx);
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
        xer = ctx->xer;
    }
    r27 = (r27 + 24);
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r4 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
}

loc_800A24D4:
{
    r3 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead16(r3);
}

loc_800A24E0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_800A24A4;
    }
}

loc_800A24E4:
{
    r30 = (r30 + 1);
}

loc_800A24E8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
}

loc_800A24F0:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(r0))) {
        goto loc_800A2494;
    }
}

loc_800A24F4:
{
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    goto loc_800A2540;
}

loc_800A2500:
{
    r3 = MemoryInline::FlatRead16((r1 + 10));
    r0 = MemoryInline::FlatRead16(r31);
}

loc_800A250C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_800A2550;
    }
}

loc_800A2510:
{
    r3 = r31;
    r4 = (r29 & 65535);
    r5 = MemoryInline::FlatRead32((r1 + 48));
    r6 = MemoryInline::FlatRead32((r1 + 32));
    r7 = MemoryInline::FlatRead32((r1 + 36));
    r8 = r28;
    r9 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = 0x800A2530u;
    if constexpr (KnownRegArgsCpuCall<0x800A1728u>(&func_800A1728)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800A1728_D935 = func_800A1728_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800A1728_D935);
        r4 = static_cast<uint32_t>(regargs_result_800A1728_D935 >> 32);
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
        xer = ctx->xer;
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
        InvokeDirectCpu<0x800A1728u>(ctx);
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
        xer = ctx->xer;
    }
    r31 = (r31 + 24);
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r4 = (r3 + 1);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
}

loc_800A2540:
{
    r3 = MemoryInline::FlatRead32((r1 + 44));
    r0 = MemoryInline::FlatRead16(r3);
}

loc_800A254C:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_800A2500;
    }
}

loc_800A2550:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A1D0C func_800A1D0C preserves=true fpr_mask=0x00000000
