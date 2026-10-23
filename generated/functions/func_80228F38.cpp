#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80228DEC(CpuContext* ctx);
extern "C" uint64_t func_80228DEC_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80229334(CpuContext* ctx);
extern "C" uint32_t func_80229334_ra18_30_8_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_802844D8(CpuContext* ctx);
extern "C" uint64_t func_802844D8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80228F38_ra38_32_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f4, double arg_f5)
{
    uint32_t addr_psqx_80229304_loc_0 = 0;
    uint32_t addr_psqx_80229310_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80228F38;

loc_80228F38:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r30 = r4;
    r31 = r5;
    r29 = r6;
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    // inline leaf 0x800D0788 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2167));
    // end of inlined leaf 0x800D0788
    r0 = (r3 & 255);
}

loc_80228F90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80229300;
    }
}

loc_80228F94:
{
    r4 = (r31 + 164);
    r3 = MemoryInline::FlatRead32((r30 + 316));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80228FA8:
{
    r0 = cr;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1);
    r3 = (r0 & 255);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    r0 = (r29 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1132));
}

loc_80228FC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802292D4;
    }
}

loc_80228FC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80229034;
    }
}

loc_80228FC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1104));
}

loc_80228FCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80229134;
    }
}

loc_80228FD0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80229010;
    }
}

loc_80228FD4:
{
}

loc_80228FD8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1063))) {
        goto loc_80228FFC;
    }
}

loc_80228FDC:
{
}

loc_80228FE0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1014))) {
        goto loc_80228FF0;
    }
}

loc_80228FE4:
{
}

loc_80228FE8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1011))) {
        goto loc_802292F0;
    }
}

loc_80228FEC:
{
    goto loc_802292D4;
}

loc_80228FF0:
{
}

loc_80228FF4:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1060))) {
        goto loc_802292F0;
    }
}

loc_80228FF8:
{
    goto loc_802292D4;
}

loc_80228FFC:
{
}

loc_80229000:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1070))) {
        goto loc_802292D4;
    }
}

loc_80229004:
{
}

loc_80229008:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1068))) {
        goto loc_802292F0;
    }
}

loc_8022900C:
{
    goto loc_802292D4;
}

loc_80229010:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1111));
}

loc_80229014:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022919C;
    }
}

loc_80229018:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80229028;
    }
}

loc_8022901C:
{
}

loc_80229020:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1106))) {
        goto loc_80229168;
    }
}

loc_80229024:
{
    goto loc_802292D4;
}

loc_80229028:
{
}

loc_8022902C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1131))) {
        goto loc_80229090;
    }
}

loc_80229030:
{
    goto loc_802292D4;
}

loc_80229034:
{
}

loc_80229038:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1157))) {
        goto loc_8022906C;
    }
}

loc_8022903C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1153));
}

loc_80229040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80229204;
    }
}

loc_80229044:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80229060;
    }
}

loc_80229048:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1136));
}

loc_8022904C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802291D0;
    }
}

loc_80229050:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802292D4;
    }
}

loc_80229054:
{
}

loc_80229058:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1134))) {
        goto loc_802292D4;
    }
}

loc_8022905C:
{
    goto loc_80229090;
}

loc_80229060:
{
}

loc_80229064:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1155))) {
        goto loc_80229090;
    }
}

loc_80229068:
{
    goto loc_802292D4;
}

loc_8022906C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1163));
}

loc_80229070:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8022926C;
    }
}

loc_80229074:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80229084;
    }
}

loc_80229078:
{
}

loc_8022907C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1159))) {
        goto loc_80229238;
    }
}

loc_80229080:
{
    goto loc_802292D4;
}

loc_80229084:
{
}

loc_80229088:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1165))) {
        goto loc_802292D4;
    }
}

loc_8022908C:
{
    goto loc_802292A0;
}

loc_80229090:
{
    r3 = r30;
    r5 = 255;
    ctx->lr = 0x8022909Cu;
    if constexpr (KnownRegArgsCpuCall<0x80228DECu>(&func_80228DEC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80228DEC_1EF4 = func_80228DEC_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80228DEC_1EF4);
        r4 = static_cast<uint32_t>(regargs_result_80228DEC_1EF4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80228DECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = r30;
    ctx->lr = 0x802290A4u;
    if constexpr (KnownRegArgsCpuCall<0x802844D8u>(&func_802844D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802844D8_23BA = func_802844D8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802844D8_23BA);
        r4 = static_cast<uint32_t>(regargs_result_802844D8_23BA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802844D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802290AC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_802292D4;
    }
}

loc_802290B0:
{
    r3 = r30;
    ctx->lr = 0x802290B8u;
    if constexpr (KnownRegArgsCpuCall<0x802844D8u>(&func_802844D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802844D8_287E = func_802844D8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802844D8_287E);
        r4 = static_cast<uint32_t>(regargs_result_802844D8_287E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802844D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802290C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802292F0;
    }
}

loc_802290C4:
{
    r3 = r30;
    ctx->lr = 0x802290CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80284454u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = MemoryInline::FlatRead16((r30 + 784));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r3 - r0);
}

loc_802290E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80229104;
    }
}

loc_802290E8:
{
}

loc_802290EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80229110;
    }
}

