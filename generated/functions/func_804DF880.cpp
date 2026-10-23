#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804DF880(CpuContext* ctx);
extern "C" uint64_t func_804DF880_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804DFCA0(CpuContext* ctx);
extern "C" uint64_t func_804DFCA0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804E15A0(CpuContext* ctx);
extern "C" uint64_t func_804E15A0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804DF880_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804DF880;

loc_804DF880:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(7));
    r0 = (r0_rot_0 & 32640);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(91));
}

loc_804DF89C:
{
    r7 = (r3 + r0);
    r31 = r3;
    r8 = (r7 + r5);
    r27 = r4;
    MemoryInline::FlatWrite8((r8 + 120), static_cast<uint8_t>(r6));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DFA88;
    }
}

loc_804DF8B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DF8F4;
    }
}

loc_804DF8B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(11));
}

loc_804DF8BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DF9AC;
    }
}

loc_804DF8C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DF8DC;
    }
}

loc_804DF8C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(7));
}

loc_804DF8C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DF98C;
    }
}

loc_804DF8CC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DFC7C;
    }
}

loc_804DF8D0:
{
}

loc_804DF8D4:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(6))) {
        goto loc_804DF940;
    }
}

loc_804DF8D8:
{
    goto loc_804DFC7C;
}

loc_804DF8DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(64));
}

loc_804DF8E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DFA18;
    }
}

loc_804DF8E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DFC7C;
    }
}

loc_804DF8E8:
{
}

loc_804DF8EC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(38))) {
        goto loc_804DF9CC;
    }
}

loc_804DF8F0:
{
    goto loc_804DFC7C;
}

loc_804DF8F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(120));
}

loc_804DF8F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DFAE8;
    }
}

loc_804DF8FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DF928;
    }
}

loc_804DF900:
{
}

loc_804DF904:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(100))) {
        goto loc_804DF91C;
    }
}

loc_804DF908:
{
}

loc_804DF90C:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(98))) {
        goto loc_804DFAC8;
    }
}

loc_804DF910:
{
}

loc_804DF914:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(93))) {
        goto loc_804DFC7C;
    }
}

loc_804DF918:
{
    goto loc_804DFAA8;
}

loc_804DF91C:
{
}

loc_804DF920:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(102))) {
        goto loc_804DFC7C;
    }
}

loc_804DF924:
{
    goto loc_804DFAD8;
}

loc_804DF928:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(122));
}

loc_804DF92C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DFC7C;
    }
}

loc_804DF930:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_804DFB24;
    }
}

loc_804DF934:
{
}

loc_804DF938:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(128))) {
        goto loc_804DFC7C;
    }
}

loc_804DF93C:
{
    goto loc_804DFC44;
}

loc_804DF940:
{
    r5 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r5 + 2168));
}

loc_804DF94C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DFC7C;
    }
}

loc_804DF950:
{
    r5 = MemoryInline::FlatRead8((r7 + 221));
    r0 = MemoryInline::FlatRead8((r7 + 220));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r5 = (r5_rot_1 & -256);
    r0 = (r5 + r0);
    r0 = (r0 & 65535);
}

loc_804DF964:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DFC7C;
    }
}

loc_804DF968:
{
    r5 = MemoryInline::FlatRead8((r7 + 126));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r7 + 158));
    r0 = (r5 * 100);
    r0 = (r4 + r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & -65536);
    MemoryInline::FlatWrite32((r3 + 2216), r0);
    goto loc_804DFC7C;
}

loc_804DF98C:
{
    r5 = 0x80630000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & 1020);
    r5 = (r5 + -21408);
    r3 = (r3 + r0);
    r5_addr_1 = (r5 + r4);
    r0 = MemoryInline::FlatRead32(r5_addr_1);
    MemoryInline::FlatWrite32((r3 + 2344), r0);
    goto loc_804DFC7C;
}

loc_804DF9AC:
{
    r5 = 0x80630000u;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & 1020);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r4 = (r4_rot_5 & 1020);
    r5 = (r5 + -21408);
    r3 = (r3 + r0);
    r5_addr_2 = (r5 + r4);
    r0 = MemoryInline::FlatRead32(r5_addr_2);
    MemoryInline::FlatWrite32((r3 + 2408), r0);
    goto loc_804DFC7C;
}

loc_804DF9CC:
{
    r5 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r5 + 2168));
}

loc_804DF9D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DFC7C;
    }
}

