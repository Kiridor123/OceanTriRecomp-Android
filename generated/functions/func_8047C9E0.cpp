#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045FC94(CpuContext* ctx);
extern "C" uint32_t func_8045FC94_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80477E60(CpuContext* ctx);
extern "C" uint64_t func_80477E60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804780F0(CpuContext* ctx);
extern "C" uint64_t func_804780F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8047B6F0(CpuContext* ctx);
extern "C" uint64_t func_8047B6F0_ra88_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80483088(CpuContext* ctx);
extern "C" uint64_t func_80483088_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8049FACC(CpuContext* ctx);
extern "C" uint64_t func_8049FACC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8049FEA0(CpuContext* ctx);
extern "C" uint64_t func_8049FEA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8047C9E0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r25_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
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
    uint32_t xer = ctx->xer;

    goto loc_8047C9E0;

loc_8047C9E0:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r4 = MemoryInline::FlatRead16((r2 + -2568));
    r26 = 0x80740000u;
    r0 = MemoryInline::FlatRead16((r2 + -2566));
    r25 = 0x80570000u;
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r4));
    r30 = r3;
    r25 = (r25 + 15792);
    r26 = (r26 + -18600);
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    r31 = 1;
    r23 = 1;
    r24 = 2;
    r27 = 0x80480000u;
    r28 = 0;
    r29 = 23;
    goto loc_8047CAEC;
}

loc_8047CA34:
{
    r3 = MemoryInline::FlatRead32((r26 + 12));
    r0 = PPC_Slw(static_cast<uint32_t>(r23), static_cast<uint32_t>(r0));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047CAE0;
    }
}

loc_8047CA44:
{
    r3 = 250;
    ctx->lr = 0x8047CA4Cu;
    if constexpr (KnownRegArgsCpuCall<0x80477E60u>(&func_80477E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80477E60_10E3 = func_80477E60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477E60_10E3);
        r4 = static_cast<uint32_t>(regargs_result_80477E60_10E3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80477E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8047CA50:
{
    MemoryInline::FlatWriteRam32((r26 + 20), r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047CAE0;
    }
}

loc_8047CA58:
{
    r3 = MemoryInline::FlatRead8((r26 + 112));
    r4 = MemoryInline::FlatRead32((r26 + 12));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = PPC_Slw(static_cast<uint32_t>(r23), static_cast<uint32_t>(r3));
    r25_addr_2 = (r25 + r0);
    r0 = MemoryInline::FlatRead16(r25_addr_2);
    r3 = (r4 & ~r3);
    MemoryInline::FlatWriteRam32((r26 + 12), r3);
}

loc_8047CA78:
{
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r24));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4608))) {
        goto loc_8047CA88;
    }
}

loc_8047CA84:
{
    r31 = 2;
}

loc_8047CA88:
{
    r3 = MemoryInline::FlatRead32((r26 + 20));
    r7 = r31;
    r6 = (r1 + 12);
    r8 = (r1 + 8);
    r4 = 250;
    r5 = 1;
    ctx->lr = 0x8047CAA4u;
    if constexpr (KnownRegArgsCpuCall<0x8049FACCu>(&func_8049FACC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8049FACC_19DA = func_8049FACC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049FACC_19DA);
        r4 = static_cast<uint32_t>(regargs_result_8049FACC_19DA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x8049FACCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
    r4 = MemoryInline::FlatRead32((r26 + 20));
    r3 = r30;
    r5 = (r27 + -13216);
    ctx->lr = 0x8047CAB4u;
    if constexpr (KnownRegArgsCpuCall<0x8049FEA0u>(&func_8049FEA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_8049FEA0_22C3 = func_8049FEA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049FEA0_22C3);
        r4 = static_cast<uint32_t>(regargs_result_8049FEA0_22C3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x8049FEA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
    r0 = (r3 & 255);
}

loc_8047CAB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8047CAD0;
    }
}

loc_8047CABC:
{
    r3 = MemoryInline::FlatRead32((r26 + 20));
    ctx->lr = 0x8047CAC4u;
    if constexpr (KnownRegArgsCpuCall<0x804780F0u>(&func_804780F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804780F0_2BA3 = func_804780F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804780F0_2BA3);
        r4 = static_cast<uint32_t>(regargs_result_804780F0_2BA3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x804780F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r26 + 20), r28);
    MemoryInline::FlatWriteRam8((r26 + 112), static_cast<uint8_t>(r29));
    goto loc_8047CAE0;
}

loc_8047CAD0:
{
    r3 = MemoryInline::FlatRead8((r26 + 112));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r26 + 112), static_cast<uint8_t>(r0));
    goto loc_8047CB68;
}

