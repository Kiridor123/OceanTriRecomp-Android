#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802745E8(CpuContext* ctx);
extern "C" uint32_t func_802745E8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80427B6C(CpuContext* ctx);
extern "C" uint32_t func_80427B6C_ra0_0_8_0(CpuContext*);
extern "C" void func_8056CDD8(CpuContext* ctx);
extern "C" uint64_t func_8056CDD8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8044CD8C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8044CD8C;

loc_8044CD8C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x8044CDA0u;
    if constexpr (KnownRegArgsCpuCall<0x80427B6Cu>(&func_80427B6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_80427B6C_96B = func_80427B6C_ra0_0_8_0(ctx);
        r3 = regargs_result_80427B6C_96B;
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
        InvokeDirectCpu<0x80427B6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_8044CDA4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8044CDBC;
    }
}

loc_8044CDA8:
{
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_8044CDB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8044CDBC;
    }
}

loc_8044CDB4:
{
    r3 = 0;
    goto loc_8044CF5C;
}

loc_8044CDBC:
{
    r3 = 0;
    // inline leaf 0x800582D4 (6 guest instruction(s))
    r4 = 0x80670000u;
    r4 = (r4 + -12024);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x800582D4
}

loc_8044CDC8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_8044CDD4;
    }
}

loc_8044CDCC:
{
    r3 = 0;
    goto loc_8044CF5C;
}

loc_8044CDD4:
{
    // inline leaf 0x8045169C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16440));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (r3 + -7);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    // end of inlined leaf 0x8045169C
}

loc_8044CDDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8044CDF8;
    }
}

loc_8044CDE0:
{
    // inline leaf 0x80453830 (13 guest instruction(s))
}

loc_inl3_0x80453830:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl3_0x80453838:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x80453844;
    }
}

loc_inl3_0x8045383C:
{
    r3 = 0;
    goto loc_inl3_cont_80453830;
}

loc_inl3_0x80453844:
{
    r0 = MemoryInline::FlatRead8((r3 + 23));
}

loc_inl3_0x8045384C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(50))) {
        goto loc_inl3_0x80453858;
    }
}

loc_inl3_0x80453850:
{
    r3 = 0;
    goto loc_inl3_cont_80453830;
}

loc_inl3_0x80453858:
{
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead8((r3 + -16595));
}

loc_inl3_cont_80453830:
{
    // end of inlined leaf 0x80453830
    r0 = (r3 & 255);
}

loc_8044CDEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044CDF8;
    }
}

loc_8044CDF0:
{
    r3 = 0;
    goto loc_8044CF5C;
}

loc_8044CDF8:
{
    // inline leaf 0x804538B0 (12 guest instruction(s))
}

loc_inl4_0x804538B0:
{
    r3 = MemoryInline::FlatRead32((r13 + -16440));
}

loc_inl4_0x804538B8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x804538C4;
    }
}

loc_inl4_0x804538BC:
{
    r3 = 0;
    goto loc_inl4_cont_804538B0;
}

loc_inl4_0x804538C4:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead8((r3 + -15783));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
}

loc_inl4_cont_804538B0:
{
    // end of inlined leaf 0x804538B0
    r0 = (r3 & 255);
}

loc_8044CE04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044CE10;
    }
}

loc_8044CE08:
{
    r3 = 0;
    goto loc_8044CF5C;
}

loc_8044CE10:
{
    r3 = MemoryInline::FlatRead32((r13 + -16528));
    r0 = MemoryInline::FlatRead8((r3 + 9));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16528));
    r4 = MemoryInline::FlatRead8((r3 + 5));
}

loc_8044CE2C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(2))) {
        goto loc_8044CE80;
    }
}

loc_8044CE30:
{
    r5 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r5 + 198);
    r0 = (r0 & 255);
}

loc_8044CE40:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(11))) {
        goto loc_8044CE80;
    }
}

loc_8044CE44:
{
    r0 = (r5 + -58);
    r0 = (r0 & 255);
    r3 = 0x80610000u;
    r3 = (r3 + -5584);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
    r0 = (r3 + 1);
    r3 = (r0 & 255);
    ctx->lr = 0x8044CE64u;
    if constexpr (KnownRegArgsCpuCall<0x802745E8u>(&func_802745E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        const auto regargs_result_802745E8_1ED4 = func_802745E8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802745E8_1ED4;
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
        InvokeDirectCpu<0x802745E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r3 = 55;
    ctx->lr = 0x8044CE6Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_800DBC94_2249 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_2249);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_2249 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r13 + -16528));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r3 = 0;
    goto loc_8044CF5C;
}

loc_8044CE80:
{
    r0 = (r4 & 5);
}

loc_8044CE84:
{
}

loc_8044CE88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8044CE94;
    }
}

loc_8044CE8C:
{
    r3 = 1;
    goto loc_8044CF5C;
}

loc_8044CE94:
{
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8044CE9C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(70))) {
        goto loc_8044CEC0;
    }
}

loc_8044CEA0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(41));
}

loc_8044CEA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8044CEEC;
    }
}

loc_8044CEA8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044CF0C;
    }
}

loc_8044CEAC:
{
}

loc_8044CEB0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(4))) {
        goto loc_8044CF0C;
    }
}

loc_8044CEB4:
{
}

loc_8044CEB8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(1))) {
        goto loc_8044CEF4;
    }
}

loc_8044CEBC:
{
    goto loc_8044CEE4;
}

loc_8044CEC0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(83));
}

loc_8044CEC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8044CEFC;
    }
}

loc_8044CEC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8044CED8;
    }
}

loc_8044CECC:
{
}

loc_8044CED0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(73))) {
        goto loc_8044CF0C;
    }
}

loc_8044CED4:
{
    goto loc_8044CF04;
}

loc_8044CED8:
{
}

loc_8044CEDC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(101))) {
        goto loc_8044CF04;
    }
}

loc_8044CEE0:
{
    goto loc_8044CF0C;
}

loc_8044CEE4:
{
    r3 = 0;
    goto loc_8044CF5C;
}

loc_8044CEEC:
{
    r3 = 0;
    goto loc_8044CF5C;
}

loc_8044CEF4:
{
    r3 = 0;
    goto loc_8044CF5C;
}

loc_8044CEFC:
{
    r3 = 0;
    goto loc_8044CF5C;
}

loc_8044CF04:
{
    r3 = 0;
    goto loc_8044CF5C;
}

loc_8044CF0C:
{
    // inline leaf 0x80448B40 (3 guest instruction(s))
    r3 = 0x80790000u;
    r3 = (r3 + 12836);
    // end of inlined leaf 0x80448B40
    r31 = r3;
    ctx->lr = 0x8044CF18u;
    if constexpr (KnownRegArgsCpuCall<0x8056CDD8u>(&func_8056CDD8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8056CDD8_3371 = func_8056CDD8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8056CDD8_3371);
        r4 = static_cast<uint32_t>(regargs_result_8056CDD8_3371 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8056CDD8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = MemoryInline::FlatRead32((r13 + -16588));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 112));
    ctr = r12;
    ctx->lr = 0x8044CF2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r31;
    r5 = MemoryInline::FlatRead8((r13 + -16594));
    r6 = 1;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8044CF48u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -16594), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r13 + -16589), static_cast<uint8_t>(r0));
    r3 = 1;
}

loc_8044CF5C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8044CD8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8044CD8C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8044CD8C func_8044CD8C preserves=true fpr_mask=0x00000000
