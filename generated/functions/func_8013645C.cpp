#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005076C(CpuContext* ctx);
extern "C" uint32_t func_8005076C_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80135BE8(CpuContext* ctx);
extern "C" uint64_t func_80135BE8_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80135EA8(CpuContext* ctx);
extern "C" uint64_t func_80135EA8_ra38_18e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double);
extern "C" void func_801361CC(CpuContext* ctx);
extern "C" uint64_t func_801361CC_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801362B8(CpuContext* ctx);
extern "C" uint64_t func_801362B8_ra38_30_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);
extern "C" void func_8013A724(CpuContext* ctx);
extern "C" uint32_t func_8013A724_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8013A894(CpuContext* ctx);
extern "C" uint64_t func_8013A894_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803B95EC(CpuContext* ctx);
extern "C" uint64_t func_803B95EC_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_803B99F8(CpuContext* ctx);
extern "C" uint64_t func_803B99F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B9AA4(CpuContext* ctx);
extern "C" uint32_t func_803B9AA4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8013645C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80136978_loc_0 = 0;
    uint32_t addr_psqx_80136984_loc_0 = 0;
    uint32_t addr_psqx_80136990_loc_0 = 0;
    uint32_t addr_psqx_8013699C_loc_0 = 0;
    uint32_t addr_psqx_801369A8_loc_0 = 0;
    uint32_t addr_psqx_801369B4_loc_0 = 0;
    uint32_t addr_psqx_801369C0_loc_0 = 0;
    uint32_t addr_psqx_801369CC_loc_0 = 0;
    uint32_t addr_psqx_801369D8_loc_0 = 0;
    uint32_t addr_psqx_801369E4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t stackword21 = 0;
    uint32_t stackword22 = 0;
    uint32_t stackword23 = 0;
    uint32_t stackword24 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
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
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f22 = ctx->fpr[22];
    PPC_FPR f23 = ctx->fpr[23];
    PPC_FPR f24 = ctx->fpr[24];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    const uint32_t r22_entry = r22;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_8013645C;

loc_8013645C:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -272), 0, 280u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 276u, (r1 + 276), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_3, 256u, (r1 + 256), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 240u, (r1 + 240), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 224u, (r1 + 224), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 208u, (r1 + 208), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 192u, (r1 + 192), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 176u, (r1 + 176), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 160u, (r1 + 160), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 144u, (r1 + 144), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 128u, (r1 + 128), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_3, 112u, (r1 + 112), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    r11 = (r1 + 112);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r25 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r26 = 0;
    r30 = 1;
    r31 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r2 + -28216), 0, 196u, true, false);
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 0u, (r2 + -28216));
    r23 = 1127219200;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 184u);
        if (resolved_pair.valid) {
            f27.d = PpcBitCastToFloatInline(resolved_pair.second);
            f28.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f27.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 188u, (r2 + -28028));
            f28.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 184u, (r2 + -28032));
        }
    }
    f29.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 120u, (r2 + -28096));
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 192u, (r2 + -28024));
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 64u, (r2 + -28152));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 136u);
        if (resolved_pair.valid) {
            f22.d = PpcBitCastToFloatInline(resolved_pair.second);
            f23.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f22.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 140u, (r2 + -28076));
            f23.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 136u, (r2 + -28080));
        }
    }
    f24.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -28208));
    r24 = -1;
}

loc_80136504:
{
    r0 = (r26 & 255);
    r0 = (r0 * 132);
    r3 = (r25 + r0);
    r29 = (r3 + 1160);
    r0 = MemoryInline::FlatRead8((r29 + 7));
}

loc_8013651C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80136968;
    }
}

loc_80136520:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_80136528:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80136538;
    }
}

loc_8013652C:
{
}

loc_80136530:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80136544;
    }
}

loc_80136534:
{
    goto loc_80136968;
}

loc_80136538:
{
    r22 = 2;
    r27 = 3;
    goto loc_8013654C;
}