loc_8047CAE0:
{
    r3 = MemoryInline::FlatRead8((r26 + 112));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r26 + 112), static_cast<uint8_t>(r0));
}

loc_8047CAEC:
{
    r0 = MemoryInline::FlatRead8((r26 + 112));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
}

loc_8047CAF4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8047CA34;
    }
}

loc_8047CAF8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8047CB68;
    }
}

loc_8047CAFC:
{
    r3 = 272;
    ctx->lr = 0x8047CB04u;
    if constexpr (KnownRegArgsCpuCall<0x80477E60u>(&func_80477E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80477E60_32D2 = func_80477E60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477E60_32D2);
        r4 = static_cast<uint32_t>(regargs_result_80477E60_32D2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x80477E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8047CB08:
{
    r24 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047CB68;
    }
}

loc_8047CB10:
{
    r0 = 520;
    r4 = (r26 + 26);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 268u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 0u, r3, static_cast<uint16_t>(r0));
    guest_range_3 = MemoryInline::ResolveRangeHost((r26 + 16), 0, 17u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r26 + 16));
    MemoryInline::WriteResolved32(guest_range_2, 264u, (r3 + 264), r0);
    r3 = (r3 + 8);
    // inline leaf 0x8047B244 (13 guest instruction(s))
    r9 = MemoryInline::ReadResolved8(guest_range_3, 10u, r4);
    r8 = MemoryInline::ReadResolved8(guest_range_3, 11u, (r4 + 1));
    r7 = MemoryInline::ReadResolved8(guest_range_3, 12u, (r4 + 2));
    r6 = MemoryInline::ReadResolved8(guest_range_3, 13u, (r4 + 3));
    r5 = MemoryInline::ReadResolved8(guest_range_3, 14u, (r4 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 15u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 8u, r3, static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_2, 9u, (r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_2, 10u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 11u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 12u, (r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8047B244
    r0 = MemoryInline::ReadResolved8(guest_range_3, 16u, (r26 + 32));
    r23 = (r26 + 32);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8047CB50;
    }
}

loc_8047CB3C:
{
    r3 = (r26 + 26);
    ctx->lr = 0x8047CB44u;
    if constexpr (KnownRegArgsCpuCall<0x80483088u>(&func_80483088)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80483088_3ECD = func_80483088_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80483088_3ECD);
        r4 = static_cast<uint32_t>(regargs_result_80483088_3ECD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80483088u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8047CB48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047CB50;
    }
}

loc_8047CB4C:
{
    r23 = r3;
}

loc_8047CB50:
{
    r4 = r23;
    r3 = (r24 + 14);
    r5 = 32;
    if constexpr (KnownRegArgsCpuCall<0x8045FC94u>(&func_8045FC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FC94_440C = func_8045FC94_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FC94_440C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045FC94u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r24;
    ctx->lr = 0x8047CB68u;
    if constexpr (KnownRegArgsCpuCall<0x8047B6F0u>(&func_8047B6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8047B6F0_47A3 = func_8047B6F0_ra88_0_18_0(ctx, r3, r7);
        r3 = static_cast<uint32_t>(regargs_result_8047B6F0_47A3);
        r4 = static_cast<uint32_t>(regargs_result_8047B6F0_47A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8047B6F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8047CB68:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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

extern "C" void func_8047C9E0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047C9E0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8047C9E0 func_8047C9E0 preserves=true fpr_mask=0x00000000
