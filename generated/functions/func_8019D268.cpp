#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E2BF4(CpuContext* ctx);
extern "C" uint64_t func_800E2BF4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E2C9C(CpuContext* ctx);
extern "C" uint64_t func_800E2C9C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800E2E60(CpuContext* ctx);
extern "C" uint64_t func_800E2E60_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_801923F0(CpuContext* ctx);
extern "C" uint64_t func_801923F0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8019D268_ra38_1a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3, double arg_f4)
{
    uint32_t addr_psqx_8019D8F4_loc_0 = 0;
    uint32_t addr_psqx_8019D900_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8019D268;

loc_8019D268:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r31 = r3;
    // inline leaf 0x80192430 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 859));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80192430
}

loc_8019D294:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8019D2BC;
    }
}

loc_8019D298:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -21980));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 836));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 836), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22604));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019D2B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019D2DC;
    }
}

loc_8019D2B4:
{
    MemoryInline::FlatWriteFloat32((r31 + 836), f0.d);
    goto loc_8019D2DC;
}

loc_8019D2BC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 836));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21980));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 836), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22632));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019D2D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019D2DC;
    }
}

loc_8019D2D8:
{
    MemoryInline::FlatWriteFloat32((r31 + 836), f0.d);
}

loc_8019D2DC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 836));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22632));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019D2E8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019D33C;
    }
}

loc_8019D2EC:
{
    r3 = (r31 + 36);
    r4 = 4;
    r5 = 2;
    r6 = (r1 + 16);
    ctx->lr = 0x8019D300u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2D38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    f0.d = MemoryInline::FlatReadFloat32((r31 + 836));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    r3 = (r31 + 36);
    r4 = 4;
    r5 = 2;
    r6 = (r1 + 16);
    ctx->lr = 0x8019D328u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r31 + 36);
    r4 = 4;
    r5 = 4;
    ctx->lr = 0x8019D338u;
    if constexpr (KnownRegArgsCpuCall<0x800E2E60u>(&func_800E2E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800E2E60_1A43 = func_800E2E60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2E60_1A43);
        r4 = static_cast<uint32_t>(regargs_result_800E2E60_1A43 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E2E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8019D34C;
}

loc_8019D33C:
{
    r3 = (r31 + 36);
    r4 = 4;
    r5 = 3;
    ctx->lr = 0x8019D34Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E2E60u>(&func_800E2E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800E2E60_1F17 = func_800E2E60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2E60_1F17);
        r4 = static_cast<uint32_t>(regargs_result_800E2E60_1F17 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E2E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8019D34C:
{
    r3 = (r31 + 36);
    r4 = 5;
    r5 = 2;
    r6 = (r1 + 16);
    ctx->lr = 0x8019D360u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2D38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r31;
    r4 = 1;
    // inline leaf 0x801357AC (7 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x801357AC
}

loc_8019D370:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019D3A0;
    }
}

loc_8019D374:
{
    r3 = MemoryInline::FlatRead8((r1 + 19));
}

loc_8019D37C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8019D3B4;
    }
}

loc_8019D380:
{
    r3 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8019D38C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8019D394;
    }
}

loc_8019D390:
{
    r3 = 0;
}

loc_8019D394:
{
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    goto loc_8019D3B4;
}

loc_8019D3A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 836));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
}

loc_8019D3B4:
{
    r0 = MemoryInline::FlatRead8((r1 + 19));
}

loc_8019D3BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8019D3E8;
    }
}

