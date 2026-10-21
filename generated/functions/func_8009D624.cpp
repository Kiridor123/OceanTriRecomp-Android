#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8009D624_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t addr_psqx_8009DEF4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x8009D624u);
    goto loc_8009D624;

loc_8009D624:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 64);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    r31 = r9;
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8009D690:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D6A8;
    }
}

loc_8009D694:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009D6A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D6A8;
    }
}

loc_8009D6A4:
{
    r10 = 0;
}

loc_8009D6A8:
{
}

loc_8009D6AC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8009D6C4;
    }
}

loc_8009D6B0:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009D6BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D6C4;
    }
}

loc_8009D6C0:
{
    r9 = 0;
}

loc_8009D6C4:
{
}

loc_8009D6C8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009D6DC;
    }
}

loc_8009D6CC:
{
    r0 = (r11 + 1073741824);
}

loc_8009D6D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D6DC;
    }
}

loc_8009D6D8:
{
    r8 = 0;
}

loc_8009D6DC:
{
}

loc_8009D6E0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009D6F8;
    }
}

loc_8009D6E4:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009D6F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D6F8;
    }
}

loc_8009D6F4:
{
    r7 = 0;
}

loc_8009D6F8:
{
}

loc_8009D6FC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009D714;
    }
}

loc_8009D700:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009D70C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D714;
    }
}

loc_8009D710:
{
    r6 = 0;
}

loc_8009D714:
{
}

loc_8009D718:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009D730;
    }
}

loc_8009D71C:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009D728:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D730;
    }
}

loc_8009D72C:
{
    r5 = 0;
}

loc_8009D730:
{
}

loc_8009D734:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009D758;
    }
}

loc_8009D738:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 298;
    r5 = 0x80590000u;
    r5 = (r5 + 9788);
    r6 = r26;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009D758u;
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_8009D758:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r28 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8009D77C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D794;
    }
}

loc_8009D780:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009D78C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D794;
    }
}

loc_8009D790:
{
    r9 = 0;
}

loc_8009D794:
{
}

loc_8009D798:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009D7B0;
    }
}

loc_8009D79C:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009D7A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D7B0;
    }
}

loc_8009D7AC:
{
    r8 = 0;
}

loc_8009D7B0:
{
}

loc_8009D7B4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009D7C8;
    }
}

loc_8009D7B8:
{
    r0 = (r10 + 1073741824);
}

loc_8009D7C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D7C8;
    }
}

loc_8009D7C4:
{
    r7 = 0;
}

loc_8009D7C8:
{
}

loc_8009D7CC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009D7E4;
    }
}

loc_8009D7D0:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009D7DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D7E4;
    }
}

loc_8009D7E0:
{
    r6 = 0;
}

loc_8009D7E4:
{
}

loc_8009D7E8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009D800;
    }
}

loc_8009D7EC:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009D7F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D800;
    }
}

loc_8009D7FC:
{
    r5 = 0;
}

loc_8009D800:
{
}

loc_8009D804:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009D81C;
    }
}

loc_8009D808:
{
    r3 = (r28 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009D814:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D81C;
    }
}

loc_8009D818:
{
    r4 = 0;
}

loc_8009D81C:
{
}

loc_8009D820:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009D844;
    }
}

loc_8009D824:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 299;
    r5 = 0x80590000u;
    r5 = (r5 + 9844);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009D844u;
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_8009D844:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r29 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8009D868:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D880;
    }
}

loc_8009D86C:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009D878:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D880;
    }
}

loc_8009D87C:
{
    r9 = 0;
}

loc_8009D880:
{
}

loc_8009D884:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009D89C;
    }
}

loc_8009D888:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009D894:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D89C;
    }
}

loc_8009D898:
{
    r8 = 0;
}

loc_8009D89C:
{
}

loc_8009D8A0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009D8B4;
    }
}

loc_8009D8A4:
{
    r0 = (r10 + 1073741824);
}

loc_8009D8AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D8B4;
    }
}

loc_8009D8B0:
{
    r7 = 0;
}

loc_8009D8B4:
{
}

loc_8009D8B8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009D8D0;
    }
}

loc_8009D8BC:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009D8C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D8D0;
    }
}

loc_8009D8CC:
{
    r6 = 0;
}

loc_8009D8D0:
{
}

loc_8009D8D4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009D8EC;
    }
}

loc_8009D8D8:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009D8E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D8EC;
    }
}

loc_8009D8E8:
{
    r5 = 0;
}

loc_8009D8EC:
{
}

loc_8009D8F0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009D908;
    }
}

loc_8009D8F4:
{
    r3 = (r29 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009D900:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D908;
    }
}

loc_8009D904:
{
    r4 = 0;
}

loc_8009D908:
{
}

loc_8009D90C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009D930;
    }
}

loc_8009D910:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 300;
    r5 = 0x80590000u;
    r5 = (r5 + 9896);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009D930u;
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_8009D930:
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

loc_8009D954:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D96C;
    }
}

loc_8009D958:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009D964:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D96C;
    }
}

