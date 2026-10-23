#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80045E48(CpuContext* ctx);
extern "C" uint64_t func_80045E48_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80045F14_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t addr_psqx_80046048_loc_0 = 0;
    uint32_t addr_psqx_80046054_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80045F14;

loc_80045F14:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    f30.d = MemoryInline::FlatReadFloat32((r13 + -32608));
    r29 = (r3 + 240);
    f31.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    r31 = (r3 + 276);
}

loc_80045F4C:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80045F58:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80046008;
    }
}

loc_80045F5C:
{
    r28 = (r29 + 12);
    r30 = (r25 + 276);
}

loc_80045F64:
{
    r0 = MemoryInline::FlatRead8((r28 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80045F70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80045FFC;
    }
}

loc_80045F74:
{
    r3 = r25;
    r4 = r29;
    r5 = r28;
    r6 = (r1 + 8);
    ctx->lr = 0x80045F88u;
    if constexpr (KnownRegArgsCpuCall<0x80045E48u>(&func_80045E48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80045E48_E21 = func_80045E48_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80045E48_E21);
        r4 = static_cast<uint32_t>(regargs_result_80045E48_E21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80045E48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f0.d = MemoryInline::FlatReadFloat32((r25 + 420));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80045F90:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80045FFC;
    }
}

loc_80045F98:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32616));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80045FA0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80045FFC;
    }
}

loc_80045FA8:
{
    f1.d = MemoryInline::FlatReadFloat32((r25 + 356));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r25 + 360));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80045FC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80045FE8;
    }
}

loc_80045FCC:
{
    f0.d = (-(f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80045FD4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80045FFC;
    }
}

loc_80045FD8:
{
    f30.d = f0.d;
    r27 = r28;
    r26 = r29;
    goto loc_80045FFC;
}

loc_80045FE8:
{
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80045FEC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80045FFC;
    }
}

loc_80045FF0:
{
    f30.d = f0.d;
    r27 = r29;
    r26 = r28;
}

loc_80045FFC:
{
    r28 = (r28 + 12);
}

loc_80046004:
{
    if ((static_cast<uint32_t>(r28) <= static_cast<uint32_t>(r30))) {
        goto loc_80045F64;
    }
}

loc_80046008:
{
    r29 = (r29 + 12);
}

loc_80046010:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r31))) {
        goto loc_80045F4C;
    }
}

loc_80046014:
{
    f0.d = MemoryInline::FlatReadFloat32((r13 + -32608));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_8004601C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80046028;
    }
}

loc_80046020:
{
    r3 = 0;
    goto loc_80046044;
}

loc_80046028:
{
    r3 = (r25 + 288);
    r4 = r27;
    // inline leaf 0x80045C74 (13 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 24u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 4), r0);
    }
    r0 = MemoryInline::FlatRead8((r4 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r3 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r3 + 11), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80045C74
    r3 = (r25 + 300);
    r4 = r26;
    // inline leaf 0x80045C74 (13 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r4);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 4), r0);
    }
    r0 = MemoryInline::FlatRead8((r4 + 8));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r3 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 9));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r3 + 9), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 10));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r3 + 10), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 11));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r3 + 11), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80045C74
    r3 = 2;
}

loc_80046044:
{
    r0 = 72;
    addr_psqx_80046048_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80046048_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 68u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 44u, (r1 + 64));
    r0 = 56;
    addr_psqx_80046054_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80046054_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 28u, (r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80045F14(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80045F14_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0000007 fpr_write=0xC0000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80045F14 func_80045F14 preserves=true fpr_mask=0x00000000