loc_8019D3C0:
{
    r3 = (r31 + 36);
    r4 = 5;
    r5 = 2;
    r6 = (r1 + 16);
    ctx->lr = 0x8019D3D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = (r31 + 36);
    r4 = 5;
    r5 = 4;
    ctx->lr = 0x8019D3E4u;
    if constexpr (KnownRegArgsCpuCall<0x800E2E60u>(&func_800E2E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800E2E60_2EC9 = func_800E2E60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2E60_2EC9);
        r4 = static_cast<uint32_t>(regargs_result_800E2E60_2EC9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E2E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8019D3F8;
}

loc_8019D3E8:
{
    r3 = (r31 + 36);
    r4 = 5;
    r5 = 3;
    ctx->lr = 0x8019D3F8u;
    if constexpr (KnownRegArgsCpuCall<0x800E2E60u>(&func_800E2E60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800E2E60_339D = func_800E2E60_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2E60_339D);
        r4 = static_cast<uint32_t>(regargs_result_800E2E60_339D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E2E60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8019D3F8:
{
    r3 = MemoryInline::FlatRead8((r31 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl2_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_0 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_0);
}

loc_inl2_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x802B06E4:
{
    r3 = r0;
    goto loc_inl2_cont_802B06CC;
}

loc_inl2_return:
{
}

loc_inl2_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r0 = (r3 & 255);
}

loc_8019D408:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_8019D414;
    }
}

loc_8019D40C:
{
}

loc_8019D410:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_8019D420;
    }
}

loc_8019D414:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -22160));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -22056));
    goto loc_8019D428;
}

loc_8019D420:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -22604));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -21976));
}

loc_8019D428:
{
    r3 = r31;
    // inline leaf 0x80192430 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 859));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80192430
}

loc_8019D434:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8019D474;
    }
}

loc_8019D438:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 840));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f30.d));
    MemoryInline::FlatWriteFloat32((r31 + 840), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8019D448:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8019D490;
    }
}

loc_8019D44C:
{
    MemoryInline::FlatWriteFloat32((r31 + 840), f31.d);
    r3 = r31;
    r4 = 2;
    // inline leaf 0x801923D4 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 861));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x801923D4
}

loc_8019D460:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8019D490;
    }
}

loc_8019D464:
{
    r3 = r31;
    r4 = 2;
    // inline leaf 0x801923AC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 861));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite8((r3 + 861), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801923AC
    goto loc_8019D490;
}

loc_8019D474:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 840));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    MemoryInline::FlatWriteFloat32((r31 + 840), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22608));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019D488:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8019D490;
    }
}

loc_8019D48C:
{
    MemoryInline::FlatWriteFloat32((r31 + 840), f0.d);
}

loc_8019D490:
{
    r3 = (r31 + 36);
    r4 = 4;
    r5 = 4;
    r6 = (r1 + 16);
    ctx->lr = 0x8019D4A4u;
    if constexpr (KnownRegArgsCpuCall<0x800E2C9Cu>(&func_800E2C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800E2C9C_45A6 = func_800E2C9C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2C9C_45A6);
        r4 = static_cast<uint32_t>(regargs_result_800E2C9C_45A6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E2C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8019D4A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8019D4E8;
    }
}

loc_8019D4AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 840));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword2;
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = (r31 + 36);
    r4 = 4;
    r5 = 4;
    r6 = (r1 + 12);
    r7 = 0;
    ctx->lr = 0x8019D4E8u;
    if constexpr (KnownRegArgsCpuCall<0x800E2BF4u>(&func_800E2BF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800E2BF4_4D0B = func_800E2BF4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2BF4_4D0B);
        r4 = static_cast<uint32_t>(regargs_result_800E2BF4_4D0B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E2BF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8019D4E8:
{
    r3 = (r31 + 36);
    r4 = 5;
    r5 = 4;
    r6 = (r1 + 16);
    ctx->lr = 0x8019D4FCu;
    if constexpr (KnownRegArgsCpuCall<0x800E2C9Cu>(&func_800E2C9C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800E2C9C_51DC = func_800E2C9C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2C9C_51DC);
        r4 = static_cast<uint32_t>(regargs_result_800E2C9C_51DC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E2C9Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8019D500:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8019D588;
    }
}

loc_8019D504:
{
    r3 = r31;
    r4 = 1;
    // inline leaf 0x801357AC (7 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x801357AC
}

loc_8019D514:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019D54C;
    }
}

loc_8019D518:
{
    r3 = MemoryInline::FlatRead8((r1 + 16));
}

loc_8019D520:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8019D568;
    }
}

