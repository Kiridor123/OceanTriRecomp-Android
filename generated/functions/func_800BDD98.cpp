#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB3EC(CpuContext* ctx);
extern "C" uint32_t func_800AB3EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800BDD98_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    MKW_GUEST_ENTER(0x800BDD98u);
    goto loc_800BDD98;

loc_800BDD98:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BDDD0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDDE8;
    }
}

loc_800BDDD4:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BDDE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDDE8;
    }
}

loc_800BDDE4:
{
    r10 = 0;
}

loc_800BDDE8:
{
}

loc_800BDDEC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BDE04;
    }
}

loc_800BDDF0:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BDDFC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDE04;
    }
}

loc_800BDE00:
{
    r9 = 0;
}

loc_800BDE04:
{
}

loc_800BDE08:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BDE1C;
    }
}

loc_800BDE0C:
{
    r0 = (r11 + 1073741824);
}

loc_800BDE14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDE1C;
    }
}

loc_800BDE18:
{
    r8 = 0;
}

loc_800BDE1C:
{
}

loc_800BDE20:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BDE38;
    }
}

loc_800BDE24:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BDE30:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDE38;
    }
}

loc_800BDE34:
{
    r7 = 0;
}

loc_800BDE38:
{
}

loc_800BDE3C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BDE54;
    }
}

loc_800BDE40:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BDE4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDE54;
    }
}

loc_800BDE50:
{
    r6 = 0;
}

loc_800BDE54:
{
}

loc_800BDE58:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BDE70;
    }
}

loc_800BDE5C:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BDE68:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDE70;
    }
}

loc_800BDE6C:
{
    r5 = 0;
}

loc_800BDE70:
{
}

loc_800BDE74:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BDE98;
    }
}

loc_800BDE78:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18480);
    r4 = 687;
    r5 = 0x80590000u;
    r5 = (r5 + 18560);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BDE98u;
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

loc_800BDE98:
{
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryInline::FlatRead32((r31 + 36));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800BDEC0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDED8;
    }
}

loc_800BDEC4:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800BDED0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDED8;
    }
}

loc_800BDED4:
{
    r10 = 0;
}

loc_800BDED8:
{
}

loc_800BDEDC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BDEF4;
    }
}

loc_800BDEE0:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800BDEEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDEF4;
    }
}

loc_800BDEF0:
{
    r9 = 0;
}

loc_800BDEF4:
{
}

loc_800BDEF8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BDF0C;
    }
}

loc_800BDEFC:
{
    r0 = (r11 + 1073741824);
}

loc_800BDF04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDF0C;
    }
}

loc_800BDF08:
{
    r8 = 0;
}

loc_800BDF0C:
{
}

loc_800BDF10:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BDF28;
    }
}

loc_800BDF14:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800BDF20:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDF28;
    }
}

loc_800BDF24:
{
    r7 = 0;
}

loc_800BDF28:
{
}

loc_800BDF2C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BDF44;
    }
}

loc_800BDF30:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800BDF3C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDF44;
    }
}

loc_800BDF40:
{
    r5 = 0;
}

loc_800BDF44:
{
}

loc_800BDF48:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BDF60;
    }
}

loc_800BDF4C:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BDF58:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDF60;
    }
}

loc_800BDF5C:
{
    r4 = 0;
}

loc_800BDF60:
{
}

loc_800BDF64:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800BDF84;
    }
}

loc_800BDF68:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18480);
    r4 = 688;
    r5 = 0x80590000u;
    r5 = (r5 + 18612);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BDF84u;
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

loc_800BDF84:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
    ctx->lr = 0x800BDF8Cu;
    if constexpr (KnownRegArgsCpuCall<0x800AB3ECu>(&func_800AB3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB3EC_1CEA = func_800AB3EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB3EC_1CEA;
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

loc_800BDFB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDFCC;
    }
}

loc_800BDFB8:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800BDFC4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDFCC;
    }
}

loc_800BDFC8:
{
    r10 = 0;
}

loc_800BDFCC:
{
}

loc_800BDFD0:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800BDFE8;
    }
}

loc_800BDFD4:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800BDFE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BDFE8;
    }
}

loc_800BDFE4:
{
    r9 = 0;
}

loc_800BDFE8:
{
}

loc_800BDFEC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800BE000;
    }
}

loc_800BDFF0:
{
    r0 = (r11 + 1073741824);
}

loc_800BDFF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE000;
    }
}

loc_800BDFFC:
{
    r8 = 0;
}

loc_800BE000:
{
}

loc_800BE004:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800BE01C;
    }
}

loc_800BE008:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800BE014:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE01C;
    }
}

loc_800BE018:
{
    r7 = 0;
}

loc_800BE01C:
{
}

loc_800BE020:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800BE038;
    }
}

loc_800BE024:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800BE030:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE038;
    }
}

loc_800BE034:
{
    r6 = 0;
}

loc_800BE038:
{
}

loc_800BE03C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800BE054;
    }
}

loc_800BE040:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800BE04C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800BE054;
    }
}

loc_800BE050:
{
    r5 = 0;
}

loc_800BE054:
{
}

loc_800BE058:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800BE07C;
    }
}

loc_800BE05C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 18480);
    r4 = 691;
    r5 = 0x80590000u;
    r5 = (r5 + 18672);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800BE07Cu;
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

loc_800BE07C:
{
    r0 = MemoryInline::FlatRead8((r31 + 174));
}

loc_800BE084:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800BE0BC;
    }
}

loc_800BE088:
{
}

loc_800BE08C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800BE0C8;
    }
}

loc_800BE090:
{
}

loc_800BE094:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800BE0D4;
    }
}

loc_800BE098:
{
}

loc_800BE09C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800BE0E0;
    }
}

loc_800BE0A0:
{
}

loc_800BE0A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_800BE0EC;
    }
}

loc_800BE0A8:
{
}

loc_800BE0AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_800BE0EC;
    }
}

loc_800BE0B0:
{
}

loc_800BE0B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_800BE0F8;
    }
}

loc_800BE0B8:
{
    goto loc_800BE104;
}

loc_800BE0BC:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30576);
    goto loc_800BE10C;
}

loc_800BE0C8:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30668);
    goto loc_800BE10C;
}

loc_800BE0D4:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30676);
    goto loc_800BE10C;
}

loc_800BE0E0:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -17060);
    goto loc_800BE10C;
}

loc_800BE0EC:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30740);
    goto loc_800BE10C;
}

loc_800BE0F8:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -17376);
    goto loc_800BE10C;
}

loc_800BE104:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30576);
}

loc_800BE10C:
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

extern "C" void func_800BDD98(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800BDD98_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800BDD98 func_800BDD98 preserves=true fpr_mask=0x00000000