loc_802290F0:
{
}

loc_802290F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8022911C;
    }
}

loc_802290F8:
{
}

loc_802290FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80229128;
    }
}

loc_80229100:
{
    goto loc_802292D4;
}

loc_80229104:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    goto loc_802292F0;
}

loc_80229110:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -15552));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -15748));
    goto loc_802292F0;
}

loc_8022911C:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -15548));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -15544));
    goto loc_802292F0;
}

loc_80229128:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -15628));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -15540));
    goto loc_802292F0;
}

loc_80229134:
{
}

loc_80229138:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802292D4;
    }
}

loc_8022913C:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15936);
    ctx->lr = 0x8022914Cu;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_3660 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_3660;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15888);
    ctx->lr = 0x80229160u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_3AE8 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_3AE8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f30.d = f1.d;
    goto loc_802292F0;
}

loc_80229168:
{
}

loc_8022916C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802292D4;
    }
}

loc_80229170:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15832);
    ctx->lr = 0x80229180u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_4032 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_4032;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15784);
    ctx->lr = 0x80229194u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_44BA = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_44BA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f30.d = f1.d;
    goto loc_802292F0;
}

loc_8022919C:
{
}

loc_802291A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802292D4;
    }
}

loc_802291A4:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15728);
    ctx->lr = 0x802291B4u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_4A04 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_4A04;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15680);
    ctx->lr = 0x802291C8u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_4E8C = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_4E8C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f30.d = f1.d;
    goto loc_802292F0;
}

loc_802291D0:
{
}

loc_802291D4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802292D4;
    }
}

loc_802291D8:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15624);
    ctx->lr = 0x802291E8u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_53D6 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_53D6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15576);
    ctx->lr = 0x802291FCu;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_585E = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_585E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f30.d = f1.d;
    goto loc_802292F0;
}

loc_80229204:
{
}

loc_80229208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802292D4;
    }
}

loc_8022920C:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15520);
    ctx->lr = 0x8022921Cu;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_5DA8 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_5DA8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15472);
    ctx->lr = 0x80229230u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_6230 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_6230;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f30.d = f1.d;
    goto loc_802292F0;
}

loc_80229238:
{
}

loc_8022923C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802292D4;
    }
}

loc_80229240:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15416);
    ctx->lr = 0x80229250u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_677A = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_677A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15368);
    ctx->lr = 0x80229264u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_6C02 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_6C02;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f30.d = f1.d;
    goto loc_802292F0;
}

loc_8022926C:
{
}

loc_80229270:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802292D4;
    }
}

loc_80229274:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15312);
    ctx->lr = 0x80229284u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_714C = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_714C;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15264);
    ctx->lr = 0x80229298u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_75D4 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_75D4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f30.d = f1.d;
    goto loc_802292F0;
}

loc_802292A0:
{
}

loc_802292A4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802292D4;
    }
}

loc_802292A8:
{
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15208);
    ctx->lr = 0x802292B8u;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_7B1E = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_7B1E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r3 = r30;
    r4 = 0x805C0000u;
    r4 = (r4 + -15160);
    ctx->lr = 0x802292CCu;
    if constexpr (KnownRegArgsCpuCall<0x80229334u>(&func_80229334)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80229334_7FA6 = func_80229334_ra18_30_8_0(ctx, r3, r4, f4.d, f5.d);
        r3 = regargs_result_80229334_7FA6;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80229334u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        cr = ctx->cr;
    }
    f30.d = f1.d;
    goto loc_802292F0;
}

loc_802292D4:
{
    r3 = r30;
    ctx->lr = 0x802292DCu;
    if constexpr (KnownRegArgsCpuCall<0x802844D8u>(&func_802844D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802844D8_842F = func_802844D8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802844D8_842F);
        r4 = static_cast<uint32_t>(regargs_result_802844D8_842F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802844D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_802292E4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_802292F0;
    }
}

loc_802292E8:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -15628));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -15536));
}

loc_802292F0:
{
    MemoryInline::FlatWriteFloat32((r31 + 92), f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 96), f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 100), f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 156), f30.d);
}

loc_80229300:
{
    r0 = 88;
    addr_psqx_80229304_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80229304_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r0 = 72;
    addr_psqx_80229310_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80229310_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80228F38(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80228F38_ra38_32_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[4].d, ctx->fpr[5].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80228F38 func_80228F38 preserves=true fpr_mask=0x00000000
