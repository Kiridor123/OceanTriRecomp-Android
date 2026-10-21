#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802CBDE8(CpuContext* ctx);
extern "C" uint64_t func_802CBDE8_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_802CC358(CpuContext* ctx);
extern "C" uint64_t func_802CC358_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802CC5E0(CpuContext* ctx);
extern "C" uint64_t func_802CC5E0_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_802CC7F8(CpuContext* ctx);
extern "C" uint64_t func_802CC7F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802CCDF4(CpuContext* ctx);
extern "C" uint32_t func_802CCDF4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802CCE7C(CpuContext* ctx);
extern "C" uint64_t func_802CCE7C_ra38_ce_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_802CD03C(CpuContext* ctx);
extern "C" uint64_t func_802CD03C_ra8_10_18_0(CpuContext*, uint32_t, double);
extern "C" void func_802CD0B0(CpuContext* ctx);
extern "C" uint64_t func_802CD0B0_ra38_ce_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_802CD344(CpuContext* ctx);
extern "C" uint64_t func_802CD344_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802CD3AC(CpuContext* ctx);
extern "C" uint64_t func_802CD3AC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802CD5EC(CpuContext* ctx);
extern "C" uint64_t func_802CD5EC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802CD760(CpuContext* ctx);
extern "C" uint32_t func_802CD760_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802CDB1C(CpuContext* ctx);
extern "C" uint64_t func_802CDB1C_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802D7AD8(CpuContext* ctx);
extern "C" uint32_t func_802D7AD8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_802D7AD8_statefree(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802CDB74_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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

    MKW_GUEST_ENTER(0x802CDB74u);
    goto loc_802CDB74;

loc_802CDB74:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 1088));
}

loc_802CDB90:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802CDBA0;
    }
}

loc_802CDB94:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 460), static_cast<uint8_t>(r0));
    goto loc_802CDD74;
}

loc_802CDBA0:
{
    ctx->lr = 0x802CDBA4u;
    if constexpr (KnownRegArgsCpuCall<0x802CD0B0u>(&func_802CD0B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[8] = f8;
        const auto regargs_result_802CD0B0_FBF = func_802CD0B0_ra38_ce_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_802CD0B0_FBF);
        r4 = static_cast<uint32_t>(regargs_result_802CD0B0_FBF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802CD0B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802CDBA8:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802CDD74;
    }
}

loc_802CDBAC:
{
    r0 = MemoryInline::FlatRead8((r31 + 461));
}

loc_802CDBB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802CDD74;
    }
}

loc_802CDBB8:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x802CDB1Cu>(&func_802CDB1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_802CDB1C_1736 = func_802CDB1C_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_802CDB1C_1736);
        r4 = static_cast<uint32_t>(regargs_result_802CDB1C_1736 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802CDB1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        xer = ctx->xer;
    }
}

loc_802CDBC4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CDBD4;
    }
}

loc_802CDBC8:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    goto loc_802CDD74;
}

loc_802CDBD4:
{
    r3 = r31;
    ctx->lr = 0x802CDBDCu;
    if constexpr (KnownRegArgsCpuCall<0x802CD5ECu>(&func_802CD5EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802CD5EC_1C19 = func_802CD5EC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802CD5EC_1C19);
        r4 = static_cast<uint32_t>(regargs_result_802CD5EC_1C19 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802CD5ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802CDBE0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CDBF0;
    }
}

loc_802CDBE4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    goto loc_802CDD74;
}

loc_802CDBF0:
{
    r3 = r31;
    ctx->lr = 0x802CDBF8u;
    if constexpr (KnownRegArgsCpuCall<0x802CCDF4u>(&func_802CCDF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802CCDF4_2337 = func_802CCDF4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802CCDF4_2337;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802CCDF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_802CDBFC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CDC2C;
    }
}

loc_802CDC00:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x802CDC0Cu;
    if constexpr (KnownRegArgsCpuCall<0x802CCE7Cu>(&func_802CCE7C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[8] = f8;
        const auto regargs_result_802CCE7C_2677 = func_802CCE7C_ra38_ce_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f6.d, f7.d);
        r3 = static_cast<uint32_t>(regargs_result_802CCE7C_2677);
        r4 = static_cast<uint32_t>(regargs_result_802CCE7C_2677 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802CCE7Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802CDC10:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CDC20;
    }
}

loc_802CDC14:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    goto loc_802CDD74;
}

loc_802CDC20:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    goto loc_802CDD74;
}

loc_802CDC2C:
{
    r3 = r31;
    ctx->lr = 0x802CDC34u;
    if constexpr (KnownRegArgsCpuCall<0x802CD760u>(&func_802CD760)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802CD760_2DFD = func_802CD760_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802CD760_2DFD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802CD760u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
    }
}

loc_802CDC38:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CDC48;
    }
}

loc_802CDC3C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    goto loc_802CDD74;
}

loc_802CDC48:
{
    r3 = r31;
    // inline leaf 0x802CD7C0 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1128));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x802CD7C0
}

loc_802CDC54:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CDC64;
    }
}

loc_802CDC58:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    goto loc_802CDD74;
}

