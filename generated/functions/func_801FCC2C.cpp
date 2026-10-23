#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FE518(CpuContext* ctx);
extern "C" uint32_t func_801FE518_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_801FE984(CpuContext* ctx);
extern "C" uint32_t func_801FE984_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80207F10(CpuContext* ctx);
extern "C" uint64_t func_80207F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80208034(CpuContext* ctx);
extern "C" uint64_t func_80208034_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_80208124(CpuContext* ctx);
extern "C" uint64_t func_80208124_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8021D790(CpuContext* ctx);
extern "C" uint32_t func_8021D790_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_801FCC2C_ra38_1fc_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801FCC2C;

loc_801FCC2C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r29 = 0;
    r28 = 0;
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 520), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r3 + 596), static_cast<uint8_t>(r0));
    // inline leaf 0x802FB654 (4 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 3));
    // end of inlined leaf 0x802FB654
    r30 = r3;
    r0 = (r3 & 255);
}

loc_801FCC70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_801FCCA4;
    }
}

loc_801FCC74:
{
    // inline leaf 0x800D076C (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2003));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    // end of inlined leaf 0x800D076C
}

loc_801FCC7C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801FCC88;
    }
}

loc_801FCC80:
{
    // inline leaf 0x802FB648 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r3 = MemoryInline::FlatRead8((r3 + 15873));
    // end of inlined leaf 0x802FB648
    r30 = r3;
}

loc_801FCC88:
{
    r0 = (r30 & 255);
}

loc_801FCC90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_801FCCB8;
    }
}

loc_801FCC94:
{
    r3 = MemoryInline::FlatRead32((r13 + -17256));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r28 = MemoryInline::FlatRead32(r3_addr_1);
    goto loc_801FCCB8;
}

loc_801FCCA4:
{
    r3 = (r13 + -17256);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_2 = (r3 + r0);
    r28 = MemoryInline::FlatRead32(r3_addr_2);
    r29 = 1;
}

loc_801FCCB8:
{
}

loc_801FCCBC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_801FCD14;
    }
}

loc_801FCCC0:
{
    goto loc_801FCCF8;
}

loc_801FCCC4:
{
    r3 = MemoryInline::FlatRead8((r31 + 2));
}

loc_801FCCCC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801FCCF4;
    }
}

loc_801FCCD0:
{
    r0 = MemoryInline::FlatRead32((r28 + 4));
    MemoryInline::FlatWrite32((r31 + 516), r0);
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x801FE984u>(&func_801FE984)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_801FE984_173C = func_801FE984_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_801FE984_173C;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x801FE984u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_801FCCE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801FD13C;
    }
}

loc_801FCCE8:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    goto loc_801FD13C;
}

loc_801FCCF4:
{
    r28 = (r28 + 8);
}

loc_801FCCF8:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_801FCD00:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_801FCCC4;
    }
}

loc_801FCD04:
{
}

loc_801FCD08:
{
    if ((static_cast<uint32_t>(r29) != static_cast<uint32_t>(1))) {
        goto loc_801FCD14;
    }
}

loc_801FCD0C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 596), static_cast<uint8_t>(r0));
}

loc_801FCD14:
{
    r0 = MemoryInline::FlatRead8((r31 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(15));
}

loc_801FCD1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FCEF4;
    }
}

loc_801FCD20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FCD60;
    }
}

loc_801FCD24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_801FCD28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FCE10;
    }
}

loc_801FCD2C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FCD48;
    }
}

loc_801FCD30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801FCD34:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FCDB0;
    }
}

loc_801FCD38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FD08C;
    }
}

loc_801FCD3C:
{
}

loc_801FCD40:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(1))) {
        goto loc_801FCD90;
    }
}

loc_801FCD44:
{
    goto loc_801FD08C;
}

loc_801FCD48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(9));
}

loc_801FCD4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FCE34;
    }
}

loc_801FCD50:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FD08C;
    }
}

loc_801FCD54:
{
}

loc_801FCD58:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(14))) {
        goto loc_801FCE5C;
    }
}

loc_801FCD5C:
{
    goto loc_801FD08C;
}

loc_801FCD60:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(71));
}

loc_801FCD64:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FCFBC;
    }
}

loc_801FCD68:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FCD84;
    }
}

loc_801FCD6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(48));
}

loc_801FCD70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FCF80;
    }
}

loc_801FCD74:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FD08C;
    }
}

loc_801FCD78:
{
}

loc_801FCD7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(23))) {
        goto loc_801FCF1C;
    }
}

