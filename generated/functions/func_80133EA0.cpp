#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F980(CpuContext* ctx);
extern "C" uint64_t func_8012F980_ra58_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" void func_80133EA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80133F78_loc_0 = 0;
    uint32_t addr_psqx_80133F84_loc_0 = 0;
    uint32_t addr_psqx_80133F90_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
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

    goto loc_80133EA0;

loc_80133EA0:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r30 = r3;
    f29.d = f1.d;
    f30.d = f2.d;
    r31 = r4;
    // inline leaf 0x8012F948 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 128));
    // end of inlined leaf 0x8012F948
    f31.d = f1.d;
    r3 = r30;
    r4 = 4;
    f1.d = f29.d;
    f2.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f31.d));
    ctx->lr = 0x80133EF8u;
    if constexpr (KnownRegArgsCpuCall<0x8012F980u>(&func_8012F980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8012F980_AB8 = func_8012F980_ra58_e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_8012F980_AB8);
        r4 = static_cast<uint32_t>(regargs_result_8012F980_AB8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8012F980u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_80133EFC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80133F74;
    }
}

loc_80133F00:
{
    r3 = r30;
    // inline leaf 0x8012F950 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 152));
    // end of inlined leaf 0x8012F950
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f29.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80133F14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80133F20;
    }
}

loc_80133F18:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    goto loc_80133F34;
}

loc_80133F20:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f31.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80133F2C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80133F34;
    }
}

loc_80133F30:
{
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
}

loc_80133F34:
{
    r3 = MemoryInline::FlatRead32((r30 + 448));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r31 ^ -2147483648);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f29.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = PpcFmulsInline(f31.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r30 + 448), r0);
}

loc_80133F74:
{
    r0 = 72;
    addr_psqx_80133F78_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80133F78_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r0 = 56;
    addr_psqx_80133F84_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80133F84_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = 40;
    addr_psqx_80133F90_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80133F90_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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

// RECOMP_GUEST_ABI gpr_read=0x0000005F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0xE000000F fpr_write=0xE000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80133EA0 func_80133EA0 preserves=true fpr_mask=0x00000000
