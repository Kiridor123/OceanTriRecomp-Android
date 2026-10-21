#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" void func_804B75F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_10 = 0;
    uint32_t r4_rot_11 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
    uint32_t r4_rot_7 = 0;
    uint32_t r4_rot_8 = 0;
    uint32_t r4_rot_9 = 0;
    uint32_t stackword2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];

    MKW_GUEST_ENTER(0x804B75F0u);
    goto loc_804B75F0;

loc_804B75F0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    f3.d = MemoryInline::FlatReadFloat64((r2 + -2432));
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    r0 = 1127219200;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2440));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 96u, (r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    stackword2 = r0;
    stackword3 = r4;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r4);
    }
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword2), static_cast<uint32_t>(stackword3));
    stackword4 = r0;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    stackword5 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r3);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword5));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    r29 = r4;
    r28 = r3;
    r30 = r29;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f28.d));
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_109B = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_109B;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r0 = (r28 + -1);
    r4 = (r3 & 511);
    r31_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r31 = (r31_rot_0 & -256);
    r3 = PPC_Divwu(static_cast<uint32_t>(r31), static_cast<uint32_t>(r4));
    r0 = (r4 + -129);
}

loc_804B7688:
{
    r3 = (r3 + 1);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(126))) {
        goto loc_804B76B8;
    }
}

loc_804B7690:
{
    goto loc_804B769C;
}

loc_804B7698:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_2 & 2147483647);
}

loc_804B769C:
{
    r0 = (r4 & 1);
}

loc_804B76A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B7698;
    }
}

loc_804B76A4:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r28), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r28 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B76B8;
    }
}

loc_804B76B4:
{
    r3 = (r3 + 1);
}

loc_804B76B8:
{
}

loc_804B76BC:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1024))) {
        goto loc_804B76C4;
    }
}

loc_804B76C0:
{
    r3 = 1024;
}

loc_804B76C4:
{
    f31.d = MemoryInline::FlatReadFloat64((r2 + -2432));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -2440));
    goto loc_804B7744;
}

loc_804B76D0:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r28);
    r30 = (r30 + -1);
    MemoryInline::FlatWriteRam32((r1 + 12), r30);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f31.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d / f28.d));
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_1B5C = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_1B5C;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r4 = (r3 & 511);
    r3 = PPC_Divwu(static_cast<uint32_t>(r31), static_cast<uint32_t>(r4));
    r0 = (r4 + -129);
}

loc_804B7708:
{
    r3 = (r3 + 1);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(126))) {
        goto loc_804B7738;
    }
}

loc_804B7710:
{
    goto loc_804B771C;
}

loc_804B7718:
{
    r4_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_6 & 2147483647);
}

loc_804B771C:
{
    r0 = (r4 & 1);
}

loc_804B7720:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B7718;
    }
}

loc_804B7724:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r28), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r28 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B7738;
    }
}

loc_804B7734:
{
    r3 = (r3 + 1);
}

loc_804B7738:
{
}

loc_804B773C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1024))) {
        goto loc_804B7744;
    }
}

loc_804B7740:
{
    r3 = 1024;
}

loc_804B7744:
{
}

loc_804B7748:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r29))) {
        goto loc_804B76D0;
    }
}

loc_804B774C:
{
    f29.d = f28.d;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -2432));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -2440));
    goto loc_804B77D4;
}

loc_804B775C:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r28);
    r30 = (r30 + 1);
    f29.d = f28.d;
    MemoryInline::FlatWriteRam32((r1 + 12), r30);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f30.d));
    f28.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f28.d));
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_2644 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_2644;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r4 = (r3 & 511);
    r3 = PPC_Divwu(static_cast<uint32_t>(r31), static_cast<uint32_t>(r4));
    r0 = (r4 + -129);
}

loc_804B7798:
{
    r3 = (r3 + 1);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(126))) {
        goto loc_804B77C8;
    }
}

loc_804B77A0:
{
    goto loc_804B77AC;
}

loc_804B77A8:
{
    r4_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r4 = (r4_rot_10 & 2147483647);
}

loc_804B77AC:
{
    r0 = (r4 & 1);
}

loc_804B77B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B77A8;
    }
}

loc_804B77B4:
{
    r0 = PPC_Divwu(static_cast<uint32_t>(r28), static_cast<uint32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r28 - r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B77C8;
    }
}

loc_804B77C4:
{
    r3 = (r3 + 1);
}

loc_804B77C8:
{
}

loc_804B77CC:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(1024))) {
        goto loc_804B77D4;
    }
}

loc_804B77D0:
{
    r3 = 1024;
}

loc_804B77D4:
{
}

loc_804B77D8:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r29))) {
        goto loc_804B775C;
    }
}

loc_804B77DC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f1.d = f29.d;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 88u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 64u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 48u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 32u, (r1 + 64));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 16u, (r1 + 48));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0xF000001F fpr_write=0xF000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804B75F0 func_804B75F0 preserves=true fpr_mask=0x00000000
