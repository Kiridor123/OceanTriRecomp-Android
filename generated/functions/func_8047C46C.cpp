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
extern "C" void func_8047C9E0(CpuContext* ctx);
extern "C" uint64_t func_8047C9E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80483088(CpuContext* ctx);
extern "C" uint64_t func_80483088_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80488664(CpuContext* ctx);
extern "C" uint64_t func_80488664_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8049FF04(CpuContext* ctx);
extern "C" uint32_t func_8049FF04_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8049FF2C(CpuContext* ctx);
extern "C" uint32_t func_8049FF2C_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8047C46C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
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

    goto loc_8047C46C;

loc_8047C46C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = 0;
    r5 = MemoryInline::FlatRead16((r3 + 8));
    r3 = 0;
}

loc_8047C494:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8047C4A8;
    }
}

loc_8047C498:
{
}

loc_8047C49C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(65520))) {
        goto loc_8047C4A8;
    }
}

loc_8047C4A0:
{
}

loc_8047C4A4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(65524))) {
        goto loc_8047C5F8;
    }
}

loc_8047C4A8:
{
    r6 = 0x80740000u;
    r4 = 0x80570000u;
    r6 = (r6 + -18600);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(65524));
}

loc_8047C4B8:
{
    r5 = MemoryInline::FlatRead8((r6 + 112));
    r4 = (r4 + 15792);
    r0 = (r5 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r30 = MemoryInline::FlatRead16(r4_addr_1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8047C4E8;
    }
}

loc_8047C4D0:
{
    r3 = MemoryInline::FlatRead32((r6 + 20));
    r4 = r30;
    r5 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8049FF2Cu>(&func_8049FF2C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8049FF2C_109C = func_8049FF2C_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_8049FF2C_109C;
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
        InvokeDirectCpu<0x8049FF2Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8047C4E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047C548;
    }
}

loc_8047C4E8:
{
}

loc_8047C4EC:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(4608))) {
        goto loc_8047C518;
    }
}

loc_8047C4F0:
{
}

loc_8047C4F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047C51C;
    }
}

loc_8047C4F8:
{
    r4 = 65536;
    r0 = (r4 + -32767);
    r4 = (r0 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8049FF04u>(&func_8049FF04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8049FF04_15D2 = func_8049FF04_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049FF04_15D2;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8049FF04u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_8047C50C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047C51C;
    }
}

loc_8047C510:
{
    r29 = 1;
    goto loc_8047C51C;
}

loc_8047C518:
{
    r29 = 1;
}

loc_8047C51C:
{
}

loc_8047C520:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8047C548;
    }
}

loc_8047C524:
{
    r6 = 0x80740000u;
    r4 = 1;
    r6 = (r6 + -18600);
    r3 = MemoryInline::FlatRead8((r6 + 112));
    r5 = MemoryInline::FlatRead32((r6 + 16));
    r0 = (r3 + -1);
    r0 = PPC_Slw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
    r0 = (r5 | r0);
    MemoryInline::FlatWriteRam32((r6 + 16), r0);
}

loc_8047C548:
{
    r30 = 0x80740000u;
    r30 = (r30 + -18600);
    r3 = MemoryInline::FlatRead32((r30 + 20));
    ctx->lr = 0x8047C558u;
    if constexpr (KnownRegArgsCpuCall<0x804780F0u>(&func_804780F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804780F0_1B8E = func_804780F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804780F0_1B8E);
        r4 = static_cast<uint32_t>(regargs_result_804780F0_1B8E >> 32);
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
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r31 = 0;
    MemoryInline::FlatWriteRam32((r30 + 20), r31);
}

loc_8047C568:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8047C578;
    }
}

loc_8047C56C:
{
    r3 = (r30 + 26);
    ctx->lr = 0x8047C574u;
    if constexpr (KnownRegArgsCpuCall<0x8047C9E0u>(&func_8047C9E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->cr = cr;
        const auto regargs_result_8047C9E0_2095 = func_8047C9E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047C9E0_2095);
        r4 = static_cast<uint32_t>(regargs_result_8047C9E0_2095 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8047C9E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
    goto loc_8047C6B8;
}

loc_8047C578:
{
    r3 = 0x80480000u;
    r3 = (r3 + -12924);
    if constexpr (KnownRegArgsCpuCall<0x80488664u>(&func_80488664)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80488664_2888 = func_80488664_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80488664_2888);
        r4 = static_cast<uint32_t>(regargs_result_80488664_2888 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80488664u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = 272;
    ctx->lr = 0x8047C58Cu;
    if constexpr (KnownRegArgsCpuCall<0x80477E60u>(&func_80477E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80477E60_2C17 = func_80477E60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477E60_2C17);
        r4 = static_cast<uint32_t>(regargs_result_80477E60_2C17 >> 32);
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

loc_8047C590:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047C6B8;
    }
}

loc_8047C598:
{
    r0 = 520;
    r4 = (r30 + 26);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 269u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r3, static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 268u, (r3 + 268), static_cast<uint8_t>(r31));
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 16), 0, 17u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 16));
    MemoryInline::WriteResolved32(guest_range_0, 264u, (r3 + 264), r0);
    r3 = (r3 + 8);
    // inline leaf 0x8047B244 (13 guest instruction(s))
    r9 = MemoryInline::ReadResolved8(guest_range_1, 10u, r4);
    r8 = MemoryInline::ReadResolved8(guest_range_1, 11u, (r4 + 1));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r4 + 2));
    r6 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r4 + 3));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r4 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r4 + 5));
    MemoryInline::WriteResolved8(guest_range_0, 8u, r3, static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 1), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r3 + 2), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r3 + 3), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r3 + 4), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r3 + 5), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8047B244
    r0 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r30 + 32));
    r31 = (r30 + 32);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8047C5DC;
    }
}

