#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80114C84(CpuContext* ctx);
extern "C" uint64_t func_80114C84_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8027C918(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_8027CA4C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x8027C918u);
    goto loc_8027C918;

loc_8027C918:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_8027C93C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_8027CA48;
    }
}

loc_8027C940:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_8027C948:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8027C958;
    }
}

loc_8027C94C:
{
    r0 = MemoryInline::FlatRead16((r3 + 1128));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027C954:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8027CA48;
    }
}

loc_8027C958:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14848));
    r0 = (r0 ^ -2147483648);
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword3));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14876));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8027C980:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8027C9C0;
    }
}

loc_8027C984:
{
    r3 = r31;
    r4 = 191;
    ctx->lr = 0x8027C990u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027C994:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027C9A4;
    }
}

loc_8027C998:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14860));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    goto loc_8027C9C0;
}

loc_8027C9A4:
{
    r3 = r31;
    r4 = 192;
    ctx->lr = 0x8027C9B0u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027C9B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027C9C0;
    }
}

loc_8027C9B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14756));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_8027C9C0:
{
    r3 = MemoryInline::FlatRead16((r31 + 900));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    f0.d = PPC_Fctiwz(f31.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    r0 = fctiwzword0;
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r31 + 900), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14876));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8027C9E0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8027CA34;
    }
}

loc_8027C9E8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8027C9F0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(100))) {
        goto loc_8027CA48;
    }
}

loc_8027C9F4:
{
    r0 = 100;
    MemoryInline::FlatWrite16((r31 + 900), static_cast<uint16_t>(r0));
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8027CA08:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8027CA24;
    }
}

loc_8027CA0C:
{
    r0 = MemoryInline::FlatRead16((r31 + 1128));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8027CA14:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8027CA24;
    }
}

loc_8027CA18:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x8027CA24u;
    if constexpr (KnownRegArgsCpuCall<0x80114C84u>(&func_80114C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80114C84_14D1 = func_80114C84_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80114C84_14D1);
        r4 = static_cast<uint32_t>(regargs_result_80114C84_14D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80114C84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_8027CA24:
{
    r3 = r31;
    r4 = 900;
    // inline leaf 0x8027C900 (6 guest instruction(s))
}

loc_inl0_0x8027C900:
{
    r5 = MemoryInline::FlatRead16((r3 + 1128));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl0_0x8027C90C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8027C910:
{
    MemoryInline::FlatWrite16((r3 + 1128), static_cast<uint16_t>(r4));
    goto loc_inl0_cont_8027C900;
}

loc_inl0_return:
{
}

loc_inl0_cont_8027C900:
{
    // end of inlined leaf 0x8027C900
    goto loc_8027CA48;
}

loc_8027CA34:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8027CA3C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8027CA48;
    }
}

loc_8027CA40:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 900), static_cast<uint16_t>(r0));
}

loc_8027CA48:
{
    r0 = 40;
    addr_psqx_8027CA4C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8027CA4C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FF gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027C918 func_8027C918 preserves=true fpr_mask=0x00000000