loc_8009D968:
{
    r9 = 0;
}

loc_8009D96C:
{
}

loc_8009D970:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009D988;
    }
}

loc_8009D974:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009D980:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D988;
    }
}

loc_8009D984:
{
    r8 = 0;
}

loc_8009D988:
{
}

loc_8009D98C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009D9A0;
    }
}

loc_8009D990:
{
    r0 = (r10 + 1073741824);
}

loc_8009D998:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D9A0;
    }
}

loc_8009D99C:
{
    r7 = 0;
}

loc_8009D9A0:
{
}

loc_8009D9A4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009D9BC;
    }
}

loc_8009D9A8:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009D9B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D9BC;
    }
}

loc_8009D9B8:
{
    r6 = 0;
}

loc_8009D9BC:
{
}

loc_8009D9C0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009D9D8;
    }
}

loc_8009D9C4:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009D9D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D9D8;
    }
}

loc_8009D9D4:
{
    r5 = 0;
}

loc_8009D9D8:
{
}

loc_8009D9DC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009D9F4;
    }
}

loc_8009D9E0:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009D9EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009D9F4;
    }
}

loc_8009D9F0:
{
    r4 = 0;
}

loc_8009D9F4:
{
}

loc_8009D9F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009DA1C;
    }
}

loc_8009D9FC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 301;
    r5 = 0x80590000u;
    r5 = (r5 + 9952);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009DA1Cu;
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_8009DA1C:
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

loc_8009DA40:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009DA58;
    }
}

loc_8009DA44:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009DA50:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009DA58;
    }
}

loc_8009DA54:
{
    r9 = 0;
}

loc_8009DA58:
{
}

loc_8009DA5C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009DA74;
    }
}

loc_8009DA60:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009DA6C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009DA74;
    }
}

loc_8009DA70:
{
    r8 = 0;
}

loc_8009DA74:
{
}

loc_8009DA78:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009DA8C;
    }
}

loc_8009DA7C:
{
    r0 = (r10 + 1073741824);
}

loc_8009DA84:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009DA8C;
    }
}

loc_8009DA88:
{
    r7 = 0;
}

loc_8009DA8C:
{
}

loc_8009DA90:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009DAA8;
    }
}

loc_8009DA94:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009DAA0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009DAA8;
    }
}

loc_8009DAA4:
{
    r6 = 0;
}

loc_8009DAA8:
{
}

loc_8009DAAC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009DAC4;
    }
}

loc_8009DAB0:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009DABC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009DAC4;
    }
}

loc_8009DAC0:
{
    r5 = 0;
}

loc_8009DAC4:
{
}

loc_8009DAC8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009DAE0;
    }
}

loc_8009DACC:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009DAD8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009DAE0;
    }
}

loc_8009DADC:
{
    r4 = 0;
}

loc_8009DAE0:
{
}

loc_8009DAE4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009DB08;
    }
}

loc_8009DAE8:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 302;
    r5 = 0x80590000u;
    r5 = (r5 + 10008);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009DB08u;
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
    mkw_gqr0 = ctx->gqr[0];
}

loc_8009DB08:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r30, r0);
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    guest_range_1 = MemoryInline::ResolveRangeHost((r26 + 4), 0, 6u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r26 + 4));
    r5 = (r3 & 32);
}

loc_8009DB20:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009DB74;
    }
}

loc_8009DB24:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r26 + 5));
}

loc_8009DB2C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8009DB74;
    }
}

loc_8009DB30:
{
    r0 = (r3 & 128);
}

loc_8009DB38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009DB5C;
    }
}

loc_8009DB3C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r26 + 8));
}

loc_8009DB44:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r0))) {
        goto loc_8009DB50;
    }
}

loc_8009DB48:
{
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_8009DED8;
}

loc_8009DB50:
{
    r0 = (r27 & 65535);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_8009DED8;
}

loc_8009DB5C:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r26 + 8));
    r0 = (r0 * r27);
    r0 = PPC_Divwu(static_cast<uint32_t>(r0), static_cast<uint32_t>(r25));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_8009DED8;
}

loc_8009DB74:
{
    r0 = (r3 & 128);
}

loc_8009DB7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009DCBC;
    }
}

loc_8009DB80:
{
    r4 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r26 + 8));
}

loc_8009DB88:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(1))) {
        goto loc_8009DB98;
    }
}

loc_8009DB8C:
{
    r0 = (r3 & 64);
}

loc_8009DB94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009DBE0;
    }
}

loc_8009DB98:
{
    r3 = PPC_Divwu(static_cast<uint32_t>(r27), static_cast<uint32_t>(r4));
}

loc_8009DBA0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009DBC8;
    }
}

loc_8009DBA4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r26 + 5));
}

loc_8009DBAC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_8009DBC8;
    }
}

loc_8009DBB0:
{
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r4));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r26 + 5));
    r0 = (r3 + -1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_8009DED8;
}

