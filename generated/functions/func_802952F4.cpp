#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80050AA4(CpuContext* ctx);
extern "C" uint64_t func_80050AA4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802920F0(CpuContext* ctx);
extern "C" uint64_t func_802920F0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802955A8(CpuContext* ctx);
extern "C" uint32_t func_802955A8_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802955A8_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_802955A8_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802952F4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_psqx_80295588_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_10 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r28_addr_6 = 0;
    uint32_t r28_addr_7 = 0;
    uint32_t r28_addr_8 = 0;
    uint32_t r28_addr_9 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r29_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r8_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r21 = ctx->gpr[21];
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

    MKW_GUEST_ENTER(0x802952F4u);
    goto loc_802952F4;

loc_802952F4:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 96);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r24 = r3;
    f31.d = f1.d;
    r23 = r4;
    r22 = r5;
    r21 = r6;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = r24;
    r4 = (r24 + 12);
    f1.d = f31.d;
    r5 = (r21 + 60);
    r6 = r23;
    r7 = (r22 & 65535);
    r9 = MemoryInline::FlatRead8((r21 + 9));
    r8 = (3 - r9);
    r0 = (r9 + -3);
    r0 = (r8 | r0);
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & 1);
    r9 = MemoryInline::FlatRead8((r21 + 22));
    ctx->lr = 0x80295360u;
    if constexpr (KnownRegArgsCpuCall<0x802920F0u>(&func_802920F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[31] = f31;
        const auto regargs_result_802920F0_11EC = func_802920F0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802920F0_11EC);
        r4 = static_cast<uint32_t>(regargs_result_802920F0_11EC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802920F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
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
    r0 = MemoryInline::FlatRead8((r21 + 8));
}

loc_80295368:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(4))) {
        goto loc_80295584;
    }
}

loc_8029536C:
{
    r24 = 0;
    r23 = 0;
    r4 = 0;
    r0 = (r0 * 264);
    r3 = 0x806B0000u;
    r28 = (r3 + -9016);
    r28_addr_1 = (r28 + r0);
    MemoryInline::FlatWrite16(r28_addr_1, static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead8((r13 + -17095));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80295394:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80295584;
    }
}

loc_80295398:
{
    r22 = 0;
    r3 = 0x806B0000u;
    r27 = (r3 + -7960);
    r3 = 0x806B0000u;
    r29 = (r3 + -4864);
    r3 = 0x806B0000u;
    r30 = (r3 + -7224);
    r31 = 1;
    goto loc_80295550;
}

loc_802953BC:
{
    r0 = MemoryInline::FlatRead8(r27);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r29_addr_2 = (r29 + r0);
    r26 = MemoryInline::FlatRead32(r29_addr_2);
    r0 = (r3 * 12);
    r3 = (r30 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r21 + 60));
    f2.d = MemoryInline::FlatReadFloat32((r21 + 68));
    f3.d = MemoryInline::FlatReadFloat32(r3);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 8));
    ctx->lr = 0x802953E8u;
    if constexpr (KnownRegArgsCpuCall<0x80050AA4u>(&func_80050AA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_80050AA4_1F58 = func_80050AA4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80050AA4_1F58);
        r4 = static_cast<uint32_t>(regargs_result_80050AA4_1F58 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80050AA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r4 = MemoryInline::FlatRead32((r21 + 88));
    r0 = (r3 & 65535);
    r0 = (r0 - r4);
    r25 = (r0 & 65535);
    r0 = (r24 & 255);
    r6 = (r0 * 24);
    r0 = MemoryInline::FlatRead8((r21 + 8));
    r0 = (r0 * 264);
    r3 = (r6 + r0);
    r28_addr_3 = (r28 + r3);
    MemoryInline::FlatWrite16(r28_addr_3, static_cast<uint16_t>(r31));
    r0 = MemoryInline::FlatRead16(r26);
    r0 = (r0 & 8);
}

loc_8029541C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80295430;
    }
}

