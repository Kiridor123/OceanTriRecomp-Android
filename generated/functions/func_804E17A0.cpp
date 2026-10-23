#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCD80(CpuContext* ctx);
extern "C" uint64_t func_804CCD80_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804E1A70(CpuContext* ctx);
extern "C" uint64_t func_804E1A70_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E1BB0(CpuContext* ctx);
extern "C" uint32_t func_804E1BB0_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804E1CD0(CpuContext* ctx);
extern "C" uint64_t func_804E1CD0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804E2070(CpuContext* ctx);
extern "C" uint64_t func_804E2070_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804E2690(CpuContext* ctx);
extern "C" uint64_t func_804E2690_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_804E17A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mdest_5 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;
    uint32_t r0_mrot_5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
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

    goto loc_804E17A0;

loc_804E17A0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
}

loc_804E17B8:
{
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804E1A14;
    }
}

loc_804E17D0:
{
}

loc_804E17D4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804E1A1C;
    }
}

loc_804E17D8:
{
}

loc_804E17DC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804E1A1C;
    }
}

loc_804E17E0:
{
}

loc_804E17E4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804E1A1C;
    }
}

loc_804E17E8:
{
}

loc_804E17EC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804E1A24;
    }
}

loc_804E17F0:
{
    // inline leaf 0x804778B0 (2 guest instruction(s))
    r3 = ctx->hid2;
    // end of inlined leaf 0x804778B0
    r0 = (r3 & 268435456);
}

loc_804E17F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E1A44;
    }
}

loc_804E17FC:
{
    r0 = MemoryInline::FlatRead32((r13 + -14720));
}

loc_804E1804:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804E1A4C;
    }
}

loc_804E1808:
{
    r0 = (r30 + 31);
    r4 = 1724;
    r3 = (r0 & -32);
    MemoryInline::FlatWrite32((r13 + -14716), r3);
    r0 = (r3 + 1724);
    MemoryInline::FlatWrite32((r13 + -14712), r0);
    if constexpr (KnownRegArgsCpuCall<0x804CCD80u>(&func_804CCD80)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804CCD80_124F = func_804CCD80_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCD80_124F);
        r4 = static_cast<uint32_t>(regargs_result_804CCD80_124F >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804CCD80u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    r4 = 33;
    r0 = 0;
    r30 = 0;
    MemoryInline::FlatWrite32((r3 + 1700), r4);
    r31 = 1;
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    MemoryInline::FlatWrite16((r3 + 1688), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    MemoryInline::FlatWrite32((r3 + 1692), r26);
}

loc_804E184C:
{
    r4 = MemoryInline::FlatRead32((r13 + -14716));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_804E1864:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_804E1A34;
    }
}

loc_804E1868:
{
    goto loc_804E187C;
}

loc_804E1870:
{
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
}

loc_804E187C:
{
    r4 = MemoryInline::FlatRead32((r13 + -14716));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_804E188C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_804E1870;
    }
}

loc_804E1890:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(219));
}

loc_804E18A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E1974;
    }
}

loc_804E18A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804E18D8;
    }
}

loc_804E18A8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(196));
}

loc_804E18AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E1904;
    }
}

loc_804E18B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804E18C0;
    }
}

loc_804E18B4:
{
}

loc_804E18B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(192))) {
        goto loc_804E1914;
    }
}

loc_804E18BC:
{
    goto loc_804E1A2C;
}

loc_804E18C0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(217));
}

loc_804E18C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E1A2C;
    }
}

loc_804E18C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804E1984;
    }
}

loc_804E18CC:
{
}

loc_804E18D0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(216))) {
        goto loc_804E19B4;
    }
}

loc_804E18D4:
{
    goto loc_804E1A2C;
}

loc_804E18D8:
{
}

loc_804E18DC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(240))) {
        goto loc_804E18F8;
    }
}

loc_804E18E0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(221));
}

loc_804E18E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804E1924;
    }
}

loc_804E18E8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804E1A2C;
    }
}

loc_804E18EC:
{
}

loc_804E18F0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(224))) {
        goto loc_804E1998;
    }
}

loc_804E18F4:
{
    goto loc_804E1A2C;
}

loc_804E18F8:
{
}

loc_804E18FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(254))) {
        goto loc_804E1998;
    }
}

loc_804E1900:
{
    goto loc_804E1A2C;
}

loc_804E1904:
{
    ctx->lr = 0x804E1908u;
    if constexpr (KnownRegArgsCpuCall<0x804E2070u>(&func_804E2070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804E2070_2399 = func_804E2070_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E2070_2399);
        r4 = static_cast<uint32_t>(regargs_result_804E2070_2399 >> 32);
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
        InvokeDirectCpu<0x804E2070u>(ctx);
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
    r0 = (r3 & 255);
}

loc_804E190C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E1A3C;
    }
}

loc_804E1910:
{
    goto loc_804E19B4;
}

