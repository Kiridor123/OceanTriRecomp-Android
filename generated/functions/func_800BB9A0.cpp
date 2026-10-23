#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB3EC(CpuContext* ctx);
extern "C" uint32_t func_800AB3EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800BB9A0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_800BB9A0;

loc_800BB9A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = 1;
    r6 = MemoryInline::FlatRead32((r4 + 36));
    r4 = (r6 & -16777216);
    r0 = (r4 + -2147483648);
}

loc_800BB9DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BB9F4;
    }
}

loc_800BB9E0:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BB9EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BB9F4;
    }
}

loc_800BB9F0:
{
    r11 = 0;
}

loc_800BB9F4:
{
}

loc_800BB9F8:
{
    if ((static_cast<int32_t>(r11) != static_cast<int32_t>(0))) {
        goto loc_800BBA10;
    }
}

loc_800BB9FC:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BBA08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BBA10;
    }
}

loc_800BBA0C:
{
    r10 = 0;
}

loc_800BBA10:
{
}

loc_800BBA14:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BBA28;
    }
}

loc_800BBA18:
{
    r0 = (r4 + 1073741824);
}

loc_800BBA20:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BBA28;
    }
}

loc_800BBA24:
{
    r9 = 0;
}

loc_800BBA28:
{
}

loc_800BBA2C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BBA44;
    }
}

loc_800BBA30:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BBA3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BBA44;
    }
}

loc_800BBA40:
{
    r8 = 0;
}

loc_800BBA44:
{
}

loc_800BBA48:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BBA60;
    }
}

loc_800BBA4C:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BBA58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BBA60;
    }
}

loc_800BBA5C:
{
    r7 = 0;
}

loc_800BBA60:
{
}

loc_800BBA64:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BBA7C;
    }
}

loc_800BBA68:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BBA74:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BBA7C;
    }
}

loc_800BBA78:
{
    r5 = 0;
}

loc_800BBA7C:
{
}

loc_800BBA80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BBAA0;
    }
}

loc_800BBA84:
{
    r3 = 0x80590000u;
    r3 = (r3 + 17992);
    r4 = 784;
    r5 = 0x80590000u;
    r5 = (r5 + 18076);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BBAA0u;
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

loc_800BBAA0:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
    ctx->lr = 0x800BBAA8u;
    if constexpr (KnownRegArgsCpuCall<0x800AB3ECu>(&func_800AB3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB3EC_1200 = func_800AB3EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB3EC_1200;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800AB3ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r31 = r3;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BBAD0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BBAE8;
    }
}

loc_800BBAD4:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800BBAE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BBAE8;
    }
}

loc_800BBAE4:
{
    r10 = 0;
}

loc_800BBAE8:
{
}

loc_800BBAEC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BBB04;
    }
}

loc_800BBAF0:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800BBAFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BBB04;
    }
}

loc_800BBB00:
{
    r9 = 0;
}

loc_800BBB04:
{
}

loc_800BBB08:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BBB1C;
    }
}

loc_800BBB0C:
{
    r0 = (r11 + 1073741824);
}

loc_800BBB14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BBB1C;
    }
}

loc_800BBB18:
{
    r8 = 0;
}

loc_800BBB1C:
{
}

loc_800BBB20:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BBB38;
    }
}

loc_800BBB24:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800BBB30:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BBB38;
    }
}

loc_800BBB34:
{
    r7 = 0;
}

loc_800BBB38:
{
}

loc_800BBB3C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BBB54;
    }
}

loc_800BBB40:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800BBB4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BBB54;
    }
}

loc_800BBB50:
{
    r6 = 0;
}

loc_800BBB54:
{
}

loc_800BBB58:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BBB70;
    }
}

loc_800BBB5C:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BBB68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BBB70;
    }
}

loc_800BBB6C:
{
    r5 = 0;
}

loc_800BBB70:
{
}

loc_800BBB74:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BBB98;
    }
}

loc_800BBB78:
{
    r3 = 0x80590000u;
    r3 = (r3 + 17992);
    r4 = 786;
    r5 = 0x80590000u;
    r5 = (r5 + 18136);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BBB98u;
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

loc_800BBB98:
{
    r0 = MemoryInline::FlatRead8((r31 + 174));
}

loc_800BBBA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800BBBC8;
    }
}

loc_800BBBA4:
{
}

loc_800BBBA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800BBBD4;
    }
}

loc_800BBBAC:
{
}

loc_800BBBB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800BBBE0;
    }
}

loc_800BBBB4:
{
}

loc_800BBBB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800BBBEC;
    }
}

loc_800BBBBC:
{
}

loc_800BBBC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_800BBBF8;
    }
}

loc_800BBBC4:
{
    goto loc_800BBC04;
}

loc_800BBBC8:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30576);
    goto loc_800BBC0C;
}

loc_800BBBD4:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30668);
    goto loc_800BBC0C;
}

loc_800BBBE0:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30676);
    goto loc_800BBC0C;
}

loc_800BBBEC:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -17060);
    goto loc_800BBC0C;
}

loc_800BBBF8:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -17376);
    goto loc_800BBC0C;
}

loc_800BBC04:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30576);
}

loc_800BBC0C:
{
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800BB9A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800BB9A0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800BB9A0 func_800BB9A0 preserves=true fpr_mask=0x00000000
