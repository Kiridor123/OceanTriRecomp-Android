#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80059210(CpuContext* ctx);
extern "C" uint64_t func_80059210_ra18_1a_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_800CEF20(CpuContext* ctx);
extern "C" uint32_t func_800CEF20_ra48_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803BB7EC(CpuContext* ctx);
extern "C" double func_803BB7EC_ra0_2_0_2(CpuContext*, double);

extern "C" void func_803BB570(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_803BB7CC_loc_0 = 0;
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
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_803BB570;

loc_803BB570:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_803BB598:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_803BB5A4;
    }
}

loc_803BB59C:
{
}

loc_803BB5A0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16))) {
        goto loc_803BB7C8;
    }
}

loc_803BB5A4:
{
    r0 = MemoryInline::FlatRead8((r3 + 438));
}

loc_803BB5AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BB600;
    }
}

loc_803BB5B0:
{
    r4 = MemoryInline::FlatRead16((r3 + 436));
    r0 = MemoryInline::FlatRead32((r3 + 420));
    r0 = (r0 - r4);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r3 + 420), r0);
}

loc_803BB5C8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(32768))) {
        goto loc_803BB650;
    }
}

loc_803BB5CC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 420), r0);
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 438), static_cast<uint8_t>(r0));
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl0_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl0_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CEF40;
    }
}

loc_inl0_0x800CEF3C:
{
    r0 = 1;
}

loc_inl0_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl0_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 1);
}

loc_803BB5F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BB650;
    }
}

loc_803BB5F4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5308));
    MemoryInline::FlatWriteFloat32((r31 + 456), f0.d);
    goto loc_803BB650;
}

loc_803BB600:
{
    r4 = MemoryInline::FlatRead32((r3 + 420));
    r0 = MemoryInline::FlatRead16((r3 + 436));
    r0 = (r4 + r0);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r3 + 420), r0);
}

loc_803BB618:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(32768))) {
        goto loc_803BB650;
    }
}

loc_803BB61C:
{
    r4 = 65536;
    r0 = (r4 + -32768);
    MemoryInline::FlatWrite32((r3 + 420), r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 438), static_cast<uint8_t>(r0));
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl1_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl1_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF40;
    }
}

loc_inl1_0x800CEF3C:
{
    r0 = 1;
}

loc_inl1_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl1_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 1);
}

loc_803BB644:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BB650;
    }
}

loc_803BB648:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5304));
    MemoryInline::FlatWriteFloat32((r31 + 456), f0.d);
}

loc_803BB650:
{
    r3 = MemoryInline::FlatRead32((r31 + 420));
    r0 = 65536;
    r0 = (r0 - r3);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r31 + 432), r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 439), static_cast<uint8_t>(r0));
    r3 = 0;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl2_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl2_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CEF40;
    }
}

loc_inl2_0x800CEF3C:
{
    r0 = 1;
}

loc_inl2_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_7 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_4 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl2_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r0 = (r3 & 65535);
    r0 = (r0 & 3);
}

loc_803BB680:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BB694;
    }
}

loc_803BB684:
{
    r3 = MemoryInline::FlatRead32((r31 + 460));
    r0 = (r3 + 4096);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r31 + 460), r0);
}

loc_803BB694:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_2327 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_2327;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    r0 = (r0 & 31);
}

loc_803BB6A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BB6CC;
    }
}

loc_803BB6AC:
{
    r0 = MemoryInline::FlatRead32((r13 + -22408));
    MemoryInline::FlatWrite32((r31 + 32), r0);
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800CEF20u>(&func_800CEF20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_800CEF20_27C3 = func_800CEF20_ra48_0_8_0(ctx, r3, r6);
        r3 = regargs_result_800CEF20_27C3;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x800CEF20u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = (r3 & 65535);
    MemoryInline::FlatWrite32((r31 + 36), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 40), r0);
}

loc_803BB6CC:
{
    r0 = MemoryInline::FlatRead32((r31 + 460));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5280));
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r30 = 1127219200;
    stackword5 = r30;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5300));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5296));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if constexpr (KnownRegArgsCpuCall<0x80059210u>(&func_80059210)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_80059210_2E74 = func_80059210_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80059210_2E74);
        r4 = static_cast<uint32_t>(regargs_result_80059210_2E74 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80059210u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r0 = MemoryInline::FlatRead32((r31 + 460));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -5280));
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword7 = r30;
    MemoryInline::FlatWriteRam32((r1 + 16), r30);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5300));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5296));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if constexpr (KnownRegArgsCpuCall<0x803BB7ECu>(&func_803BB7EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_803BB7EC_3608 = func_803BB7EC_ra0_2_0_2(ctx, f1.d);
        f1.d = regargs_result_803BB7EC_3608;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x803BB7ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    f3.d = MemoryInline::FlatReadFloat32((r2 + -5292));
    f2.d = PpcFmulsInline(f3.d, f31.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 464));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r31 + 20), f0.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 472));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f3.d = MemoryInline::FlatReadFloat32((r31 + 456));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    MemoryInline::FlatWriteFloat32((r31 + 24), f2.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 500));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5288));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 468));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_803BB778:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803BB794;
    }
}

loc_803BB77C:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5312));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_803BB784:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803BB794;
    }
}

loc_803BB788:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5284));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 456), f0.d);
}

loc_803BB794:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 468));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 500));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_803BB7A8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_803BB7C8;
    }
}

loc_803BB7AC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 456));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5312));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803BB7B8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_803BB7C8;
    }
}

loc_803BB7BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5284));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 456), f0.d);
}

loc_803BB7C8:
{
    r0 = 40;
    addr_psqx_803BB7CC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803BB7CC_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x8000001F fpr_write=0x8000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803BB570 func_803BB570 preserves=true fpr_mask=0x00000000