loc_80136544:
{
    r22 = 1;
    r27 = 0;
}

loc_8013654C:
{
    r3 = r25;
    ctx->lr = 0x80136554u;
    if constexpr (KnownRegArgsCpuCall<0x8013A724u>(&func_8013A724)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013A724_28B3 = func_8013A724_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8013A724_28B3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013A724u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r28 = r3;
}

loc_8013655C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80136968;
    }
}

loc_80136560:
{
    goto loc_80136580;
}

loc_80136564:
{
    r0 = MemoryInline::FlatRead8((r28 + 4));
}

loc_8013656C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r27))) {
        goto loc_8013657C;
    }
}

loc_80136570:
{
    r0 = MemoryInline::FlatRead32((r28 + 8));
}

loc_80136578:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80136590;
    }
}

loc_8013657C:
{
    r28 = (r28 + 24);
}

loc_80136580:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r3 + 65536);
}

loc_8013658C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_80136564;
    }
}

loc_80136590:
{
    r0 = (r3 + 65536);
}

loc_80136598:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(65535))) {
        goto loc_80136968;
    }
}

loc_8013659C:
{
    r3 = r25;
    r4 = (r26 & 255);
    ctx->lr = 0x801365A8u;
    if constexpr (KnownRegArgsCpuCall<0x8013A894u>(&func_8013A894)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013A894_2FDC = func_8013A894_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8013A894_2FDC);
        r4 = static_cast<uint32_t>(regargs_result_8013A894_2FDC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013A894u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r27 = r3;
    r3 = MemoryInline::FlatRead8(r29);
}

loc_801365B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801365D4;
    }
}

loc_801365B8:
{
}

loc_801365BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8013660C;
    }
}

loc_801365C0:
{
}

loc_801365C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_8013663C;
    }
}

loc_801365C8:
{
}

loc_801365CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_80136734;
    }
}

loc_801365D0:
{
    goto loc_8013677C;
}

loc_801365D4:
{
    r3 = r25;
    r4 = r22;
    // inline leaf 0x801357AC (7 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 2102));
    r0 = (r4 & 65535);
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x801357AC
}

loc_801365E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80136600;
    }
}

loc_801365E8:
{
    r3 = MemoryInline::FlatRead8(r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite16((r29 + 10), static_cast<uint16_t>(r31));
    goto loc_8013660C;
}

loc_80136600:
{
    r0 = MemoryInline::FlatRead8((r25 + 481));
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
    goto loc_80136968;
}

loc_8013660C:
{
    r0 = MemoryInline::FlatRead8((r29 + 9));
}

loc_80136614:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80136968;
    }
}

loc_80136618:
{
    r3 = MemoryInline::FlatRead8(r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r3 = r25;
    r4 = r29;
    r5 = (r26 & 255);
    r6 = r28;
    ctx->lr = 0x80136638u;
    if constexpr (KnownRegArgsCpuCall<0x80135EA8u>(&func_80135EA8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[31] = f31;
        const auto regargs_result_80135EA8_3BEB = func_80135EA8_ra38_18e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80135EA8_3BEB);
        r4 = static_cast<uint32_t>(regargs_result_80135EA8_3BEB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
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
        InvokeDirectCpu<0x80135EA8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
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
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f31 = ctx->fpr[31];
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80136968;
}

loc_8013663C:
{
    r3 = MemoryInline::FlatRead16((r29 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 10), static_cast<uint16_t>(r0));
    r3 = (r1 + 20);
    r4 = (r29 + 116);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
}

loc_80136658:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80136678;
    }
}

loc_8013665C:
{
    r0 = MemoryInline::FlatRead32((r27 + 12));
}

loc_80136664:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80136678;
    }
}

