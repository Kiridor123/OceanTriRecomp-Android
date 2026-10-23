#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800523D4(CpuContext* ctx);
extern "C" uint32_t func_800523D4_ra38_e_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_801A97AC_ra18_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    goto loc_801A97AC;

loc_801A97AC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_801A97C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(10))) {
        goto loc_801A97D4;
    }
}

loc_801A97CC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 850), static_cast<uint8_t>(r0));
}

loc_801A97D4:
{
    r0 = MemoryInline::FlatRead8((r3 + 850));
}

loc_801A97DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801A97F4;
    }
}

loc_801A97E0:
{
}

loc_801A97E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801A9834;
    }
}

loc_801A97E8:
{
}

loc_801A97EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801A98C8;
    }
}

loc_801A97F0:
{
    goto loc_801A9900;
}

loc_801A97F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 844));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21864));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801A9800:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A9810;
    }
}

loc_801A9808:
{
    MemoryInline::FlatWriteFloat32((r3 + 844), f0.d);
    goto loc_801A981C;
}

loc_801A9810:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20904));
    f0.d = MH3_PerStep(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 844), f0.d);
}

loc_801A981C:
{
    r0 = MemoryInline::FlatRead8((r3 + 485));
}

loc_801A9824:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(10))) {
        goto loc_801A9900;
    }
}

loc_801A9828:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 850), static_cast<uint8_t>(r0));
    goto loc_801A9900;
}

loc_801A9834:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 844));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20900));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801A9840:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A9864;
    }
}

loc_801A9848:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20896));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801A9850:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A9864;
    }
}

loc_801A9858:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21876));
    MemoryInline::FlatWriteFloat32((r3 + 844), f0.d);
    goto loc_801A989C;
}

loc_801A9864:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 844));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20900));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801A9870:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801A9884;
    }
}

loc_801A9874:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20892));
    f0.d = MH3_PerStep(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 844), f0.d);
    goto loc_801A989C;
}

loc_801A9884:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20896));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801A988C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801A989C;
    }
}

loc_801A9890:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20892));
    f0.d = MH3_PerStep(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 844), f0.d);
}

loc_801A989C:
{
    r4 = MemoryInline::FlatRead16((r3 + 848));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = MH3_TickLoad(r4, 2149226652);
}

loc_801A98A4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(180))) {
        goto loc_801A98BC;
    }
}

loc_801A98A8:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 850), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 848), static_cast<uint16_t>(r0));
    goto loc_801A9900;
}

loc_801A98BC:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r3 + 848), static_cast<uint16_t>(r0));
    goto loc_801A9900;
}

loc_801A98C8:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 844));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21880));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801A98D4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801A98F4;
    }
}

loc_801A98DC:
{
    MemoryInline::FlatWriteFloat32((r3 + 844), f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 850), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 848), static_cast<uint16_t>(r0));
    goto loc_801A9900;
}

loc_801A98F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -20892));
    f0.d = MH3_PerStep(f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 844), f0.d);
}

loc_801A9900:
{
    r3 = 0x805B0000u;
    r3 = (r3 + 2376);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 844));
    r4 = (r31 + 840);
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x800523D4u>(&func_800523D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_800523D4_1AB6 = func_800523D4_ra38_e_8_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = regargs_result_800523D4_1AB6;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x800523D4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    f1.d = MemoryInline::FlatReadFloat32((r2 + -21720));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21716));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21876));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r31 + 836), r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801A97AC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801A97AC_ra18_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801A97AC func_801A97AC preserves=true fpr_mask=0x00000000
