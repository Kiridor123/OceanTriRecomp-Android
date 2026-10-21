#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802461BC(CpuContext* ctx);
extern "C" uint64_t func_802461BC_ra8_18_18_0(CpuContext*, uint32_t, double, double);
extern "C" void func_8026FD70(CpuContext* ctx);
extern "C" uint64_t func_8026FD70_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802916A0(CpuContext* ctx);
extern "C" uint64_t func_802916A0_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_80246254_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t addr_psqx_80246344_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80246254u);
    goto loc_80246254;

loc_80246254:
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
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 21), 0, 155u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 21), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 22), static_cast<uint8_t>(r7));
    r6 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 63u, (r3 + 84), r6);
    r0 = (r5 & 65535);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 67u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 67u, (r3 + 88), r0);
        MemoryInline::WriteResolved32(guest_range_0, 71u, (r3 + 92), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 147u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 151u, (r3 + 172), r6);
        MemoryInline::WriteResolved32(guest_range_0, 147u, (r3 + 168), r0);
    }
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15516));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802462A0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802462BC;
    }
}

loc_802462A8:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 39u, (r3 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 47u, (r3 + 68), f0.d);
    goto loc_802462D4;
}

loc_802462BC:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 39u, (r3 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 43u, (r3 + 64), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 47u, (r3 + 68), f0.d);
}

loc_802462D4:
{
    r0 = (r8 & 255);
}

loc_802462DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802462E8;
    }
}

loc_802462E0:
{
    r3 = r31;
    ctx->lr = 0x802462E8u;
    if constexpr (KnownRegArgsCpuCall<0x802461BCu>(&func_802461BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802461BC_112B = func_802461BC_ra8_18_18_0(ctx, r3, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802461BC_112B);
        r4 = static_cast<uint32_t>(regargs_result_802461BC_112B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802461BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_802462E8:
{
    r3 = (r31 + 72);
    r4 = (r31 + 60);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r31 + 60);
    r4 = -5;
    r5 = MemoryInline::FlatRead8((r31 + 22));
    ctx->lr = 0x80246304u;
    if constexpr (KnownRegArgsCpuCall<0x802916A0u>(&func_802916A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802916A0_1780 = func_802916A0_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802916A0_1780);
        r4 = static_cast<uint32_t>(regargs_result_802916A0_1780 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802916A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 64));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80246310:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8024631C;
    }
}

loc_80246314:
{
    MemoryInline::FlatWriteFloat32((r31 + 64), f1.d);
    goto loc_80246338;
}

loc_8024631C:
{
    r3 = r31;
    // inline leaf 0x8027486C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 31));
    // end of inlined leaf 0x8027486C
    r3 = (r3 & 255);
    r0 = (r3 + -2);
}

loc_80246330:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80246338;
    }
}

loc_80246334:
{
    MemoryInline::FlatWriteFloat32((r31 + 64), f31.d);
}

loc_80246338:
{
    r3 = r31;
    ctx->lr = 0x80246340u;
    if constexpr (KnownRegArgsCpuCall<0x8026FD70u>(&func_8026FD70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_8026FD70_2018 = func_8026FD70_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8026FD70_2018);
        r4 = static_cast<uint32_t>(regargs_result_8026FD70_2018 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x8026FD70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
    r0 = 24;
    addr_psqx_80246344_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80246344_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80246254(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80246254_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0xE000001F fpr_write=0xE000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80246254 func_80246254 preserves=true fpr_mask=0x00000000
