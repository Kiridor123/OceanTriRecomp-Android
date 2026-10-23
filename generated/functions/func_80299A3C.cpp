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
extern "C" void func_8028F7BC(CpuContext* ctx);
extern "C" uint64_t func_8028F7BC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802903FC(CpuContext* ctx);
extern "C" uint64_t func_802903FC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802991F4(CpuContext* ctx);
extern "C" uint64_t func_802991F4_ra38_1fc_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double);
extern "C" void func_802999AC(CpuContext* ctx);
extern "C" uint32_t func_802999AC_ra38_2_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);

extern "C" MkwStateFreeResult2 func_800FA41C_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_800FA41C_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80299A3C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80299C50_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;

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

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80299A3C;

loc_80299A3C:
{
    MemoryInline::FlatWriteRam32((r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 208), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r28 = r3;
    f31.d = f1.d;
    r29 = r4;
    r30 = r5;
    r3 = (r1 + 128);
    ctx->lr = 0x80299A78u;
    if constexpr (KnownRegArgsCpuCall<0x800FA3DCu>(&func_800FA3DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800FA3DC_D11 = func_800FA3DC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800FA3DC_D11;
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
    r3 = (r1 + 80);
    ctx->lr = 0x80299A80u;
    if constexpr (KnownRegArgsCpuCall<0x800FA484u>(&func_800FA484)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800FA484_F57 = func_800FA484_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800FA484_F57;
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
    r3 = (r1 + 64);
    ctx->lr = 0x80299A88u;
    if constexpr (KnownRegArgsCpuCall<0x800FA484u>(&func_800FA484)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800FA484_119D = func_800FA484_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800FA484_119D;
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
    r3 = (r1 + 96);
    ctx->lr = 0x80299A90u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800FA41Cu) && KnownTranslatedCpuCall<0x800FA41Cu>::kAvailable && !KnownTranslatedCpuCall<0x800FA41Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800FA41Cu>() && KnownTranslatedCpuCall<0x800FA44Cu>::kAvailable && !KnownTranslatedCpuCall<0x800FA44Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800FA44Cu>()) {
        const auto state_free_result_800FA41C_1511 = func_800FA41C_statefree_v0(r1, r3, r31, 0x80299A90u);
        r1 = static_cast<uint32_t>(state_free_result_800FA41C_1511);
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
    }
    r3 = (r1 + 48);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 36);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 24);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 12);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r31 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14112));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    r3 = (r1 + 24);
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14112));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 80);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    MemoryInline::FlatWriteRamFloat32((r1 + 92), f31.d);
    r0 = (r30 & 255);
}

loc_80299AF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80299B08;
    }
}

loc_80299AFC:
{
}

loc_80299B00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80299B10;
    }
}

loc_80299B04:
{
    goto loc_80299C4C;
}

loc_80299B08:
{
    r30 = MemoryInline::FlatRead32((r29 + 2248));
    goto loc_80299B1C;
}

loc_80299B10:
{
    r30 = MemoryInline::FlatRead32((r29 + 2252));
}

loc_80299B1C:
{
}

loc_80299B20:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80299C04;
    }
}

loc_80299B24:
{
    goto loc_80299BF8;
}

loc_80299B28:
{
    r3 = r30;
    // inline leaf 0x8029F65C (5 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r0 = (r0 & 178);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x8029F65C
}

loc_80299B34:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80299B4C;
    }
}

loc_80299B38:
{
    r3 = r29;
    r4 = MemoryInline::FlatRead16((r30 + 12));
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

loc_80299B48:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80299B54;
    }
}

loc_80299B4C:
{
    r30 = (r30 + 44);
    goto loc_80299BF8;
}

loc_80299B54:
{
    r3 = r29;
    r4 = r30;
    r5 = (r1 + 96);
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

loc_80299B6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80299B7C;
    }
}

loc_80299B70:
{
}

loc_80299B74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80299BAC;
    }
}

loc_80299B78:
{
    goto loc_80299BE8;
}

loc_80299B7C:
{
    r3 = (r1 + 80);
    r4 = (r1 + 64);
    r5 = (r1 + 48);
    ctx->lr = 0x80299B8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8028F7BCu>(&func_8028F7BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_8028F7BC_2A24 = func_8028F7BC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8028F7BC_2A24);
        r4 = static_cast<uint32_t>(regargs_result_8028F7BC_2A24 >> 32);
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
        InvokeDirectCpu<0x8028F7BCu>(ctx);
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
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80299B90:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80299BE8;
    }
}

loc_80299B94:
{
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    r5 = (r1 + 48);
    ctx->lr = 0x80299BA4u;
    if constexpr (KnownRegArgsCpuCall<0x802999ACu>(&func_802999AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        const auto regargs_result_802999AC_3221 = func_802999AC_ra38_2_8_0(ctx, r3, r4, r5, f1.d);
        r3 = regargs_result_802999AC_3221;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802999ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r31 = (r31 + 1);
    goto loc_80299BE8;
}

loc_80299BAC:
{
    r3 = (r1 + 96);
    r4 = (r1 + 128);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8028F5BCu>(ctx);
    r3 = (r1 + 128);
    r4 = (r1 + 80);
    r5 = (r1 + 36);
    r6 = (r1 + 48);
    ctx->lr = 0x80299BCCu;
    if constexpr (KnownRegArgsCpuCall<0x802903FCu>(&func_802903FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        const auto regargs_result_802903FC_3711 = func_802903FC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802903FC_3711);
        r4 = static_cast<uint32_t>(regargs_result_802903FC_3711 >> 32);
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
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_80299BD0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80299BE8;
    }
}

loc_80299BD4:
{
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    r5 = (r1 + 48);
    ctx->lr = 0x80299BE4u;
    if constexpr (KnownRegArgsCpuCall<0x802999ACu>(&func_802999AC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        const auto regargs_result_802999AC_3F0E = func_802999AC_ra38_2_8_0(ctx, r3, r4, r5, f1.d);
        r3 = regargs_result_802999AC_3F0E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802999ACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r31 = (r31 + 1);
}

loc_80299BE8:
{
    r0 = (r31 & 255);
}

loc_80299BF0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(3))) {
        goto loc_80299C04;
    }
}

loc_80299BF4:
{
    r30 = (r30 + 44);
}

loc_80299BF8:
{
    r0 = MemoryInline::FlatRead16(r30);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80299C00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80299B28;
    }
}

loc_80299C04:
{
    r0 = (r31 & 255);
}

loc_80299C0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80299C4C;
    }
}

loc_80299C10:
{
    r3 = (r1 + 24);
    r4 = (r1 + 8);
    ctx->lr = 0x80299C1Cu;
    if constexpr (KnownRegArgsCpuCall<0x802991F4u>(&func_802991F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        const auto regargs_result_802991F4_45C0 = func_802991F4_ra38_1fc_18_0(ctx, r3, r4, r5, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802991F4_45C0);
        r4 = static_cast<uint32_t>(regargs_result_802991F4_45C0 >> 32);
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
    }
    mkw_gqr0 = ctx->gqr[0];
    f1.d = MemoryInline::FlatReadFloat32(r28);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r28, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
}

loc_80299C4C:
{
    r0 = 216;
    addr_psqx_80299C50_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80299C50_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 208));
    r0 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80299A3C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80299A3C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80299A3C func_80299A3C preserves=true fpr_mask=0x00000000