loc_804DF9DC:
{
    r5 = MemoryInline::FlatRead8((r7 + 221));
    r0 = MemoryInline::FlatRead8((r7 + 220));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r5 = (r5_rot_2 & -256);
    r0 = (r5 + r0);
    r0 = (r0 & 65535);
}

loc_804DF9F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804DFC7C;
    }
}

loc_804DF9F4:
{
    r5 = MemoryInline::FlatRead8((r7 + 126));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r7 + 158));
    r0 = (r5 * 100);
    r0 = (r4 + r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & -65536);
    MemoryInline::FlatWrite32((r3 + 2216), r0);
    goto loc_804DFC7C;
}

loc_804DFA18:
{
}

loc_804DFA1C:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(64))) {
        goto loc_804DFC7C;
    }
}

loc_804DFA20:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r0 = (r0_rot_6 & 130560);
    r28 = 0;
    r27 = (r3 + r0);
    r30 = 0;
}

loc_804DFA30:
{
    r29 = MemoryInline::FlatRead32((r27 + 4404));
}

loc_804DFA38:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_804DFA74;
    }
}

loc_804DFA3C:
{
    r0 = MemoryInline::FlatRead32((r29 + 36));
}

loc_804DFA44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DFA74;
    }
}

loc_804DFA48:
{
    r4 = MemoryInline::FlatRead32((r31 + 48));
    r3 = r29;
    ctx->lr = 0x804DFA54u;
    if constexpr (KnownRegArgsCpuCall<0x804E15A0u>(&func_804E15A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804E15A0_29AB = func_804E15A0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E15A0_29AB);
        r4 = static_cast<uint32_t>(regargs_result_804E15A0_29AB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x804E15A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead8((r29 + 12));
    r0 = MemoryInline::FlatRead8((r29 + 13));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(9));
    r4 = (r4_rot_3 & -512);
    r5 = MemoryInline::FlatRead32((r29 + 8));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & -4);
    r0 = (r5 + r4);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 4404), r30);
}

loc_804DFA74:
{
    r28 = (r28 + 1);
    r27 = (r27 + 4);
}

loc_804DFA80:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(128))) {
        goto loc_804DFA30;
    }
}

loc_804DFA84:
{
    goto loc_804DFC7C;
}

loc_804DFA88:
{
    r5 = 0x80630000u;
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & 1020);
    r4_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r4 = (r4_rot_7 & 1020);
    r5 = (r5 + -21408);
    r3 = (r3 + r0);
    r5_addr_4 = (r5 + r4);
    r0 = MemoryInline::FlatRead32(r5_addr_4);
    MemoryInline::FlatWrite32((r3 + 2472), r0);
    goto loc_804DFC7C;
}

loc_804DFAA8:
{
    r5 = 0x80630000u;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & 1020);
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r4 = (r4_rot_6 & 1020);
    r5 = (r5 + -21408);
    r3 = (r3 + r0);
    r5_addr_3 = (r5 + r4);
    r0 = MemoryInline::FlatRead32(r5_addr_3);
    MemoryInline::FlatWrite32((r3 + 2536), r0);
    goto loc_804DFC7C;
}

loc_804DFAC8:
{
    r3 = (r3 + r4);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2168), static_cast<uint8_t>(r0));
    goto loc_804DFC7C;
}

loc_804DFAD8:
{
    r3 = (r3 + r4);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 2168), static_cast<uint8_t>(r0));
    goto loc_804DFC7C;
}

loc_804DFAE8:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r0 = (r0_rot_11 & 130560);
    r28 = 0;
    r29 = (r3 + r0);
    r30 = 0;
}

loc_804DFAF8:
{
    r3 = MemoryInline::FlatRead32((r29 + 4404));
}

loc_804DFB00:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804DFB10;
    }
}

loc_804DFB04:
{
    r4 = MemoryInline::FlatRead32((r31 + 48));
    ctx->lr = 0x804DFB0Cu;
    if constexpr (KnownRegArgsCpuCall<0x804E15A0u>(&func_804E15A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804E15A0_3768 = func_804E15A0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E15A0_3768);
        r4 = static_cast<uint32_t>(regargs_result_804E15A0_3768 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x804E15A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32((r29 + 4404), r30);
}

loc_804DFB10:
{
    r28 = (r28 + 1);
    r29 = (r29 + 4);
}

loc_804DFB1C:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(128))) {
        goto loc_804DFAF8;
    }
}

loc_804DFB20:
{
    goto loc_804DFC7C;
}

loc_804DFB24:
{
}

loc_804DFB28:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_804DFB34;
    }
}

