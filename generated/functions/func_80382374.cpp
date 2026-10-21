#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80382100(CpuContext* ctx);
extern "C" uint64_t func_80382100_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803821D4(CpuContext* ctx);
extern "C" uint32_t func_803821D4_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80382374_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t addr_psqx_80382790_loc_0 = 0;
    uint32_t addr_psqx_8038279C_loc_0 = 0;
    uint32_t addr_psqx_803827A8_loc_0 = 0;
    uint32_t addr_psqx_803827B4_loc_0 = 0;
    uint32_t addr_psqx_803827C0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r20 = ctx->gpr[20];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    ctx->fpr[2].d = arg_f2;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80382374u);
    goto loc_80382374;

loc_80382374:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    r11 = (r1 + 96);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r20 = r3;
    r22 = (r3 + 808);
    r21 = 0;
    r26 = 255;
    r27 = 210;
    r28 = 160;
    r29 = 130;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -7008));
    f27.d = MemoryInline::FlatReadFloat32((r2 + -7004));
    f28.d = MemoryInline::FlatReadFloat32((r2 + -7000));
    r30 = 60;
    r31 = 0;
    f29.d = MemoryInline::FlatReadFloat32((r2 + -7552));
    f30.d = MemoryInline::FlatReadFloat32((r2 + -7644));
    r3 = 0x805F0000u;
    r25 = (r3 + -4768);
}

loc_803823F0:
{
    r0 = (r21 & 255);
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r23 = (r23_rot_2 & -4);
    r3 = (r20 + 36);
    r25_addr_2 = (r25 + r23);
    r4 = MemoryInline::FlatRead32(r25_addr_2);
    r5 = 3;
    r6 = (r1 + 16);
    ctx->lr = 0x8038240Cu;
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
    InvokeDirectCpu<0x800E2D38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryInline::FlatRead8((r20 + 484));
    r4 = (r21 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r0 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r5 = (r0 & 3);
    r24 = (r22 + r4);
    r0 = MemoryInline::FlatRead8((r24 + 4));
}

loc_8038242C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_8038243C;
    }
}

loc_80382430:
{
    r3 = r20;
    r6 = (r1 + 16);
    ctx->lr = 0x8038243Cu;
    if constexpr (KnownRegArgsCpuCall<0x80382100u>(&func_80382100)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_80382100_1815 = func_80382100_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80382100_1815);
        r4 = static_cast<uint32_t>(regargs_result_80382100_1815 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80382100u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    }
    mkw_gqr0 = ctx->gqr[0];
}

loc_8038243C:
{
    r0 = MemoryInline::FlatRead8((r24 + 4));
}

loc_80382444:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80382464;
    }
}

loc_80382448:
{
}

loc_8038244C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803824EC;
    }
}

loc_80382450:
{
}

loc_80382454:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803825E0;
    }
}

loc_80382458:
{
}

loc_8038245C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803826B8;
    }
}

loc_80382460:
{
    goto loc_8038273C;
}

loc_80382464:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r26));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r26));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r26));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r26));
    r0 = MemoryInline::FlatRead8((r24 + 44));
}

loc_8038247C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(60))) {
        goto loc_803824A8;
    }
}

loc_80382480:
{
    r3 = r20;
    r4 = (r1 + 12);
    r5 = (r21 & 255);
    r6 = (r1 + 8);
    r7 = 60;
    if constexpr (KnownRegArgsCpuCall<0x803821D4u>(&func_803821D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_803821D4_212A = func_803821D4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803821D4_212A;
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x803821D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead8((r24 + 44));
    r3 = MH3_TickLoad(r3, 2151163032);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r24 + 44), static_cast<uint8_t>(r0));
    goto loc_8038273C;
}

loc_803824A8:
{
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r4 = (r21 & 255);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r5 = (r22 + r0);
    r3 = MemoryInline::FlatRead16((r5 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2151163072);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803824D4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(120))) {
        goto loc_8038273C;
    }
}

loc_803824D8:
{
    r3 = r20;
    r5 = 2;
    r6 = (r1 + 16);
    ctx->lr = 0x803824E8u;
    if constexpr (KnownRegArgsCpuCall<0x80382100u>(&func_80382100)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_80382100_2A97 = func_80382100_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80382100_2A97);
        r4 = static_cast<uint32_t>(regargs_result_80382100_2A97 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80382100u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8038273C;
}

loc_803824EC:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r27));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r29));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r26));
    r0 = MemoryInline::FlatRead8((r24 + 44));
}

loc_80382504:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(180))) {
        goto loc_80382530;
    }
}

loc_80382508:
{
    r3 = r20;
    r4 = (r1 + 12);
    r5 = (r21 & 255);
    r6 = (r1 + 8);
    r7 = 180;
    if constexpr (KnownRegArgsCpuCall<0x803821D4u>(&func_803821D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_803821D4_314E = func_803821D4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803821D4_314E;
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x803821D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead8((r24 + 44));
    r3 = MH3_TickLoad(r3, 2151163168);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r24 + 44), static_cast<uint8_t>(r0));
    goto loc_8038273C;
}

loc_80382530:
{
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r4 = (r22 + r23);
    r3 = MemoryInline::FlatRead8((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f0.d = PpcFmulsInline(f31.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword0;
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r1 + 13));
    f0.d = PpcFmulsInline(f27.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword1;
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r1 + 14));
    f0.d = PpcFmulsInline(f28.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = fctiwzword2;
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    r3 = r20;
    r4 = (r21 & 255);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -7552));
    ctx->lr = 0x803825A8u;
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
    InvokeDirectCpu<0x803822D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = (r21 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r5 = (r22 + r0);
    r3 = MemoryInline::FlatRead16((r5 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2151163316);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803825C8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(300))) {
        goto loc_8038273C;
    }
}