loc_80136668:
{
    r3 = r29;
    r4 = r27;
    r5 = (r1 + 20);
    ctx->lr = 0x80136678u;
    if constexpr (KnownRegArgsCpuCall<0x801362B8u>(&func_801362B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_801362B8_4820 = func_801362B8_ra38_30_18_0(ctx, r3, r4, r5, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_801362B8_4820);
        r4 = static_cast<uint32_t>(regargs_result_801362B8_4820 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        InvokeDirectCpu<0x801362B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
}

loc_80136678:
{
    r3 = MemoryInline::FlatRead16((r29 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r29 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80136684:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_801366CC;
    }
}

loc_80136688:
{
    r3 = MemoryInline::FlatRead8(r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 7));
}

loc_8013669C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_801366C0;
    }
}

loc_801366A0:
{
    r3 = r29;
    ctx->lr = 0x801366A8u;
    if constexpr (KnownRegArgsCpuCall<0x801361CCu>(&func_801361CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        const auto regargs_result_801361CC_50BB = func_801361CC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801361CC_50BB);
        r4 = static_cast<uint32_t>(regargs_result_801361CC_50BB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x801361CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
    }
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    MemoryInline::FlatWriteFloat32((r29 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 36));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 40));
    MemoryInline::FlatWriteFloat32((r29 + 28), f0.d);
}

loc_801366C0:
{
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r31));
    MemoryInline::FlatWrite16((r29 + 14), static_cast<uint16_t>(r31));
    goto loc_801366EC;
}

loc_801366CC:
{
    r0 = MemoryInline::FlatRead8((r29 + 7));
}

loc_801366D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801366E4;
    }
}

loc_801366D8:
{
    r3 = r29;
    ctx->lr = 0x801366E0u;
    if constexpr (KnownRegArgsCpuCall<0x801361CCu>(&func_801361CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        const auto regargs_result_801361CC_589B = func_801361CC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801361CC_589B);
        r4 = static_cast<uint32_t>(regargs_result_801361CC_589B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x801361CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
    }
    goto loc_801366EC;
}

loc_801366E4:
{
    r3 = r29;
    ctx->lr = 0x801366ECu;
    if constexpr (KnownRegArgsCpuCall<0x80135BE8u>(&func_80135BE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_80135BE8_5D8F = func_80135BE8_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135BE8_5D8F);
        r4 = static_cast<uint32_t>(regargs_result_80135BE8_5D8F >> 32);
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
        InvokeDirectCpu<0x80135BE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_801366EC:
{
    r3 = (r1 + 20);
    r4 = (r29 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800509F4u>(ctx);
    r3 = r25;
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    r3 = (r29 + 44);
    r4 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8005076Cu>(&func_8005076C)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        const auto regargs_result_8005076C_6474 = func_8005076C_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005076C_6474;
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    } else {
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
        InvokeDirectCpu<0x8005076Cu>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    }
    f0.d = MemoryInline::FlatReadFloat32((r29 + 20));
    MemoryInline::FlatWriteFloat32((r29 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    MemoryInline::FlatWriteFloat32((r29 + 88), f0.d);
    goto loc_80136968;
}

loc_80136734:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
    r6 = 2;
    r0 = MemoryInline::FlatRead8((r25 + 3));
}

loc_80136748:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_80136754;
    }
}

loc_8013674C:
{
    r6 = (r6 | 16);
    goto loc_80136764;
}

loc_80136754:
{
    r0 = MemoryInline::FlatRead8((r29 + 7));
}

loc_8013675C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80136764;
    }
}

loc_80136760:
{
    r6 = (r6 | 4);
}

loc_80136764:
{
    r3 = r25;
    r7 = (r26 & 255);
    r4 = (r7 + 1);
    r5 = (r29 + 128);
    r6 = (r6 & 255);
    ctx->lr = 0x8013677Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B95ECu>(&func_803B95EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_803B95EC_6D6C = func_803B95EC_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_803B95EC_6D6C);
        r4 = static_cast<uint32_t>(regargs_result_803B95EC_6D6C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x803B95ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8013677C:
{
    r3 = r25;
    // inline leaf 0x801359A4 (4 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 460));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 464));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // end of inlined leaf 0x801359A4
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    r3 = MemoryInline::FlatRead16((r29 + 10));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80136798:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(1000))) {
        goto loc_80136810;
    }
}

