#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456D8C(CpuContext* ctx);
extern "C" uint64_t func_80456D8C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80457C1C(CpuContext* ctx);
extern "C" uint64_t func_80457C1C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80457DCC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80457DCCu);
    goto loc_80457DCC;

loc_80457DCC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
}

loc_80457DE4:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
}

loc_80457DEC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80457DFC;
    }
}

loc_80457DF0:
{
    r5 = MemoryInline::FlatRead8(r4);
    r0 = (r5 & 128);
}

loc_80457DF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80457E6C;
    }
}

loc_80457DFC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead32((r31 + 24));
    r3 = MemoryInline::FlatRead16(r3);
    r30 = MemoryInline::FlatRead32(r4);
    r0 = (static_cast<int32_t>(r3) >> 11);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80457E24;
    }
}

loc_80457E14:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & 248);
    r3 = (r30 - r0);
    r0 = MemoryInline::FlatRead32((r3 + -4));
    MemoryInline::FlatWrite32((r31 + 32), r0);
}

loc_80457E24:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = r31;
    ctx->lr = 0x80457E30u;
    if constexpr (KnownRegArgsCpuCall<0x80457C1Cu>(&func_80457C1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80457C1C_C05 = func_80457C1C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80457C1C_C05);
        r4 = static_cast<uint32_t>(regargs_result_80457C1C_C05 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80457C1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80457E38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80457E40;
    }
}

loc_80457E3C:
{
    ctx->lr = 0x80457E40u;
    if constexpr (KnownRegArgsCpuCall<0x80456D8Cu>(&func_80456D8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80456D8C_101F = func_80456D8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80456D8C_101F);
        r4 = static_cast<uint32_t>(regargs_result_80456D8C_101F >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80456D8Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_80457E40:
{
    MemoryInline::FlatWrite32((r31 + 24), r30);
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16(r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_7 & 1);
}

loc_80457E50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80457E58;
    }
}

loc_80457E54:
{
    r30 = MemoryInline::FlatRead32((r31 + 32));
}

loc_80457E58:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    MemoryInline::FlatWrite32((r31 + 28), r30);
}

loc_80457E64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80457DE4;
    }
}

loc_80457E68:
{
    goto loc_80457F38;
}

loc_80457E6C:
{
}

loc_80457E70:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(16))) {
        goto loc_80457F34;
    }
}

loc_80457E74:
{
    r3 = 0x80610000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + -3744);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80457F34u:
        goto loc_80457F34;
        break;
    case 0x80457E8Cu:
        goto loc_80457E8C;
        break;
    case 0x80457E98u:
        goto loc_80457E98;
        break;
    case 0x80457EA4u:
        goto loc_80457EA4;
        break;
    case 0x80457EB0u:
        goto loc_80457EB0;
        break;
    case 0x80457EBCu:
        goto loc_80457EBC;
        break;
    case 0x80457EC8u:
        goto loc_80457EC8;
        break;
    case 0x80457ED4u:
        goto loc_80457ED4;
        break;
    case 0x80457EE0u:
        goto loc_80457EE0;
        break;
    case 0x80457EECu:
        goto loc_80457EEC;
        break;
    case 0x80457EF8u:
        goto loc_80457EF8;
        break;
    case 0x80457F10u:
        goto loc_80457F10;
        break;
    case 0x80457F1Cu:
        goto loc_80457F1C;
        break;
    case 0x80457F04u:
        goto loc_80457F04;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80457E8C:
{
    r0 = (r4 + 8);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80457F38;
}

loc_80457E98:
{
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80457F38;
}

loc_80457EA4:
{
    r0 = (r4 + 8);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80457F38;
}

loc_80457EB0:
{
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80457F38;
}

loc_80457EBC:
{
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80457F38;
}

loc_80457EC8:
{
    r0 = (r4 + 16);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80457F38;
}

loc_80457ED4:
{
    r0 = (r4 + 20);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80457F38;
}

loc_80457EE0:
{
    r0 = (r4 + 8);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80457F38;
}

loc_80457EEC:
{
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80457F38;
}

loc_80457EF8:
{
    r0 = (r4 + 12);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80457F38;
}

loc_80457F04:
{
    r0 = (r4 + 16);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80457F38;
}

loc_80457F10:
{
    r0 = (r4 + 4);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80457F38;
}

loc_80457F1C:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r0 + r4);
    r0 = (r3 + 12);
    MemoryInline::FlatWrite32((r31 + 8), r0);
    goto loc_80457F38;
}

loc_80457F34:
{
    ctx->lr = 0x80457F38u;
    if constexpr (KnownRegArgsCpuCall<0x80456D8Cu>(&func_80456D8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_80456D8C_265C = func_80456D8C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80456D8C_265C);
        r4 = static_cast<uint32_t>(regargs_result_80456D8C_265C >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80456D8Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
}

loc_80457F38:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r0 = MemoryInline::FlatRead8(r4);
    r3 = (r0 & 127);
}

loc_80457F48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80457F64;
    }
}

loc_80457F4C:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r31 + 8), r3);
    r0 = MemoryInline::FlatRead8(r3);
    r3 = (r0 & 127);
}

loc_80457F64:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80457DCC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80457DCC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80457DCC func_80457DCC preserves=true fpr_mask=0x00000000