loc_801FCD80:
{
    goto loc_801FD08C;
}

loc_801FCD84:
{
}

loc_801FCD88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(73))) {
        goto loc_801FD024;
    }
}

loc_801FCD8C:
{
    goto loc_801FD08C;
}

loc_801FCD90:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead8((r31 + 4));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_4);
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FCDB0:
{
    r3 = r31;
    ctx->lr = 0x801FCDB8u;
    if constexpr (KnownRegArgsCpuCall<0x8021D790u>(&func_8021D790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8021D790_28C0 = func_8021D790_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8021D790_28C0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8021D790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_801FCDBC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801FCDD0;
    }
}

loc_801FCDC0:
{
    r3 = r31;
    // inline leaf 0x8021D768 (10 guest instruction(s))
}

loc_inl3_0x8021D768:
{
}

loc_inl3_0x8021D76C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x8021D778;
    }
}

loc_inl3_0x8021D770:
{
    r3 = 0;
    goto loc_inl3_cont_8021D768;
}

loc_inl3_0x8021D778:
{
    r0 = MemoryInline::FlatRead8((r3 + 551));
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
}

loc_inl3_cont_8021D768:
{
    // end of inlined leaf 0x8021D768
}

loc_801FCDCC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801FCDE8;
    }
}

loc_801FCDD0:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FCDE8:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 128));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FCE10:
{
    // inline leaf 0x802FF298 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = MemoryInline::FlatRead8((r3 + 18484));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 1);
    // end of inlined leaf 0x802FF298
}

loc_801FCE18:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801FD08C;
    }
}

loc_801FCE1C:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r3 = MemoryInline::FlatRead32((r3 + 44));
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FCE34:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r4 = MemoryInline::FlatRead32((r3 + 12));
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 128));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r4_addr_3 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_3);
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FCE5C:
{
    r3 = r31;
    ctx->lr = 0x801FCE64u;
    if constexpr (KnownRegArgsCpuCall<0x8021D790u>(&func_8021D790)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_8021D790_36F8 = func_8021D790_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8021D790_36F8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8021D790u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_801FCE68:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_801FCE7C;
    }
}

loc_801FCE6C:
{
    r3 = r31;
    // inline leaf 0x8021D768 (10 guest instruction(s))
}

loc_inl5_0x8021D768:
{
}

loc_inl5_0x8021D76C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x8021D778;
    }
}

loc_inl5_0x8021D770:
{
    r3 = 0;
    goto loc_inl5_cont_8021D768;
}

loc_inl5_0x8021D778:
{
    r0 = MemoryInline::FlatRead8((r3 + 551));
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
}

loc_inl5_cont_8021D768:
{
    // end of inlined leaf 0x8021D768
}

loc_801FCE78:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801FCEB0;
    }
}

loc_801FCE7C:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r3 = MemoryInline::FlatRead32((r3 + 52));
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r31 + 516), r0);
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x801FE984u>(&func_801FE984)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_801FE984_3E58 = func_801FE984_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_801FE984_3E58;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x801FE984u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_801FCEA0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801FD13C;
    }
}

loc_801FCEA4:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    goto loc_801FD13C;
}

loc_801FCEB0:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 128));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_2);
    MemoryInline::FlatWrite32((r31 + 516), r0);
    r3 = MemoryInline::FlatRead8((r31 + 2));
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x801FE984u>(&func_801FE984)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_801FE984_43B0 = func_801FE984_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_801FE984_43B0;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x801FE984u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_801FCEE4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801FD13C;
    }
}

loc_801FCEE8:
{
    r0 = 255;
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    goto loc_801FD13C;
}

loc_801FCEF4:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 128));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r4_addr_4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_4);
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FCF1C:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r0 = MemoryInline::FlatRead8((r3 + 85));
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r3 + 112));
}

loc_801FCF34:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801FCF54;
    }
}

loc_801FCF38:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r3 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_5);
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FCF54:
{
    MemoryInline::FlatWrite32((r31 + 516), r4);
    r0 = MemoryInline::FlatRead16((r3 + 116));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r31 + 520), static_cast<uint16_t>(r0));
    r0 = (r0 * 20);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_801FCF70:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801FD13C;
    }
}

loc_801FCF74:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 520), static_cast<uint16_t>(r0));
    goto loc_801FD13C;
}

loc_801FCF80:
{
    // inline leaf 0x802FBA40 (7 guest instruction(s))
    r3 = 0x806B0000u;
    r3 = (r3 + -12348);
    r3 = MemoryInline::FlatRead8((r3 + 351));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_10 & 134217727);
    // end of inlined leaf 0x802FBA40
}

