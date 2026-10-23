#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8008E6FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t cr = ctx->cr;

    goto loc_8008E6FC;

loc_8008E6FC:
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

loc_8008E73C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E754;
    }
}

loc_8008E740:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8008E74C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E754;
    }
}

loc_8008E750:
{
    r10 = 0;
}

loc_8008E754:
{
}

loc_8008E758:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8008E770;
    }
}

loc_8008E75C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8008E768:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E770;
    }
}

loc_8008E76C:
{
    r9 = 0;
}

loc_8008E770:
{
}

loc_8008E774:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008E788;
    }
}

loc_8008E778:
{
    r0 = (r11 + 1073741824);
}

loc_8008E780:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E788;
    }
}

loc_8008E784:
{
    r8 = 0;
}

loc_8008E788:
{
}

loc_8008E78C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008E7A4;
    }
}

loc_8008E790:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8008E79C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E7A4;
    }
}

loc_8008E7A0:
{
    r7 = 0;
}

loc_8008E7A4:
{
}

loc_8008E7A8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008E7C0;
    }
}

loc_8008E7AC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8008E7B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E7C0;
    }
}

loc_8008E7BC:
{
    r6 = 0;
}

loc_8008E7C0:
{
}

loc_8008E7C4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008E7DC;
    }
}

loc_8008E7C8:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008E7D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E7DC;
    }
}

loc_8008E7D8:
{
    r5 = 0;
}

loc_8008E7DC:
{
}

loc_8008E7E0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008E804;
    }
}

loc_8008E7E4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1371;
    r5 = 0x80590000u;
    r5 = (r5 + 2496);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008E804u;
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

loc_8008E804:
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

loc_8008E828:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E840;
    }
}

loc_8008E82C:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8008E838:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E840;
    }
}

loc_8008E83C:
{
    r9 = 0;
}

loc_8008E840:
{
}

loc_8008E844:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008E85C;
    }
}

loc_8008E848:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8008E854:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E85C;
    }
}

loc_8008E858:
{
    r8 = 0;
}

loc_8008E85C:
{
}

loc_8008E860:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008E874;
    }
}

loc_8008E864:
{
    r0 = (r10 + 1073741824);
}

loc_8008E86C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E874;
    }
}

loc_8008E870:
{
    r7 = 0;
}

loc_8008E874:
{
}

loc_8008E878:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008E890;
    }
}

loc_8008E87C:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8008E888:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E890;
    }
}

loc_8008E88C:
{
    r6 = 0;
}

loc_8008E890:
{
}

loc_8008E894:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008E8AC;
    }
}

loc_8008E898:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8008E8A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E8AC;
    }
}

loc_8008E8A8:
{
    r5 = 0;
}

loc_8008E8AC:
{
}

loc_8008E8B0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008E8C8;
    }
}

loc_8008E8B4:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008E8C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008E8C8;
    }
}

loc_8008E8C4:
{
    r4 = 0;
}

loc_8008E8C8:
{
}

loc_8008E8CC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8008E8F0;
    }
}

loc_8008E8D0:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1372;
    r5 = 0x80590000u;
    r5 = (r5 + 2940);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008E8F0u;
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

loc_8008E8F0:
{
    r3 = r30;
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8008E46Cu>(ctx);
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 8);
}

loc_8008E908:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8008E91C;
    }
}

loc_8008E90C:
{
    r3 = r31;
    r4 = r31;
    r5 = (r30 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x805019BCu>(ctx);
}

loc_8008E91C:
{
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008E6FC func_8008E6FC preserves=true fpr_mask=0x00000000