loc_8009DBC8:
{
    r0 = (r3 * r4);
    r0 = (r27 - r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32(r30, r3);
    goto loc_8009DED8;
}

loc_8009DBE0:
{
    r0 = (r4 + -1);
    r4 = PPC_Divwu(static_cast<uint32_t>(r27), static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite32(r30, r4);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r26 + 4));
    r0 = (r0 & 32);
}

loc_8009DBF8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009DC74;
    }
}

loc_8009DBFC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r26 + 5));
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8009DC04:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8009DC74;
    }
}

loc_8009DC08:
{
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
}

loc_8009DC1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009DC50;
    }
}

loc_8009DC20:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_8009DC44;
    }
}

loc_8009DC24:
{
    r3 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r26 + 8));
    r0 = (r3 + -1);
    r0 = (r4 * r0);
    r0 = (r27 - r0);
}

loc_8009DC38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009DC44;
    }
}

loc_8009DC3C:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_8009DC44:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_8009DC60;
}

loc_8009DC50:
{
    r3 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r26 + 8));
    r0 = (r3 + -1);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
}

loc_8009DC60:
{
    r3 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r26 + 5));
    r0 = (r3 + -1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_8009DED8;
}

loc_8009DC74:
{
    r0 = (r4 & 1);
}

loc_8009DC7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009DC9C;
    }
}

loc_8009DC80:
{
    r3 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r26 + 8));
    r0 = (r3 + -1);
    r0 = (r4 * r0);
    r0 = (r27 - r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_8009DED8;
}

loc_8009DC9C:
{
    r3 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r26 + 8));
    r3 = (r3 + -1);
    r0 = (r4 + 1);
    r0 = (r3 * r0);
    r0 = (r0 - r27);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_8009DED8;
}

loc_8009DCBC:
{
}

loc_8009DCC0:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r25))) {
        goto loc_8009DD14;
    }
}

loc_8009DCC4:
{
    r0 = (r3 & 64);
}

loc_8009DCCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009DCEC;
    }
}

loc_8009DCD0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r26 + 5));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
}

loc_8009DCE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8009DCF8;
    }
}

loc_8009DCEC:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r26 + 8));
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_8009DD00;
}

loc_8009DCF8:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
}

loc_8009DD00:
{
    r3 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r26 + 5));
    r0 = (r3 + -1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_8009DED8;
}

loc_8009DD14:
{
    r4 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r26 + 8));
}

loc_8009DD1C:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(1))) {
        goto loc_8009DD2C;
    }
}

loc_8009DD20:
{
    r0 = (r3 & 64);
}

loc_8009DD28:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009DDC8;
    }
}

loc_8009DD2C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r26 + 5));
    f3.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r25);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f31.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRam32((r1 + 20), r27);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_6736 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_6736;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32(r30, r3);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    MemoryInline::FlatWriteRam32((r1 + 20), r27);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f0.d, f31.d);
    r0 = MemoryInline::FlatRead16((r26 + 8));
    r0 = (r3 * r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_8009DED8;
}

loc_8009DDC8:
{
    r24 = (r4 + -1);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31448));
    r0 = (r24 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r26 + 5));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31440));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteRam32((r1 + 20), r25);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_730B = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_730B;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r5 = PPC_Divwu(static_cast<uint32_t>(r3), static_cast<uint32_t>(r24));
    MemoryInline::FlatWrite32(r30, r5);
    r0 = MemoryInline::FlatRead8((r26 + 5));
}

loc_8009DE34:
{
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_8009DE94;
    }
}

loc_8009DE38:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    r0 = (r0 & 1);
    r0 = (r0 ^ r3);
    r0 = (r0 - r3);
}

loc_8009DE4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009DE70;
    }
}

loc_8009DE50:
{
    r0 = (r25 + -1);
}

loc_8009DE58:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(r0))) {
        goto loc_8009DE64;
    }
}

loc_8009DE5C:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
}

loc_8009DE64:
{
    r0 = 0;
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_8009DE80;
}

loc_8009DE70:
{
    r3 = MemoryInline::FlatRead16((r26 + 8));
    r0 = (r3 + -1);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
}

loc_8009DE80:
{
    r3 = MemoryInline::FlatRead8((r26 + 5));
    r0 = (r3 + -1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_8009DED8;
}

loc_8009DE94:
{
    r0 = (r5 & 1);
}

loc_8009DE9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8009DEBC;
    }
}

loc_8009DEA0:
{
    r4 = MemoryInline::FlatRead16((r26 + 8));
    r0 = (r4 + -1);
    r0 = (r5 * r0);
    r0 = (r3 - r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    goto loc_8009DED8;
}

loc_8009DEBC:
{
    r4 = MemoryInline::FlatRead16((r26 + 8));
    r4 = (r4 + -1);
    r0 = (r5 + 1);
    r0 = (r4 * r0);
    r0 = (r0 - r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
}

loc_8009DED8:
{
    r0 = MemoryInline::FlatRead16(r28);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31456));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    r0 = 72;
    addr_psqx_8009DEF4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8009DEF4_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8009D624(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8009D624_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009D624 func_8009D624 preserves=true fpr_mask=0x00000000
