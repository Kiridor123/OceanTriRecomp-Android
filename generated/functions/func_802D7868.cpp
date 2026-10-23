#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050F10(CpuContext* ctx);
extern "C" uint64_t func_80050F10_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802D7868_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t addr_psqx_802D7944_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802D7868;

loc_802D7868:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f31.d = f1.d;
    r4 = 0x806C0000u;
    r31 = (r4 + -2080);
    r0 = MemoryInline::FlatRead8((r4 + -2080));
}

loc_802D7894:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802D78A0;
    }
}

loc_802D7898:
{
    r3 = 0;
    goto loc_802D7940;
}

loc_802D78A0:
{
    r5 = MemoryInline::FlatRead32((r31 + 364));
}

loc_802D78A8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_802D78B4;
    }
}

loc_802D78AC:
{
    r3 = 0;
    goto loc_802D7940;
}

loc_802D78B4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13360));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802D78BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802D78C8;
    }
}

loc_802D78C0:
{
    r3 = 1;
    goto loc_802D7940;
}

loc_802D78C8:
{
    r4 = MemoryInline::FlatRead8((r31 + 420));
    r0 = MemoryInline::FlatRead8((r5 + 22));
}

loc_802D78D4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_802D78E0;
    }
}

loc_802D78D8:
{
    r3 = 0;
    goto loc_802D7940;
}

loc_802D78E0:
{
    r0 = MemoryInline::FlatRead8((r31 + 369));
}

loc_802D78E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5))) {
        goto loc_802D78F4;
    }
}

loc_802D78EC:
{
    r3 = 0;
    goto loc_802D7940;
}

loc_802D78F4:
{
    r0 = (r3 & 255);
}

loc_802D78FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_802D7918;
    }
}

loc_802D7900:
{
    r3 = r31;
    // inline leaf 0x802D9D44 (13 guest instruction(s))
}

loc_inl0_0x802D9D44:
{
    r0 = MemoryInline::FlatRead8((r3 + 369));
}

loc_inl0_0x802D9D4C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl0_0x802D9D70;
    }
}

loc_inl0_0x802D9D50:
{
    r3 = MemoryInline::FlatRead16((r3 + 370));
    r0 = (r3 + -82);
}

loc_inl0_0x802D9D5C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl0_0x802D9D68;
    }
}

loc_inl0_0x802D9D60:
{
}

loc_inl0_0x802D9D64:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(87))) {
        goto loc_inl0_0x802D9D70;
    }
}

loc_inl0_0x802D9D68:
{
    r3 = 1;
    goto loc_inl0_cont_802D9D44;
}

loc_inl0_0x802D9D70:
{
    r3 = 0;
}

loc_inl0_cont_802D9D44:
{
    // end of inlined leaf 0x802D9D44
}

loc_802D790C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D7918;
    }
}

loc_802D7910:
{
    r3 = 0;
    goto loc_802D7940;
}

loc_802D7918:
{
    r3 = (r31 + 376);
    r4 = MemoryInline::FlatRead32((r31 + 364));
    r4 = (r4 + 60);
    ctx->lr = 0x802D7928u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F10u>(ctx);
    ctx->fpr[1].d = PPC_PsToScalarInline(ctx->fpr[1].d);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f0.d = PpcFmulsInline(f31.d, f31.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802D7930:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_802D793C;
    }
}

loc_802D7934:
{
    r3 = 1;
    goto loc_802D7940;
}

loc_802D793C:
{
    r3 = 0;
}

loc_802D7940:
{
    r0 = 24;
    addr_psqx_802D7944_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802D7944_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D7868(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D7868_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D7868 func_802D7868 preserves=true fpr_mask=0x00000000
