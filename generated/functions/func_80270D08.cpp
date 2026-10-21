#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80270818(CpuContext* ctx);
extern "C" uint64_t func_80270818_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80270BFC(CpuContext* ctx);
extern "C" void func_80270BFC_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_80270CC8(CpuContext* ctx);
extern "C" uint64_t func_80270CC8_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80273F3C(CpuContext* ctx);
extern "C" uint64_t func_80273F3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80275448(CpuContext* ctx);
extern "C" uint64_t func_80275448_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_80270D08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80270F98_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80270D08u);
    goto loc_80270D08;

loc_80270D08:
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
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r4 = 0;
    // inline leaf 0x80270CC8 (16 guest instruction(s))
}

loc_inl0_0x80270CC8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15008));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & -2);
    r4 = (r3 + r5);
    r0 = MemoryInline::FlatRead16((r4 + 1070));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl0_0x80270CE0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl0_0x80270CEC;
    }
}

loc_inl0_0x80270CE4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14896));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
}

loc_inl0_0x80270CEC:
{
    r3 = (r3 + r5);
    r0 = MemoryInline::FlatRead16((r3 + 1080));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl0_0x80270CF8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80270CFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14892));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_inl0_cont_80270CC8;
}

loc_inl0_return:
{
}

loc_inl0_cont_80270CC8:
{
    // end of inlined leaf 0x80270CC8
    f31.d = f1.d;
    r3 = r31;
    r4 = 1;
    r5 = 0;
    ctx->lr = 0x80270D50u;
    if constexpr (KnownRegArgsCpuCall<0x80273F3Cu>(&func_80273F3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        const auto regargs_result_80273F3C_E1D = func_80273F3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273F3C_E1D);
        r4 = static_cast<uint32_t>(regargs_result_80273F3C_E1D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80273F3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    MemoryInline::FlatWriteFloat32((r31 + 964), f0.d);
    r3 = r31;
    r4 = 1;
    // inline leaf 0x80270CC8 (16 guest instruction(s))
}

loc_inl1_0x80270CC8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15008));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r4 = (r3 + r5);
    r0 = MemoryInline::FlatRead16((r4 + 1070));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl1_0x80270CE0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl1_0x80270CEC;
    }
}

loc_inl1_0x80270CE4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14896));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
}

loc_inl1_0x80270CEC:
{
    r3 = (r3 + r5);
    r0 = MemoryInline::FlatRead16((r3 + 1080));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl1_0x80270CF8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80270CFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14892));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_inl1_cont_80270CC8;
}

loc_inl1_return:
{
}

loc_inl1_cont_80270CC8:
{
    // end of inlined leaf 0x80270CC8
    f31.d = f1.d;
    r3 = r31;
    r4 = 2;
    r5 = 0;
    ctx->lr = 0x80270D90u;
    if constexpr (KnownRegArgsCpuCall<0x80273F3Cu>(&func_80273F3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        const auto regargs_result_80273F3C_1980 = func_80273F3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273F3C_1980);
        r4 = static_cast<uint32_t>(regargs_result_80273F3C_1980 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80273F3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    MemoryInline::FlatWriteFloat32((r31 + 968), f0.d);
    r3 = r31;
    r4 = 2;
    // inline leaf 0x80270CC8 (16 guest instruction(s))
}

loc_inl2_0x80270CC8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15008));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & -2);
    r4 = (r3 + r5);
    r0 = MemoryInline::FlatRead16((r4 + 1070));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl2_0x80270CE0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl2_0x80270CEC;
    }
}

loc_inl2_0x80270CE4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14896));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
}

loc_inl2_0x80270CEC:
{
    r3 = (r3 + r5);
    r0 = MemoryInline::FlatRead16((r3 + 1080));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl2_0x80270CF8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80270CFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14892));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_inl2_cont_80270CC8;
}

loc_inl2_return:
{
}

loc_inl2_cont_80270CC8:
{
    // end of inlined leaf 0x80270CC8
    f31.d = f1.d;
    r3 = r31;
    r4 = 3;
    r5 = 0;
    ctx->lr = 0x80270DD0u;
    if constexpr (KnownRegArgsCpuCall<0x80273F3Cu>(&func_80273F3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        const auto regargs_result_80273F3C_24E7 = func_80273F3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273F3C_24E7);
        r4 = static_cast<uint32_t>(regargs_result_80273F3C_24E7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80273F3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    MemoryInline::FlatWriteFloat32((r31 + 972), f0.d);
    r3 = r31;
    r4 = 4;
    // inline leaf 0x80270CC8 (16 guest instruction(s))
}

loc_inl3_0x80270CC8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15008));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & -2);
    r4 = (r3 + r5);
    r0 = MemoryInline::FlatRead16((r4 + 1070));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl3_0x80270CE0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl3_0x80270CEC;
    }
}

