#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80045464_ra38_7e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6)
{
    uint32_t addr_psqx_800455D0_loc_0 = 0;
    uint32_t addr_psqx_800455DC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->gpr[4] = arg_r4;
    ctx->gpr[5] = arg_r5;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80045464;

loc_80045464:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r31 = r3;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 336));
    f1.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 340));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804645F4u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800454A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800455CC;
    }
}

loc_800454AC:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -32636));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800454B4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800454C0;
    }
}

loc_800454BC:
{
    goto loc_800455CC;
}

loc_800454C0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 336));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 340));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32644));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800454D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800454E0;
    }
}

loc_800454DC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
}

loc_800454E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32636));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f4.d = MemoryInline::FlatReadFloat32((r31 + 212));
    f3.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 216));
    f0.d = PpcFmulsInline(f2.d, f6.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f2.d = PpcFmulsInline(f2.d, f5.d);
    f0.d = PpcFmulsInline(f4.d, f6.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 356));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 360));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f1.d = PpcFmulsInline(f31.d, f31.d);
    f0.d = PpcFmulsInline(f30.d, f30.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x804645F4u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80045544:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800455CC;
    }
}

loc_80045548:
{
    f5.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 356), f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f30.d / f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 360), f4.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 364));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32632));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 364), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 368));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32632));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 368), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 412));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800455A4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800455C4;
    }
}

loc_800455AC:
{
    r3 = MemoryInline::FlatRead16((r31 + 372));
}

loc_800455B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800455CC;
    }
}

loc_800455B8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 372), static_cast<uint16_t>(r0));
    goto loc_800455CC;
}

loc_800455C4:
{
    r0 = MemoryInline::FlatRead16((r13 + -32628));
    MemoryInline::FlatWrite16((r31 + 372), static_cast<uint16_t>(r0));
}

loc_800455CC:
{
    r0 = 40;
    addr_psqx_800455D0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800455D0_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = 24;
    addr_psqx_800455DC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800455DC_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | r3;
}

}

extern "C" void func_80045464(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80045464_ra38_7e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200F gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0xC000007F fpr_write=0xC000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80045464 func_80045464 preserves=true fpr_mask=0x00000000
