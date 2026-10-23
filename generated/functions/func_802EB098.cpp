#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_802E90D4(CpuContext* ctx);
extern "C" uint64_t func_802E90D4_ra38_c_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_802E9194(CpuContext* ctx);
extern "C" uint64_t func_802E9194_ra18_6_18_0(CpuContext*, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_802EB098_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802EB288_loc_0 = 0;
    uint32_t addr_psqx_802EB294_loc_0 = 0;
    uint32_t addr_psqx_802EB2A0_loc_0 = 0;
    uint32_t addr_psqx_802EB2AC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802EB098;

loc_802EB098:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 132u, (r1 + 132), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r1 + 112), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r1 + 96), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r1 + 80), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 64u, (r1 + 64), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r0);
    r3 = (r4 & 65535);
    r4 = 0;
    ctx->lr = 0x802EB0F8u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_10CA = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_10CA);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_10CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r31 = r3;
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f5.d = MemoryInline::FlatReadFloat64((r2 + -12728));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12596));
    f4.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f4.d);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f3.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f3.d);
}

loc_802EB140:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_802EB1E4;
    }
}

loc_802EB144:
{
    f0.d = MemoryInline::FlatReadFloat32((r27 + 152));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 156));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    r5 = MemoryInline::FlatRead16((r27 + 184));
    ctx->lr = 0x802EB164u;
    if constexpr (KnownRegArgsCpuCall<0x802E90D4u>(&func_802E90D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_802E90D4_1AF2 = func_802E90D4_ra38_c_18_0(ctx, r3, r4, r5, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802E90D4_1AF2);
        r4 = static_cast<uint32_t>(regargs_result_802E90D4_1AF2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E90D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = PpcFmulsInline(f30.d, f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = PpcFmulsInline(f30.d, f1.d);
    f0.d = PpcFmulsInline(f31.d, f3.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 172));
    f1.d = PpcFmulsInline(f4.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 176));
    f0.d = PpcFmulsInline(f5.d, f0.d);
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12708));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802EB1A8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_802EB284;
    }
}

loc_802EB1AC:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -12632));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 160));
    f3.d = PpcFmulsInline(f2.d, f0.d);
    f2.d = PpcFmulsInline(f3.d, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 144));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f2.d = PpcFmulsInline(f3.d, f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r27 + 148));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    r3 = r27;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x802E9194u>(&func_802E9194)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802E9194_25F5 = func_802E9194_ra18_6_18_0(ctx, r3, r4, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_802E9194_25F5);
        r4 = static_cast<uint32_t>(regargs_result_802E9194_25F5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E9194u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    r29 = r3;
    goto loc_802EB220;
}

loc_802EB1E4:
{
    r0 = MemoryInline::FlatRead16((r27 + 132));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f2.d = MemoryInline::FlatReadFloat32((r27 + 136));
    f0.d = PpcFmulsInline(f4.d, f2.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r0 = MemoryInline::FlatRead16((r27 + 134));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f0.d = PpcFmulsInline(f3.d, f2.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_802EB220:
{
    r0 = (r28 & 65535);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -12688));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -12672));
    f28.d = PpcFmulsInline(f0.d, f29.d);
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
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
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
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f28.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f28.d));
    f3.d = f29.d;
    f4.d = f29.d;
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
    r3 = r29;
    // inline leaf 0x8005399C (10 guest instruction(s))
    r4 = 0x80670000u;
    r0 = MemoryInline::FlatRead32((r4 + -12896));
    r0 = (r0 | 131072);
    r0 = (r0 | 8192);
    MemoryInline::FlatWriteRam32((r4 + -12896), r0);
    r4 = (r4 + -12896);
    MemoryInline::FlatWriteRam32((r4 + 68), r3);
    r0 = (r4 + 68);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    // end of inlined leaf 0x8005399C
    r3 = MemoryInline::FlatRead8((r31 + 18));
    r3 = (r3 & 65535);
    r4 = (r31 + 20);
    r5 = (r31 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80053BCCu>(ctx);
    mkw_gqr0 = ctx->gqr[0];
    ctx->lr = 0x802EB284u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8005480Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_802EB284:
{
    r0 = 120;
    addr_psqx_802EB288_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802EB288_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 44), 0, 92u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 68u, (r1 + 112));
    r0 = 104;
    addr_psqx_802EB294_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802EB294_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 52u, (r1 + 96));
    r0 = 88;
    addr_psqx_802EB2A0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802EB2A0_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 36u, (r1 + 80));
    r0 = 72;
    addr_psqx_802EB2AC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802EB2AC_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 20u, (r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 88u, (r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802EB098(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802EB098_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802EB098 func_802EB098 preserves=true fpr_mask=0x00000000
