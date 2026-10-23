#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800FA3DC(CpuContext* ctx);
extern "C" uint32_t func_800FA3DC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800FA41C(CpuContext* ctx);
extern "C" uint32_t func_800FA41C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800FA484(CpuContext* ctx);
extern "C" uint32_t func_800FA484_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80290064(CpuContext* ctx);
extern "C" uint64_t func_80290064_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802903FC(CpuContext* ctx);
extern "C" uint64_t func_802903FC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80298E34(CpuContext* ctx);
extern "C" uint64_t func_80298E34_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80299080(CpuContext* ctx);
extern "C" uint32_t func_80299080_ra38_2_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80299144(CpuContext* ctx);
extern "C" uint32_t func_80299144_ra38_6_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_802991F4(CpuContext* ctx);
extern "C" uint64_t func_802991F4_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_8029939C(CpuContext* ctx);
extern "C" uint64_t func_8029939C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_800FA41C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800FA41C_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802989E4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80298C78_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802989E4;

loc_802989E4:
{
    MemoryInline::FlatWriteRam32((r1 + -288), r1);
    r1 = (r1 + -288);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 272), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r28 = r3;
    r29 = r4;
    r3 = (r1 + 192);
    ctx->lr = 0x80298A18u;
    if constexpr (KnownRegArgsCpuCall<0x800FA3DCu>(&func_800FA3DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800FA3DC_EC9 = func_800FA3DC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800FA3DC_EC9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800FA3DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 136);
    ctx->lr = 0x80298A20u;
    if constexpr (KnownRegArgsCpuCall<0x800FA3DCu>(&func_800FA3DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800FA3DC_1110 = func_800FA3DC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800FA3DC_1110;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800FA3DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 108);
    ctx->lr = 0x80298A28u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800FA41Cu) && KnownTranslatedCpuCall<0x800FA41Cu>::kAvailable && !KnownTranslatedCpuCall<0x800FA41Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800FA41Cu>() && KnownTranslatedCpuCall<0x800FA44Cu>::kAvailable && !KnownTranslatedCpuCall<0x800FA44Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800FA44Cu>()) {
        const auto state_free_result_800FA41C_1485 = func_800FA41C_statefree_v0(r1, r3, r31, 0x80298A28u);
        r1 = static_cast<uint32_t>(state_free_result_800FA41C_1485);
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800FA41Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 80);
    ctx->lr = 0x80298A30u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800FA41Cu) && KnownTranslatedCpuCall<0x800FA41Cu>::kAvailable && !KnownTranslatedCpuCall<0x800FA41Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800FA41Cu>() && KnownTranslatedCpuCall<0x800FA44Cu>::kAvailable && !KnownTranslatedCpuCall<0x800FA44Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800FA44Cu>()) {
        const auto state_free_result_800FA41C_1AFF = func_800FA41C_statefree_v0(r1, r3, r31, 0x80298A30u);
        r1 = static_cast<uint32_t>(state_free_result_800FA41C_1AFF);
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x800FA41Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
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
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = (r1 + 64);
    ctx->lr = 0x80298A38u;
    if constexpr (KnownRegArgsCpuCall<0x800FA484u>(&func_800FA484)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800FA484_204D = func_800FA484_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800FA484_204D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800FA484u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 52);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 40);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 28);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 16);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r30 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14112));
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r1 + 12), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r1 + 8), f1.d);
    }
    r3 = (r1 + 52);
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 40);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14112));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    f31.d = MemoryInline::FlatReadFloat32((r28 + 380));
    r3 = (r1 + 108);
    r4 = r28;
    ctx->lr = 0x80298A9Cu;
    if constexpr (KnownRegArgsCpuCall<0x80298E34u>(&func_80298E34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->cr = cr;
        const auto regargs_result_80298E34_2C7F = func_80298E34_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80298E34_2C7F);
        r4 = static_cast<uint32_t>(regargs_result_80298E34_2C7F >> 32);
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
        f6 = ctx->fpr[6];
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x80298E34u>(ctx);
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
        f6 = ctx->fpr[6];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 108);
    r4 = (r1 + 192);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8028F5BCu>(ctx);
    r31 = MemoryInline::FlatRead32((r29 + 2248));
}

loc_80298AB0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80298BC8;
    }
}

loc_80298AB4:
{
    goto loc_80298BBC;
}

loc_80298AB8:
{
    r3 = r31;
    // inline leaf 0x8029F648 (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r0 = (r0 & 210);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x8029F648
}

loc_80298AC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80298ADC;
    }
}

loc_80298AC8:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead16((r31 + 12));
    // inline leaf 0x801357AC (7 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x801357AC
}

loc_80298AD8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80298AE4;
    }
}

loc_80298ADC:
{
    r31 = (r31 + 44);
    goto loc_80298BBC;
}

loc_80298AE4:
{
    r3 = r29;
    r4 = r31;
    r5 = (r1 + 80);
    r6 = (r1 + 64);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8029D8F8u>(ctx);
    r3 = ctx->gpr[3];
    mkw_gqr0 = ctx->gqr[0];
}

loc_80298AFC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80298B0C;
    }
}

loc_80298B00:
{
}

loc_80298B04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80298B58;
    }
}

loc_80298B08:
{
    goto loc_80298BAC;
}

loc_80298B0C:
{
    r3 = (r1 + 192);
    r4 = (r1 + 64);
    r5 = (r1 + 28);
    r6 = (r1 + 16);
    ctx->lr = 0x80298B20u;
    if constexpr (KnownRegArgsCpuCall<0x802903FCu>(&func_802903FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802903FC_3BAD = func_802903FC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802903FC_3BAD);
        r4 = static_cast<uint32_t>(regargs_result_802903FC_3BAD >> 32);
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
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802903FCu>(ctx);
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
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80298B24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80298BAC;
    }
}