loc_8019D524:
{
    r3 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_8019D530:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8019D538;
    }
}

loc_8019D534:
{
    r3 = 0;
}

loc_8019D538:
{
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    goto loc_8019D568;
}

loc_8019D54C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 840));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
}

loc_8019D568:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r31 + 36);
    r4 = 5;
    r5 = 4;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x8019D588u;
    if constexpr (KnownRegArgsCpuCall<0x800E2BF4u>(&func_800E2BF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800E2BF4_5E40 = func_800E2BF4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2BF4_5E40);
        r4 = static_cast<uint32_t>(regargs_result_800E2BF4_5E40 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E2BF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8019D588:
{
    r3 = r31;
    r4 = 4;
    // inline leaf 0x801923D4 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 861));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x801923D4
}

loc_8019D598:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019D5B4;
    }
}

loc_8019D59C:
{
    r3 = r31;
    r4 = 2;
    // inline leaf 0x801923AC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead8((r3 + 861));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite8((r3 + 861), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801923AC
    r3 = r31;
    r4 = 4;
    // inline leaf 0x801923BC (6 guest instruction(s))
    r5 = MemoryInline::FlatRead8((r3 + 861));
    r0 = ~(r4 | r4);
    r0 = (r0 & 255);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite8((r3 + 861), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801923BC
}

loc_8019D5B4:
{
    r3 = r31;
    // inline leaf 0x80192430 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 859));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_8 & 1);
    // end of inlined leaf 0x80192430
}

loc_8019D5C0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8019D5E4;
    }
}

loc_8019D5C4:
{
    r3 = r31;
    r4 = 2;
    // inline leaf 0x801923D4 (7 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 861));
    r0 = (r4 & 255);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_9 & 1);
    // end of inlined leaf 0x801923D4
}

loc_8019D5D4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019D5E4;
    }
}

loc_8019D5D8:
{
    r3 = r31;
    r4 = 2;
    // inline leaf 0x801923BC (6 guest instruction(s))
    r5 = MemoryInline::FlatRead8((r3 + 861));
    r0 = ~(r4 | r4);
    r0 = (r0 & 255);
    r0 = (r5 & r0);
    MemoryInline::FlatWrite8((r3 + 861), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x801923BC
}

loc_8019D5E4:
{
    r3 = (r31 + 36);
    r4 = 3;
    r5 = 3;
    r6 = (r1 + 16);
    ctx->lr = 0x8019D5F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2D38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r31;
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_11 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_8019D604:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019D614;
    }
}

loc_8019D608:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    goto loc_8019D6B8;
}

loc_8019D614:
{
    r3 = r31;
    // inline leaf 0x8012ECC4 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2218));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_12 & 134217727);
    // end of inlined leaf 0x8012ECC4
}

loc_8019D620:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019D670;
    }
}

loc_8019D624:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r0 = (r0_rot_1 & -8192);
    r3 = (r0 & 65535);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800502B0u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22612));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22616));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22524));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r3 = fctiwzword4;
    r0 = (r3 + 225);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    goto loc_8019D6B8;
}

loc_8019D670:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r0 = (r0_rot_2 & -8192);
    r3 = (r0 & 65535);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800502B0u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22612));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22616));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22524));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r3 = fctiwzword5;
    r0 = (r3 + 135);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
}

loc_8019D6B8:
{
    r3 = (r31 + 36);
    r4 = 3;
    r5 = 3;
    r6 = (r1 + 16);
    ctx->lr = 0x8019D6CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = r31;
    ctx->lr = 0x8019D6D4u;
    if constexpr (KnownRegArgsCpuCall<0x801923F0u>(&func_801923F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_801923F0_7D66 = func_801923F0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801923F0_7D66);
        r4 = static_cast<uint32_t>(regargs_result_801923F0_7D66 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x801923F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_8019D6D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019D7CC;
    }
}

loc_8019D6DC:
{
    r3 = r31;
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_14 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_8019D6E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019D75C;
    }
}

