#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004C300(CpuContext* ctx);
extern "C" uint64_t func_8004C300_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801E40A0(CpuContext* ctx);
extern "C" uint64_t func_801E40A0_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801E41A0(CpuContext* ctx);
extern "C" uint64_t func_801E41A0_rac8_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8021290C(CpuContext* ctx);
extern "C" uint64_t func_8021290C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80212EA0(CpuContext* ctx);
extern "C" uint64_t func_80212EA0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80217E10(CpuContext* ctx);
extern "C" uint64_t func_80217E10_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_801E46B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];

    MKW_GUEST_ENTER(0x801E46B4u);
    goto loc_801E46B4;

loc_801E46B4:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r21 = r3;
    r20 = r4;
    r24 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x801E46D8u;
    if constexpr (KnownRegArgsCpuCall<0x8004C300u>(&func_8004C300)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8004C300_BB9 = func_8004C300_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004C300_BB9);
        r4 = static_cast<uint32_t>(regargs_result_8004C300_BB9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004C300u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r29 = r3;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r20)));
    r26_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r26 = (r26_rot_0 & -8);
    r25 = (r26 + 7);
    r3 = r21;
    ctx->lr = 0x801E46F0u;
    if constexpr (KnownRegArgsCpuCall<0x801E40A0u>(&func_801E40A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_801E40A0_FBC = func_801E40A0_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_801E40A0_FBC);
        r4 = static_cast<uint32_t>(regargs_result_801E40A0_FBC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x801E40A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r0 = MemoryInline::FlatRead16((r21 + 68));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r13 + -29384);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    MemoryInline::FlatWrite8((r21 + 100), static_cast<uint8_t>(r0));
}

loc_801E4704:
{
    r30 = 1;
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_801E4710;
    }
}

loc_801E470C:
{
    r30 = 3;
}

loc_801E4710:
{
    r0 = MemoryInline::FlatRead16((r21 + 68));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + -9512);
    r3_addr_1 = (r3 + r0);
    r22 = MemoryInline::FlatRead32(r3_addr_1);
    r28 = 0;
    r31 = 0;
    MemoryInline::FlatWrite16((r21 + 248), static_cast<uint16_t>(r31));
    r23 = -1;
}

loc_801E4734:
{
    r3 = MemoryInline::FlatRead8((r21 + 100));
    r4 = MemoryInline::FlatRead8((r21 + 232));
    r5 = r23;
    r6 = r22;
    ctx->lr = 0x801E4748u;
    if constexpr (KnownRegArgsCpuCall<0x80212EA0u>(&func_80212EA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_80212EA0_179D = func_80212EA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80212EA0_179D);
        r4 = static_cast<uint32_t>(regargs_result_80212EA0_179D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80212EA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
    r23 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_801E4750:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(-1))) {
        goto loc_801E486C;
    }
}

loc_801E4754:
{
    r0 = (r23 * 6);
    r22_addr_2 = (r22 + r0);
    r20 = MemoryInline::FlatRead16(r22_addr_2);
    r3 = MemoryInline::FlatRead8((r21 + 233));
    r4 = MemoryInline::FlatRead8((r21 + 100));
    r5 = r20;
    ctx->lr = 0x801E476Cu;
    if constexpr (KnownRegArgsCpuCall<0x8021290Cu>(&func_8021290C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021290C_1CDF = func_8021290C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021290C_1CDF);
        r4 = static_cast<uint32_t>(regargs_result_8021290C_1CDF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8021290Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801E4770:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801E4734;
    }
}

loc_801E4774:
{
}

loc_801E4778:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_801E4734;
    }
}

loc_801E477C:
{
}

loc_801E4780:
{
    if ((static_cast<int32_t>(r26) > static_cast<int32_t>(r28))) {
        goto loc_801E4864;
    }
}

loc_801E4784:
{
}

loc_801E4788:
{
    if ((static_cast<int32_t>(r28) > static_cast<int32_t>(r25))) {
        goto loc_801E4864;
    }
}

loc_801E478C:
{
    r0 = MemoryInline::FlatRead16((r21 + 248));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r21 + r0);
    r0 = MemoryInline::FlatRead8((r21 + 100));
    MemoryInline::FlatWrite8((r3 + 309), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r3 + 310), static_cast<uint16_t>(r20));
    r3 = MemoryInline::FlatRead8((r21 + 100));
}

