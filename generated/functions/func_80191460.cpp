#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801302D0(CpuContext* ctx);
extern "C" uint64_t func_801302D0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_801359B4(CpuContext* ctx);
extern "C" uint64_t func_801359B4_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80191460_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t addr_psqx_801915E0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80191460;

loc_80191460:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 3), 0, 2220u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 3));
}

loc_80191484:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_8019149C;
    }
}

loc_80191488:
{
}

loc_8019148C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(17))) {
        goto loc_80191578;
    }
}

loc_80191490:
{
}

loc_80191494:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(21))) {
        goto loc_80191598;
    }
}

loc_80191498:
{
    goto loc_801915D8;
}

loc_8019149C:
{
    r0 = (r4 & 255);
}

loc_801914A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801914C4;
    }
}

loc_801914A8:
{
}

loc_801914AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80191508;
    }
}

loc_801914B0:
{
}

loc_801914B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8019151C;
    }
}

loc_801914B8:
{
}

loc_801914BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80191564;
    }
}

loc_801914C0:
{
    goto loc_801915D8;
}

loc_801914C4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 877u, (r3 + 880));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 393u, (r3 + 396));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -23552));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801914D8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801914E8;
    }
}

loc_801914E0:
{
    r3 = 1;
    goto loc_801915DC;
}

loc_801914E8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -23484));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801914F0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80191500;
    }
}

loc_801914F8:
{
    r3 = 2;
    goto loc_801915DC;
}

loc_80191500:
{
    r3 = 0;
    goto loc_801915DC;
}

loc_80191508:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 855u, (r3 + 858));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80191510:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_801915D8;
    }
}

loc_80191514:
{
    r3 = 1;
    goto loc_801915DC;
}

loc_8019151C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 479u, (r3 + 482));
}

loc_80191524:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_801915D8;
    }
}

loc_80191528:
{
    ctx->lr = 0x8019152Cu;
    if constexpr (KnownRegArgsCpuCall<0x801359B4u>(&func_801359B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_801359B4_12AF = func_801359B4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801359B4_12AF);
        r4 = static_cast<uint32_t>(regargs_result_801359B4_12AF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x801359B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r3 = r31;
    ctx->lr = 0x80191538u;
    if constexpr (KnownRegArgsCpuCall<0x801302D0u>(&func_801302D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_801302D0_16D1 = func_801302D0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801302D0_16D1);
        r4 = static_cast<uint32_t>(regargs_result_801302D0_16D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x801302D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -23504));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 528));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 396));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80191554:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801915D8;
    }
}

loc_8019155C:
{
    r3 = 1;
    goto loc_801915DC;
}

loc_80191564:
{
    r0 = MemoryInline::ReadResolved16(guest_range_0, 857u, (r3 + 860));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8019156C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_801915D8;
    }
}

loc_80191570:
{
    r3 = 1;
    goto loc_801915DC;
}

loc_80191578:
{
    r0 = (r4 & 255);
}

loc_80191580:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_801915D8;
    }
}

loc_80191584:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 17));
}

loc_8019158C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801915D8;
    }
}

loc_80191590:
{
    r3 = 1;
    goto loc_801915DC;
}

loc_80191598:
{
    r0 = (r4 & 255);
}

loc_801915A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801915B0;
    }
}

loc_801915A4:
{
}

loc_801915A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801915C4;
    }
}

loc_801915AC:
{
    goto loc_801915D8;
}

loc_801915B0:
{
    // inline leaf 0x80132240 (5 guest instruction(s))
    r3 = MemoryInline::ReadResolved8(guest_range_0, 2219u, (r3 + 2222));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80132240
}

loc_801915B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801915D8;
    }
}

loc_801915BC:
{
    r3 = 1;
    goto loc_801915DC;
}

loc_801915C4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 17));
}

loc_801915CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801915D8;
    }
}

loc_801915D0:
{
    r3 = 1;
    goto loc_801915DC;
}

loc_801915D8:
{
    r3 = 0;
}

loc_801915DC:
{
    r0 = 24;
    addr_psqx_801915E0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801915E0_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80191460(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80191460_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80191460 func_80191460 preserves=true fpr_mask=0x00000000
