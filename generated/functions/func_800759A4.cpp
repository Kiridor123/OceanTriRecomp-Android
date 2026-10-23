#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80051884(CpuContext* ctx);
extern "C" uint64_t func_80051884_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80074AB8(CpuContext* ctx);
extern "C" uint64_t func_80074AB8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80075E30(CpuContext* ctx);
extern "C" double func_80075E30_ra38_e_0_2(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_804C6B60(CpuContext* ctx);
extern "C" uint64_t func_804C6B60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800759A4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_800759A4;

loc_800759A4:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    ctx->lr = 0x800759C4u;
    if constexpr (KnownRegArgsCpuCall<0x80074AB8u>(&func_80074AB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80074AB8_B7C = func_80074AB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80074AB8_B7C);
        r4 = static_cast<uint32_t>(regargs_result_80074AB8_B7C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80074AB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r28 = r3;
    r6 = MemoryInline::FlatRead32((r3 + 112));
    r0 = (r6 & 1);
}

loc_800759D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80075A54;
    }
}

loc_800759D8:
{
    r3 = (r3 + 116);
    r4 = (r28 + 140);
    // inline leaf 0x80074D9C (16 guest instruction(s))
}

loc_inl0_0x80074D9C:
{
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl0_0x80074DAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x80074DD0;
    }
}

loc_inl0_0x80074DB0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl0_0x80074DBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x80074DD0;
    }
}

loc_inl0_0x80074DC0:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_inl0_0x80074DCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80074DD4;
    }
}

loc_inl0_0x80074DD0:
{
    r0 = 1;
}

loc_inl0_0x80074DD4:
{
    r3 = r0;
}

loc_inl0_cont_80074D9C:
{
    // end of inlined leaf 0x80074D9C
}

loc_800759E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80075A14;
    }
}

loc_800759EC:
{
    r3 = 0x80590000u;
    r3 = (r3 + -5136);
    r4 = 832;
    r5 = 0x80590000u;
    r5 = (r5 + -5048);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 116));
    f2.d = MemoryInline::FlatReadFloat32((r28 + 120));
    f3.d = MemoryInline::FlatReadFloat32((r28 + 124));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(5), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80075A14u;
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

loc_80075A14:
{
    r3 = (r28 + 140);
    // inline leaf 0x8005090C (1 guest instruction(s))
    // end of inlined leaf 0x8005090C
    r29 = r3;
    r3 = (r28 + 128);
    // inline leaf 0x8005090C (1 guest instruction(s))
    // end of inlined leaf 0x8005090C
    r30 = r3;
    r3 = (r28 + 116);
    // inline leaf 0x8005090C (1 guest instruction(s))
    // end of inlined leaf 0x8005090C
    r31 = r3;
    r3 = r28;
    // inline leaf 0x8005056C (1 guest instruction(s))
    // end of inlined leaf 0x8005056C
    r4 = r31;
    r5 = r30;
    r6 = r29;
    ctx->lr = 0x80075A50u;
    if constexpr (KnownRegArgsCpuCall<0x804C6B60u>(&func_804C6B60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        const auto regargs_result_804C6B60_1B88 = func_804C6B60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804C6B60_1B88);
        r4 = static_cast<uint32_t>(regargs_result_804C6B60_1B88 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
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
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        InvokeDirectCpu<0x804C6B60u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
    }
    goto loc_80075E04;
}

loc_80075A54:
{
    r0 = (r6 & 4);
}

loc_80075A5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80075C88;
    }
}

loc_80075A60:
{
    r29 = (r3 + 116);
    r3 = (r1 + 124);
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 12u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 140));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r29 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 144));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r29 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 148));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31960));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80075A9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80075B30;
    }
}

loc_80075AA0:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80075AA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80075B30;
    }
}

loc_80075AAC:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31952));
    guest_range_1 = MemoryInline::ResolveRangeHost(r28, 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r28, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r28 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r28 + 8), f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r29);
    f0.d = (-(f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r28 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r28 + 16), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r28 + 20), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r28 + 32), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r28 + 40), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80075AE0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80075B0C;
    }
}

loc_80075AE8:
{
    MemoryInline::FlatWriteFloat32((r28 + 24), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r29 + 8));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31912));
    MemoryInline::FlatWriteFloat32((r28 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r29 + 4));
    MemoryInline::FlatWriteFloat32((r28 + 44), f0.d);
    goto loc_80075E04;
}

loc_80075B0C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31912));
    MemoryInline::FlatWriteFloat32((r28 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r29 + 8));
    MemoryInline::FlatWriteFloat32((r28 + 28), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 36), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r29 + 4));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 44), f0.d);
    goto loc_80075E04;
}