loc_801FCF88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801FCFA4;
    }
}

loc_801FCF8C:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FCFA4:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r3 = MemoryInline::FlatRead32((r3 + 28));
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FCFBC:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_801FCFC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801FCFDC;
    }
}

loc_801FCFC8:
{
}

loc_801FCFCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_801FCFF4;
    }
}

loc_801FCFD0:
{
}

loc_801FCFD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_801FD00C;
    }
}

loc_801FCFD8:
{
    goto loc_801FD13C;
}

loc_801FCFDC:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FCFF4:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FD00C:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FD024:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_801FD02C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_801FD044;
    }
}

loc_801FD030:
{
}

loc_801FD034:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_801FD05C;
    }
}

loc_801FD038:
{
}

loc_801FD03C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_801FD074;
    }
}

loc_801FD040:
{
    goto loc_801FD13C;
}

loc_801FD044:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FD05C:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FD074:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FD08C:
{
    r3 = r31;
    ctx->lr = 0x801FD094u;
    if constexpr (KnownRegArgsCpuCall<0x801FE518u>(&func_801FE518)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_801FE518_5C21 = func_801FE518_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_801FE518_5C21;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x801FE518u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_801FD098:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801FD0D4;
    }
}

loc_801FD09C:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80207F10u>(&func_80207F10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80207F10_5F89 = func_80207F10_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80207F10_5F89);
        r4 = static_cast<uint32_t>(regargs_result_80207F10_5F89 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80207F10u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r4 = 0x806B0000u;
    r0 = (r4 + -12348);
    r4 = (r3 & 255);
    r3 = (r0 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 122));
    MemoryInline::FlatWrite8((r31 + 564), static_cast<uint8_t>(r0));
}

loc_801FD0C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_801FD0D4;
    }
}

loc_801FD0C4:
{
    r3 = r31;
    r5 = 0;
    ctx->lr = 0x801FD0D0u;
    if constexpr (KnownRegArgsCpuCall<0x80208034u>(&func_80208034)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80208034_6401 = func_80208034_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80208034_6401);
        r4 = static_cast<uint32_t>(regargs_result_80208034_6401 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80208034u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    goto loc_801FD13C;
}

loc_801FD0D4:
{
    r3 = r31;
    r4 = 12;
    // inline leaf 0x801FE390 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 80));
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r4 & 255);
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_12 & 134217727);
    // end of inlined leaf 0x801FE390
}

loc_801FD0E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801FD124;
    }
}

loc_801FD0E8:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80208124u>(&func_80208124)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80208124_6CC5 = func_80208124_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80208124_6CC5);
        r4 = static_cast<uint32_t>(regargs_result_80208124_6CC5 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80208124u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r30 = r3;
    r3 = (r3 & 255);
    // inline leaf 0x801E9C84 (14 guest instruction(s))
}

loc_inl8_0x801E9C84:
{
    r5 = 1;
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (r3 & 255);
    r0 = (r0 * 12);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 16185));
}

loc_inl8_0x801E9CA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_inl8_0x801E9CB0;
    }
}

loc_inl8_0x801E9CA4:
{
    r0 = MemoryInline::FlatRead8((r3 + 16184));
}

loc_inl8_0x801E9CAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl8_0x801E9CB4;
    }
}

loc_inl8_0x801E9CB0:
{
    r5 = 0;
}

loc_inl8_0x801E9CB4:
{
    r3 = r5;
}

loc_inl8_cont_801E9C84:
{
    // end of inlined leaf 0x801E9C84
}

loc_801FD100:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801FD124;
    }
}

loc_801FD104:
{
    r3 = 0x806B0000u;
    r3 = (r3 + -13408);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r0 = (r30 & 255);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_6);
    MemoryInline::FlatWrite32((r31 + 516), r0);
    goto loc_801FD13C;
}

loc_801FD124:
{
    r3 = 0x806B0000u;
    r3 = MemoryInline::FlatRead32((r3 + -13408));
    r0 = MemoryInline::FlatRead8((r31 + 2));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & -4);
    r3_addr_7 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_7);
    MemoryInline::FlatWrite32((r31 + 516), r0);
}

loc_801FD13C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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

extern "C" void func_801FCC2C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801FCC2C_ra38_1fc_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFD fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801FCC2C func_801FCC2C preserves=true fpr_mask=0x00000000
