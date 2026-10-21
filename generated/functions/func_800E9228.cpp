#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E9228(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800E9354_loc_0 = 0;
    uint32_t addr_psqx_800E9360_loc_0 = 0;
    uint32_t addr_psqx_800E936C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800E9228u);
    goto loc_800E9228;

loc_800E9228:
{
    MemoryInline::FlatWriteRam32((r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r31 = r3;
    f29.d = f1.d;
    f30.d = f2.d;
    f31.d = f3.d;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E88BCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800E9268:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800E9278;
    }
}

loc_800E926C:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800E88BCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_800E9274:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800E9280;
    }
}

loc_800E9278:
{
    r3 = 127;
    goto loc_800E9350;
}

loc_800E9280:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30132));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800E928C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800E929C;
    }
}

loc_800E9290:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30100));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800E9298:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E92AC;
    }
}

loc_800E929C:
{
    r3 = r31;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x804C71E0u>(ctx);
    goto loc_800E92B0;
}

loc_800E92AC:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
}

loc_800E92B0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30120));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    SetCRFloatResident(cr, 0, f29.d, f30.d);
}

loc_800E92CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E92E8;
    }
}

loc_800E92D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30096));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
}

loc_800E92E8:
{
    r3 = (64 - r0);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -30152));
    r0 = (r3 ^ -2147483648);
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r4 = 1127219200;
    stackword4 = r4;
    MemoryInline::FlatWriteRam32((r1 + 40), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = (64 - r3);
    r0 = (r0 ^ -2147483648);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    stackword6 = r4;
    MemoryInline::FlatWriteRam32((r1 + 48), r4);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword2;
}

loc_800E9338:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(127))) {
        goto loc_800E9344;
    }
}

loc_800E933C:
{
    r3 = 127;
    goto loc_800E9350;
}

loc_800E9344:
{
}

loc_800E9348:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_800E9350;
    }
}

loc_800E934C:
{
    r3 = 0;
}

loc_800E9350:
{
    r0 = 120;
    addr_psqx_800E9354_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800E9354_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r0 = 104;
    addr_psqx_800E9360_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800E9360_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r0 = 88;
    addr_psqx_800E936C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800E936C_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r0 = MemoryInline::FlatRead32((r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0xE000000F fpr_write=0xE0000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800E9228 func_800E9228 preserves=true fpr_mask=0x00000000
