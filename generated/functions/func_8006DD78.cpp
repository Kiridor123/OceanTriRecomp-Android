#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80091760(CpuContext* ctx);
extern "C" uint64_t func_80091760_ra38_7e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8006DD78_ra38_7e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_8006DD78;

loc_8006DD78:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
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

loc_8006DDBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DDD4;
    }
}

loc_8006DDC0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8006DDCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DDD4;
    }
}

loc_8006DDD0:
{
    r10 = 0;
}

loc_8006DDD4:
{
}

loc_8006DDD8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8006DDF0;
    }
}

loc_8006DDDC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8006DDE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DDF0;
    }
}

loc_8006DDEC:
{
    r9 = 0;
}

loc_8006DDF0:
{
}

loc_8006DDF4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8006DE08;
    }
}

loc_8006DDF8:
{
    r0 = (r11 + 1073741824);
}

loc_8006DE00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DE08;
    }
}

loc_8006DE04:
{
    r8 = 0;
}

loc_8006DE08:
{
}

loc_8006DE0C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006DE24;
    }
}

loc_8006DE10:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8006DE1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DE24;
    }
}

loc_8006DE20:
{
    r7 = 0;
}

loc_8006DE24:
{
}

loc_8006DE28:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8006DE40;
    }
}

loc_8006DE2C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8006DE38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DE40;
    }
}

loc_8006DE3C:
{
    r6 = 0;
}

loc_8006DE40:
{
}

loc_8006DE44:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8006DE5C;
    }
}

loc_8006DE48:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006DE54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DE5C;
    }
}

loc_8006DE58:
{
    r5 = 0;
}

loc_8006DE5C:
{
}

loc_8006DE60:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8006DE84;
    }
}

loc_8006DE64:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 763;
    r5 = 0x80590000u;
    r5 = (r5 + -10780);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006DE84u;
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

loc_8006DE84:
{
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryInline::FlatRead32((r31 + 48));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8006DEAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DEC4;
    }
}

loc_8006DEB0:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8006DEBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DEC4;
    }
}

loc_8006DEC0:
{
    r10 = 0;
}

loc_8006DEC4:
{
}

loc_8006DEC8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8006DEE0;
    }
}

loc_8006DECC:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8006DED8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DEE0;
    }
}

loc_8006DEDC:
{
    r9 = 0;
}

loc_8006DEE0:
{
}

loc_8006DEE4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8006DEF8;
    }
}

loc_8006DEE8:
{
    r0 = (r11 + 1073741824);
}

loc_8006DEF0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DEF8;
    }
}

loc_8006DEF4:
{
    r8 = 0;
}

loc_8006DEF8:
{
}

loc_8006DEFC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006DF14;
    }
}

loc_8006DF00:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8006DF0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DF14;
    }
}

loc_8006DF10:
{
    r7 = 0;
}

loc_8006DF14:
{
}

loc_8006DF18:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8006DF30;
    }
}

loc_8006DF1C:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8006DF28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DF30;
    }
}

loc_8006DF2C:
{
    r5 = 0;
}

loc_8006DF30:
{
}

loc_8006DF34:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8006DF4C;
    }
}

loc_8006DF38:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006DF44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DF4C;
    }
}

loc_8006DF48:
{
    r4 = 0;
}

loc_8006DF4C:
{
}

loc_8006DF50:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8006DF70;
    }
}

loc_8006DF54:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 764;
    r5 = 0x80590000u;
    r5 = (r5 + -9284);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006DF70u;
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

loc_8006DF70:
{
    r3 = (r31 + 24);
    // inline leaf 0x80062088 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32(r3);
    // end of inlined leaf 0x80062088
    f31.d = f1.d;
    r29 = 0;
    r30 = 0;
    goto loc_8006DFC0;
}

loc_8006DF88:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r3_addr_2 = (r3 + r30);
    r3 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r3 & 32768);
}

loc_8006DF98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8006DFB8;
    }
}

loc_8006DF9C:
{
    r5 = (r3 & 16383);
    r3 = (r31 + 44);
    r4 = MemoryInline::FlatRead32((r31 + 48));
    r0 = (r5 * 232);
    r4 = (r4 + r0);
    f1.d = f31.d;
    ctx->lr = 0x8006DFB8u;
    if constexpr (KnownRegArgsCpuCall<0x80091760u>(&func_80091760)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80091760_2469 = func_80091760_ra38_7e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_80091760_2469);
        r4 = static_cast<uint32_t>(regargs_result_80091760_2469 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80091760u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_8006DFB8:
{
    r30 = (r30 + 2);
    r29 = (r29 + 1);
}

loc_8006DFC0:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
}

loc_8006DFC8:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_8006DF88;
    }
}

loc_8006DFCC:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8006DD78(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8006DD78_ra38_7e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xF800007F fpr_write=0xF800007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8006DD78 func_8006DD78 preserves=true fpr_mask=0x00000000