loc_inl3_0x80270CE4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14896));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
}

loc_inl3_0x80270CEC:
{
    r3 = (r3 + r5);
    r0 = MemoryInline::FlatRead16((r3 + 1080));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl3_0x80270CF8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x80270CFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14892));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    goto loc_inl3_cont_80270CC8;
}

loc_inl3_return:
{
}

loc_inl3_cont_80270CC8:
{
    // end of inlined leaf 0x80270CC8
    f31.d = f1.d;
    r3 = r31;
    r4 = 4;
    r5 = 0;
    ctx->lr = 0x80270E10u;
    if constexpr (KnownRegArgsCpuCall<0x80273F3Cu>(&func_80273F3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        const auto regargs_result_80273F3C_304D = func_80273F3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273F3C_304D);
        r4 = static_cast<uint32_t>(regargs_result_80273F3C_304D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80273F3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    MemoryInline::FlatWriteFloat32((r31 + 976), f0.d);
    r3 = r31;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x80270CC8u>(&func_80270CC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80270CC8_3622 = func_80270CC8_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80270CC8_3622);
        r4 = static_cast<uint32_t>(regargs_result_80270CC8_3622 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x80270CC8u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    f31.d = f1.d;
    r3 = r31;
    r4 = 5;
    r5 = 0;
    ctx->lr = 0x80270E50u;
    if constexpr (KnownRegArgsCpuCall<0x80273F3Cu>(&func_80273F3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        const auto regargs_result_80273F3C_3A25 = func_80273F3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273F3C_3A25);
        r4 = static_cast<uint32_t>(regargs_result_80273F3C_3A25 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x80273F3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f31.d));
    MemoryInline::FlatWriteFloat32((r31 + 980), f0.d);
    r3 = r31;
    ctx->lr = 0x80270E78u;
    if constexpr (KnownRegArgsCpuCall<0x80270818u>(&func_80270818)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80270818_4008 = func_80270818_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80270818_4008);
        r4 = static_cast<uint32_t>(regargs_result_80270818_4008 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80270818u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = r31;
    r4 = 6;
    ctx->lr = 0x80270E84u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_437F = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_437F);
        r4 = static_cast<uint32_t>(regargs_result_80275448_437F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 964));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 964), f0.d);
    r3 = r31;
    r4 = 7;
    ctx->lr = 0x80270EB4u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_4849 = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_4849);
        r4 = static_cast<uint32_t>(regargs_result_80275448_4849 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 968));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 968), f0.d);
    r3 = r31;
    r4 = 8;
    ctx->lr = 0x80270EE4u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_4D12 = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_4D12);
        r4 = static_cast<uint32_t>(regargs_result_80275448_4D12 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 972));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 972), f0.d);
    r3 = r31;
    r4 = 10;
    ctx->lr = 0x80270F14u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_51DD = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_51DD);
        r4 = static_cast<uint32_t>(regargs_result_80275448_51DD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 976));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 976), f0.d);
    r3 = r31;
    r4 = 9;
    ctx->lr = 0x80270F44u;
    if constexpr (KnownRegArgsCpuCall<0x80275448u>(&func_80275448)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80275448_56A6 = func_80275448_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80275448_56A6);
        r4 = static_cast<uint32_t>(regargs_result_80275448_56A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80275448u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -15000));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 980));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 980), f0.d);
    r3 = r31;
    r4 = 256;
    // inline leaf 0x80279118 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 984));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80279118
}

loc_80270F78:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80270F8C;
    }
}

loc_80270F7C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 980));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14896));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 980), f0.d);
}

loc_80270F8C:
{
    r3 = r31;
    if constexpr (KnownRegArgsCpuCall<0x80270BFCu>(&func_80270BFC)) {
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        func_80270BFC_ra8_0_0_0(ctx, r3);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80270BFCu>(ctx);
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = 40;
    addr_psqx_80270F98_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80270F98_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003CE gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000003 fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80270D08 func_80270D08 preserves=true fpr_mask=0x00000000
