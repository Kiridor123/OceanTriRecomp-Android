#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8009B8A4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_stfsx_8009BAA8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;

    goto loc_8009B8A4;

loc_8009B8A4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8009B8EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B904;
    }
}

loc_8009B8F0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8009B8FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B904;
    }
}

loc_8009B900:
{
    r10 = 0;
}

loc_8009B904:
{
}

loc_8009B908:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8009B920;
    }
}

loc_8009B90C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8009B918:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B920;
    }
}

loc_8009B91C:
{
    r9 = 0;
}

loc_8009B920:
{
}

loc_8009B924:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009B938;
    }
}

loc_8009B928:
{
    r0 = (r11 + 1073741824);
}

loc_8009B930:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B938;
    }
}

loc_8009B934:
{
    r8 = 0;
}

loc_8009B938:
{
}

loc_8009B93C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009B954;
    }
}

loc_8009B940:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8009B94C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B954;
    }
}

loc_8009B950:
{
    r7 = 0;
}

loc_8009B954:
{
}

loc_8009B958:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009B970;
    }
}

loc_8009B95C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8009B968:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B970;
    }
}

loc_8009B96C:
{
    r6 = 0;
}

loc_8009B970:
{
}

loc_8009B974:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009B98C;
    }
}

loc_8009B978:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009B984:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B98C;
    }
}

loc_8009B988:
{
    r5 = 0;
}

loc_8009B98C:
{
}

loc_8009B990:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009B9B4;
    }
}

loc_8009B994:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9112);
    r4 = 485;
    r5 = 0x80590000u;
    r5 = (r5 + 9060);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009B9B4u;
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

loc_8009B9B4:
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

loc_8009B9D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B9F0;
    }
}

loc_8009B9DC:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009B9E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009B9F0;
    }
}

loc_8009B9EC:
{
    r9 = 0;
}

loc_8009B9F0:
{
}

loc_8009B9F4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009BA0C;
    }
}

loc_8009B9F8:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009BA04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BA0C;
    }
}

loc_8009BA08:
{
    r8 = 0;
}

loc_8009BA0C:
{
}

loc_8009BA10:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009BA24;
    }
}

loc_8009BA14:
{
    r0 = (r10 + 1073741824);
}

loc_8009BA1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BA24;
    }
}

loc_8009BA20:
{
    r7 = 0;
}

loc_8009BA24:
{
}

loc_8009BA28:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009BA40;
    }
}

loc_8009BA2C:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009BA38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BA40;
    }
}

loc_8009BA3C:
{
    r6 = 0;
}

loc_8009BA40:
{
}

loc_8009BA44:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009BA5C;
    }
}

loc_8009BA48:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009BA54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BA5C;
    }
}

loc_8009BA58:
{
    r5 = 0;
}

loc_8009BA5C:
{
}

loc_8009BA60:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009BA78;
    }
}

loc_8009BA64:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009BA70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009BA78;
    }
}

loc_8009BA74:
{
    r4 = 0;
}

loc_8009BA78:
{
}

loc_8009BA7C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009BAA0;
    }
}

loc_8009BA80:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9048);
    r4 = 486;
    r5 = 0x80590000u;
    r5 = (r5 + 8996);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009BAA0u;
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

loc_8009BAA0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    addr_stfsx_8009BAA8_loc_0 = (r29 + r0);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8009BAA8_loc_0, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r3 = (r29 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 32), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8009B8A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8009B8A4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009B8A4 func_8009B8A4 preserves=true fpr_mask=0x00000000
