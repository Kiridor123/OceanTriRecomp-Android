#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B7A1C(CpuContext* ctx);
extern "C" uint64_t func_802B7A1C_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_802B7B34(CpuContext* ctx);
extern "C" uint64_t func_802B7B34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802B8058(CpuContext* ctx);
extern "C" uint64_t func_802B8058_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);

extern "C" uint64_t func_802B8244_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_802B8908_loc_0 = 0;
    uint32_t addr_psqx_802B8914_loc_0 = 0;
    uint32_t addr_psqx_802B8920_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
    uint32_t r27_addr_6 = 0;
    uint32_t r27_addr_7 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[4].d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_802B8244;

loc_802B8244:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -176), 0, 184u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 180u, (r1 + 180), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 128);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r4;
    r3 = (r1 + 68);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 56);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r30 = 0;
    r31 = 0;
    r3 = (r1 + 44);
    r4 = r28;
    r5 = (r28 + 76);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 68);
    r4 = (r1 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 32);
    r4 = (r28 + 12);
    r5 = (r28 + 88);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 56);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r28;
    r4 = r29;
    r5 = 0;
    ctx->lr = 0x802B82D8u;
    if constexpr (KnownRegArgsCpuCall<0x802B7B34u>(&func_802B7B34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802B7B34_1518 = func_802B7B34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802B7B34_1518);
        r4 = static_cast<uint32_t>(regargs_result_802B7B34_1518 >> 32);
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
        InvokeDirectCpu<0x802B7B34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_802B82DC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802B82F8;
    }
}

loc_802B82E0:
{
    r3 = r28;
    r4 = r29;
    r5 = 0;
    ctx->lr = 0x802B82F0u;
    if constexpr (KnownRegArgsCpuCall<0x802B8058u>(&func_802B8058)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        const auto regargs_result_802B8058_19BD = func_802B8058_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802B8058_19BD);
        r4 = static_cast<uint32_t>(regargs_result_802B8058_19BD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802B8058u>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    }
}

loc_802B82F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B8414;
    }
}

loc_802B82F8:
{
    r0 = MemoryInline::FlatRead8((r28 + 270));
    r5 = (r0 * 12);
    r3 = 0x805D0000u;
    r27 = (r3 + 1360);
    r3 = (r27 + r5);
    f30.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f31.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r0 = MemoryInline::FlatRead8((r28 + 271));
}

loc_802B831C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B8410;
    }
}

loc_802B8320:
{
    r0 = MemoryInline::FlatRead8((r28 + 166));
}

loc_802B8328:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B8364;
    }
}

loc_802B832C:
{
    r4 = MemoryInline::FlatRead8((r28 + 165));
    r4 = MH3_TickLoad(r4, 2150335276);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r27_addr_1 = (r27 + r5);
    r0 = MemoryInline::FlatRead8(r27_addr_1);
}

loc_802B833C:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_802B8410;
    }
}

loc_802B8340:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r28 + 165), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteFloat32((r28 + 236), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 248), f0.d);
    goto loc_802B8410;
}

loc_802B8364:
{
    r4 = MemoryInline::FlatRead8((r28 + 162));
    r4 = MH3_TickLoad(r4, 2150335332);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r27_addr_2 = (r27 + r5);
    r0 = MemoryInline::FlatRead8(r27_addr_2);
}

loc_802B8374:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_802B83C0;
    }
}

loc_802B8378:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r28 + 162), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteFloat32((r28 + 200), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 224), f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 268), static_cast<uint8_t>(r0));
    r3 = r28;
    r4 = 0;
    // inline leaf 0x802B820C (6 guest instruction(s))
    r0 = (r4 & 255);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 256));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x802B820C
}

loc_802B83B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B8410;
    }
}

loc_802B83B4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 256), static_cast<uint8_t>(r0));
    goto loc_802B8410;
}

loc_802B83C0:
{
    r3 = r28;
    r4 = 0;
    // inline leaf 0x802B820C (6 guest instruction(s))
    r0 = (r4 & 255);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 256));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
    // end of inlined leaf 0x802B820C
}

loc_802B83D0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B8410;
    }
}

loc_802B83D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 72));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteFloat32((r28 + 188), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 212), f0.d);
    r3 = r28;
    r4 = 0;
    r0 = MemoryInline::FlatRead8((r28 + 270));
    r0 = (r0 * 12);
    r5 = (r27 + r0);
    r5 = MemoryInline::FlatRead8((r5 + 1));
    // inline leaf 0x802B8224 (8 guest instruction(s))
    r6 = 1;
    r0 = (r4 & 255);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 256), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 258), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 268), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802B8224
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 271), static_cast<uint8_t>(r0));
}

