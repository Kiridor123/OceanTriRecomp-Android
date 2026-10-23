#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80467F98(CpuContext* ctx);
extern "C" uint64_t func_80467F98_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_804B7EA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;

    goto loc_804B7EA0;

loc_804B7EA0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2424));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804B7EB4:
{
    r31 = r4;
    r30 = r3;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B7ED8;
    }
}

loc_804B7ECC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2420));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804B7ED4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804B7EDC;
    }
}

loc_804B7ED8:
{
    r31 = 0;
}

loc_804B7EDC:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2416));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2412));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->lr = 0x804B7EF0u;
    if constexpr (KnownRegArgsCpuCall<0x80467F98u>(&func_80467F98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80467F98_8D1 = func_80467F98_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80467F98_8D1);
        r4 = static_cast<uint32_t>(regargs_result_80467F98_8D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80467F98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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

loc_804B7EF4:
{
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(1))) {
        goto loc_804B7F28;
    }
}

loc_804B7EFC:
{
}

loc_804B7F00:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(2))) {
        goto loc_804B7F3C;
    }
}

loc_804B7F04:
{
}

loc_804B7F08:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(3))) {
        goto loc_804B7F58;
    }
}

loc_804B7F0C:
{
}

loc_804B7F10:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(4))) {
        goto loc_804B7F74;
    }
}

loc_804B7F14:
{
}

loc_804B7F18:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(5))) {
        goto loc_804B7FA0;
    }
}

loc_804B7F1C:
{
}

loc_804B7F20:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(6))) {
        goto loc_804B7FD0;
    }
}

loc_804B7F24:
{
    goto loc_804B800C;
}

loc_804B7F28:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2408));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2404));
    f3.d = PpcFmulsInline(f0.d, f5.d);
    f6.d = MemoryInline::FlatReadFloat32((r2 + -2424));
    goto loc_804B8018;
}

loc_804B7F3C:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2400));
    f0.d = (-(f5.d));
    f6.d = MemoryInline::FlatReadFloat32((r2 + -2424));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f3.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_804B8018;
}

loc_804B7F58:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2400));
    f0.d = (-(f5.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -2424));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f1.d = PpcFmulsInline(f0.d, f6.d);
    goto loc_804B8018;
}

loc_804B7F74:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -2400));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2396));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f5.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f2.d));
    f3.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f6.d = (-(f2.d));
    goto loc_804B8018;
}

loc_804B7FA0:
{
    f4.d = MemoryInline::FlatReadFloat32((r2 + -2400));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2388));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2392));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f6.d = PpcFmulsInline(f2.d, f1.d);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = PpcFmulsInline(f6.d, f5.d);
    goto loc_804B8018;
}

loc_804B7FD0:
{
    f4.d = MemoryInline::FlatReadFloat32((r2 + -2400));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2396));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f5.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2388));
    f2.d = PpcFmulsInline(f0.d, f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2384));
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f2.d = PpcFmulsInline(f2.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f3.d));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f6.d = PpcFmulsInline(f0.d, f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    goto loc_804B8018;
}

loc_804B800C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -2424));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -2400));
    f6.d = f1.d;
}

loc_804B8018:
{
    MemoryInline::FlatWriteFloat32((r30 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 20), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 24), f6.d);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFF8003FF fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B7EA0 func_804B7EA0 preserves=true fpr_mask=0x00000000