loc_80075B30:
{
    r3 = (r1 + 112);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31960));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    f3.d = (-(f0.d));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = (r1 + 100);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 124);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = (r1 + 112);
    r4 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800508B4u>(ctx);
    r3 = (r1 + 100);
    r4 = (r1 + 124);
    r5 = (r1 + 112);
    ctx->lr = 0x80075B78u;
    if constexpr (KnownRegArgsCpuCall<0x80051884u>(&func_80051884)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        const auto regargs_result_80051884_3817 = func_80051884_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80051884_3817);
        r4 = static_cast<uint32_t>(regargs_result_80051884_3817 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
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
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        InvokeDirectCpu<0x80051884u>(ctx);
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
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
    }
    r3 = (r1 + 36);
    r4 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 164));
    if constexpr (KnownRegArgsCpuCall<0x80075E30u>(&func_80075E30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80075E30_3F4F = func_80075E30_ra38_e_0_2(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        f1.d = regargs_result_80075E30_3F4F;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        InvokeDirectCpu<0x80075E30u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = (r1 + 88);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 76);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f9.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f8.d = MemoryInline::FlatReadFloat32((r1 + 100));
    f1.d = PpcFmulsInline(f9.d, f8.d);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f6.d = MemoryInline::FlatReadFloat32((r1 + 112));
    f0.d = PpcFmulsInline(f7.d, f6.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 88), f5.d);
    f4.d = MemoryInline::FlatReadFloat32((r1 + 104));
    f0.d = PpcFmulsInline(f9.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 108));
    f1.d = PpcFmulsInline(f9.d, f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 120));
    f0.d = PpcFmulsInline(f7.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 96), f0.d);
    f1.d = PpcFmulsInline(f7.d, f8.d);
    f0.d = PpcFmulsInline(f9.d, f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 76), f0.d);
    f0.d = PpcFmulsInline(f7.d, f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 80), f0.d);
    f1.d = PpcFmulsInline(f7.d, f3.d);
    f0.d = PpcFmulsInline(f9.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 84), f0.d);
    guest_range_2 = MemoryInline::ResolveRangeHost(r28, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, r28, f5.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r28 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 96));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r28 + 8), f0.d);
    r3 = r29;
    r4 = (r1 + 88);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_1 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_1));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_1 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_1));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f0.d = (-(PPC_PsToScalarInline(f1.d)));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r28 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r28 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 80));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r28 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 84));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r28 + 24), f0.d);
    r3 = r29;
    r4 = (r1 + 76);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_2));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f0.d = (-(PPC_PsToScalarInline(f1.d)));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r28 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 124));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r28 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r28 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r28 + 40), f0.d);
    r3 = r29;
    r4 = (r1 + 124);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_3 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_3));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_3 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_3));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f0.d = (-(PPC_PsToScalarInline(f1.d)));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r28 + 44), f0.d);
    goto loc_80075E04;
}

loc_80075C88:
{
    r0 = (r6 & 2);
}

loc_80075C90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80075CB0;
    }
}

loc_80075C94:
{
    r3 = 0x80590000u;
    r3 = (r3 + -5136);
    r4 = 926;
    r5 = 0x80590000u;
    r5 = (r5 + -4960);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80075CB0u;
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

loc_80075CB0:
{
    r29 = (r28 + 116);
    r3 = (r1 + 28);
    r4 = (r1 + 16);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 152));
    if constexpr (KnownRegArgsCpuCall<0x80075E30u>(&func_80075E30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80075E30_5E91 = func_80075E30_ra38_e_0_2(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        f1.d = regargs_result_80075E30_5E91;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        InvokeDirectCpu<0x80075E30u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = (r1 + 24);
    r4 = (r1 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 156));
    if constexpr (KnownRegArgsCpuCall<0x80075E30u>(&func_80075E30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80075E30_634E = func_80075E30_ra38_e_0_2(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        f1.d = regargs_result_80075E30_634E;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        InvokeDirectCpu<0x80075E30u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = (r1 + 20);
    r4 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 160));
    if constexpr (KnownRegArgsCpuCall<0x80075E30u>(&func_80075E30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        const auto regargs_result_80075E30_680A = func_80075E30_ra38_e_0_2(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        f1.d = regargs_result_80075E30_680A;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
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
        InvokeDirectCpu<0x80075E30u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r3 = (r1 + 64);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 52);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 40);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    f10.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f9.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f8.d = PpcFmulsInline(f10.d, f9.d);
    f7.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f1.d = PpcFmulsInline(f7.d, f8.d);
    f6.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f5.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PpcFmulsInline(f6.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f4.d);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = PpcFmulsInline(f3.d, f7.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f0.d);
    f2.d = PpcFmulsInline(f10.d, f6.d);
    f1.d = PpcFmulsInline(f7.d, f2.d);
    f0.d = PpcFmulsInline(f9.d, f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    f1.d = PpcFmulsInline(f5.d, f8.d);
    f0.d = PpcFmulsInline(f6.d, f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    f0.d = PpcFmulsInline(f3.d, f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f1.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = PpcFmulsInline(f9.d, f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    f0.d = PpcFmulsInline(f3.d, f9.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    f0.d = (-(f10.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    f0.d = PpcFmulsInline(f3.d, f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    guest_range_3 = MemoryInline::ResolveRangeHost(r28, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r28, f4.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r28 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r28 + 8), f0.d);
    r3 = r29;
    r4 = (r1 + 64);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_4 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_4));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_4 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_4));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f0.d = (-(PPC_PsToScalarInline(f1.d)));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 12u, (r28 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r28 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r28 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r28 + 24), f0.d);
    r3 = r29;
    r4 = (r1 + 52);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_5 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_5));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_5 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_5));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f0.d = (-(PPC_PsToScalarInline(f1.d)));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r28 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r28 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r28 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r28 + 40), f0.d);
    r3 = r29;
    r4 = (r1 + 40);
    // inline leaf 0x80052278 (8 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r3_psq_tmp_6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_6 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<0u, 0u>(ctx, r4_psq_tmp_6));
    PpcSetPairedFprInline(f0, PPC_PsMulInline(f0.d, f1.d));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLGqrInline<1u, 0u>(ctx, mkw_gqr0, r3));
    // psq_load w=1 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f1, PPC_PsqLStackInline<1u, 0u>(ctx, r4));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f2.d, f1.d, f0.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f0.d, f0.d));
    // end of inlined leaf 0x80052278
    f0.d = (-(PPC_PsToScalarInline(f1.d)));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 44u, (r28 + 44), f0.d);
}

loc_80075E04:
{
    r0 = MemoryInline::FlatRead32((r28 + 112));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r28 + 112), r0);
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800759A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800759A4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x000007FF fpr_write=0x000007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800759A4 func_800759A4 preserves=true fpr_mask=0x00000000