loc_80295420:
{
    r28_addr_4 = (r28 + r3);
    r0 = MemoryInline::FlatRead16(r28_addr_4);
    r0 = (r0 | 2);
    r28_addr_5 = (r28 + r3);
    MemoryInline::FlatWrite16(r28_addr_5, static_cast<uint16_t>(r0));
    r23 = 1;
}

loc_80295430:
{
    r5 = MemoryInline::FlatRead8((r26 + 3));
    r0 = MemoryInline::FlatRead8((r21 + 8));
    r4 = (r0 * 264);
    r0 = (r6 + r4);
    r3 = (r28 + r0);
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r3 + 4), r25);
    r0 = r24;
    r24 = (r24 + 1);
    r0 = (r0 & 255);
    r3 = (r0 * 24);
    r0 = (r28 + r4);
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    r4 = (r26 + 44);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_80295474:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80295534;
    }
}

loc_80295478:
{
    r23 = 0;
    r0 = (r24 & 255);
}

loc_80295484:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80295534;
    }
}

loc_80295488:
{
    r3 = (r1 + 24);
    ctx->lr = 0x80295490u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802955A8u) && KnownTranslatedCpuCall<0x802955A8u>::kAvailable && !KnownTranslatedCpuCall<0x802955A8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802955A8u>()) {
        const auto state_free_result_802955A8_2D0F = func_802955A8_statefree_v0(r1, r3, r31, 0x80295490u);
        r1 = static_cast<uint32_t>(state_free_result_802955A8_2D0F);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[31] = f31;
        InvokeDirectCpu<0x802955A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
    r0 = MemoryInline::FlatRead8((r21 + 8));
    r3 = (r0 * 264);
    r28_addr_7 = (r28 + r3);
    r0 = MemoryInline::FlatRead16(r28_addr_7);
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r0));
    r4 = (r28 + r3);
    r0 = MemoryInline::FlatRead8((r4 + 20));
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r3 = (r1 + 32);
    r4 = (r4 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r21 + 8));
    r0 = (r0 * 264);
    r5 = (r28 + r0);
    r3 = (r24 & 255);
    r0 = (r3 + -1);
    r26 = (r0 * 24);
    r5_addr_2 = (r5 + r26);
    r0 = MemoryInline::FlatRead16(r5_addr_2);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r4 = (r5 + r26);
    r0 = MemoryInline::FlatRead8((r4 + 20));
    MemoryInline::FlatWrite8((r5 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r5 + 4), r0);
    r3 = (r5 + 8);
    r4 = (r4 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4 = MemoryInline::FlatRead16((r1 + 24));
    r0 = MemoryInline::FlatRead8((r21 + 8));
    r0 = (r0 * 264);
    r3 = (r26 + r0);
    r28_addr_8 = (r28 + r3);
    MemoryInline::FlatWrite16(r28_addr_8, static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead8((r1 + 44));
    r3 = (r28 + r3);
    MemoryInline::FlatWrite8((r3 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = (r3 + 8);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_80295534:
{
    r3 = MemoryInline::FlatRead32((r21 + 868));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(21));
    r0 = (r0_rot_3 & 2097151);
    r0 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r21 + 868), r0);
    r27 = (r27 + 1);
    r22 = (r22 + 1);
}

loc_80295550:
{
    r0 = MemoryInline::FlatRead8((r13 + -17095));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8029555C:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(r0))) {
        goto loc_802953BC;
    }
}

loc_80295560:
{
    r6 = 0;
    r0 = MemoryInline::FlatRead8((r21 + 8));
    r5 = (r0 * 264);
    r3 = 0x806B0000u;
    r4 = (r3 + -9016);
    r0 = (r24 & 255);
    r3 = (r0 * 24);
    r0 = (r4 + r5);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_1, static_cast<uint16_t>(r6));
}

loc_80295584:
{
    r0 = 104;
    addr_psqx_80295588_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80295588_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r11 = (r1 + 96);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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

extern "C" void func_802952F4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802952F4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802952F4 func_802952F4 preserves=true fpr_mask=0x00000000
