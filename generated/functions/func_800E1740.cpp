#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E1740(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800E1988_loc_0 = 0;
    uint32_t addr_psqx_800E1994_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800E1740;

loc_800E1740:
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
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r28 = r3;
    r29 = r4;
    r30 = r5;
    f30.d = f1.d;
    f31.d = f2.d;
    r31 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 92));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 68));
    r6 = 0;
    r0 = (r5 & 65535);
}

loc_800E1798:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E17C4;
    }
}

loc_800E179C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30312));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_800E17A4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E17D4;
    }
}

loc_800E17A8:
{
    r6 = 1;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800E17B4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E17D4;
    }
}

loc_800E17BC:
{
    goto loc_800E17D4;
}

loc_800E17C4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30312));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_800E17CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E17D4;
    }
}

loc_800E17D0:
{
    r6 = 1;
}

loc_800E17D4:
{
    r3 = (r4 & 65535);
    r0 = (r3 + -6);
}

loc_800E17E0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_800E17EC;
    }
}

loc_800E17E4:
{
}

loc_800E17E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_800E1814;
    }
}

loc_800E17EC:
{
}

loc_800E17F0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800E1838;
    }
}

loc_800E17F4:
{
    r3 = r28;
    r4 = 1;
    // inline leaf 0x800E19BC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 76));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800E19BC
}

loc_800E1804:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800E1838;
    }
}

loc_800E1808:
{
    f2.d = MemoryInline::FlatReadFloat32((r28 + 116));
    f3.d = f2.d;
    goto loc_800E1890;
}

loc_800E1814:
{
}

loc_800E1818:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_800E1838;
    }
}

loc_800E181C:
{
    r3 = r28;
    r4 = 1;
    // inline leaf 0x800E19BC (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 76));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800E19BC
}

loc_800E182C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800E1838;
    }
}

loc_800E1830:
{
    r3 = 0;
    goto loc_800E1984;
}

loc_800E1838:
{
    r0 = (r30 & 65535);
}

loc_800E1840:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800E187C;
    }
}

loc_800E1844:
{
    f2.d = MemoryInline::FlatReadFloat32((r28 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 92));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 164));
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_800E1858:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E1890;
    }
}

loc_800E185C:
{
    f3.d = MemoryInline::FlatReadFloat32((r28 + 188));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30312));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_800E1868:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E1874;
    }
}

loc_800E186C:
{
    f3.d = f1.d;
    goto loc_800E1890;
}

loc_800E1874:
{
    r31 = 1;
    goto loc_800E1890;
}

loc_800E187C:
{
    f2.d = MemoryInline::FlatReadFloat32((r28 + 140));
    f3.d = MemoryInline::FlatReadFloat32((r28 + 116));
    SetCRFloatResident(cr, 0, f3.d, f2.d);
}

loc_800E1888:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E1890;
    }
}

loc_800E188C:
{
    r31 = 1;
}

loc_800E1890:
{
    r0 = (r29 & 65535);
}

loc_800E1898:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(7))) {
        goto loc_800E1980;
    }
}

loc_800E189C:
{
    r3 = 0x805A0000u;
    r3 = (r3 + -31680);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x800E18B4u:
        goto loc_800E18B4;
        break;
    case 0x800E1904u:
        goto loc_800E1904;
        break;
    case 0x800E1918u:
        goto loc_800E1918;
        break;
    case 0x800E1928u:
        goto loc_800E1928;
        break;
    case 0x800E1948u:
        goto loc_800E1948;
        break;
    case 0x800E1964u:
        goto loc_800E1964;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_800E18B4:
{
}

loc_800E18B8:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_800E18D8;
    }
}

loc_800E18BC:
{
    SetCRFloatResident(cr, 0, f30.d, f2.d);
}

loc_800E18C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E1980;
    }
}

loc_800E18C4:
{
    SetCRFloatResident(cr, 0, f30.d, f3.d);
}

loc_800E18C8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E1980;
    }
}

loc_800E18D0:
{
    r3 = 1;
    goto loc_800E1984;
}

loc_800E18D8:
{
    SetCRFloatResident(cr, 0, f30.d, f3.d);
}

loc_800E18DC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E18F4;
    }
}

loc_800E18E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 188));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_800E18EC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800E18FC;
    }
}

loc_800E18F4:
{
    SetCRFloatResident(cr, 0, f30.d, f2.d);
}

loc_800E18F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E1980;
    }
}

loc_800E18FC:
{
    r3 = 1;
    goto loc_800E1984;
}

loc_800E1904:
{
    SetCRFloatResident(cr, 0, f3.d, f30.d);
}

loc_800E1908:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E1980;
    }
}

loc_800E1910:
{
    r3 = 1;
    goto loc_800E1984;
}

loc_800E1918:
{
    SetCRFloatResident(cr, 0, f3.d, f30.d);
}

loc_800E191C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E1980;
    }
}

loc_800E1920:
{
    r3 = 1;
    goto loc_800E1984;
}

loc_800E1928:
{
    SetCRFloatResident(cr, 0, f3.d, f30.d);
}

loc_800E192C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E1980;
    }
}

loc_800E1934:
{
    SetCRFloatResident(cr, 0, f3.d, f31.d);
}

loc_800E1938:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E1980;
    }
}

loc_800E1940:
{
    r3 = 1;
    goto loc_800E1984;
}

loc_800E1948:
{
    SetCRFloatResident(cr, 0, f3.d, f30.d);
}

loc_800E194C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800E1980;
    }
}

loc_800E1950:
{
    SetCRFloatResident(cr, 0, f3.d, f31.d);
}

loc_800E1954:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E1980;
    }
}

loc_800E195C:
{
    r3 = 1;
    goto loc_800E1984;
}

loc_800E1964:
{
    SetCRFloatResident(cr, 0, f3.d, f30.d);
}

loc_800E1968:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800E1980;
    }
}

loc_800E1970:
{
    SetCRFloatResident(cr, 0, f3.d, f31.d);
}

loc_800E1974:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800E1980;
    }
}

loc_800E1978:
{
    r3 = 1;
    goto loc_800E1984;
}

loc_800E1980:
{
    r3 = 0;
}

loc_800E1984:
{
    r0 = 56;
    addr_psqx_800E1988_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800E1988_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = 40;
    addr_psqx_800E1994_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800E1994_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000005B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E1740 func_800E1740 preserves=true fpr_mask=0x00000000
