#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B7FBC(CpuContext* ctx);
extern "C" uint64_t func_800B7FBC_ra38_40_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800B7E14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;

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
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;

    goto loc_800B7E14;

loc_800B7E14:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r30 = r3;
    r31 = r4;
}

loc_800B7E34:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800B7E54;
    }
}

loc_800B7E38:
{
    r3 = 0x80590000u;
    r3 = (r3 + 17980);
    r4 = 123;
    r5 = 0x80590000u;
    r5 = (r5 + 17940);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B7E54u;
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

loc_800B7E54:
{
    r3 = r31;
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80053340u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31088));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 136));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B7E6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B7FA0;
    }
}

loc_800B7E70:
{
    r3 = (r1 + 20);
    ctx->lr = 0x800B7E78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BAB50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = fctiwzword0;
}

loc_800B7E8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B7EA4;
    }
}

loc_800B7E90:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 52));
}

loc_800B7E9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800B7F90;
    }
}

loc_800B7EA0:
{
    goto loc_800B7FA0;
}

loc_800B7EA4:
{
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 8);
    r4 = r30;
    r5 = (r30 + 140);
    ctx->lr = 0x800B7EBCu;
    if constexpr (KnownRegArgsCpuCall<0x800B7FBCu>(&func_800B7FBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800B7FBC_EDC = func_800B7FBC_ra38_40_18_0(ctx, r3, r4, r5, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_800B7FBC_EDC);
        r4 = static_cast<uint32_t>(regargs_result_800B7FBC_EDC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f6 = ctx->fpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800B7FBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f6 = ctx->fpr[6];
    }
    r3 = (r1 + 8);
    r4 = r3;
    ctx->lr = 0x800B7EC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8009C4E8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
}

loc_800B7ECC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800B7F7C;
    }
}

loc_800B7ED0:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31088));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800B7EDC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800B7F30;
    }
}

loc_800B7EE4:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 28), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    goto loc_800B7FA0;
}

loc_800B7F30:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 12), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 28), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    goto loc_800B7FA0;
}

loc_800B7F7C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
    goto loc_800B7FA0;
}

loc_800B7F90:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 136));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
}

loc_800B7FA0:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800B7E14 func_800B7E14 preserves=true fpr_mask=0x00000000
