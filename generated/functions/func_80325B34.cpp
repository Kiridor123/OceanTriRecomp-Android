#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80130390(CpuContext* ctx);
extern "C" uint64_t func_80130390_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80325B34_ra18_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2)
{
    uint32_t addr_psqx_80325C38_loc_0 = 0;
    uint32_t addr_psqx_80325C44_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80325B34;

loc_80325B34:
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
    f30.d = f1.d;
    r0 = (r4 & 255);
}

loc_80325B64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80325B74;
    }
}

loc_80325B68:
{
}

loc_80325B6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80325BD0;
    }
}

loc_80325B70:
{
    goto loc_80325C34;
}

loc_80325B74:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 428));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -11084));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80325B80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80325BA8;
    }
}

loc_80325B84:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    // inline leaf 0x80130450 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 428), f1.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 479), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80130450
    f0.d = MemoryInline::FlatReadFloat32((r31 + 428));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -11084));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80325B98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80325C34;
    }
}

loc_80325B9C:
{
    r3 = r31;
    // inline leaf 0x80130450 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 428), f1.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 479), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80130450
    goto loc_80325C34;
}

loc_80325BA8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80325C34;
    }
}

loc_80325BAC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    // inline leaf 0x80130450 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 428), f1.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 479), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80130450
    f0.d = MemoryInline::FlatReadFloat32((r31 + 428));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -11084));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80325BC0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80325C34;
    }
}

loc_80325BC4:
{
    r3 = r31;
    // inline leaf 0x80130450 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 428), f1.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 479), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80130450
    goto loc_80325C34;
}

loc_80325BD0:
{
    ctx->lr = 0x80325BD4u;
    if constexpr (KnownRegArgsCpuCall<0x80130390u>(&func_80130390)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80130390_1104 = func_80130390_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80130390_1104);
        r4 = static_cast<uint32_t>(regargs_result_80130390_1104 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80130390u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 428));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80325BE0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80325C0C;
    }
}

loc_80325BE4:
{
    r3 = r31;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    // inline leaf 0x80130450 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 428), f1.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 479), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80130450
    f0.d = MemoryInline::FlatReadFloat32((r31 + 428));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80325BF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80325C34;
    }
}

loc_80325BFC:
{
    r3 = r31;
    f1.d = f31.d;
    // inline leaf 0x80130450 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 428), f1.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 479), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80130450
    goto loc_80325C34;
}

loc_80325C0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80325C34;
    }
}

loc_80325C10:
{
    r3 = r31;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f30.d));
    // inline leaf 0x80130450 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 428), f1.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 479), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80130450
    f0.d = MemoryInline::FlatReadFloat32((r31 + 428));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80325C24:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80325C34;
    }
}

loc_80325C28:
{
    r3 = r31;
    f1.d = f31.d;
    // inline leaf 0x80130450 (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 428), f1.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 479), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80130450
}

loc_80325C34:
{
    r0 = 40;
    addr_psqx_80325C38_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80325C38_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = 24;
    addr_psqx_80325C44_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80325C44_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80325B34(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80325B34_ra18_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0xC0000007 fpr_write=0xC0000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80325B34 func_80325B34 preserves=true fpr_mask=0x00000000
