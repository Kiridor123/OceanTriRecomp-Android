#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80040370(CpuContext* ctx);
extern "C" uint32_t func_80040370_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_800569D0(CpuContext* ctx);
extern "C" uint64_t func_800569D0_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_80114948_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_80114948;

loc_80114948:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r31 = r3;
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r31 + 68));
}

loc_80114974:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80114A60;
    }
}

loc_80114978:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_80114980:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80114A60;
    }
}

loc_80114984:
{
    r3 = (r1 + 24);
    if constexpr (KnownRegArgsCpuCall<0x80040370u>(&func_80040370)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80040370_991 = func_80040370_ra8_0_10_0(ctx, r3);
        r4 = regargs_result_80040370_991;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80040370u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead32((r13 + -17580));
    ctx->lr = 0x80114994u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80082C30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 12);
    r4 = (r1 + 32);
    r5 = (r31 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800752BCu>(ctx);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28824));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_801149B4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114A60;
    }
}

loc_801149BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28868));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_801149C4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80114A60;
    }
}

loc_801149CC:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_801149D4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80114A60;
    }
}

loc_801149D8:
{
    f5.d = MemoryInline::FlatReadFloat32((r1 + 24));
    SetCRFloatResident(cr, 0, f2.d, f5.d);
}

loc_801149E0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80114A60;
    }
}

loc_801149E4:
{
    f4.d = MemoryInline::FlatReadFloat32((r1 + 36));
    SetCRFloatResident(cr, 0, f4.d, f1.d);
}

loc_801149EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80114A60;
    }
}

loc_801149F0:
{
    f3.d = MemoryInline::FlatReadFloat32((r1 + 28));
    SetCRFloatResident(cr, 0, f4.d, f3.d);
}

loc_801149F8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80114A60;
    }
}

loc_801149FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28816));
    f0.d = PpcFmulsInline(f5.d, f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = PpcFmulsInline(f3.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    // inline leaf 0x80056A84 (7 guest instruction(s))
    r0 = 1;
    r3 = 0x80670000u;
    r3 = (r3 + -11912);
    MemoryInline::FlatWriteRam8((r3 + 60), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 112), r0);
    // end of inlined leaf 0x80056A84
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = 128;
    r4 = 3;
    r5 = 32;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 36));
    r6 = (r1 + 8);
    r7 = MemoryInline::FlatRead32((r31 + 12));
    ctx->lr = 0x80114A60u;
    if constexpr (KnownRegArgsCpuCall<0x800569D0u>(&func_800569D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800569D0_1CB4 = func_800569D0_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_800569D0_1CB4);
        r4 = static_cast<uint32_t>(regargs_result_800569D0_1CB4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x800569D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r7 = ctx->gpr[7];
    }
}

loc_80114A60:
{
    r3 = MemoryInline::FlatRead8((r31 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80114948(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80114948_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80114948 func_80114948 preserves=true fpr_mask=0x00000000
