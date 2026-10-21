#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CEB14(CpuContext* ctx);
extern "C" uint64_t func_800CEB14_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80268550(CpuContext* ctx);
extern "C" uint64_t func_80268550_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80268668(CpuContext* ctx);
extern "C" uint64_t func_80268668_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80268ED4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lhax_8026904C_loc_0 = 0;
    uint32_t addr_lhax_802690F8_loc_0 = 0;
    uint32_t addr_lhax_8026910C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;
    uint32_t r29_rot_3 = 0;
    uint32_t r29_rot_4 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x80268ED4u);
    goto loc_80268ED4;

loc_80268ED4:
{
    MemoryInline::FlatWriteRam32((r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 308), r0);
    r30 = r4;
    r31 = r5;
    r9 = MemoryInline::FlatRead32((r13 + -17144));
}

loc_80268F00:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80269150;
    }
}

loc_80268F04:
{
    r6 = (r5 & 255);
    r10_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r10 = (r10_rot_1 & -4);
    r8 = (r9 + r10);
    r0 = MemoryInline::FlatRead32((r8 + 512));
}

loc_80268F18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80269150;
    }
}

loc_80268F1C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(7));
}

loc_80268F20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80268F40;
    }
}

loc_80268F24:
{
    r0 = MemoryInline::FlatRead32((r9 + 544));
}

loc_80268F2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80269150;
    }
}

loc_80268F30:
{
    r0 = MemoryInline::FlatRead32((r9 + 548));
}

loc_80268F38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80268F98;
    }
}

loc_80268F3C:
{
    goto loc_80269150;
}

loc_80268F40:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80268F98;
    }
}

loc_80268F44:
{
    r0 = MemoryInline::FlatRead32((r9 + 540));
}

loc_80268F4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80268F60;
    }
}

loc_80268F50:
{
    r6 = MemoryInline::FlatRead8((r4 + 7));
    r0 = (r6 + -4);
}

loc_80268F5C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80269150;
    }
}

loc_80268F60:
{
    r0 = MemoryInline::FlatRead32((r9 + 544));
}

loc_80268F68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80268F7C;
    }
}

loc_80268F6C:
{
    r6 = MemoryInline::FlatRead8((r4 + 8));
    r0 = (r6 + -4);
}

loc_80268F78:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80269150;
    }
}

loc_80268F7C:
{
    r0 = MemoryInline::FlatRead32((r9 + 548));
}

loc_80268F84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_80268F98;
    }
}

loc_80268F88:
{
    r6 = MemoryInline::FlatRead8((r4 + 9));
    r0 = (r6 + -4);
}

loc_80268F94:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80269150;
    }
}

loc_80268F98:
{
    r7 = (r4 + r10);
    r0 = MemoryInline::FlatRead32((r7 + 24));
}

loc_80268FA4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80268FB8;
    }
}

loc_80268FA8:
{
    r3 = 3;
    r0 = (r5 & 255);
    r4_addr_1 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_1, static_cast<uint8_t>(r3));
    goto loc_80269150;
}

loc_80268FB8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r8 + 512), r0);
    r0 = MemoryInline::FlatRead32((r7 + 244));
}

loc_80268FC8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80268FD4;
    }
}

loc_80268FCC:
{
    r8 = MemoryInline::FlatRead8((r3 + 8));
    goto loc_80268FD8;
}

loc_80268FD4:
{
    r8 = MemoryInline::FlatRead32((r9 + 556));
}

loc_80268FD8:
{
    r0 = (r8 * 44);
    r6 = (r9 + r0);
    r6 = (r6 + 28);
    r6_addr_1 = (r6 + r10);
    r28 = MemoryInline::FlatRead32(r6_addr_1);
}

loc_80268FEC:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(0))) {
        goto loc_80269150;
    }
}

loc_80268FF0:
{
    r6 = (r4 + r10);
    MemoryInline::FlatWrite32((r6 + 68), r28);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r0 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = (r5 & 255);
    MemoryInline::FlatWriteRam32((r1 + 16), r4);
    MemoryInline::FlatWriteRam32((r1 + 20), r8);
}

loc_80269014:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(7))) {
        goto loc_80269064;
    }
}

loc_80269018:
{
    r3 = MemoryInline::FlatRead8((r3 + 20));
    r5 = MemoryInline::FlatRead32((r7 + 24));
    ctx->lr = 0x80269024u;
    if constexpr (KnownRegArgsCpuCall<0x80268550u>(&func_80268550)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_80268550_1BA1 = func_80268550_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80268550_1BA1);
        r4 = static_cast<uint32_t>(regargs_result_80268550_1BA1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80268550u>(ctx);
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
    r4 = r3;
    r3 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_23B8 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_23B8;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = r28;
    // inline leaf 0x800D5168 (13 guest instruction(s))
}

loc_inl0_0x800D5168:
{
}

loc_inl0_0x800D516C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl0_0x800D5178;
    }
}

loc_inl0_0x800D5170:
{
    r3 = 0;
    goto loc_inl0_cont_800D5168;
}