loc_804E1914:
{
    if constexpr (KnownRegArgsCpuCall<0x804E1A70u>(&func_804E1A70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_804E1A70_2A14 = func_804E1A70_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_804E1A70_2A14);
        r4 = static_cast<uint32_t>(regargs_result_804E1A70_2A14 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x804E1A70u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_804E191C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E1A3C;
    }
}

loc_804E1920:
{
    goto loc_804E19B4;
}

loc_804E1924:
{
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    MemoryInline::FlatWrite8((r3 + 1705), static_cast<uint8_t>(r31));
    r4 = MemoryInline::FlatRead32((r13 + -14716));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r5 = MemoryInline::FlatRead32((r13 + -14716));
    r4 = MemoryInline::FlatRead32((r5 + 1692));
    r3 = MemoryInline::FlatRead8(r4);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_2 = (r0_rot_2 & 65280);
    r0_mdest_2 = (r0 & -65281);
    r0 = (r0_mdest_2 | r0_mrot_2);
    MemoryInline::FlatWrite16((r5 + 1706), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -14716));
    r3 = MemoryInline::FlatRead32((r4 + 1692));
    r0 = (r3 + 2);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
    r3 = MemoryInline::FlatRead32((r13 + -14716));
    r0 = MemoryInline::FlatRead16((r3 + 1706));
    MemoryInline::FlatWrite16((r3 + 1708), static_cast<uint16_t>(r0));
    goto loc_804E19B4;
}

loc_804E1974:
{
    ctx->lr = 0x804E1978u;
    if constexpr (KnownRegArgsCpuCall<0x804E1CD0u>(&func_804E1CD0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804E1CD0_3399 = func_804E1CD0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E1CD0_3399);
        r4 = static_cast<uint32_t>(regargs_result_804E1CD0_3399 >> 32);
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
        ctx->cr = cr;
        InvokeDirectCpu<0x804E1CD0u>(ctx);
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
    r0 = (r3 & 255);
}

loc_804E197C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E1A3C;
    }
}

loc_804E1980:
{
    goto loc_804E19B4;
}

loc_804E1984:
{
    if constexpr (KnownRegArgsCpuCall<0x804E1BB0u>(&func_804E1BB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_804E1BB0_3C30 = func_804E1BB0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804E1BB0_3C30;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x804E1BB0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_804E198C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804E1A3C;
    }
}

loc_804E1990:
{
    r30 = 1;
    goto loc_804E19B4;
}

loc_804E1998:
{
    r4 = MemoryInline::FlatRead32((r13 + -14716));
    r5 = MemoryInline::FlatRead32((r4 + 1692));
    r3 = MemoryInline::FlatRead8(r5);
    r0 = MemoryInline::FlatRead8((r5 + 1));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0_mrot_3 = (r0_rot_3 & 65280);
    r0_mdest_3 = (r0 & -65281);
    r0 = (r0_mdest_3 | r0_mrot_3);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r4 + 1692), r0);
}

loc_804E19B4:
{
}

loc_804E19B8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804E184C;
    }
}

loc_804E19BC:
{
    r4 = MemoryInline::FlatRead32((r13 + -14712));
    r5 = 0x80760000u;
    r9 = (r5 + -11136);
    r3 = r27;
    r0 = (r4 + 31);
    r4 = r28;
    r11 = (r0 & -32);
    MemoryInline::FlatWriteRam32((r5 + -11136), r11);
    r10 = (r11 + 128);
    r5 = r29;
    r8 = (r11 + 256);
    r7 = (r11 + 384);
    r6 = (r11 + 512);
    r0 = (r11 + 640);
    MemoryInline::FlatWriteRam32((r9 + 4), r10);
    MemoryInline::FlatWriteRam32((r9 + 8), r8);
    MemoryInline::FlatWriteRam32((r9 + 12), r7);
    MemoryInline::FlatWriteRam32((r9 + 16), r6);
    MemoryInline::FlatWriteRam32((r9 + 20), r0);
    ctx->lr = 0x804E1A0Cu;
    if constexpr (KnownRegArgsCpuCall<0x804E2690u>(&func_804E2690)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_804E2690_46A7 = func_804E2690_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E2690_46A7);
        r4 = static_cast<uint32_t>(regargs_result_804E2690_46A7 >> 32);
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
        InvokeDirectCpu<0x804E2690u>(ctx);
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
    r3 = 0;
    goto loc_804E1A50;
}

loc_804E1A14:
{
    r3 = 25;
    goto loc_804E1A50;
}

loc_804E1A1C:
{
    r3 = 27;
    goto loc_804E1A50;
}

loc_804E1A24:
{
    r3 = 26;
    goto loc_804E1A50;
}

loc_804E1A2C:
{
    r3 = 11;
    goto loc_804E1A50;
}

loc_804E1A34:
{
    r3 = 3;
    goto loc_804E1A50;
}

loc_804E1A3C:
{
    r3 = (r3 & 255);
    goto loc_804E1A50;
}

loc_804E1A44:
{
    r3 = 28;
    goto loc_804E1A50;
}

loc_804E1A4C:
{
    r3 = 29;
}

loc_804E1A50:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFE003FFF fpr_write=0xFE003FFF fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804E17A0 func_804E17A0 preserves=true fpr_mask=0x00000000