loc_802CDC64:
{
    r0 = MemoryInline::FlatRead8((r31 + 843));
}

loc_802CDC6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802CDC7C;
    }
}

loc_802CDC70:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    goto loc_802CDD74;
}

loc_802CDC7C:
{
    r3 = r31;
    ctx->lr = 0x802CDC84u;
    if constexpr (KnownRegArgsCpuCall<0x802CD344u>(&func_802CD344)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802CD344_34C6 = func_802CD344_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802CD344_34C6);
        r4 = static_cast<uint32_t>(regargs_result_802CD344_34C6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802CD344u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802CDC88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CDC98;
    }
}

loc_802CDC8C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    goto loc_802CDD74;
}

loc_802CDC98:
{
    r3 = r31;
    ctx->lr = 0x802CDCA0u;
    if constexpr (KnownRegArgsCpuCall<0x802CBDE8u>(&func_802CBDE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802CBDE8_38F0 = func_802CBDE8_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802CBDE8_38F0);
        r4 = static_cast<uint32_t>(regargs_result_802CBDE8_38F0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802CBDE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802CDCA4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CDCBC;
    }
}

loc_802CDCA8:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    r3 = r31;
    ctx->lr = 0x802CDCB8u;
    if constexpr (KnownRegArgsCpuCall<0x802CD03Cu>(&func_802CD03C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_802CD03C_3E52 = func_802CD03C_ra8_10_18_0(ctx, r3, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802CD03C_3E52);
        r4 = static_cast<uint32_t>(regargs_result_802CD03C_3E52 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
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
        InvokeDirectCpu<0x802CD03Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    goto loc_802CDD74;
}

loc_802CDCBC:
{
    r3 = r31;
    // inline leaf 0x802CC14C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1105));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x802CC14C
}

loc_802CDCC8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CDCD8;
    }
}

loc_802CDCCC:
{
    r0 = 9;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    goto loc_802CDD74;
}

loc_802CDCD8:
{
    r0 = MemoryInline::FlatRead8((r31 + 856));
}

loc_802CDCE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CDD1C;
    }
}

loc_802CDCE4:
{
    r0 = MemoryInline::FlatRead8((r31 + 860));
}

loc_802CDCEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802CDD1C;
    }
}

loc_802CDCF0:
{
    r3 = r31;
    ctx->lr = 0x802CDCF8u;
    if constexpr (KnownRegArgsCpuCall<0x802CC5E0u>(&func_802CC5E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802CC5E0_46C7 = func_802CC5E0_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802CC5E0_46C7);
        r4 = static_cast<uint32_t>(regargs_result_802CC5E0_46C7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802CC5E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
}

loc_802CDCFC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CDD0C;
    }
}

loc_802CDD00:
{
    r3 = r31;
    ctx->lr = 0x802CDD08u;
    if constexpr (KnownRegArgsCpuCall<0x802CC7F8u>(&func_802CC7F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802CC7F8_4B40 = func_802CC7F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802CC7F8_4B40);
        r4 = static_cast<uint32_t>(regargs_result_802CC7F8_4B40 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802CC7F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_802CDD1C;
}

loc_802CDD0C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    r3 = r31;
    // inline leaf 0x802D429C (4 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 886), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 888), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802D429C
}

loc_802CDD1C:
{
    r3 = r31;
    ctx->lr = 0x802CDD24u;
    if constexpr (KnownRegArgsCpuCall<0x802CD3ACu>(&func_802CD3AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802CD3AC_52E6 = func_802CD3AC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802CD3AC_52E6);
        r4 = static_cast<uint32_t>(regargs_result_802CD3AC_52E6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802CD3ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802CDD28:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CDD38;
    }
}

loc_802CDD2C:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    goto loc_802CDD74;
}

loc_802CDD38:
{
    r3 = r31;
    ctx->lr = 0x802CDD40u;
    if constexpr (KnownRegArgsCpuCall<0x802CC358u>(&func_802CC358)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802CC358_5A04 = func_802CC358_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802CC358_5A04);
        r4 = static_cast<uint32_t>(regargs_result_802CC358_5A04 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x802CC358u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802CDD44:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CDD54;
    }
}

loc_802CDD48:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    goto loc_802CDD74;
}

loc_802CDD54:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802D7AD8u) && KnownTranslatedCpuCall<0x802D7AD8u>::kAvailable && !KnownTranslatedCpuCall<0x802D7AD8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802D7AD8u>()) {
        const auto state_free_result_802D7AD8_6183 = func_802D7AD8_statefree(r3, cr, xer);
        r0 = static_cast<uint32_t>(state_free_result_802D7AD8_6183[0]);
        r3 = static_cast<uint32_t>(state_free_result_802D7AD8_6183[1]);
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
        InvokeDirectCpu<0x802D7AD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_802CDD60:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CDD74;
    }
}

loc_802CDD64:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 460), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 1088), static_cast<uint8_t>(r0));
}

loc_802CDD74:
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802CDB74(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802CDB74_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802CDB74 func_802CDB74 preserves=true fpr_mask=0x00000000
