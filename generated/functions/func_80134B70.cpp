#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F980(CpuContext* ctx);
extern "C" uint64_t func_8012F980_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_8012F9A0(CpuContext* ctx);
extern "C" uint64_t func_8012F9A0_ra68_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8013441C(CpuContext* ctx);
extern "C" uint64_t func_8013441C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801344E8(CpuContext* ctx);
extern "C" uint64_t func_801344E8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80134638(CpuContext* ctx);
extern "C" uint64_t func_80134638_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_80134B70_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_80134B70;

loc_80134B70:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r3;
    r30 = r4;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    r31 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80134BAC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80134BCC;
    }
}

loc_80134BB0:
{
    r3 = (r3 + 36);
    r4 = 1;
    // inline leaf 0x800E19BC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 76));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800E19BC
}

loc_80134BC0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80134BCC;
    }
}

loc_80134BC4:
{
    r3 = 0;
    goto loc_80134E40;
}

loc_80134BCC:
{
    r6 = MemoryInline::FlatRead8((r29 + 1155));
    r0 = (r6 & 32);
}

loc_80134BD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80134BF0;
    }
}

loc_80134BDC:
{
    r3 = MemoryInline::FlatRead32((r29 + 452));
    r0 = MemoryInline::FlatRead32((r29 + 892));
    r0 = (r0 - r3);
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_80134C00;
}

loc_80134BF0:
{
    r3 = MemoryInline::FlatRead32((r29 + 448));
    r0 = MemoryInline::FlatRead32((r29 + 892));
    r0 = (r0 - r3);
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80134C00:
{
    r3 = r29;
    r4 = r30;
    r5 = r27;
    ctx->lr = 0x80134C10u;
    if constexpr (KnownRegArgsCpuCall<0x80134638u>(&func_80134638)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80134638_11E6 = func_80134638_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80134638_11E6);
        r4 = static_cast<uint32_t>(regargs_result_80134638_11E6 >> 32);
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
        InvokeDirectCpu<0x80134638u>(ctx);
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
    r28 = r3;
    r0 = MemoryInline::FlatRead8((r29 + 1154));
}

loc_80134C1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80134C9C;
    }
}

loc_80134C20:
{
    r5 = MemoryInline::FlatRead32(r30);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80134C40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80134C60;
    }
}

loc_80134C44:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80134C5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80134C9C;
    }
}

loc_80134C60:
{
    r3 = r29;
    r4 = 3;
    f2.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead32((r30 + 4));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    ctx->lr = 0x80134C94u;
    if constexpr (KnownRegArgsCpuCall<0x8012F980u>(&func_8012F980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012F980_1DE7 = func_8012F980_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F980_1DE7);
        r4 = static_cast<uint32_t>(regargs_result_8012F980_1DE7 >> 32);
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
        InvokeDirectCpu<0x8012F980u>(ctx);
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

loc_80134C98:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80134CD8;
    }
}

loc_80134C9C:
{
    r0 = MemoryInline::FlatRead8((r29 + 1155));
    r0 = (r0 & 32);
}

loc_80134CA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80134CC4;
    }
}

loc_80134CAC:
{
    r3 = r29;
    r4 = (r29 + 452);
    r5 = r27;
    r6 = (r28 & 65535);
    ctx->lr = 0x80134CC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80134884u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    goto loc_80134CD8;
}

loc_80134CC4:
{
    r3 = r29;
    r4 = (r29 + 448);
    r5 = r27;
    r6 = (r28 & 65535);
    ctx->lr = 0x80134CD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    InvokeDirectCpu<0x80134884u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
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

loc_80134CD8:
{
    r0 = MemoryInline::FlatRead8((r29 + 1154));
}

loc_80134CE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80134D04;
    }
}

loc_80134CE4:
{
    r0 = MemoryInline::FlatRead8((r29 + 1155));
    r0 = (r0 & 16);
}

loc_80134CF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80134CFC;
    }
}

loc_80134CF4:
{
    r27 = 1;
    goto loc_80134D68;
}

loc_80134CFC:
{
    r27 = 0;
    goto loc_80134D68;
}

loc_80134D04:
{
    r0 = MemoryInline::FlatRead32((r30 + 8));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80134D24:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80134D4C;
    }
}

loc_80134D2C:
{
    r0 = MemoryInline::FlatRead8((r29 + 1155));
    r0 = (r0 & 16);
}

loc_80134D38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80134D44;
    }
}

