#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8043F23C(CpuContext* ctx);
extern "C" uint64_t func_8043F23C_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8043F264(CpuContext* ctx);
extern "C" uint64_t func_8043F264_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8043F3CC(CpuContext* ctx);
extern "C" uint64_t func_8043F3CC_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8043F3F4(CpuContext* ctx);
extern "C" uint64_t func_8043F3F4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8043F564(CpuContext* ctx);
extern "C" uint64_t func_8043F564_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8043F890(CpuContext* ctx);
extern "C" uint64_t func_8043F890_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8043FB8C(CpuContext* ctx);
extern "C" uint64_t func_8043FB8C_rac8_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8043FBB4(CpuContext* ctx);
extern "C" uint64_t func_8043FBB4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80440FBC(CpuContext* ctx);
extern "C" uint64_t func_80440FBC_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8045E54C(CpuContext* ctx);
extern "C" uint64_t func_8045E54C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804410E4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_804410E4;

loc_804410E4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    r3 = 0x806E0000u;
    r30 = (r3 + -31392);
    r3 = 0x806E0000u;
    r31 = (r3 + -30960);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r0);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r0);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r0);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r0);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r0);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    }
    r3 = (r1 + 8);
    r4 = (r13 + -21192);
    r5 = 0x80600000u;
    r5 = (r5 + 31236);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80441164u;
    if constexpr (KnownRegArgsCpuCall<0x8045E54Cu>(&func_8045E54C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8045E54C_1870 = func_8045E54C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8045E54C_1870);
        r4 = static_cast<uint32_t>(regargs_result_8045E54C_1870 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8045E54Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    r0 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8044116C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80441290;
    }
}

loc_80441170:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044118C;
    }
}

loc_80441174:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80441178:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804411B0;
    }
}

loc_8044117C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80441220;
    }
}

loc_80441180:
{
}

loc_80441184:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8044119C;
    }
}

loc_80441188:
{
    goto loc_804413A0;
}

loc_8044118C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80441190:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8044134C;
    }
}

loc_80441194:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804413A0;
    }
}

loc_80441198:
{
    goto loc_804412EC;
}

loc_8044119C:
{
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8043F23Cu>(&func_8043F23C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8043F23C_240E = func_8043F23C_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_8043F23C_240E);
        r4 = static_cast<uint32_t>(regargs_result_8043F23C_240E >> 32);
        r0 = ctx->gpr[0];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8043F23Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32(r31, r0);
}

loc_804411B0:
{
    ctx->lr = 0x804411B4u;
    if constexpr (KnownRegArgsCpuCall<0x8043F264u>(&func_8043F264)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8043F264_28AC = func_8043F264_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8043F264_28AC);
        r4 = static_cast<uint32_t>(regargs_result_8043F264_28AC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8043F264u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_804411B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804413A0;
    }
}

loc_804411BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804411D0;
    }
}

loc_804411C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-2));
}

loc_804411C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80441200;
    }
}

loc_804411C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804411F0;
    }
}

loc_804411CC:
{
    goto loc_804413A0;
}

loc_804411D0:
{
}

loc_804411D4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(2))) {
        goto loc_804413A0;
    }
}

loc_804411D8:
{
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8043F3CCu>(&func_8043F3CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8043F3CC_32C9 = func_8043F3CC_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_8043F3CC_32C9);
        r4 = static_cast<uint32_t>(regargs_result_8043F3CC_32C9 >> 32);
        r0 = ctx->gpr[0];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8043F3CCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32(r31, r0);
    goto loc_804413A0;
}

loc_804411F0:
{
    r0 = MemoryInline::FlatRead32((r30 + 416));
    MemoryInline::FlatWriteRam32((r31 + 96), r0);
    r3 = -1;
    goto loc_804413A4;
}

loc_80441200:
{
    r0 = MemoryInline::FlatRead32((r30 + 416));
    MemoryInline::FlatWriteRam32((r31 + 96), r0);
}

loc_8044120C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-4))) {
        goto loc_80441218;
    }
}

loc_80441210:
{
    r3 = -1;
    goto loc_804413A4;
}

loc_80441218:
{
    r3 = -2;
    goto loc_804413A4;
}

loc_80441220:
{
    ctx->lr = 0x80441224u;
    if constexpr (KnownRegArgsCpuCall<0x8043F3F4u>(&func_8043F3F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8043F3F4_3992 = func_8043F3F4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8043F3F4_3992);
        r4 = static_cast<uint32_t>(regargs_result_8043F3F4_3992 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8043F3F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80441228:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804413A0;
    }
}

loc_8044122C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80441240;
    }
}

loc_80441230:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-2));
}

loc_80441234:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80441280;
    }
}

loc_80441238:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80441270;
    }
}

loc_8044123C:
{
    goto loc_804413A0;
}

loc_80441240:
{
}

loc_80441244:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(2))) {
        goto loc_804413A0;
    }
}

