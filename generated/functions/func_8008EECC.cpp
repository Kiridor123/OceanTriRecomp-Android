#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8008EECC_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8008EECC;

loc_8008EECC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8008EF0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EF24;
    }
}

loc_8008EF10:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8008EF1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EF24;
    }
}

loc_8008EF20:
{
    r10 = 0;
}

loc_8008EF24:
{
}

loc_8008EF28:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8008EF40;
    }
}

loc_8008EF2C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8008EF38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EF40;
    }
}

loc_8008EF3C:
{
    r9 = 0;
}

loc_8008EF40:
{
}

loc_8008EF44:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008EF58;
    }
}

loc_8008EF48:
{
    r0 = (r11 + 1073741824);
}

loc_8008EF50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EF58;
    }
}

loc_8008EF54:
{
    r8 = 0;
}

loc_8008EF58:
{
}

loc_8008EF5C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008EF74;
    }
}

loc_8008EF60:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8008EF6C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EF74;
    }
}

loc_8008EF70:
{
    r7 = 0;
}

loc_8008EF74:
{
}

loc_8008EF78:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008EF90;
    }
}

loc_8008EF7C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8008EF88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EF90;
    }
}

loc_8008EF8C:
{
    r6 = 0;
}

loc_8008EF90:
{
}

loc_8008EF94:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008EFAC;
    }
}

loc_8008EF98:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008EFA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EFAC;
    }
}

loc_8008EFA8:
{
    r5 = 0;
}

loc_8008EFAC:
{
}

loc_8008EFB0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008EFD4;
    }
}

loc_8008EFB4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1499;
    r5 = 0x80590000u;
    r5 = (r5 + 2496);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008EFD4u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8008EFD4:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8008EFF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F010;
    }
}

loc_8008EFFC:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8008F008:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F010;
    }
}

loc_8008F00C:
{
    r9 = 0;
}

loc_8008F010:
{
}

loc_8008F014:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008F02C;
    }
}

loc_8008F018:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8008F024:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F02C;
    }
}

loc_8008F028:
{
    r8 = 0;
}

loc_8008F02C:
{
}

loc_8008F030:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008F044;
    }
}

loc_8008F034:
{
    r0 = (r10 + 1073741824);
}

loc_8008F03C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F044;
    }
}

loc_8008F040:
{
    r7 = 0;
}

loc_8008F044:
{
}

loc_8008F048:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008F060;
    }
}

loc_8008F04C:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8008F058:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F060;
    }
}

loc_8008F05C:
{
    r6 = 0;
}

loc_8008F060:
{
}

loc_8008F064:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008F07C;
    }
}

loc_8008F068:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8008F074:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F07C;
    }
}

loc_8008F078:
{
    r5 = 0;
}

loc_8008F07C:
{
}

loc_8008F080:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008F098;
    }
}

loc_8008F084:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008F090:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008F098;
    }
}

loc_8008F094:
{
    r4 = 0;
}

loc_8008F098:
{
}

loc_8008F09C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8008F0C0;
    }
}

loc_8008F0A0:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1500;
    r5 = 0x80590000u;
    r5 = (r5 + 2780);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008F0C0u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8008F0C0:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31672));
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 36u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8008F0CC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008F16C;
    }
}

loc_8008F0D0:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31696));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008F0DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008F16C;
    }
}

loc_8008F0E0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r31 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008F0E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008F16C;
    }
}

loc_8008F0EC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008F0F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008F16C;
    }
}

loc_8008F0F8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r31 + 16));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8008F100:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008F16C;
    }
}

loc_8008F104:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r31 + 20));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008F10C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008F16C;
    }
}

loc_8008F110:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008F118:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008F16C;
    }
}

loc_8008F11C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008F124:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008F16C;
    }
}

loc_8008F128:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 32));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8008F130:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008F16C;
    }
}

loc_8008F134:
{
    r4 = 32;
    r3 = MemoryInline::FlatRead32(r30);
    r0 = (r3 & 64);
}

loc_8008F144:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008F15C;
    }
}

loc_8008F148:
{
    r4 = (r4 | 4);
    r0 = (r3 & 8);
}

loc_8008F154:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008F15C;
    }
}

loc_8008F158:
{
    r4 = (r4 | 2);
}

loc_8008F15C:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_8008F17C;
}

loc_8008F16C:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = -39;
    r0 = (r3 & r0);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_8008F17C:
{
    r3 = (r30 + 28);
    r4 = r31;
    // inline leaf 0x80501C14 (13 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_0 = (r4 + 12);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_0));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 24);
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_1));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f4.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f5.d = MemoryInline::FlatReadFloat32((r4 + 32));
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3, f0.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_0 = (r3 + 16);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_0, f1.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 32);
    PPC_PsqStGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1, f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 24), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f5.d);
    // end of inlined leaf 0x80501C14
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 2147483647);
    MemoryInline::FlatWrite32(r30, r0);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8008EECC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8008EECC_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008EECC func_8008EECC preserves=true fpr_mask=0x00000000
