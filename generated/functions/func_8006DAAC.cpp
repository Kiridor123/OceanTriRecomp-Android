#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80091760(CpuContext* ctx);
extern "C" uint64_t func_80091760_ra38_7e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8006DAAC_ra38_7e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

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
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8006DAACu);
    goto loc_8006DAAC;

loc_8006DAAC:
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

loc_8006DAF4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DB0C;
    }
}

loc_8006DAF8:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8006DB04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DB0C;
    }
}

loc_8006DB08:
{
    r10 = 0;
}

loc_8006DB0C:
{
}

loc_8006DB10:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8006DB28;
    }
}

loc_8006DB14:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8006DB20:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DB28;
    }
}

loc_8006DB24:
{
    r9 = 0;
}

loc_8006DB28:
{
}

loc_8006DB2C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8006DB40;
    }
}

loc_8006DB30:
{
    r0 = (r11 + 1073741824);
}

loc_8006DB38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DB40;
    }
}

loc_8006DB3C:
{
    r8 = 0;
}

loc_8006DB40:
{
}

loc_8006DB44:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006DB5C;
    }
}

loc_8006DB48:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8006DB54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DB5C;
    }
}

loc_8006DB58:
{
    r7 = 0;
}

loc_8006DB5C:
{
}

loc_8006DB60:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8006DB78;
    }
}

loc_8006DB64:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8006DB70:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DB78;
    }
}

loc_8006DB74:
{
    r6 = 0;
}

loc_8006DB78:
{
}

loc_8006DB7C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8006DB94;
    }
}

loc_8006DB80:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006DB8C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DB94;
    }
}

loc_8006DB90:
{
    r5 = 0;
}

loc_8006DB94:
{
}

loc_8006DB98:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8006DBBC;
    }
}

loc_8006DB9C:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 734;
    r5 = 0x80590000u;
    r5 = (r5 + -10780);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006DBBCu;
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

loc_8006DBBC:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r30 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8006DBE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DBF8;
    }
}

loc_8006DBE4:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8006DBF0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DBF8;
    }
}

loc_8006DBF4:
{
    r9 = 0;
}

loc_8006DBF8:
{
}

loc_8006DBFC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8006DC14;
    }
}

loc_8006DC00:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8006DC0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DC14;
    }
}

loc_8006DC10:
{
    r8 = 0;
}

loc_8006DC14:
{
}

loc_8006DC18:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006DC2C;
    }
}

loc_8006DC1C:
{
    r0 = (r10 + 1073741824);
}

loc_8006DC24:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DC2C;
    }
}

loc_8006DC28:
{
    r7 = 0;
}

loc_8006DC2C:
{
}

loc_8006DC30:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8006DC48;
    }
}

loc_8006DC34:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8006DC40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DC48;
    }
}

loc_8006DC44:
{
    r6 = 0;
}

loc_8006DC48:
{
}

loc_8006DC4C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8006DC64;
    }
}

loc_8006DC50:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8006DC5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DC64;
    }
}

loc_8006DC60:
{
    r5 = 0;
}

loc_8006DC64:
{
}

loc_8006DC68:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8006DC80;
    }
}

loc_8006DC6C:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006DC78:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006DC80;
    }
}

loc_8006DC7C:
{
    r4 = 0;
}

loc_8006DC80:
{
}

loc_8006DC84:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8006DCA8;
    }
}

loc_8006DC88:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 735;
    r5 = 0x80590000u;
    r5 = (r5 + -9624);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006DCA8u;
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

loc_8006DCA8:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r7 = (r3 + -1);
}

loc_8006DCB4:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(r7))) {
        goto loc_8006DCD8;
    }
}

loc_8006DCB8:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 736;
    r5 = 0x80590000u;
    r5 = (r5 + -10728);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006DCD8u;
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

loc_8006DCD8:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3_addr_0 = (r3 + r0);
    r31 = MemoryInline::FlatRead16(r3_addr_0);
    r0 = (r31 & 49152);
}

loc_8006DCEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006DD00;
    }
}

loc_8006DCF0:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r30, r0);
    r3 = r30;
    goto loc_8006DD5C;
}

loc_8006DD00:
{
    r0 = (r31 & 16383);
}

loc_8006DD08:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r0))) {
        goto loc_8006DD28;
    }
}

loc_8006DD0C:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 746;
    r5 = 0x80590000u;
    r5 = (r5 + -9344);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006DD28u;
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

loc_8006DD28:
{
    r3 = MemoryInline::FlatRead32((r29 + 48));
}

loc_8006DD30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8006DD40;
    }
}

loc_8006DD34:
{
    r0 = (r31 * 232);
    r3 = (r3 + r0);
    goto loc_8006DD5C;
}

loc_8006DD40:
{
    r3 = (r29 + 24);
    // inline leaf 0x80062088 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32(r3);
    // end of inlined leaf 0x80062088
    r3 = (r29 + 44);
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x8006DD58u;
    if constexpr (KnownRegArgsCpuCall<0x80091760u>(&func_80091760)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80091760_294E = func_80091760_ra38_7e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d);
        r3 = static_cast<uint32_t>(regargs_result_80091760_294E);
        r4 = static_cast<uint32_t>(regargs_result_80091760_294E >> 32);
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
        cr = ctx->cr;
    }
    r3 = r30;
}

loc_8006DD5C:
{
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8006DAAC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8006DAAC_ra38_7e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0xF800007F fpr_write=0xF800007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8006DAAC func_8006DAAC preserves=true fpr_mask=0x00000000