loc_80441248:
{
    ctx->lr = 0x8044124Cu;
    if constexpr (KnownRegArgsCpuCall<0x80440FBCu>(&func_80440FBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80440FBC_43B7 = func_80440FBC_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80440FBC_43B7);
        r4 = static_cast<uint32_t>(regargs_result_80440FBC_43B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80440FBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = 0x806E0000u;
    r3 = (r3 + -30656);
    r4 = 65536;
    r4 = (r4 + -3936);
    // inline leaf 0x8043F868 (10 guest instruction(s))
    r6 = 0;
    r5 = 0x806E0000u;
    MemoryInline::FlatWriteRam32((r5 + -31392), r6);
    r0 = 3;
    r5 = (r5 + -31392);
    MemoryInline::FlatWriteRam32((r5 + 4), r0);
    MemoryInline::FlatWriteRam32((r5 + 8), r6);
    MemoryInline::FlatWriteRam32((r5 + 76), r3);
    MemoryInline::FlatWriteRam32((r5 + 80), r4);
    // end of inlined leaf 0x8043F868
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32(r31, r0);
    goto loc_804413A0;
}

loc_80441270:
{
    r0 = MemoryInline::FlatRead32((r30 + 416));
    MemoryInline::FlatWriteRam32((r31 + 96), r0);
    r3 = -1;
    goto loc_804413A4;
}

loc_80441280:
{
    r0 = MemoryInline::FlatRead32((r30 + 416));
    MemoryInline::FlatWriteRam32((r31 + 96), r0);
    r3 = -2;
    goto loc_804413A4;
}

loc_80441290:
{
    ctx->lr = 0x80441294u;
    if constexpr (KnownRegArgsCpuCall<0x8043F890u>(&func_8043F890)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8043F890_4D41 = func_8043F890_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8043F890_4D41);
        r4 = static_cast<uint32_t>(regargs_result_8043F890_4D41 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8043F890u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80441298:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804413A0;
    }
}

loc_8044129C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804412B0;
    }
}

loc_804412A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-2));
}

loc_804412A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804412DC;
    }
}

loc_804412A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804412CC;
    }
}

loc_804412AC:
{
    goto loc_804413A0;
}

loc_804412B0:
{
}

loc_804412B4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(2))) {
        goto loc_804413A0;
    }
}

loc_804412B8:
{
    // inline leaf 0x8043F544 (8 guest instruction(s))
    r4 = 0;
    r3 = 0x806E0000u;
    MemoryInline::FlatWriteRam32((r3 + -31392), r4);
    r0 = 3;
    r3 = (r3 + -31392);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r4);
    // end of inlined leaf 0x8043F544
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32(r31, r0);
    goto loc_804413A0;
}

loc_804412CC:
{
    r0 = MemoryInline::FlatRead32((r30 + 416));
    MemoryInline::FlatWriteRam32((r31 + 96), r0);
    r3 = -1;
    goto loc_804413A4;
}

loc_804412DC:
{
    r0 = MemoryInline::FlatRead32((r30 + 416));
    MemoryInline::FlatWriteRam32((r31 + 96), r0);
    r3 = -2;
    goto loc_804413A4;
}

loc_804412EC:
{
    ctx->lr = 0x804412F0u;
    if constexpr (KnownRegArgsCpuCall<0x8043F564u>(&func_8043F564)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8043F564_5A81 = func_8043F564_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8043F564_5A81);
        r4 = static_cast<uint32_t>(regargs_result_8043F564_5A81 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8043F564u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_804412F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804413A0;
    }
}

loc_804412F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044130C;
    }
}

loc_804412FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-2));
}

loc_80441300:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8044133C;
    }
}

loc_80441304:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044132C;
    }
}

loc_80441308:
{
    goto loc_804413A0;
}

loc_8044130C:
{
}

loc_80441310:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(2))) {
        goto loc_804413A0;
    }
}

loc_80441314:
{
    r3 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8043FB8Cu>(&func_8043FB8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8043FB8C_649E = func_8043FB8C_rac8_0_18_0(ctx, r3, r6, r7);
        r3 = static_cast<uint32_t>(regargs_result_8043FB8C_649E);
        r4 = static_cast<uint32_t>(regargs_result_8043FB8C_649E >> 32);
        r0 = ctx->gpr[0];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8043FB8Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32(r31);
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam32(r31, r0);
    goto loc_804413A0;
}

loc_8044132C:
{
    r0 = MemoryInline::FlatRead32((r30 + 416));
    MemoryInline::FlatWriteRam32((r31 + 96), r0);
    r3 = -1;
    goto loc_804413A4;
}

loc_8044133C:
{
    r0 = MemoryInline::FlatRead32((r30 + 416));
    MemoryInline::FlatWriteRam32((r31 + 96), r0);
    r3 = -2;
    goto loc_804413A4;
}

loc_8044134C:
{
    r3 = 1;
    ctx->lr = 0x80441354u;
    if constexpr (KnownRegArgsCpuCall<0x8043FBB4u>(&func_8043FBB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8043FBB4_6AA3 = func_8043FBB4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8043FBB4_6AA3);
        r4 = static_cast<uint32_t>(regargs_result_8043FBB4_6AA3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8043FBB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80441358:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804413A0;
    }
}

loc_8044135C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80441370;
    }
}

loc_80441360:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-2));
}

loc_80441364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80441390;
    }
}

loc_80441368:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80441380;
    }
}

loc_8044136C:
{
    goto loc_804413A0;
}

loc_80441370:
{
}

loc_80441374:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(2))) {
        goto loc_804413A0;
    }
}

loc_80441378:
{
    r3 = 1;
    goto loc_804413A4;
}

loc_80441380:
{
    r0 = MemoryInline::FlatRead32((r30 + 416));
    MemoryInline::FlatWriteRam32((r31 + 96), r0);
    r3 = -1;
    goto loc_804413A4;
}

loc_80441390:
{
    r0 = MemoryInline::FlatRead32((r30 + 416));
    MemoryInline::FlatWriteRam32((r31 + 96), r0);
    r3 = -2;
    goto loc_804413A4;
}

loc_804413A0:
{
    r3 = 0;
}

loc_804413A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_804410E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804410E4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804410E4 func_804410E4 preserves=true fpr_mask=0x00000000
