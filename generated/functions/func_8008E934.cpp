#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8008E934(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_8008E934;

loc_8008E934:
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

loc_8008E974:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E98C;
    }
}

loc_8008E978:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8008E984:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E98C;
    }
}

loc_8008E988:
{
    r10 = 0;
}

loc_8008E98C:
{
}

loc_8008E990:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8008E9A8;
    }
}

loc_8008E994:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8008E9A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E9A8;
    }
}

loc_8008E9A4:
{
    r9 = 0;
}

loc_8008E9A8:
{
}

loc_8008E9AC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008E9C0;
    }
}

loc_8008E9B0:
{
    r0 = (r11 + 1073741824);
}

loc_8008E9B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E9C0;
    }
}

loc_8008E9BC:
{
    r8 = 0;
}

loc_8008E9C0:
{
}

loc_8008E9C4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008E9DC;
    }
}

loc_8008E9C8:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8008E9D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E9DC;
    }
}

loc_8008E9D8:
{
    r7 = 0;
}

loc_8008E9DC:
{
}

loc_8008E9E0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008E9F8;
    }
}

loc_8008E9E4:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8008E9F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E9F8;
    }
}

loc_8008E9F4:
{
    r6 = 0;
}

loc_8008E9F8:
{
}

loc_8008E9FC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008EA14;
    }
}

loc_8008EA00:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008EA0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EA14;
    }
}

loc_8008EA10:
{
    r5 = 0;
}

loc_8008EA14:
{
}

loc_8008EA18:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008EA3C;
    }
}

loc_8008EA1C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1394;
    r5 = 0x80590000u;
    r5 = (r5 + 2496);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008EA3Cu;
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
}

loc_8008EA3C:
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

loc_8008EA60:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EA78;
    }
}

loc_8008EA64:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8008EA70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EA78;
    }
}

loc_8008EA74:
{
    r9 = 0;
}

loc_8008EA78:
{
}

loc_8008EA7C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008EA94;
    }
}

loc_8008EA80:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8008EA8C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EA94;
    }
}

loc_8008EA90:
{
    r8 = 0;
}

loc_8008EA94:
{
}

loc_8008EA98:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008EAAC;
    }
}

loc_8008EA9C:
{
    r0 = (r10 + 1073741824);
}

loc_8008EAA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EAAC;
    }
}

loc_8008EAA8:
{
    r7 = 0;
}

loc_8008EAAC:
{
}

loc_8008EAB0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008EAC8;
    }
}

loc_8008EAB4:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8008EAC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EAC8;
    }
}

loc_8008EAC4:
{
    r6 = 0;
}

loc_8008EAC8:
{
}

loc_8008EACC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008EAE4;
    }
}

loc_8008EAD0:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8008EADC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EAE4;
    }
}

loc_8008EAE0:
{
    r5 = 0;
}

loc_8008EAE4:
{
}

loc_8008EAE8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008EB00;
    }
}

loc_8008EAEC:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008EAF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008EB00;
    }
}

loc_8008EAFC:
{
    r4 = 0;
}

loc_8008EB00:
{
}

loc_8008EB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8008EB28;
    }
}

loc_8008EB08:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1395;
    r5 = 0x80590000u;
    r5 = (r5 + 2724);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008EB28u;
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
}

loc_8008EB28:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31672));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008EB34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008EB74;
    }
}

loc_8008EB38:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008EB40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008EB74;
    }
}

loc_8008EB44:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008EB4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008EB74;
    }
}

loc_8008EB50:
{
    r0 = MemoryInline::FlatRead32(r30);
    r3 = (r0 | 24);
    MemoryInline::FlatWrite32(r30, r3);
    r0 = (r3 & 4);
}

loc_8008EB64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008EBA8;
    }
}

loc_8008EB68:
{
    r0 = (r3 | 2);
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_8008EBA8;
}

loc_8008EB74:
{
    r3 = MemoryInline::FlatRead32(r30);
    r0 = -27;
    r0 = (r3 & r0);
    MemoryInline::FlatWrite32(r30, r0);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8008EB90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008EBA8;
    }
}

loc_8008EB94:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008EB9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008EBA8;
    }
}

loc_8008EBA0:
{
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32(r30, r0);
}

loc_8008EBA8:
{
    r3 = (r30 + 4);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008E934 func_8008E934 preserves=true fpr_mask=0x00000000