loc_80134D3C:
{
    r27 = 1;
    goto loc_80134D68;
}

loc_80134D44:
{
    r27 = 0;
    goto loc_80134D68;
}

loc_80134D4C:
{
    r3 = r29;
    r4 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    ctx->lr = 0x80134D64u;
    if constexpr (KnownRegArgsCpuCall<0x8012F980u>(&func_8012F980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012F980_32D9 = func_8012F980_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F980_32D9);
        r4 = static_cast<uint32_t>(regargs_result_8012F980_32D9 >> 32);
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
        InvokeDirectCpu<0x8012F980u>(ctx);
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
    r27 = r3;
}

loc_80134D68:
{
    r3 = r29;
    ctx->lr = 0x80134D70u;
    if constexpr (KnownRegArgsCpuCall<0x8012F9A0u>(&func_8012F9A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012F9A0_386D = func_8012F9A0_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F9A0_386D);
        r4 = static_cast<uint32_t>(regargs_result_8012F9A0_386D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F9A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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

loc_80134D74:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80134D84;
    }
}

loc_80134D78:
{
    r0 = (r27 & 65535);
}

loc_80134D80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80134E18;
    }
}

loc_80134D84:
{
    r0 = MemoryInline::FlatRead8((r29 + 1155));
    r0 = (r0 & 32);
}

loc_80134D90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80134DA8;
    }
}

loc_80134D94:
{
    r3 = MemoryInline::FlatRead32((r29 + 452));
    r0 = MemoryInline::FlatRead32((r29 + 892));
    r0 = (r0 - r3);
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_80134DB8;
}

loc_80134DA8:
{
    r3 = MemoryInline::FlatRead32((r29 + 448));
    r0 = MemoryInline::FlatRead32((r29 + 892));
    r0 = (r0 - r3);
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80134DB8:
{
    r3 = r29;
    r4 = r30;
    ctx->lr = 0x80134DC4u;
    if constexpr (KnownRegArgsCpuCall<0x801344E8u>(&func_801344E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_801344E8_43F2 = func_801344E8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801344E8_43F2);
        r4 = static_cast<uint32_t>(regargs_result_801344E8_43F2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
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
        ctx->cr = cr;
        InvokeDirectCpu<0x801344E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    r28 = (r3 & 65535);
    r3 = r27;
    // inline leaf 0x8045B1B8 (4 guest instruction(s))
    r4 = (static_cast<int32_t>(r3) >> 31);
    r0 = (r4 ^ r3);
    r3 = (r0 - r4);
    // end of inlined leaf 0x8045B1B8
}

loc_80134DD4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r28))) {
        goto loc_80134DE0;
    }
}

loc_80134DD8:
{
    r31 = 1;
    goto loc_80134E18;
}

loc_80134DE0:
{
    r3 = r29;
    ctx->lr = 0x80134DE8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F9A0u>(&func_8012F9A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8012F9A0_4AAB = func_8012F9A0_ra68_1fe_18_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F9A0_4AAB);
        r4 = static_cast<uint32_t>(regargs_result_8012F9A0_4AAB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F9A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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

loc_80134DEC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80134E18;
    }
}

loc_80134DF0:
{
    r0 = MemoryInline::FlatRead8((r29 + 1155));
    r0 = (r0 & 64);
}

loc_80134DFC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80134E08;
    }
}

loc_80134E00:
{
    r31 = 1;
    goto loc_80134E18;
}

loc_80134E08:
{
    r3 = r29;
    r4 = r30;
    r5 = r27;
    ctx->lr = 0x80134E18u;
    if constexpr (KnownRegArgsCpuCall<0x8013441Cu>(&func_8013441C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8013441C_5409 = func_8013441C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8013441C_5409);
        r4 = static_cast<uint32_t>(regargs_result_8013441C_5409 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8013441Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
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

loc_80134E18:
{
    r0 = MemoryInline::FlatRead8((r29 + 1154));
}

loc_80134E20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80134E3C;
    }
}

loc_80134E24:
{
    r0 = MemoryInline::FlatRead8((r29 + 1155));
    r0 = (r0 & 8);
}

loc_80134E30:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80134E3C;
    }
}

loc_80134E34:
{
    r3 = r29;
    // inline leaf 0x801321B8 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 278), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801321B8
}

loc_80134E3C:
{
    r3 = r31;
}

loc_80134E40:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
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

extern "C" void func_80134B70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80134B70_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80134B70 func_80134B70 preserves=true fpr_mask=0x00000000