loc_803825CC:
{
    r3 = r20;
    r5 = 1;
    r6 = (r1 + 16);
    ctx->lr = 0x803825DCu;
    if constexpr (KnownRegArgsCpuCall<0x80382100u>(&func_80382100)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_80382100_4122 = func_80382100_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80382100_4122);
        r4 = static_cast<uint32_t>(regargs_result_80382100_4122 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80382100u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8038273C;
}

loc_803825E0:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r28));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r30));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r26));
    r0 = MemoryInline::FlatRead8((r24 + 44));
}

loc_803825F8:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(180))) {
        goto loc_80382624;
    }
}

loc_803825FC:
{
    r3 = r20;
    r4 = (r1 + 12);
    r5 = (r21 & 255);
    r6 = (r1 + 8);
    r7 = 180;
    if constexpr (KnownRegArgsCpuCall<0x803821D4u>(&func_803821D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_803821D4_47D9 = func_803821D4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803821D4_47D9;
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x803821D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead8((r24 + 44));
    r3 = MH3_TickLoad(r3, 2151163412);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r24 + 44), static_cast<uint8_t>(r0));
    goto loc_8038273C;
}

loc_80382624:
{
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r4 = (r22 + r23);
    r3 = MemoryInline::FlatRead8((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f0.d = PpcFmulsInline(f29.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = fctiwzword3;
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r1 + 13));
    f0.d = PpcFmulsInline(f30.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f0.d);
    r0 = fctiwzword4;
    r0 = (r3 + r0);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r3 = r20;
    r4 = (r21 & 255);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -7320));
    ctx->lr = 0x80382680u;
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
    InvokeDirectCpu<0x803822D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r4 = (r21 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r5 = (r22 + r0);
    r3 = MemoryInline::FlatRead16((r5 + 8));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r3 = MH3_TickLoad(r3, 2151163532);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803826A0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(180))) {
        goto loc_8038273C;
    }
}

loc_803826A4:
{
    r3 = r20;
    r5 = 0;
    r6 = (r1 + 16);
    ctx->lr = 0x803826B4u;
    if constexpr (KnownRegArgsCpuCall<0x80382100u>(&func_80382100)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        const auto regargs_result_80382100_5665 = func_80382100_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80382100_5665);
        r4 = static_cast<uint32_t>(regargs_result_80382100_5665 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x80382100u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_8038273C;
}

loc_803826B8:
{
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r31));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r26));
    r0 = MemoryInline::FlatRead8((r24 + 44));
}

loc_803826D0:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(180))) {
        goto loc_803826FC;
    }
}

loc_803826D4:
{
    r3 = r20;
    r4 = (r1 + 12);
    r5 = (r21 & 255);
    r6 = (r1 + 8);
    r7 = 180;
    if constexpr (KnownRegArgsCpuCall<0x803821D4u>(&func_803821D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_803821D4_5D1C = func_803821D4_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_803821D4_5D1C;
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x803821D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = MemoryInline::FlatRead8((r24 + 44));
    r3 = MH3_TickLoad(r3, 2151163628);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r24 + 44), static_cast<uint8_t>(r0));
    goto loc_8038273C;
}

loc_803826FC:
{
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r4 = MemoryInline::FlatRead8((r1 + 12));
    r3 = (r22 + r23);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f0.d);
    r0 = fctiwzword5;
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r3 = r20;
    r4 = (r21 & 255);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -7552));
    ctx->lr = 0x8038273Cu;
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
    InvokeDirectCpu<0x803822D8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
}

loc_8038273C:
{
    r3 = (r20 + 36);
    r25_addr_3 = (r25 + r23);
    r4 = MemoryInline::FlatRead32(r25_addr_3);
    r5 = 3;
    r6 = (r1 + 12);
    ctx->lr = 0x80382750u;
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
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    mkw_gqr0 = ctx->gqr[0];
    r21 = (r21 + 1);
}

loc_80382758:
{
    if ((static_cast<uint32_t>(r21) < static_cast<uint32_t>(4))) {
        goto loc_803823F0;
    }
}

loc_8038275C:
{
    r0 = MemoryInline::FlatRead8((r22 + 7));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(6));
    r5 = (r5_rot_0 & -64);
    r0 = MemoryInline::FlatRead8((r22 + 6));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_0 & -16);
    r3 = MemoryInline::FlatRead8((r22 + 4));
    r0 = MemoryInline::FlatRead8((r22 + 5));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r0 = (r3 | r0);
    r0 = (r4 | r0);
    r0 = (r5 | r0);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r20 + 484), static_cast<uint8_t>(r0));
    r0 = 168;
    addr_psqx_80382790_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80382790_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    r0 = 152;
    addr_psqx_8038279C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_8038279C_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 144));
    r0 = 136;
    addr_psqx_803827A8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803827A8_loc_0));
    f29.d = MemoryInline::FlatReadFloat64((r1 + 128));
    r0 = 120;
    addr_psqx_803827B4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803827B4_loc_0));
    f28.d = MemoryInline::FlatReadFloat64((r1 + 112));
    r0 = 104;
    addr_psqx_803827C0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803827C0_loc_0));
    f27.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r11 = (r1 + 96);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80382374(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80382374_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80382374 func_80382374 preserves=true fpr_mask=0x00000000