loc_8013679C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 7));
}

loc_801367AC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80136810;
    }
}

loc_801367B0:
{
    r3 = (r1 + 20);
    r4 = (r29 + 116);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
}

loc_801367C0:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_801367E0;
    }
}

loc_801367C4:
{
    r0 = MemoryInline::FlatRead32((r27 + 12));
}

loc_801367CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801367E0;
    }
}

loc_801367D0:
{
    r3 = r29;
    r4 = r27;
    r5 = (r1 + 20);
    ctx->lr = 0x801367E0u;
    if constexpr (KnownRegArgsCpuCall<0x801362B8u>(&func_801362B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_801362B8_79E6 = func_801362B8_ra38_30_18_0(ctx, r3, r4, r5, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_801362B8_79E6);
        r4 = static_cast<uint32_t>(regargs_result_801362B8_79E6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        InvokeDirectCpu<0x801362B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
}

loc_801367E0:
{
    r3 = (r1 + 20);
    r4 = (r29 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800509F4u>(ctx);
    r3 = (r29 + 44);
    r4 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8005076Cu>(&func_8005076C)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        const auto regargs_result_8005076C_8098 = func_8005076C_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005076C_8098;
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    } else {
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
        InvokeDirectCpu<0x8005076Cu>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    }
    f0.d = MemoryInline::FlatReadFloat32((r29 + 20));
    MemoryInline::FlatWriteFloat32((r29 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    MemoryInline::FlatWriteFloat32((r29 + 88), f0.d);
}

loc_80136810:
{
    r0 = MemoryInline::FlatRead8((r29 + 7));
}

loc_80136818:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80136944;
    }
}

loc_8013681C:
{
    r3 = MemoryInline::FlatRead16((r29 + 12));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80136830:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(300))) {
        goto loc_80136838;
    }
}

loc_80136834:
{
    MemoryInline::FlatWrite16((r29 + 12), static_cast<uint16_t>(r31));
}

loc_80136838:
{
    r3 = MemoryInline::FlatRead16((r29 + 14));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 14), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_8013684C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(420))) {
        goto loc_80136854;
    }
}

loc_80136850:
{
    MemoryInline::FlatWrite16((r29 + 14), static_cast<uint16_t>(r31));
}

loc_80136854:
{
    r3 = (r1 + 20);
    r4 = (r29 + 116);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r3 = r29;
    r4 = r27;
    r5 = (r1 + 20);
    ctx->lr = 0x80136870u;
    if constexpr (KnownRegArgsCpuCall<0x801362B8u>(&func_801362B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        const auto regargs_result_801362B8_8D63 = func_801362B8_ra38_30_18_0(ctx, r3, r4, r5, f4.d, f5.d);
        r3 = static_cast<uint32_t>(regargs_result_801362B8_8D63);
        r4 = static_cast<uint32_t>(regargs_result_801362B8_8D63 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        InvokeDirectCpu<0x801362B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    r3 = r29;
    ctx->lr = 0x80136878u;
    if constexpr (KnownRegArgsCpuCall<0x801361CCu>(&func_801361CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        const auto regargs_result_801361CC_9333 = func_801361CC_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_801361CC_9333);
        r4 = static_cast<uint32_t>(regargs_result_801361CC_9333 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x801361CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f31 = ctx->fpr[31];
    }
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword21 = r0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    stackword22 = r23;
    MemoryInline::FlatWriteRam32((r1 + 32), r23);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword22), static_cast<uint32_t>(stackword21));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f27.d));
    f0.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r3 = fctiwzword0;
    r3 = (r3 & 65535);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800502B0u>(ctx);
    f1 = ctx->fpr[1];
    f25.d = PpcFmulsInline(f29.d, f1.d);
    r0 = MemoryInline::FlatRead16((r29 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword23 = r0;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    stackword24 = r23;
    MemoryInline::FlatWriteRam32((r1 + 48), r23);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword24), static_cast<uint32_t>(stackword23));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f26.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f30.d));
    f0.d = PpcFmulsInline(f28.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f0.d);
    r3 = fctiwzword1;
    r3 = (r3 & 65535);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x800502B0u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = PpcFmulsInline(f22.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f23.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f24.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f0.d);
    r0 = fctiwzword2;
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r0 + r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = (r1 + 20);
    r4 = (r29 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800509F4u>(ctx);
    r3 = (r29 + 44);
    r4 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x8005076Cu>(&func_8005076C)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        const auto regargs_result_8005076C_A246 = func_8005076C_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_8005076C_A246;
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    } else {
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
        InvokeDirectCpu<0x8005076Cu>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
    }
    f0.d = MemoryInline::FlatReadFloat32((r29 + 20));
    MemoryInline::FlatWriteFloat32((r29 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f25.d));
    MemoryInline::FlatWriteFloat32((r29 + 72), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    MemoryInline::FlatWriteFloat32((r29 + 88), f0.d);
}

