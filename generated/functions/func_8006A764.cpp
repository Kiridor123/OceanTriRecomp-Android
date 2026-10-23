#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80069CE4(CpuContext* ctx);
extern "C" uint64_t func_80069CE4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8006A764_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;

    goto loc_8006A764;

loc_8006A764:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r7;
    r27 = r8;
    ctx->lr = 0x8006A790u;
    if constexpr (KnownRegArgsCpuCall<0x80069CE4u>(&func_80069CE4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80069CE4_931 = func_80069CE4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80069CE4_931);
        r4 = static_cast<uint32_t>(regargs_result_80069CE4_931 >> 32);
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
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
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
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80069CE4u>(ctx);
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
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = 0x80590000u;
    r0 = (r3 + -8920);
    MemoryInline::FlatWrite32(r28, r0);
    MemoryInline::FlatWrite32((r28 + 24), r27);
    MemoryInline::FlatWrite32((r28 + 28), r31);
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r29 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8006A7C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A7E0;
    }
}

loc_8006A7CC:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8006A7D8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A7E0;
    }
}

loc_8006A7DC:
{
    r9 = 0;
}

loc_8006A7E0:
{
}

loc_8006A7E4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8006A7FC;
    }
}

loc_8006A7E8:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8006A7F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A7FC;
    }
}

loc_8006A7F8:
{
    r8 = 0;
}

loc_8006A7FC:
{
}

loc_8006A800:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006A814;
    }
}

loc_8006A804:
{
    r0 = (r10 + 1073741824);
}

loc_8006A80C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A814;
    }
}

loc_8006A810:
{
    r7 = 0;
}

loc_8006A814:
{
}

loc_8006A818:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8006A830;
    }
}

loc_8006A81C:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8006A828:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A830;
    }
}

loc_8006A82C:
{
    r6 = 0;
}

loc_8006A830:
{
}

loc_8006A834:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8006A84C;
    }
}

loc_8006A838:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8006A844:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A84C;
    }
}

loc_8006A848:
{
    r5 = 0;
}

loc_8006A84C:
{
}

loc_8006A850:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8006A868;
    }
}

loc_8006A854:
{
    r3 = (r29 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006A860:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A868;
    }
}

loc_8006A864:
{
    r4 = 0;
}

loc_8006A868:
{
}

loc_8006A86C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8006A890;
    }
}

loc_8006A870:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 144;
    r5 = 0x80590000u;
    r5 = (r5 + -10408);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006A890u;
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

loc_8006A890:
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

loc_8006A8B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A8CC;
    }
}

loc_8006A8B8:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8006A8C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A8CC;
    }
}

loc_8006A8C8:
{
    r9 = 0;
}

loc_8006A8CC:
{
}

loc_8006A8D0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8006A8E8;
    }
}

loc_8006A8D4:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8006A8E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A8E8;
    }
}

loc_8006A8E4:
{
    r8 = 0;
}

loc_8006A8E8:
{
}

loc_8006A8EC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006A900;
    }
}

loc_8006A8F0:
{
    r0 = (r10 + 1073741824);
}

loc_8006A8F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A900;
    }
}

loc_8006A8FC:
{
    r7 = 0;
}

loc_8006A900:
{
}

loc_8006A904:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8006A91C;
    }
}

loc_8006A908:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8006A914:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A91C;
    }
}

loc_8006A918:
{
    r6 = 0;
}

loc_8006A91C:
{
}

loc_8006A920:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8006A938;
    }
}

loc_8006A924:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8006A930:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A938;
    }
}

loc_8006A934:
{
    r5 = 0;
}

loc_8006A938:
{
}

loc_8006A93C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8006A954;
    }
}

loc_8006A940:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006A94C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A954;
    }
}

loc_8006A950:
{
    r4 = 0;
}

loc_8006A954:
{
}

loc_8006A958:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8006A97C;
    }
}

loc_8006A95C:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 145;
    r5 = 0x80590000u;
    r5 = (r5 + -10356);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006A97Cu;
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

loc_8006A97C:
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

loc_8006A9A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A9B8;
    }
}

loc_8006A9A4:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8006A9B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A9B8;
    }
}

loc_8006A9B4:
{
    r9 = 0;
}

loc_8006A9B8:
{
}

loc_8006A9BC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8006A9D4;
    }
}

loc_8006A9C0:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8006A9CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A9D4;
    }
}

loc_8006A9D0:
{
    r8 = 0;
}

loc_8006A9D4:
{
}

loc_8006A9D8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006A9EC;
    }
}

loc_8006A9DC:
{
    r0 = (r10 + 1073741824);
}

loc_8006A9E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006A9EC;
    }
}

loc_8006A9E8:
{
    r7 = 0;
}

loc_8006A9EC:
{
}

loc_8006A9F0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8006AA08;
    }
}

loc_8006A9F4:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8006AA00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AA08;
    }
}

loc_8006AA04:
{
    r6 = 0;
}

loc_8006AA08:
{
}

loc_8006AA0C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8006AA24;
    }
}

loc_8006AA10:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8006AA1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AA24;
    }
}

loc_8006AA20:
{
    r5 = 0;
}

loc_8006AA24:
{
}

loc_8006AA28:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8006AA40;
    }
}

loc_8006AA2C:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006AA38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006AA40;
    }
}

loc_8006AA3C:
{
    r4 = 0;
}

loc_8006AA40:
{
}

loc_8006AA44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8006AA68;
    }
}

loc_8006AA48:
{
    r3 = 0x80590000u;
    r3 = (r3 + -10800);
    r4 = 146;
    r5 = 0x80590000u;
    r5 = (r5 + -10292);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8006AA68u;
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

loc_8006AA68:
{
    r6 = 0;
    r5 = 0;
    r4 = 0;
    goto loc_8006AA88;
}

loc_8006AA78:
{
    r3 = MemoryInline::FlatRead32((r28 + 28));
    r3_addr_2 = (r3 + r5);
    MemoryInline::FlatWrite32(r3_addr_2, r4);
    r5 = (r5 + 4);
    r6 = (r6 + 1);
}

loc_8006AA88:
{
    r0 = MemoryInline::FlatRead32((r28 + 24));
}

loc_8006AA90:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r0))) {
        goto loc_8006AA78;
    }
}

loc_8006AA94:
{
    r3 = r28;
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
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
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8006A764(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8006A764_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8006A764 func_8006A764 preserves=true fpr_mask=0x00000000
