#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800AD130_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_800AD130;

loc_800AD130:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800AD170:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AD188;
    }
}

loc_800AD174:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800AD180:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AD188;
    }
}

loc_800AD184:
{
    r10 = 0;
}

loc_800AD188:
{
}

loc_800AD18C:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800AD1A4;
    }
}

loc_800AD190:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800AD19C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AD1A4;
    }
}

loc_800AD1A0:
{
    r9 = 0;
}

loc_800AD1A4:
{
}

loc_800AD1A8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800AD1BC;
    }
}

loc_800AD1AC:
{
    r0 = (r11 + 1073741824);
}

loc_800AD1B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AD1BC;
    }
}

loc_800AD1B8:
{
    r8 = 0;
}

loc_800AD1BC:
{
}

loc_800AD1C0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800AD1D8;
    }
}

loc_800AD1C4:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800AD1D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AD1D8;
    }
}

loc_800AD1D4:
{
    r7 = 0;
}

loc_800AD1D8:
{
}

loc_800AD1DC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800AD1F4;
    }
}

loc_800AD1E0:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800AD1EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AD1F4;
    }
}

loc_800AD1F0:
{
    r6 = 0;
}

loc_800AD1F4:
{
}

loc_800AD1F8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800AD210;
    }
}

loc_800AD1FC:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800AD208:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800AD210;
    }
}

loc_800AD20C:
{
    r5 = 0;
}

loc_800AD210:
{
}

loc_800AD214:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800AD238;
    }
}

loc_800AD218:
{
    r3 = 0x80590000u;
    r3 = (r3 + 15604);
    r4 = 281;
    r5 = 0x80590000u;
    r5 = (r5 + 15552);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AD238u;
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

loc_800AD238:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 196));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 172));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 172), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 176));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 176), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 180));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 180), f0.d);
    r3 = (r30 + 172);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800AD130(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800AD130_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AD130 func_800AD130 preserves=true fpr_mask=0x00000000