loc_8019D6EC:
{
    r0 = MemoryInline::FlatRead8((r31 + 858));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8019D6F8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8019D72C;
    }
}

loc_8019D6FC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 844));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21972));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 844), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22376));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019D714:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019D8B8;
    }
}

loc_8019D71C:
{
    MemoryInline::FlatWriteFloat32((r31 + 844), f0.d);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 858), static_cast<uint8_t>(r0));
    goto loc_8019D8B8;
}

loc_8019D72C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 844));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21972));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 844), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22632));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019D744:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019D8B8;
    }
}

loc_8019D74C:
{
    MemoryInline::FlatWriteFloat32((r31 + 844), f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 858), static_cast<uint8_t>(r0));
    goto loc_8019D8B8;
}

loc_8019D75C:
{
    r0 = MemoryInline::FlatRead8((r31 + 858));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8019D768:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8019D79C;
    }
}

loc_8019D76C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 844));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22144));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 844), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22384));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019D784:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019D8B8;
    }
}

loc_8019D78C:
{
    MemoryInline::FlatWriteFloat32((r31 + 844), f0.d);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 858), static_cast<uint8_t>(r0));
    goto loc_8019D8B8;
}

loc_8019D79C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 844));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22144));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 844), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22632));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019D7B4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019D8B8;
    }
}

loc_8019D7BC:
{
    MemoryInline::FlatWriteFloat32((r31 + 844), f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 858), static_cast<uint8_t>(r0));
    goto loc_8019D8B8;
}

loc_8019D7CC:
{
    r3 = r31;
    // inline leaf 0x8012ECA0 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2207));
    r4 = (r3 + -2);
    r3 = 1;
    r0 = (1 - r4);
    r3 = (r3 | ~r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_15 & 1);
    // end of inlined leaf 0x8012ECA0
}

loc_8019D7D8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8019D84C;
    }
}

loc_8019D7DC:
{
    r0 = MemoryInline::FlatRead8((r31 + 858));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8019D7E8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8019D81C;
    }
}

loc_8019D7EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 844));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22144));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 844), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22384));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019D804:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019D8B8;
    }
}

loc_8019D80C:
{
    MemoryInline::FlatWriteFloat32((r31 + 844), f0.d);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 858), static_cast<uint8_t>(r0));
    goto loc_8019D8B8;
}

loc_8019D81C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 844));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22144));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 844), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22632));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019D834:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019D8B8;
    }
}

loc_8019D83C:
{
    MemoryInline::FlatWriteFloat32((r31 + 844), f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 858), static_cast<uint8_t>(r0));
    goto loc_8019D8B8;
}

loc_8019D84C:
{
    r0 = MemoryInline::FlatRead8((r31 + 858));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8019D858:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8019D88C;
    }
}

loc_8019D85C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 844));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21968));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 844), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22604));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019D874:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019D8B8;
    }
}

loc_8019D87C:
{
    MemoryInline::FlatWriteFloat32((r31 + 844), f0.d);
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 858), static_cast<uint8_t>(r0));
    goto loc_8019D8B8;
}

loc_8019D88C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 844));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -21968));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 844), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -22404));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8019D8A4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8019D8B8;
    }
}

loc_8019D8AC:
{
    MemoryInline::FlatWriteFloat32((r31 + 844), f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 858), static_cast<uint8_t>(r0));
}

loc_8019D8B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 844));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword6 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword6;
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r0));
    r3 = (r31 + 36);
    r4 = 1;
    r5 = 3;
    r6 = (r1 + 16);
    ctx->lr = 0x8019D8F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r0 = 72;
    addr_psqx_8019D8F4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8019D8F4_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r0 = 56;
    addr_psqx_8019D900_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8019D900_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8019D268(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8019D268_ra38_1a_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8019D268 func_8019D268 preserves=true fpr_mask=0x00000000