loc_8047C5C8:
{
    r3 = (r30 + 26);
    ctx->lr = 0x8047C5D0u;
    if constexpr (KnownRegArgsCpuCall<0x80483088u>(&func_80483088)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80483088_3871 = func_80483088_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80483088_3871);
        r4 = static_cast<uint32_t>(regargs_result_80483088_3871 >> 32);
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

loc_8047C5D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047C5DC;
    }
}

loc_8047C5D8:
{
    r31 = r3;
}

loc_8047C5DC:
{
    r4 = r31;
    r3 = (r29 + 14);
    r5 = 32;
    if constexpr (KnownRegArgsCpuCall<0x8045FC94u>(&func_8045FC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FC94_3DB0 = func_8045FC94_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FC94_3DB0;
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
    r3 = r29;
    ctx->lr = 0x8047C5F4u;
    if constexpr (KnownRegArgsCpuCall<0x8047B6F0u>(&func_8047B6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8047B6F0_4147 = func_8047B6F0_ra88_0_18_0(ctx, r3, r7);
        r3 = static_cast<uint32_t>(regargs_result_8047B6F0_4147);
        r4 = static_cast<uint32_t>(regargs_result_8047B6F0_4147 >> 32);
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
    goto loc_8047C6B8;
}

loc_8047C5F8:
{
}

loc_8047C5FC:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(65521))) {
        goto loc_8047C610;
    }
}

loc_8047C600:
{
    r0 = (r5 + 10);
    r0 = (r0 & 65535);
}

loc_8047C60C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8047C620;
    }
}

loc_8047C610:
{
    r3 = 0x80740000u;
    r0 = 0;
    r3 = (r3 + -18600);
    MemoryInline::FlatWriteRam8((r3 + 120), static_cast<uint8_t>(r0));
}

loc_8047C620:
{
    r31 = 0x80740000u;
    r31 = (r31 + -18600);
    r3 = MemoryInline::FlatRead32((r31 + 20));
    ctx->lr = 0x8047C630u;
    if constexpr (KnownRegArgsCpuCall<0x804780F0u>(&func_804780F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_804780F0_47ED = func_804780F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804780F0_47ED);
        r4 = static_cast<uint32_t>(regargs_result_804780F0_47ED >> 32);
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
    r0 = 0;
    r3 = 0x80480000u;
    MemoryInline::FlatWriteRam32((r31 + 20), r0);
    r3 = (r3 + -12924);
    if constexpr (KnownRegArgsCpuCall<0x80488664u>(&func_80488664)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80488664_4BC1 = func_80488664_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80488664_4BC1);
        r4 = static_cast<uint32_t>(regargs_result_80488664_4BC1 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80488664u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = 272;
    ctx->lr = 0x8047C64Cu;
    if constexpr (KnownRegArgsCpuCall<0x80477E60u>(&func_80477E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80477E60_4F50 = func_80477E60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80477E60_4F50);
        r4 = static_cast<uint32_t>(regargs_result_80477E60_4F50 >> 32);
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

loc_8047C650:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047C6B8;
    }
}

loc_8047C658:
{
    r4 = 520;
    r0 = 1;
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 269u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 0u, r3, static_cast<uint16_t>(r4));
    r4 = (r31 + 26);
    MemoryInline::WriteResolved8(guest_range_2, 268u, (r3 + 268), static_cast<uint8_t>(r0));
    guest_range_3 = MemoryInline::ResolveRangeHost((r31 + 16), 0, 17u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r31 + 16));
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
    r0 = MemoryInline::ReadResolved8(guest_range_3, 16u, (r31 + 32));
    r30 = (r31 + 32);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8047C6A0;
    }
}

loc_8047C68C:
{
    r3 = (r31 + 26);
    ctx->lr = 0x8047C694u;
    if constexpr (KnownRegArgsCpuCall<0x80483088u>(&func_80483088)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80483088_5BB6 = func_80483088_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80483088_5BB6);
        r4 = static_cast<uint32_t>(regargs_result_80483088_5BB6 >> 32);
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

loc_8047C698:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047C6A0;
    }
}

loc_8047C69C:
{
    r30 = r3;
}

loc_8047C6A0:
{
    r4 = r30;
    r3 = (r29 + 14);
    r5 = 32;
    if constexpr (KnownRegArgsCpuCall<0x8045FC94u>(&func_8045FC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045FC94_60F5 = func_8045FC94_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FC94_60F5;
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
    r3 = r29;
    ctx->lr = 0x8047C6B8u;
    if constexpr (KnownRegArgsCpuCall<0x8047B6F0u>(&func_8047B6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8047B6F0_648C = func_8047B6F0_ra88_0_18_0(ctx, r3, r7);
        r3 = static_cast<uint32_t>(regargs_result_8047B6F0_648C);
        r4 = static_cast<uint32_t>(regargs_result_8047B6F0_648C >> 32);
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

loc_8047C6B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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

extern "C" void func_8047C46C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047C46C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8047C46C func_8047C46C preserves=true fpr_mask=0x00000000
