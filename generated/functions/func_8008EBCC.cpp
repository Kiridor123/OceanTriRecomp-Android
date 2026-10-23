#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8008C4E8(CpuContext* ctx);
extern "C" uint32_t func_8008C4E8_ra58_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8008EBCC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_8008EBCC;

loc_8008EBCC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8008EC0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EC24;
    }
}

loc_8008EC10:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8008EC1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EC24;
    }
}

loc_8008EC20:
{
    r10 = 0;
}

loc_8008EC24:
{
}

loc_8008EC28:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8008EC40;
    }
}

loc_8008EC2C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8008EC38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EC40;
    }
}

loc_8008EC3C:
{
    r9 = 0;
}

loc_8008EC40:
{
}

loc_8008EC44:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008EC58;
    }
}

loc_8008EC48:
{
    r0 = (r11 + 1073741824);
}

loc_8008EC50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EC58;
    }
}

loc_8008EC54:
{
    r8 = 0;
}

loc_8008EC58:
{
}

loc_8008EC5C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008EC74;
    }
}

loc_8008EC60:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8008EC6C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EC74;
    }
}

loc_8008EC70:
{
    r7 = 0;
}

loc_8008EC74:
{
}

loc_8008EC78:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008EC90;
    }
}

loc_8008EC7C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8008EC88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EC90;
    }
}

loc_8008EC8C:
{
    r6 = 0;
}

loc_8008EC90:
{
}

loc_8008EC94:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008ECAC;
    }
}

loc_8008EC98:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008ECA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008ECAC;
    }
}

loc_8008ECA8:
{
    r5 = 0;
}

loc_8008ECAC:
{
}

loc_8008ECB0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008ECD4;
    }
}

loc_8008ECB4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1434;
    r5 = 0x80590000u;
    r5 = (r5 + 2496);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008ECD4u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_8008ECD4:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8008ECF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008ED10;
    }
}

loc_8008ECFC:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8008ED08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008ED10;
    }
}

loc_8008ED0C:
{
    r9 = 0;
}

loc_8008ED10:
{
}

loc_8008ED14:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008ED2C;
    }
}

loc_8008ED18:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8008ED24:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008ED2C;
    }
}

loc_8008ED28:
{
    r8 = 0;
}

loc_8008ED2C:
{
}

loc_8008ED30:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008ED44;
    }
}

loc_8008ED34:
{
    r0 = (r10 + 1073741824);
}

loc_8008ED3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008ED44;
    }
}

loc_8008ED40:
{
    r7 = 0;
}

loc_8008ED44:
{
}

loc_8008ED48:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008ED60;
    }
}

loc_8008ED4C:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8008ED58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008ED60;
    }
}

loc_8008ED5C:
{
    r6 = 0;
}

loc_8008ED60:
{
}

loc_8008ED64:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008ED7C;
    }
}

loc_8008ED68:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8008ED74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008ED7C;
    }
}

loc_8008ED78:
{
    r5 = 0;
}

loc_8008ED7C:
{
}

loc_8008ED80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008ED98;
    }
}

loc_8008ED84:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008ED90:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008ED98;
    }
}

loc_8008ED94:
{
    r4 = 0;
}

loc_8008ED98:
{
}

loc_8008ED9C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8008EDC0;
    }
}

loc_8008EDA0:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1435;
    r5 = 0x80590000u;
    r5 = (r5 + 2780);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008EDC0u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_8008EDC0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31696));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008EDCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008EE4C;
    }
}

loc_8008EDD0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008EDD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008EE4C;
    }
}

loc_8008EDDC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008EDE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008EE4C;
    }
}

loc_8008EDE8:
{
    r4 = 32;
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r3 & 64);
}

loc_8008EDF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008EE10;
    }
}

loc_8008EDFC:
{
    r4 = (r4 | 4);
    r0 = (r3 & 8);
}

loc_8008EE08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008EE10;
    }
}

loc_8008EE0C:
{
    r4 = (r4 | 2);
}

loc_8008EE10:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32(r30, r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31672));
    MemoryInline::FlatWriteFloat32((r30 + 28), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31696));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 44), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 48), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 52), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 64), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 68), f1.d);
    goto loc_8008EEA8;
}

loc_8008EE4C:
{
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 72));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r30 + 28);
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 8));
    if constexpr (KnownRegArgsCpuCall<0x8008C4E8u>(&func_8008C4E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_8008C4E8_2AAB = func_8008C4E8_ra58_1fe_10_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_8008C4E8_2AAB;
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
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8008C4E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 72), f0.d);
    r3 = (r30 + 16);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32(r30);
    r0 = -39;
    r0 = (r3 & r0);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_8008EEA8:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32(r30, r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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

extern "C" void func_8008EBCC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8008EBCC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x000003FF fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008EBCC func_8008EBCC preserves=true fpr_mask=0x00000000