loc_80136944:
{
    r3 = MemoryInline::FlatRead32((r29 + 128));
}

loc_8013694C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_80136968;
    }
}

loc_80136950:
{
    ctx->lr = 0x80136954u;
    if constexpr (KnownRegArgsCpuCall<0x803B9AA4u>(&func_803B9AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B9AA4_A926 = func_803B9AA4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B9AA4_A926;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B9AA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80136958:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80136968;
    }
}

loc_8013695C:
{
    r3 = MemoryInline::FlatRead32((r29 + 128));
    ctx->lr = 0x80136964u;
    if constexpr (KnownRegArgsCpuCall<0x803B99F8u>(&func_803B99F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        const auto regargs_result_803B99F8_ADA7 = func_803B99F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803B99F8_ADA7);
        r4 = static_cast<uint32_t>(regargs_result_803B99F8_ADA7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->gpr[22] = r22;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x803B99F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r2 = ctx->gpr[2];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r22 = ctx->gpr[22];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    mkw_gqr0 = ctx->gqr[0];
    MemoryInline::FlatWrite32((r29 + 128), r24);
}

loc_80136968:
{
    r26 = (r26 + 1);
}

loc_80136970:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(2))) {
        goto loc_80136504;
    }
}

loc_80136974:
{
    r0 = 264;
    addr_psqx_80136978_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80136978_loc_0));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 112), 0, 168u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 144u, (r1 + 256));
    r0 = 248;
    addr_psqx_80136984_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80136984_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 128u, (r1 + 240));
    r0 = 232;
    addr_psqx_80136990_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80136990_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 112u, (r1 + 224));
    r0 = 216;
    addr_psqx_8013699C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8013699C_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 96u, (r1 + 208));
    r0 = 200;
    addr_psqx_801369A8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801369A8_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 80u, (r1 + 192));
    r0 = 184;
    addr_psqx_801369B4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801369B4_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 64u, (r1 + 176));
    r0 = 168;
    addr_psqx_801369C0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801369C0_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r1 + 160));
    r0 = 152;
    addr_psqx_801369CC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801369CC_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r1 + 144));
    r0 = 136;
    addr_psqx_801369D8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801369D8_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r1 + 128));
    r0 = 120;
    addr_psqx_801369E4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f22, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_801369E4_loc_0));
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r1 + 112));
    r11 = (r1 + 112);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::ReadResolved32(guest_range_4, 164u, (r1 + 276));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[22] = f22;
    ctx->fpr[23] = f23;
    ctx->fpr[24] = f24;
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->gpr[22] = r22_entry;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8013645C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013645C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xFFC0FFFF fpr_write=0xFFC0FFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8013645C func_8013645C preserves=true fpr_mask=0x00000000