loc_801E47AC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(11))) {
        goto loc_801E47C0;
    }
}

loc_801E47B0:
{
    r4 = r20;
    ctx->lr = 0x801E47B8u;
    if constexpr (KnownRegArgsCpuCall<0x80217E10u>(&func_80217E10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80217E10_24A3 = func_80217E10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217E10_24A3);
        r4 = static_cast<uint32_t>(regargs_result_80217E10_24A3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80217E10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r27 = r3;
    goto loc_801E47EC;
}

loc_801E47C0:
{
    r4 = r20;
    ctx->lr = 0x801E47C8u;
    if constexpr (KnownRegArgsCpuCall<0x80217E10u>(&func_80217E10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80217E10_285E = func_80217E10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217E10_285E);
        r4 = static_cast<uint32_t>(regargs_result_80217E10_285E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80217E10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r27 = r3;
    r3 = 12;
    r4 = r20;
    ctx->lr = 0x801E47D8u;
    if constexpr (KnownRegArgsCpuCall<0x80217E10u>(&func_80217E10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80217E10_2BFC = func_80217E10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217E10_2BFC);
        r4 = static_cast<uint32_t>(regargs_result_80217E10_2BFC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80217E10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r27 = (r27 + r3);
    r3 = 13;
    r4 = r20;
    ctx->lr = 0x801E47E8u;
    if constexpr (KnownRegArgsCpuCall<0x80217E10u>(&func_80217E10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80217E10_2FA2 = func_80217E10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217E10_2FA2);
        r4 = static_cast<uint32_t>(regargs_result_80217E10_2FA2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80217E10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r27 = (r27 + r3);
}

loc_801E47EC:
{
    r0 = MemoryInline::FlatRead16((r21 + 248));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r3 = (r21 + r0);
    MemoryInline::FlatWrite32((r3 + 312), r27);
    r0 = MemoryInline::FlatRead16((r21 + 248));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_4 & -8);
    r3 = (r21 + r0);
    MemoryInline::FlatWrite8((r3 + 308), static_cast<uint8_t>(r31));
    r0 = (r29 & 65535);
}

loc_801E4814:
{
    if ((static_cast<uint32_t>(r30) <= static_cast<uint32_t>(r0))) {
        goto loc_801E4834;
    }
}

loc_801E4818:
{
    r0 = MemoryInline::FlatRead16((r21 + 248));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r21 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 308));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8((r3 + 308), static_cast<uint8_t>(r0));
    goto loc_801E4858;
}

loc_801E4834:
{
    r0 = MemoryInline::FlatRead32((r24 + 24));
}

loc_801E483C:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(r0))) {
        goto loc_801E4858;
    }
}

loc_801E4840:
{
    r0 = MemoryInline::FlatRead16((r21 + 248));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r3 = (r21 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 308));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8((r3 + 308), static_cast<uint8_t>(r0));
}

loc_801E4858:
{
    r3 = MemoryInline::FlatRead16((r21 + 248));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r21 + 248), static_cast<uint16_t>(r0));
}

loc_801E4864:
{
    r28 = (r28 + 1);
    goto loc_801E4734;
}

loc_801E486C:
{
    r3 = MemoryInline::FlatRead16((r21 + 248));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r21 + 236));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801E4878:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_801E4898;
    }
}

loc_801E487C:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r21 + 236), static_cast<uint16_t>(r0));
}

loc_801E488C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_801E4898;
    }
}

loc_801E4890:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r21 + 236), static_cast<uint16_t>(r0));
}

loc_801E4898:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r4 = 8;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl1_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x802A8F8C;
    }
}

loc_inl1_0x802A8F84:
{
    r3 = 1;
    goto loc_inl1_cont_802A8F78;
}

loc_inl1_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl1_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl1_cont_802A8F78;
}

loc_inl1_return:
{
}

loc_inl1_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    MemoryInline::FlatWrite16((r21 + 244), static_cast<uint16_t>(r3));
    r3 = r21;
    ctx->lr = 0x801E48B0u;
    if constexpr (KnownRegArgsCpuCall<0x801E41A0u>(&func_801E41A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_801E41A0_42A1 = func_801E41A0_rac8_1e_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_801E41A0_42A1);
        r4 = static_cast<uint32_t>(regargs_result_801E41A0_42A1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x801E41A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r11 = (r1 + 64);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E46B4 func_801E46B4 preserves=true fpr_mask=0x00000000
