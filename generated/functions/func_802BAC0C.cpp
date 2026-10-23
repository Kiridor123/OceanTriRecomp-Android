#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802BAB70(CpuContext* ctx);
extern "C" double func_802BAB70_ra18_0_0_2(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802BAC0C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802BAE4C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f31 = ctx->fpr[31];
    ctx->gpr[5] = arg_r5;
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802BAC0C;

loc_802BAC0C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 24);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = r4;
    r0 = MemoryInline::FlatRead8((r4 + 66));
}

loc_802BAC30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802BAC40;
    }
}

loc_802BAC34:
{
}

loc_802BAC38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802BACAC;
    }
}

loc_802BAC3C:
{
    goto loc_802BAE48;
}

loc_802BAC40:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 96));
    MemoryInline::FlatWriteFloat32((r4 + 112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 100));
    MemoryInline::FlatWriteFloat32((r4 + 116), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 104));
    MemoryInline::FlatWriteFloat32((r4 + 120), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13552));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802BAC60:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802BAC74;
    }
}

loc_802BAC68:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13584));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 120), f0.d);
}

loc_802BAC74:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 108));
    MemoryInline::FlatWriteFloat32((r4 + 124), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13552));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802BAC84:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802BAC98;
    }
}

loc_802BAC8C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13584));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r4 + 124), f0.d);
}

loc_802BAC98:
{
    r0 = MemoryInline::FlatRead32((r4 + 88));
    MemoryInline::FlatWrite32((r4 + 92), r0);
    r3 = MemoryInline::FlatRead8((r4 + 66));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 66), static_cast<uint8_t>(r0));
}

loc_802BACAC:
{
    r0 = MemoryInline::FlatRead8((r4 + 84));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802BACB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_802BACD4;
    }
}

loc_802BACBC:
{
    r0 = MemoryInline::FlatRead8((r4 + 66));
}

loc_802BACC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BACD4;
    }
}

loc_802BACC8:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + 88));
    // inline leaf 0x802BAB4C (9 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 56));
    MemoryInline::FlatWriteFloat32((r3 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 60));
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 64));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 68));
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    // end of inlined leaf 0x802BAB4C
}

loc_802BACD4:
{
    r3 = MemoryInline::FlatRead16((r31 + 68));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13696));
    ctx->lr = 0x802BACE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x802BB0B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    f31.d = f1.d;
    r3 = MemoryInline::FlatRead16((r31 + 68));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2150345960);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 68), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802BACFC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802BAD18;
    }
}

loc_802BAD00:
{
    r3 = 0;
    MemoryInline::FlatWrite8((r31 + 66), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r31 + 67));
}

loc_802BAD10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BAD18;
    }
}

loc_802BAD14:
{
    MemoryInline::FlatWrite8((r31 + 67), static_cast<uint8_t>(r3));
}

loc_802BAD18:
{
    r0 = MemoryInline::FlatRead8((r31 + 67));
}

loc_802BAD20:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802BAD30;
    }
}

loc_802BAD24:
{
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r31 + 92));
    // inline leaf 0x802BAB4C (9 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 56));
    MemoryInline::FlatWriteFloat32((r3 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 60));
    MemoryInline::FlatWriteFloat32((r3 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 64));
    MemoryInline::FlatWriteFloat32((r3 + 104), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 68));
    MemoryInline::FlatWriteFloat32((r3 + 108), f0.d);
    // end of inlined leaf 0x802BAB4C
}

loc_802BAD30:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 112));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 96));
    f3.d = f31.d;
    // inline leaf 0x802BB138 (6 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -13748), 0, 200u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -13748));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // end of inlined leaf 0x802BB138
    MemoryInline::FlatWriteFloat32((r31 + 96), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 116));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 100));
    f3.d = f31.d;
    // inline leaf 0x802BB138 (6 guest instruction(s))
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -13748));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // end of inlined leaf 0x802BB138
    MemoryInline::FlatWriteFloat32((r31 + 100), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 104));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 196u, (r2 + -13552));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802BAD64:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802BAD78;
    }
}

loc_802BAD6C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r2 + -13584));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 104), f0.d);
}

loc_802BAD78:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 120));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 104));
    f3.d = f31.d;
    // inline leaf 0x802BB138 (6 guest instruction(s))
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -13748));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // end of inlined leaf 0x802BB138
    MemoryInline::FlatWriteFloat32((r31 + 104), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 108));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 196u, (r2 + -13552));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802BAD98:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802BADAC;
    }
}

loc_802BADA0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r2 + -13584));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 108), f0.d);
}

loc_802BADAC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 124));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 108));
    f3.d = f31.d;
    // inline leaf 0x802BB138 (6 guest instruction(s))
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -13748));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // end of inlined leaf 0x802BB138
    MemoryInline::FlatWriteFloat32((r31 + 108), f1.d);
    r0 = MemoryInline::FlatRead8((r31 + 67));
}

loc_802BADC8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802BAE48;
    }
}

loc_802BADCC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 96));
    MemoryInline::FlatWriteFloat32((r31 + 112), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 100));
    MemoryInline::FlatWriteFloat32((r31 + 116), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 104));
    MemoryInline::FlatWriteFloat32((r31 + 120), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 196u, (r2 + -13552));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802BADEC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802BAE00;
    }
}

loc_802BADF4:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r2 + -13584));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 120), f0.d);
}

loc_802BAE00:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 108));
    MemoryInline::FlatWriteFloat32((r31 + 124), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 196u, (r2 + -13552));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802BAE10:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802BAE24;
    }
}

loc_802BAE18:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r2 + -13584));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 124), f0.d);
}

loc_802BAE24:
{
    r4 = MemoryInline::FlatRead32((r31 + 88));
    MemoryInline::FlatWrite32((r31 + 92), r4);
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r4 + 72));
    if constexpr (KnownRegArgsCpuCall<0x802BAB70u>(&func_802BAB70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802BAB70_33DB = func_802BAB70_ra18_0_0_2(ctx, r3, r4);
        f1.d = regargs_result_802BAB70_33DB;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802BAB70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 66), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 67), static_cast<uint8_t>(r0));
}

loc_802BAE48:
{
    r0 = 24;
    addr_psqx_802BAE4C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802BAE4C_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BAC0C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BAC0C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802BAC0C func_802BAC0C preserves=true fpr_mask=0x00000000
