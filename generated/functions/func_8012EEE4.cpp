#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8012EEE4_ra18_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f2)
{
    uint32_t addr_psqx_8012EFD8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8012EEE4;

loc_8012EEE4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r29 = r3;
    r0 = (r4 & 255);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28192));
    stackword5 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r0);
    r31 = 1127219200;
    stackword6 = r31;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword6), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28228));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r30 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl1_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB50;
    }
}

loc_inl1_0x800CFB48:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB64;
    }
}

loc_inl1_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl1_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r4 = 0;
    f2.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r3 & 65535);
    ctr = r0;
}

loc_8012EF54:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(0))) {
        goto loc_8012EFD0;
    }
}

loc_8012EF58:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_8012EF60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012EFC4;
    }
}

loc_8012EF64:
{
    r3 = MemoryInline::FlatRead8((r30 + 3));
    r0 = (r29 & 255);
}

loc_8012EF70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8012EFC4;
    }
}

loc_8012EF74:
{
    r3 = MemoryInline::FlatRead32((r30 + 1952));
    r0 = MemoryInline::FlatRead32((r30 + 1964));
    r0 = (r0 - r3);
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    stackword8 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = MemoryInline::FlatRead32((r30 + 1956));
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword10 = r31;
    MemoryInline::FlatWriteRam32((r1 + 16), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8012EFB4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012EFC4;
    }
}

loc_8012EFBC:
{
    r3 = 1;
    goto loc_8012EFD4;
}

loc_8012EFC4:
{
    r4 = (r4 + 1);
    r30 = (r30 + 2840);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012EF58;
    }
}

loc_8012EFD0:
{
    r3 = 0;
}

loc_8012EFD4:
{
    r0 = 56;
    addr_psqx_8012EFD8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8012EFD8_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8012EEE4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8012EEE4_ra18_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x80000007 fpr_write=0x80000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012EEE4 func_8012EEE4 preserves=true fpr_mask=0x00000000
