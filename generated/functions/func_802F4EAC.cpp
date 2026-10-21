#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802F4EAC_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t addr_psqx_802F50F4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[4].d = arg_f4;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x802F4EACu);
    goto loc_802F4EAC;

loc_802F4EAC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r28 = r3;
    r29 = r4;
    r3 = (r1 + 92);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 80);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 68);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r31 = MemoryInline::FlatRead32((r28 + 48));
    r30 = MemoryInline::FlatRead32((r28 + 56));
    MemoryInline::FlatWrite8((r30 + 65), static_cast<uint8_t>(r29));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12336));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, (r1 + 92), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12332));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r1 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12400));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r1 + 100), f0.d);
    r3 = (r1 + 92);
    r4 = MemoryInline::FlatRead32((r31 + 88));
    ctx->lr = 0x802F4F20u;
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
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = (r1 + 56);
    r4 = (r31 + 60);
    r5 = (r1 + 92);
    ctx->lr = 0x802F4F30u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_D9A = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_D9A);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_D9A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r30 + 24);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = 4;
    MemoryInline::FlatWrite8((r28 + 6), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    r0 = MemoryInline::FlatRead8((r30 + 65));
}

loc_802F4F78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802F4F88;
    }
}

loc_802F4F7C:
{
}

loc_802F4F80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802F502C;
    }
}

loc_802F4F84:
{
    goto loc_802F50D0;
}

loc_802F4F88:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12452));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    r3 = (r1 + 44);
    r4 = (r1 + 68);
    r5 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 92);
    r4 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 92);
    ctx->lr = 0x802F4FB4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12328));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802F4FC0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802F5020;
    }
}

loc_802F4FC4:
{
    r3 = (r1 + 92);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12336));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f0.d));
    r3 = (r1 + 32);
    r4 = (r1 + 92);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r30 + 12);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -12336));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12408));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    goto loc_802F50E8;
}

loc_802F5020:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    goto loc_802F50E8;
}

loc_802F502C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12324));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    r3 = (r1 + 20);
    r4 = (r1 + 68);
    r5 = (r1 + 80);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 92);
    r4 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 92);
    ctx->lr = 0x802F5058u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80050F88u>(ctx);
    f1 = ctx->fpr[1];
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12328));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802F5064:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802F50C4;
    }
}

loc_802F5068:
{
    r3 = (r1 + 92);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12320));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f0.d));
    r3 = (r1 + 8);
    r4 = (r1 + 92);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x80051F44u>(ctx);
    r3 = (r30 + 12);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -12320));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f3.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12408));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    goto loc_802F50E8;
}

loc_802F50C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    goto loc_802F50E8;
}

loc_802F50D0:
{
    r3 = (r30 + 12);
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12440));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
}

loc_802F50E8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 48), r0);
    r0 = 136;
    addr_psqx_802F50F4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802F50F4_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r0 = MemoryInline::FlatRead32((r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802F4EAC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802F4EAC_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFE fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802F4EAC func_802F4EAC preserves=true fpr_mask=0x00000000