loc_802B8410:
{
    r30 = 1;
}

loc_802B8414:
{
    r3 = r28;
    r4 = r29;
    r5 = 1;
    ctx->lr = 0x802B8424u;
    if constexpr (KnownRegArgsCpuCall<0x802B7B34u>(&func_802B7B34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_802B7B34_318F = func_802B7B34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802B7B34_318F);
        r4 = static_cast<uint32_t>(regargs_result_802B7B34_318F >> 32);
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
        InvokeDirectCpu<0x802B7B34u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_802B8428:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802B8444;
    }
}

loc_802B842C:
{
    r3 = r28;
    r4 = r29;
    r5 = 1;
    ctx->lr = 0x802B843Cu;
    if constexpr (KnownRegArgsCpuCall<0x802B8058u>(&func_802B8058)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        const auto regargs_result_802B8058_3634 = func_802B8058_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802B8058_3634);
        r4 = static_cast<uint32_t>(regargs_result_802B8058_3634 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802B8058u>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    }
}

loc_802B8440:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B8660;
    }
}

loc_802B8444:
{
    r3 = r29;
    r4 = 0;
    r5 = 27;
    // inline leaf 0x8026FECC (12 guest instruction(s))
}

loc_inl6_0x8026FECC:
{
    r6 = MemoryInline::FlatRead8((r3 + 10));
    r0 = (r4 & 255);
}

loc_inl6_0x8026FED8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x8026FEF4;
    }
}

loc_inl6_0x8026FEDC:
{
    r3 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r5 & 65535);
}

loc_inl6_0x8026FEE8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl6_0x8026FEF4;
    }
}

loc_inl6_0x8026FEEC:
{
    r3 = 1;
    goto loc_inl6_cont_8026FECC;
}

loc_inl6_0x8026FEF4:
{
    r3 = 0;
}

loc_inl6_cont_8026FECC:
{
    // end of inlined leaf 0x8026FECC
}

loc_802B8458:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802B84F0;
    }
}

loc_802B845C:
{
    r4 = MemoryInline::FlatRead16((r28 + 272));
}

loc_802B8464:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(32768))) {
        goto loc_802B84A4;
    }
}

loc_802B8468:
{
    r3 = 65536;
    r0 = (r3 + -32768);
    r0 = (r0 - r4);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13688));
    r0 = (r0 ^ -2147483648);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = 1127219200;
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13612));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13748));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    goto loc_802B84D4;
}

loc_802B84A4:
{
    r0 = (r4 + -32768);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -13688));
    r0 = (r0 ^ -2147483648);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    r0 = 1127219200;
    stackword10 = r0;
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13612));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13748));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
}

loc_802B84D4:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13604));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13608));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13764));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    goto loc_802B850C;
}

loc_802B84F0:
{
    r0 = MemoryInline::FlatRead8((r28 + 270));
    r4 = (r0 * 12);
    r3 = 0x805D0000u;
    r0 = (r3 + 1360);
    r3 = (r0 + r4);
    f30.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f31.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_802B850C:
{
    r0 = MemoryInline::FlatRead8((r28 + 166));
}

loc_802B8514:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B8578;
    }
}

loc_802B8518:
{
    r5 = MemoryInline::FlatRead8((r28 + 165));
    r5 = MH3_TickLoad(r5, 2150335768);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r0 = MemoryInline::FlatRead8((r28 + 270));
    r0 = (r0 * 12);
    r3 = 0x805D0000u;
    r3 = (r3 + 1360);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
}

loc_802B8538:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_802B865C;
    }
}

loc_802B853C:
{
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r28 + 165), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteFloat32((r28 + 232), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteFloat32((r28 + 240), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 244), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 252), f0.d);
    goto loc_802B865C;
}

loc_802B8578:
{
    r5 = MemoryInline::FlatRead8((r28 + 162));
    r5 = MH3_TickLoad(r5, 2150335864);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    r0 = MemoryInline::FlatRead8((r28 + 270));
    r0 = (r0 * 12);
    r3 = 0x805D0000u;
    r27 = (r3 + 1360);
    r27_addr_5 = (r27 + r0);
    r0 = MemoryInline::FlatRead8(r27_addr_5);
}

loc_802B8598:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r0))) {
        goto loc_802B85FC;
    }
}

loc_802B859C:
{
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r28 + 162), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteFloat32((r28 + 196), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteFloat32((r28 + 204), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 220), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 228), f0.d);
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 269), static_cast<uint8_t>(r0));
    r3 = r28;
    r4 = 1;
    // inline leaf 0x802B820C (6 guest instruction(s))
    r0 = (r4 & 255);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 256));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
    // end of inlined leaf 0x802B820C
}