loc_inl0_0x800D5178:
{
}

loc_inl0_0x800D517C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1024))) {
        goto loc_inl0_0x800D5188;
    }
}

loc_inl0_0x800D5180:
{
    r3 = 0;
    goto loc_inl0_cont_800D5168;
}

loc_inl0_0x800D5188:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r0 = (r3 * 76);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12400));
}

loc_inl0_cont_800D5168:
{
    // end of inlined leaf 0x800D5168
    r28 = r3;
    r0 = (r31 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4 = 0x805C0000u;
    r4 = (r4 + 26136);
    addr_lhax_8026904C_loc_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_8026904C_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r29 = (r0 * 10240);
    r4 = 0;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_80269124;
}

loc_80269064:
{
    r6 = MemoryInline::FlatRead32((r7 + 24));
    r0 = (r6 & -16777216);
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r29 = (r29_rot_1 & 255);
    r3 = (r4 + -7);
    r0 = (r29 + -4);
}

loc_8026907C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_802690BC;
    }
}

loc_80269080:
{
}

loc_80269084:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(1))) {
        goto loc_80269094;
    }
}

loc_80269088:
{
}

loc_8026908C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(3))) {
        goto loc_802690A8;
    }
}

loc_80269090:
{
    goto loc_802690CC;
}

loc_80269094:
{
}

loc_80269098:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802690A0;
    }
}

loc_8026909C:
{
    goto loc_802690CC;
}

loc_802690A0:
{
    r29 = 9;
    goto loc_802690CC;
}

loc_802690A8:
{
}

loc_802690AC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802690B4;
    }
}

loc_802690B0:
{
    goto loc_802690CC;
}

loc_802690B4:
{
    r29 = 10;
    goto loc_802690CC;
}

loc_802690BC:
{
}

loc_802690C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802690C8;
    }
}

loc_802690C4:
{
    goto loc_802690CC;
}

loc_802690C8:
{
    r29 = (r3 + 10);
}

loc_802690CC:
{
    r3 = (r5 & 255);
    r4 = r6;
    ctx->lr = 0x802690D8u;
    if constexpr (KnownRegArgsCpuCall<0x80268668u>(&func_80268668)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->cr = cr;
        const auto regargs_result_80268668_32D9 = func_80268668_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80268668_32D9);
        r4 = static_cast<uint32_t>(regargs_result_80268668_32D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80268668u>(ctx);
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
    r4 = r3;
    r3 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_8045FBD4_3AF0 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_3AF0;
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r29_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r29 = (r29_rot_2 & -2);
    r3 = r28;
    // inline leaf 0x800D5168 (13 guest instruction(s))
}

loc_inl1_0x800D5168:
{
}

loc_inl1_0x800D516C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_inl1_0x800D5178;
    }
}

loc_inl1_0x800D5170:
{
    r3 = 0;
    goto loc_inl1_cont_800D5168;
}

loc_inl1_0x800D5178:
{
}

loc_inl1_0x800D517C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1024))) {
        goto loc_inl1_0x800D5188;
    }
}

loc_inl1_0x800D5180:
{
    r3 = 0;
    goto loc_inl1_cont_800D5168;
}

loc_inl1_0x800D5188:
{
    r4 = MemoryInline::FlatRead32((r13 + -17584));
    r0 = (r3 * 76);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 12400));
}

loc_inl1_cont_800D5168:
{
    // end of inlined leaf 0x800D5168
    r4 = 0x805C0000u;
    r4 = (r4 + 26180);
    addr_lhax_802690F8_loc_0 = (r4 + r29);
    r0 = MemoryInline::FlatRead16(addr_lhax_802690F8_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 20480);
    r28 = (r0 + r3);
    r3 = 0x805C0000u;
    r3 = (r3 + 26152);
    addr_lhax_8026910C_loc_0 = (r3 + r29);
    r0 = MemoryInline::FlatRead16(addr_lhax_8026910C_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r29 = (r0 * 20480);
    r3 = r28;
    r4 = 0;
    r5 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80269124:
{
    r3 = (r1 + 24);
    r4 = r28;
    r5 = r29;
    r6 = 0x80270000u;
    r6 = (r6 + -29012);
    r7 = 4;
    r8 = (r1 + 8);
    ctx->lr = 0x80269144u;
    if constexpr (KnownRegArgsCpuCall<0x800CEB14u>(&func_800CEB14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->cr = cr;
        const auto regargs_result_800CEB14_45B7 = func_800CEB14_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800CEB14_45B7);
        r4 = static_cast<uint32_t>(regargs_result_800CEB14_45B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        InvokeDirectCpu<0x800CEB14u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = 4;
    r0 = (r31 & 255);
    r30_addr_1 = (r30 + r0);
    MemoryInline::FlatWrite8(r30_addr_1, static_cast<uint8_t>(r3));
}

loc_80269150:
{
    r0 = MemoryInline::FlatRead32((r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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

extern "C" void func_80268ED4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80268ED4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80268ED4 func_80268ED4 preserves=true fpr_mask=0x00000000
