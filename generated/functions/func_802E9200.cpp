#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005399C(CpuContext* ctx);
extern "C" uint32_t func_8005399C_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_80054024(CpuContext* ctx);
extern "C" uint64_t func_80054024_ra18_3a_18_0(CpuContext*, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" MkwStateFreeResult2 func_8005399C_statefree(uint32_t);
extern "C" void func_8005399C_statefree_v0(uint32_t);

extern "C" uint64_t func_802E9200_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802E9364_loc_0 = 0;
    uint32_t addr_psqx_802E9370_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r6_rot_0 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802E9200;

loc_802E9200:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 48u, (r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r26 = r4;
    r25 = r5;
    f30.d = f1.d;
    r27 = r6;
    r28 = r7;
    r29 = r8;
    f31.d = f2.d;
    r30 = r9;
    r3 = MemoryInline::FlatRead16((r3 + 186));
    r4 = 0;
    ctx->lr = 0x802E9250u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802E05B4_E76 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_E76);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_E76 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r31 = r3;
    r9 = MemoryInline::FlatRead16((r3 + 20));
    r9 = (r9 << 16);
    r9 = (static_cast<int32_t>(r9) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 - r9);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = MemoryInline::FlatRead16((r3 + 22));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = MemoryInline::FlatRead16((r3 + 26));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r4 = (r4 - r5);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r7 = (r25 & 255);
    r5 = 1717960704;
    r5 = (r5 + 26215);
    r8 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r7))) >> 32));
    r5 = (static_cast<int32_t>(r8) >> 2);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & 1);
    r5 = (r5 + r6);
    r5 = (r5 * 10);
    r5 = (r7 - r5);
    r5 = (r0 * r5);
    r5 = (r9 + r5);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r7));
    r6 = MemoryInline::FlatRead16((r3 + 22));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r3 = (static_cast<int32_t>(r8) >> 2);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 1);
    r3 = (r3 + r5);
    r3 = (r4 * r3);
    r3 = (r6 + r3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    MemoryInline::FlatWriteRam16((r1 + 14), static_cast<uint16_t>(r3));
    r0 = (r7 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    r0 = (r3 + r4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    r3 = 3;
    r4 = 65536;
    r4 = (r4 + -1);
    r4 = (r4 & 65535);
    // inline leaf 0x80053870 (21 guest instruction(s))
}

loc_inl1_0x80053870:
{
    r6 = 0x80670000u;
    r5 = (r6 + -12896);
    MemoryInline::FlatWriteRam8((r5 + 4), static_cast<uint8_t>(r3));
    r0 = 0;
    MemoryInline::FlatWriteRam32((r6 + -12896), r0);
    r0 = (r4 & 65535);
}

loc_inl1_0x8005388C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_inl1_0x800538AC;
    }
}

loc_inl1_0x80053890:
{
    r0 = (r3 & 255);
    r3 = (r13 + -32540);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_0);
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r0));
}

loc_inl1_0x800538A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800538B0;
    }
}

loc_inl1_0x800538A8:
{
    goto loc_inl1_cont_80053870;
}

loc_inl1_0x800538AC:
{
    MemoryInline::FlatWriteRam16((r5 + 6), static_cast<uint16_t>(r4));
}

loc_inl1_0x800538B0:
{
    r0 = 6;
    r3 = 0x80670000u;
    r3 = (r3 + -12896);
    MemoryInline::FlatWriteRam8((r3 + 5), static_cast<uint8_t>(r0));
}

loc_inl1_cont_80053870:
{
    // end of inlined leaf 0x80053870
    f0.d = MemoryInline::FlatReadFloat32(r26);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12644));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 4));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -12640));
    f4.d = f3.d;
    // inline leaf 0x80053950 (19 guest instruction(s))
    r3 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r3 + -12896));
    r0 = (r0 | 65536);
    r0 = (r0 | 4096);
    MemoryInline::FlatWriteRam32((r3 + -12896), r0);
    r3 = (r3 + -12896);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 44), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 20), f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 36), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 32), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 24), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 48), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 40), f0.d);
    r0 = (r3 + 20);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 8), r0);
    // end of inlined leaf 0x80053950
    r3 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8005399Cu) && KnownTranslatedCpuCall<0x8005399Cu>::kAvailable && !KnownTranslatedCpuCall<0x8005399Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8005399Cu>()) {
        func_8005399C_statefree_v0(r3);
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
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x8005399Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    }
    r3 = MemoryInline::FlatRead8((r31 + 18));
    r3 = (r3 & 65535);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80053BCCu>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    r3 = r26;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12636));
    f1.d = PpcFmulsInline(f0.d, f30.d);
    r4 = (r27 & 65535);
    ctx->lr = 0x802E9344u;
    if constexpr (KnownRegArgsCpuCall<0x80054024u>(&func_80054024)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        const auto regargs_result_80054024_2DDE = func_80054024_ra18_3a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_80054024_2DDE);
        r4 = static_cast<uint32_t>(regargs_result_80054024_2DDE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80054024u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
    }
}

loc_802E9348:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_802E935C;
    }
}

loc_802E934C:
{
    r3 = r29;
    f1.d = f31.d;
    r4 = (r30 & 65535);
    ctx->lr = 0x802E935Cu;
    if constexpr (KnownRegArgsCpuCall<0x80054024u>(&func_80054024)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[31] = f31;
        const auto regargs_result_80054024_34FD = func_80054024_ra18_3a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_80054024_34FD);
        r4 = static_cast<uint32_t>(regargs_result_80054024_34FD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80054024u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f31 = ctx->fpr[31];
    }
}

loc_802E935C:
{
    ctx->lr = 0x802E9360u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    InvokeDirectCpu<0x8005480Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    mkw_gqr0 = ctx->gqr[0];
    r0 = 72;
    addr_psqx_802E9364_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802E9364_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 68u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 44u, (r1 + 64));
    r0 = 56;
    addr_psqx_802E9370_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802E9370_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 28u, (r1 + 48));
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E9200(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E9200_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC000FFFF fpr_write=0xC000FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802E9200 func_802E9200 preserves=true fpr_mask=0x00000000