loc_802B85EC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802B865C;
    }
}

loc_802B85F0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 257), static_cast<uint8_t>(r0));
    goto loc_802B865C;
}

loc_802B85FC:
{
    r3 = r28;
    r4 = 1;
    // inline leaf 0x802B820C (6 guest instruction(s))
    r0 = (r4 & 255);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 256));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_6 & 134217727);
    // end of inlined leaf 0x802B820C
}

loc_802B860C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B865C;
    }
}

loc_802B8610:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteFloat32((r28 + 184), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 76));
    f0.d = PpcFmulsInline(f0.d, f30.d);
    MemoryInline::FlatWriteFloat32((r28 + 192), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 208), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = PpcFmulsInline(f0.d, f31.d);
    MemoryInline::FlatWriteFloat32((r28 + 216), f0.d);
    r3 = r28;
    r4 = 1;
    r0 = MemoryInline::FlatRead8((r28 + 270));
    r0 = (r0 * 12);
    r5 = (r27 + r0);
    r5 = MemoryInline::FlatRead8((r5 + 1));
    // inline leaf 0x802B8224 (8 guest instruction(s))
    r6 = 1;
    r0 = (r4 & 255);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 256), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 258), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 268), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802B8224
}

loc_802B865C:
{
    r31 = 1;
}

loc_802B8660:
{
}

loc_802B8664:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_802B86A8;
    }
}

loc_802B8668:
{
    r0 = MemoryInline::FlatRead8((r28 + 268));
}

loc_802B8670:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B86A8;
    }
}

loc_802B8674:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 200));
    MemoryInline::FlatWriteFloat32((r28 + 188), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 224));
    MemoryInline::FlatWriteFloat32((r28 + 212), f0.d);
    r3 = r28;
    r4 = 0;
    r5 = 0x805D0000u;
    r5 = (r5 + 1360);
    r0 = MemoryInline::FlatRead8((r28 + 270));
    r0 = (r0 * 12);
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead8((r5 + 1));
    // inline leaf 0x802B8224 (8 guest instruction(s))
    r6 = 1;
    r0 = (r4 & 255);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 256), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 258), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 268), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802B8224
}

loc_802B86A8:
{
}

loc_802B86AC:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_802B8700;
    }
}

loc_802B86B0:
{
    r0 = MemoryInline::FlatRead8((r28 + 269));
}

loc_802B86B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B8700;
    }
}

loc_802B86BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 196));
    MemoryInline::FlatWriteFloat32((r28 + 184), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 204));
    MemoryInline::FlatWriteFloat32((r28 + 192), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 220));
    MemoryInline::FlatWriteFloat32((r28 + 208), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r28 + 228));
    MemoryInline::FlatWriteFloat32((r28 + 216), f0.d);
    r3 = r28;
    r4 = 1;
    r5 = 0x805D0000u;
    r5 = (r5 + 1360);
    r0 = MemoryInline::FlatRead8((r28 + 270));
    r0 = (r0 * 12);
    r5 = (r5 + r0);
    r5 = MemoryInline::FlatRead8((r5 + 1));
    // inline leaf 0x802B8224 (8 guest instruction(s))
    r6 = 1;
    r0 = (r4 & 255);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 256), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 258), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 268), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802B8224
}

loc_802B8700:
{
}

loc_802B8704:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_802B8724;
    }
}

loc_802B8708:
{
}

loc_802B870C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_802B8724;
    }
}

loc_802B8710:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 162), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 271), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 165), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 166), static_cast<uint8_t>(r0));
}

loc_802B8724:
{
    r3 = r29;
    r4 = 2;
    ctx->lr = 0x802B8730u;
    if constexpr (KnownRegArgsCpuCall<0x802B7A1Cu>(&func_802B7A1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        const auto regargs_result_802B7A1C_6A31 = func_802B7A1C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802B7A1C_6A31);
        r4 = static_cast<uint32_t>(regargs_result_802B7A1C_6A31 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f30 = ctx->fpr[30];
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
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802B7A1Cu>(ctx);
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
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
    }
}

loc_802B8734:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802B87C8;
    }
}