loc_804DFB2C:
{
    ctx->lr = 0x804DFB30u;
    if constexpr (KnownRegArgsCpuCall<0x804DFCA0u>(&func_804DFCA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804DFCA0_3DDE = func_804DFCA0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DFCA0_3DDE);
        r4 = static_cast<uint32_t>(regargs_result_804DFCA0_3DDE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DFCA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_804DFC7C;
}

loc_804DFB34:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_10 & 1020);
    r5 = 13107200;
    r4 = (r3 + r0);
    r3 = 0;
    MemoryInline::FlatWrite32((r4 + 2216), r5);
    r0 = 4;
    MemoryInline::FlatWrite32((r4 + 2280), r3);
    ctr = r0;
}

loc_804DFB54:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 120), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r7 + 120), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r7 + 121), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r7 + 122), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r7 + 123), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r7 + 124), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r7 + 125), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r7 + 126), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r7 + 127), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r7 + 128), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r7 + 129), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r7 + 130), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r7 + 131), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r7 + 132), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r7 + 133), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r7 + 134), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r7 + 135), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r7 + 136), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r7 + 137), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r7 + 138), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r7 + 139), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r7 + 140), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r7 + 141), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r7 + 142), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r7 + 143), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r7 + 144), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r7 + 145), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r7 + 146), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r7 + 147), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r7 + 148), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r7 + 149), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r7 + 150), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r7 + 151), static_cast<uint8_t>(r3));
    r7 = (r7 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DFB54;
    }
}

loc_804DFBDC:
{
    r3 = r31;
    r4 = r27;
    r5 = 7;
    r6 = 100;
    ctx->lr = 0x804DFBF0u;
    if constexpr (KnownRegArgsCpuCall<0x804DF880u>(&func_804DF880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804DF880_5296 = func_804DF880_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF880_5296);
        r4 = static_cast<uint32_t>(regargs_result_804DF880_5296 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DF880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = r27;
    r5 = 10;
    r6 = 64;
    ctx->lr = 0x804DFC04u;
    if constexpr (KnownRegArgsCpuCall<0x804DF880u>(&func_804DF880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804DF880_5976 = func_804DF880_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF880_5976);
        r4 = static_cast<uint32_t>(regargs_result_804DF880_5976 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DF880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = r27;
    r5 = 11;
    r6 = 127;
    ctx->lr = 0x804DFC18u;
    if constexpr (KnownRegArgsCpuCall<0x804DF880u>(&func_804DF880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804DF880_6057 = func_804DF880_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF880_6057);
        r4 = static_cast<uint32_t>(regargs_result_804DF880_6057 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DF880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = r27;
    r5 = 91;
    r6 = 0;
    ctx->lr = 0x804DFC2Cu;
    if constexpr (KnownRegArgsCpuCall<0x804DF880u>(&func_804DF880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804DF880_6736 = func_804DF880_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF880_6736);
        r4 = static_cast<uint32_t>(regargs_result_804DF880_6736 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DF880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r3 = r31;
    r4 = r27;
    r5 = 92;
    r6 = 0;
    ctx->lr = 0x804DFC40u;
    if constexpr (KnownRegArgsCpuCall<0x804DF880u>(&func_804DF880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804DF880_6E15 = func_804DF880_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF880_6E15);
        r4 = static_cast<uint32_t>(regargs_result_804DF880_6E15 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
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
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DF880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_804DFC7C;
}

loc_804DFC44:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(9));
    r0 = (r0_rot_9 & 130560);
    r28 = 0;
    r29 = (r3 + r0);
    r30 = 0;
}

loc_804DFC54:
{
    r3 = MemoryInline::FlatRead32((r29 + 4404));
}

loc_804DFC5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804DFC6C;
    }
}

loc_804DFC60:
{
    r4 = MemoryInline::FlatRead32((r31 + 48));
    ctx->lr = 0x804DFC68u;
    if constexpr (KnownRegArgsCpuCall<0x804E15A0u>(&func_804E15A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_804E15A0_764C = func_804E15A0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804E15A0_764C);
        r4 = static_cast<uint32_t>(regargs_result_804E15A0_764C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x804E15A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32((r29 + 4404), r30);
}

loc_804DFC6C:
{
    r28 = (r28 + 1);
    r29 = (r29 + 4);
}

loc_804DFC78:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(128))) {
        goto loc_804DFC54;
    }
}

loc_804DFC7C:
{
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
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DF880(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DF880_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804DF880 func_804DF880 preserves=true fpr_mask=0x00000000
