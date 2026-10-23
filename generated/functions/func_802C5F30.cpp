#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80100790(CpuContext* ctx);
extern "C" uint64_t func_80100790_ra38_1f2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802D2968(CpuContext* ctx);
extern "C" uint64_t func_802D2968_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802D2B20(CpuContext* ctx);
extern "C" uint64_t func_802D2B20_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802D671C(CpuContext* ctx);
extern "C" uint64_t func_802D671C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802C5F30_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lhax_802C6094_loc_0 = 0;
    uint32_t addr_lhax_802C60C0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
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

    goto loc_802C5F30;

loc_802C5F30:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = r3;
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r31;
    r4 = 2;
    // inline leaf 0x802D3A90 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 532), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x802D3A90
    r3 = r31;
    r4 = 2;
    // inline leaf 0x802D2A1C (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 250), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x802D2A1C
    r3 = r31;
    r4 = 1;
    // inline leaf 0x802D3D38 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 976), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x802D3D38
    r4 = MemoryInline::FlatRead8((r31 + 4));
}

loc_802C5F7C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_802C5F9C;
    }
}

loc_802C5F80:
{
}

loc_802C5F84:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_802C5FF8;
    }
}

loc_802C5F88:
{
}

loc_802C5F8C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_802C60A4;
    }
}

loc_802C5F90:
{
}

loc_802C5F94:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_802C6134;
    }
}

loc_802C5F98:
{
    goto loc_802C615C;
}

loc_802C5F9C:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 2;
    // inline leaf 0x802D2BEC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 492));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite16((r3 + 492), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802D2BEC
    r3 = r31;
    r4 = 0;
    // inline leaf 0x802D2A5C (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 368), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x802D2A5C
    r3 = r31;
    r4 = 14;
    r5 = 0;
    r6 = 248;
    ctx->lr = 0x802C5FD0u;
    if constexpr (KnownRegArgsCpuCall<0x802D2968u>(&func_802D2968)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802D2968_110D = func_802D2968_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2968_110D);
        r4 = static_cast<uint32_t>(regargs_result_802D2968_110D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D2968u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r31;
    r4 = 1;
    // inline leaf 0x802D3D38 (2 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 976), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x802D3D38
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13352));
    MemoryInline::FlatWriteFloat32((r31 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    r0 = 20;
    MemoryInline::FlatWrite32((r31 + 428), r0);
    goto loc_802C615C;
}

loc_802C5FF8:
{
    r3 = MemoryInline::FlatRead32((r31 + 428));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 428), r0);
}

loc_802C6008:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802C615C;
    }
}

loc_802C600C:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r3 = r31;
    r4 = 2;
    // inline leaf 0x802D2BFC (6 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 492));
    r0 = ~(r4 | r4);
    r0 = (r0 & 65535);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite16((r3 + 492), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x802D2BFC
    r30 = 0;
    MemoryInline::FlatWrite8((r31 + 2), static_cast<uint8_t>(r30));
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    f2.d = f1.d;
    f3.d = MemoryInline::FlatReadFloat32((r2 + -13276));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 20);
    r4 = MemoryInline::FlatRead32((r31 + 404));
    ctx->lr = 0x802C6054u;
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
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r3 = (r1 + 20);
    r4 = (r31 + 376);
    ctx->lr = 0x802C6060u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 412));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    r3 = r31;
    r4 = 42;
    r5 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13352));
    r6 = 0;
    ctx->lr = 0x802C6080u;
    if constexpr (KnownRegArgsCpuCall<0x80100790u>(&func_80100790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_80100790_23D4 = func_80100790_ra38_1f2_18_0(ctx, r3, r4, r5, f1.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80100790_23D4);
        r4 = static_cast<uint32_t>(regargs_result_80100790_23D4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80100790u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = r31;
    ctx->lr = 0x802C6088u;
    if constexpr (KnownRegArgsCpuCall<0x802D671Cu>(&func_802D671C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802D671C_2A72 = func_802D671C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D671C_2A72);
        r4 = static_cast<uint32_t>(regargs_result_802D671C_2A72 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x802D671Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r13 + -26760);
    addr_lhax_802C6094_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_802C6094_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r31 + 428), r0);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r30));
    goto loc_802C615C;
}

loc_802C60A4:
{
    r3 = MemoryInline::FlatRead16((r31 + 1090));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 1090), static_cast<uint16_t>(r0));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead8((r31 + 5));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = (r13 + -26760);
    addr_lhax_802C60C0_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_802C60C0_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802C60C8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_802C610C;
    }
}

loc_802C60CC:
{
    r3 = MemoryInline::FlatRead8((r31 + 1092));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 1092), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_802C60E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802C60F0;
    }
}

loc_802C60E4:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 1092), static_cast<uint8_t>(r0));
    goto loc_802C6100;
}

loc_802C60F0:
{
}

loc_802C60F4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(4))) {
        goto loc_802C6100;
    }
}

loc_802C60F8:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 1092), static_cast<uint8_t>(r0));
}

loc_802C6100:
{
    r3 = MemoryInline::FlatRead8((r31 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
}

loc_802C610C:
{
    r3 = MemoryInline::FlatRead16((r31 + 1090));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead32((r31 + 428));
}

loc_802C6118:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_802C615C;
    }
}

loc_802C611C:
{
    r0 = 20;
    MemoryInline::FlatWrite32((r31 + 428), r0);
    r3 = MemoryInline::FlatRead8((r31 + 4));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    goto loc_802C615C;
}

loc_802C6134:
{
    r3 = MemoryInline::FlatRead32((r31 + 428));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 428), r0);
}

loc_802C6144:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802C615C;
    }
}

loc_802C6148:
{
    r3 = r31;
    r4 = 1;
    r5 = 87;
    r6 = 0;
    ctx->lr = 0x802C615Cu;
    if constexpr (KnownRegArgsCpuCall<0x802D2B20u>(&func_802D2B20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_802D2B20_3A18 = func_802D2B20_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802D2B20_3A18);
        r4 = static_cast<uint32_t>(regargs_result_802D2B20_3A18 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802D2B20u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_802C615C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C5F30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C5F30_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802C5F30 func_802C5F30 preserves=true fpr_mask=0x00000000