loc_802B8738:
{
    r3 = (r1 + 20);
    r4 = r28;
    r5 = (r28 + 76);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 68);
    r4 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 8);
    r4 = (r28 + 12);
    r5 = (r28 + 88);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80050D04u>(ctx);
    r3 = (r1 + 56);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    MemoryInline::FlatWriteRamFloat32((r1 + 72), f0.d);
    r3 = (r28 + 196);
    r4 = (r1 + 68);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4 = r3;
    r3 = (r28 + 184);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r28 + 220);
    r4 = (r1 + 56);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4 = r3;
    r3 = (r28 + 208);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = r28;
    r4 = 0;
    r5 = 100;
    // inline leaf 0x802B8224 (8 guest instruction(s))
    r6 = 1;
    r0 = (r4 & 255);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 256), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 258), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 268), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802B8224
    r3 = r28;
    r4 = 1;
    r5 = 100;
    // inline leaf 0x802B8224 (8 guest instruction(s))
    r6 = 1;
    r0 = (r4 & 255);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite8((r3 + 256), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 258), static_cast<uint8_t>(r5));
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 268), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802B8224
}

loc_802B87C8:
{
    r30 = 0;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -13664));
    r27 = 1127219200;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -13748));
    r29 = 0;
}

loc_802B87DC:
{
    r3 = (r30 & 255);
    r31 = (r28 + r3);
    r0 = MemoryInline::FlatRead8((r31 + 256));
}

loc_802B87EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802B87FC;
    }
}

loc_802B87F0:
{
}

loc_802B87F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802B882C;
    }
}

loc_802B87F8:
{
    goto loc_802B88F8;
}

loc_802B87FC:
{
    r0 = MemoryInline::FlatRead8((r31 + 258));
    stackword11 = r0;
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    stackword12 = r27;
    MemoryInline::FlatWriteRam32((r1 + 88), r27);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword12), static_cast<uint32_t>(stackword11));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f0.d));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r28 + r0);
    MemoryInline::FlatWriteFloat32((r3 + 260), f0.d);
    r3 = MemoryInline::FlatRead8((r31 + 256));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 256), static_cast<uint8_t>(r0));
}

loc_802B882C:
{
    r3 = MemoryInline::FlatRead8((r31 + 258));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = (r30 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = (r28 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 260));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13696));
    ctx->lr = 0x802B884Cu;
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
    InvokeDirectCpu<0x802BB0B0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f29.d = f1.d;
    r3 = MemoryInline::FlatRead8((r31 + 258));
    r3 = MH3_TickLoad(r3, 2150336592);
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 258), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 258));
}

loc_802B8864:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B8870;
    }
}

loc_802B8868:
{
    MemoryInline::FlatWrite8((r31 + 256), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r31 + 258), static_cast<uint8_t>(r29));
}

loc_802B8870:
{
    r0 = (r30 & 255);
}

loc_802B8878:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802B88A8;
    }
}

loc_802B887C:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 188));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f3.d = f29.d;
    // inline leaf 0x802BB138 (6 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13748));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // end of inlined leaf 0x802BB138
    MemoryInline::FlatWriteFloat32((r28 + 200), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 212));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f3.d = f29.d;
    // inline leaf 0x802BB138 (6 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13748));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // end of inlined leaf 0x802BB138
    MemoryInline::FlatWriteFloat32((r28 + 224), f1.d);
    goto loc_802B88F8;
}

loc_802B88A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 184));
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -13768), 0, 24u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -13768));
    f3.d = f29.d;
    // inline leaf 0x802BB138 (6 guest instruction(s))
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -13748));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // end of inlined leaf 0x802BB138
    MemoryInline::FlatWriteFloat32((r28 + 196), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 192));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -13768));
    f3.d = f29.d;
    // inline leaf 0x802BB138 (6 guest instruction(s))
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -13748));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // end of inlined leaf 0x802BB138
    MemoryInline::FlatWriteFloat32((r28 + 204), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 208));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -13768));
    f3.d = f29.d;
    // inline leaf 0x802BB138 (6 guest instruction(s))
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -13748));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // end of inlined leaf 0x802BB138
    MemoryInline::FlatWriteFloat32((r28 + 220), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r28 + 216));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -13768));
    f3.d = f29.d;
    // inline leaf 0x802BB138 (6 guest instruction(s))
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r2 + -13748));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // end of inlined leaf 0x802BB138
    MemoryInline::FlatWriteFloat32((r28 + 228), f1.d);
}

loc_802B88F8:
{
    r30 = (r30 + 1);
}

loc_802B8900:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(2))) {
        goto loc_802B87DC;
    }
}

loc_802B8904:
{
    r0 = 168;
    addr_psqx_802B8908_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802B8908_loc_0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 108), 0, 76u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 52u, (r1 + 160));
    r0 = 152;
    addr_psqx_802B8914_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802B8914_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 36u, (r1 + 144));
    r0 = 136;
    addr_psqx_802B8920_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_802B8920_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 20u, (r1 + 128));
    r11 = (r1 + 128);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 72u, (r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B8244(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B8244_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B8244 func_802B8244 preserves=true fpr_mask=0x00000000
