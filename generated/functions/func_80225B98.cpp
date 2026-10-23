#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026A38C(CpuContext* ctx);
extern "C" uint64_t func_8026A38C_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_80225B98_ra58_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r6, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = arg_r6;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80225B98;

loc_80225B98:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = 2;
    r5 = MemoryInline::FlatRead32((r3 + 316));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 72));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -15812), 0, 92u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -15812));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80225BC0:
{
    r0 = cr;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1);
    r31 = (r0 & 255);
    r0 = (r4 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1051));
}

loc_80225BD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80225CB8;
    }
}

loc_80225BD8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80225C0C;
    }
}

loc_80225BDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1009));
}

loc_80225BE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80225C7C;
    }
}

loc_80225BE4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80225C00;
    }
}

loc_80225BE8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1003));
}

loc_80225BEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80225C58;
    }
}

loc_80225BF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80225D88;
    }
}

loc_80225BF4:
{
}

loc_80225BF8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1002))) {
        goto loc_80225C30;
    }
}

loc_80225BFC:
{
    goto loc_80225D88;
}

loc_80225C00:
{
}

loc_80225C04:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1011))) {
        goto loc_80225D88;
    }
}

loc_80225C08:
{
    goto loc_80225CA0;
}

loc_80225C0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1057));
}

loc_80225C10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80225D20;
    }
}

loc_80225C14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80225C24;
    }
}

loc_80225C18:
{
}

loc_80225C1C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1053))) {
        goto loc_80225D88;
    }
}

loc_80225C20:
{
    goto loc_80225CEC;
}

loc_80225C24:
{
}

loc_80225C28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1178))) {
        goto loc_80225D54;
    }
}

loc_80225C2C:
{
    goto loc_80225D88;
}

loc_80225C30:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -15768));
    ctx->lr = 0x80225C3Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_FD7 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_FD7);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_FD7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80225C40:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80225C48;
    }
}

loc_80225C44:
{
    r30 = 1;
}

loc_80225C48:
{
}

loc_80225C4C:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_80225D9C;
    }
}

loc_80225C50:
{
    r30 = 2;
    goto loc_80225D9C;
}

loc_80225C58:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r2 + -15732));
    ctx->lr = 0x80225C64u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_171B = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_171B);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_171B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80225C68:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80225C74;
    }
}

loc_80225C6C:
{
    r30 = 2;
    goto loc_80225D9C;
}

loc_80225C74:
{
    r30 = 1;
    goto loc_80225D9C;
}

loc_80225C7C:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r2 + -15752));
    ctx->lr = 0x80225C88u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_1DE4 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_1DE4);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_1DE4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80225C8C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80225C98;
    }
}

loc_80225C90:
{
    r30 = 2;
    goto loc_80225D9C;
}

loc_80225C98:
{
    r30 = 1;
    goto loc_80225D9C;
}

loc_80225CA0:
{
}

loc_80225CA4:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(1))) {
        goto loc_80225CB0;
    }
}

loc_80225CA8:
{
    r30 = 2;
    goto loc_80225D9C;
}

loc_80225CB0:
{
    r30 = 1;
    goto loc_80225D9C;
}

loc_80225CB8:
{
}

loc_80225CBC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80225CC8;
    }
}

loc_80225CC0:
{
    r30 = 2;
    goto loc_80225D9C;
}

loc_80225CC8:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r2 + -15756));
    ctx->lr = 0x80225CD4u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_268E = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_268E);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_268E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80225CD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80225CE4;
    }
}

loc_80225CDC:
{
    r30 = 1;
    goto loc_80225D9C;
}

loc_80225CE4:
{
    r30 = 2;
    goto loc_80225D9C;
}

loc_80225CEC:
{
}

loc_80225CF0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80225CFC;
    }
}

loc_80225CF4:
{
    r30 = 1;
    goto loc_80225D9C;
}

loc_80225CFC:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r2 + -15728));
    ctx->lr = 0x80225D08u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_2E2A = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_2E2A);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_2E2A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80225D0C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80225D18;
    }
}

loc_80225D10:
{
    r30 = 2;
    goto loc_80225D9C;
}

loc_80225D18:
{
    r30 = 1;
    goto loc_80225D9C;
}

loc_80225D20:
{
}

loc_80225D24:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80225D30;
    }
}

loc_80225D28:
{
    r30 = 1;
    goto loc_80225D9C;
}

loc_80225D30:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 88u, (r2 + -15724));
    ctx->lr = 0x80225D3Cu;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_35C6 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_35C6);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_35C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80225D40:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80225D4C;
    }
}

loc_80225D44:
{
    r30 = 2;
    goto loc_80225D9C;
}

loc_80225D4C:
{
    r30 = 1;
    goto loc_80225D9C;
}

loc_80225D54:
{
}

loc_80225D58:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80225D64;
    }
}

loc_80225D5C:
{
    r30 = 2;
    goto loc_80225D9C;
}

loc_80225D64:
{
    r4 = 1;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r2 + -15756));
    ctx->lr = 0x80225D70u;
    if constexpr (KnownRegArgsCpuCall<0x8026A38Cu>(&func_8026A38C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8026A38C_3D62 = func_8026A38C_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8026A38C_3D62);
        r4 = static_cast<uint32_t>(regargs_result_8026A38C_3D62 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026A38Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
}

loc_80225D74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80225D80;
    }
}

loc_80225D78:
{
    r30 = 1;
    goto loc_80225D9C;
}

loc_80225D80:
{
    r30 = 2;
    goto loc_80225D9C;
}

loc_80225D88:
{
    // inline leaf 0x8026A404 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 24));
    // end of inlined leaf 0x8026A404
    r0 = (r3 & 255);
}

loc_80225D94:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80225D9C;
    }
}

loc_80225D98:
{
    r30 = 1;
}

loc_80225D9C:
{
    r3 = r30;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80225B98(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80225B98_ra58_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[6], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000005F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80225B98 func_80225B98 preserves=true fpr_mask=0x00000000