loc_80298B28:
{
    r3 = r28;
    r4 = (r1 + 52);
    r5 = (r1 + 12);
    r6 = (r1 + 28);
    ctx->lr = 0x80298B3Cu;
    if constexpr (KnownRegArgsCpuCall<0x80299080u>(&func_80299080)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80299080_4433 = func_80299080_ra38_2_8_0(ctx, r3, r4, r5, f1.d);
        r3 = regargs_result_80299080_4433;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80299080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = r29;
    r4 = (r1 + 40);
    r5 = (r1 + 8);
    r6 = (r1 + 16);
    ctx->lr = 0x80298B50u;
    if constexpr (KnownRegArgsCpuCall<0x80299144u>(&func_80299144)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80299144_489E = func_80299144_ra38_6_8_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = regargs_result_80299144_489E;
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
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x80299144u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    r30 = (r30 + 1);
    goto loc_80298BAC;
}

loc_80298B58:
{
    r3 = (r1 + 80);
    r4 = (r1 + 136);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8028F5BCu>(ctx);
    r3 = (r1 + 192);
    r4 = (r1 + 136);
    r5 = (r1 + 28);
    r6 = (r1 + 16);
    ctx->lr = 0x80298B78u;
    if constexpr (KnownRegArgsCpuCall<0x80290064u>(&func_80290064)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80290064_4E0C = func_80290064_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80290064_4E0C);
        r4 = static_cast<uint32_t>(regargs_result_80290064_4E0C >> 32);
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
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80290064u>(ctx);
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
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80298B7C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80298BAC;
    }
}

loc_80298B80:
{
    r3 = r28;
    r4 = (r1 + 52);
    r5 = (r1 + 12);
    r6 = (r1 + 28);
    ctx->lr = 0x80298B94u;
    if constexpr (KnownRegArgsCpuCall<0x80299080u>(&func_80299080)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80299080_5692 = func_80299080_ra38_2_8_0(ctx, r3, r4, r5, f1.d);
        r3 = regargs_result_80299080_5692;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80299080u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    r3 = r29;
    r4 = (r1 + 40);
    r5 = (r1 + 8);
    r6 = (r1 + 16);
    ctx->lr = 0x80298BA8u;
    if constexpr (KnownRegArgsCpuCall<0x80299144u>(&func_80299144)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80299144_5AFD = func_80299144_ra38_6_8_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = regargs_result_80299144_5AFD;
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
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x80299144u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        cr = ctx->cr;
    }
    r30 = (r30 + 1);
}

loc_80298BAC:
{
    r0 = (r30 & 255);
}

loc_80298BB4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(3))) {
        goto loc_80298BC8;
    }
}

loc_80298BB8:
{
    r31 = (r31 + 44);
}

loc_80298BBC:
{
    r0 = MemoryInline::FlatRead16(r31);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80298BC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80298AB8;
    }
}

loc_80298BC8:
{
    r0 = (r30 & 255);
}

loc_80298BD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80298C74;
    }
}

loc_80298BD4:
{
    r3 = (r1 + 52);
    r4 = (r1 + 12);
    ctx->lr = 0x80298BE0u;
    if constexpr (KnownRegArgsCpuCall<0x802991F4u>(&func_802991F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802991F4_622D = func_802991F4_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802991F4_622D);
        r4 = static_cast<uint32_t>(regargs_result_802991F4_622D >> 32);
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
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802991F4u>(ctx);
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
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r1 + 40);
    r4 = (r1 + 8);
    ctx->lr = 0x80298BECu;
    if constexpr (KnownRegArgsCpuCall<0x802991F4u>(&func_802991F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_802991F4_6A0E = func_802991F4_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802991F4_6A0E);
        r4 = static_cast<uint32_t>(regargs_result_802991F4_6A0E >> 32);
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
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x802991F4u>(ctx);
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
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead8((r28 + 369));
    r0 = (r3 + -4);
}

loc_80298BF8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80298C1C;
    }
}

loc_80298BFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 472));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14112));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80298C08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80298C1C;
    }
}

loc_80298C0C:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80298C14:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80298C1C;
    }
}

loc_80298C18:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f1.d);
}

loc_80298C1C:
{
    r3 = r28;
    r4 = (r1 + 52);
    r5 = r29;
    r6 = (r1 + 40);
    ctx->lr = 0x80298C30u;
    if constexpr (KnownRegArgsCpuCall<0x8029939Cu>(&func_8029939C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8029939C_7525 = func_8029939C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8029939C_7525);
        r4 = static_cast<uint32_t>(regargs_result_8029939C_7525 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8029939Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f3.d = MemoryInline::FlatReadFloat32((r28 + 380));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 1140));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 412));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80298C44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80298C54;
    }
}

loc_80298C48:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    MemoryInline::FlatWriteFloat32((r28 + 1140), f0.d);
    goto loc_80298C74;
}

loc_80298C54:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14108));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_80298C60:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80298C74;
    }
}

loc_80298C64:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80298C68:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80298C74;
    }
}

loc_80298C6C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteFloat32((r28 + 1140), f0.d);
}

loc_80298C74:
{
    r0 = 280;
    addr_psqx_80298C78_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80298C78_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 272));
    r0 = MemoryInline::FlatRead32((r1 + 292));
    ctx->lr = r0;
    r1 = (r1 + 288);
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802989E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802989E4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802989E4 func_802989E4 preserves=true fpr_mask=0x00000000
