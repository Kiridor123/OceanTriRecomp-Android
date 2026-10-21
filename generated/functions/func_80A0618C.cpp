#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80272B14(CpuContext* ctx);
extern "C" uint64_t func_80272B14_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802AA7C8(CpuContext* ctx);
extern "C" uint64_t func_802AA7C8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AA8C8(CpuContext* ctx);
extern "C" uint64_t func_802AA8C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_802AA9E0(CpuContext* ctx);
extern "C" uint64_t func_802AA9E0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_80A0618C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_80A064CC_loc_0 = 0;
    uint32_t addr_psqx_80A064D8_loc_0 = 0;
    uint32_t addr_psqx_80A064E4_loc_0 = 0;
    uint32_t addr_psqx_80A064F0_loc_0 = 0;
    uint32_t addr_psqx_80A064FC_loc_0 = 0;
    uint32_t addr_psqx_80A06508_loc_0 = 0;
    uint32_t addr_psqx_80A06514_loc_0 = 0;
    uint32_t addr_psqx_80A06520_loc_0 = 0;
    uint32_t addr_psqx_80A0652C_loc_0 = 0;
    uint32_t addr_psqx_80A06538_loc_0 = 0;
    uint32_t addr_psqx_80A06544_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
    uint32_t stackword19 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
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
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f21 = ctx->fpr[21];
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

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x80A0618Cu);
    goto loc_80A0618C;

loc_80A0618C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -320), 0, 328u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -320), r1);
    r1 = (r1 + -320);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 324u, (r1 + 324), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 304u, (r1 + 304), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 312);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 288u, (r1 + 288), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 296);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 272u, (r1 + 272), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 280);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 256u, (r1 + 256), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 264);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 240u, (r1 + 240), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 248);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 224u, (r1 + 224), f26.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 232);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f25.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f24.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f23.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f22.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f21.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    r11 = (r1 + 144);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r20 = r3;
    r21 = r4;
    r3 = (r1 + 56);
    r19 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat32((r19 + -5452));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80A05DD4 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 56u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 60u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 64u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80A05DD4
    r3 = (r1 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r19 + -5452));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80A05DD4 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 48u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 52u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80A05DD4
    r3 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat32((r19 + -5452));
    f2.d = f1.d;
    r4 = 0x80A20000u;
    f3.d = MemoryInline::FlatReadFloat32((r4 + -5448));
    // inline leaf 0x80A05DD4 (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 8), f3.d);
    // end of inlined leaf 0x80A05DD4
    r3 = (r1 + 20);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = (r1 + 8);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = 0x80A20000u;
    f29.d = MemoryInline::FlatReadFloat32((r3 + -5436));
    r0 = (r21 & 255);
}

loc_80A06264:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80A06274;
    }
}

loc_80A06268:
{
}

loc_80A0626C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80A0627C;
    }
}

loc_80A06270:
{
    goto loc_80A0628C;
}

loc_80A06274:
{
    r22 = 5;
    goto loc_80A06290;
}

loc_80A0627C:
{
    r22 = 6;
    r3 = 0x80A20000u;
    f29.d = MemoryInline::FlatReadFloat32((r3 + -5432));
    goto loc_80A06290;
}

loc_80A0628C:
{
    r22 = 255;
}

loc_80A06290:
{
}

loc_80A06294:
{
    if ((static_cast<uint32_t>(r22) == static_cast<uint32_t>(255))) {
        goto loc_80A064C8;
    }
}

loc_80A06298:
{
    r23 = 0;
    r3 = 0x80A00000u;
    r25 = (r3 + 26220);
    r26 = 17;
    r3 = 0x80A00000u;
    r27 = (r3 + 26280);
    r28 = 1;
    r29 = 0;
    r3 = 65536;
    r30 = (r3 + -1);
    r3 = 0x80A20000u;
    f31.d = MemoryInline::FlatReadFloat64((r3 + -5392));
    r31 = 1127219200;
    r3 = 0x80A20000u;
    f21.d = MemoryInline::FlatReadFloat32((r3 + -5408));
    r3 = 0x80A20000u;
    f22.d = MemoryInline::FlatReadFloat32((r3 + -5420));
    r3 = 0x80A20000u;
    f23.d = MemoryInline::FlatReadFloat32((r3 + -5424));
    r3 = 0x80A20000u;
    f24.d = MemoryInline::FlatReadFloat32((r3 + -5412));
    r3 = 0x80A20000u;
    f25.d = MemoryInline::FlatReadFloat32((r3 + -5428));
    r3 = 0x80A20000u;
    f30.d = MemoryInline::FlatReadFloat32((r3 + -5416));
    r3 = 0x80A20000u;
    f27.d = MemoryInline::FlatReadFloat32((r3 + -5400));
    r19 = -3;
    r3 = 0x80A20000u;
    f26.d = MemoryInline::FlatReadFloat32((r3 + -5404));
    r3 = 0x80A20000u;
    f28.d = MemoryInline::FlatReadFloat32((r3 + -5396));
}

loc_80A06318:
{
    r3 = 16;
    ctx->lr = 0x80A06320u;
    if constexpr (KnownRegArgsCpuCall<0x802AA7C8u>(&func_802AA7C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802AA7C8_29FC = func_802AA7C8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802AA7C8_29FC);
        r4 = static_cast<uint32_t>(regargs_result_802AA7C8_29FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802AA7C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r24 = r3;
}

loc_80A06328:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80A064C8;
    }
}

loc_80A0632C:
{
    r18 = MemoryInline::FlatRead32((r3 + 256));
    MemoryInline::FlatWriteRam32((r3 + 252), r25);
    r3 = r18;
    r4 = 1;
    ctx->lr = 0x80A06340u;
    if constexpr (KnownRegArgsCpuCall<0x802AA9E0u>(&func_802AA9E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_802AA9E0_2E50 = func_802AA9E0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802AA9E0_2E50);
        r4 = static_cast<uint32_t>(regargs_result_802AA9E0_2E50 >> 32);
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
        InvokeDirectCpu<0x802AA9E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_80A06344:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_80A06354;
    }
}

loc_80A06348:
{
    r3 = r24;
    ctx->lr = 0x80A06350u;
    if constexpr (KnownRegArgsCpuCall<0x802AA8C8u>(&func_802AA8C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_802AA8C8_3275 = func_802AA8C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AA8C8_3275);
        r4 = static_cast<uint32_t>(regargs_result_802AA8C8_3275 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
        InvokeDirectCpu<0x802AA8C8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    }
    mkw_gqr0 = ctx->gqr[0];
    goto loc_80A064C8;
}

loc_80A06354:
{
    r3 = r24;
    r4 = 1;
    r5 = 0;
    // inline leaf 0x802AB3F8 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 251u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 9u, (r3 + 10), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB3F8
    r3 = r24;
    r4 = r20;
    r5 = 0;
    // inline leaf 0x802AB270 (3 guest instruction(s))
    MemoryInline::WriteResolved32(guest_range_3, 11u, (r3 + 12), r4);
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r3 + 9), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x802AB270
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r24 + 3), static_cast<uint8_t>(r26));
    MemoryInline::WriteResolved32(guest_range_3, 247u, (r24 + 248), r27);
    r0 = MemoryInline::FlatRead8((r20 + 22));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r24 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r24 + 1), static_cast<uint8_t>(r28));
    MemoryInline::WriteResolved32(guest_range_3, 15u, (r24 + 16), r29);
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r24 + 2), static_cast<uint8_t>(r22));
    MemoryInline::WriteResolved16(guest_range_3, 103u, (r24 + 104), static_cast<uint16_t>(r30));
    r3 = (r24 + 48);
    r4 = (r20 + 60);
    ctx->lr = 0x80A063A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    r4 = r3;
    r3 = (r24 + 24);
    ctx->lr = 0x80A063ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    MemoryInline::FlatWriteRam32((r24 + 36), r29);
    r0 = MemoryInline::FlatRead32((r20 + 88));
    MemoryInline::FlatWriteRam32((r24 + 40), r0);
    MemoryInline::FlatWriteRam32((r24 + 44), r29);
    r0 = MemoryInline::FlatRead16((r20 + 182));
    MemoryInline::FlatWriteRam16((r24 + 88), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r18 + 8), static_cast<uint8_t>(r21));
    MemoryInline::FlatWrite32((r18 + 4), r28);
    r0 = MemoryInline::FlatRead8((r20 + 1411));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80A063D8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80A06420;
    }
}

loc_80A063DC:
{
    r0 = (r0 ^ -2147483648);
    stackword16 = r0;
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    stackword17 = r31;
    MemoryInline::FlatWriteRam32((r1 + 72), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword17), static_cast<uint32_t>(stackword16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = PpcFmulsInline(f22.d, f0.d);
    f0.d = PpcFmulsInline(f23.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f24.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f0.d);
    r0 = fctiwzword0;
    r0 = (r0 & 65535);
    r0 = (0 - r0);
    MemoryInline::FlatWriteRam32((r24 + 36), r0);
    goto loc_80A06460;
}

loc_80A06420:
{
    r0 = (r0 ^ -2147483648);
    stackword18 = r0;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    stackword19 = r31;
    MemoryInline::FlatWriteRam32((r1 + 80), r31);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword19), static_cast<uint32_t>(stackword18));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = PpcFmulsInline(f21.d, f0.d);
    f0.d = PpcFmulsInline(f22.d, f0.d);
    f0.d = PpcFmulsInline(f23.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f24.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f25.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r0 = fctiwzword1;
    r0 = (r0 & 65535);
    r0 = (0 - r0);
    MemoryInline::FlatWriteRam32((r24 + 36), r0);
}

loc_80A06460:
{
    r0 = MemoryInline::FlatRead32((r20 + 88));
    MemoryInline::FlatWriteRam32((r24 + 40), r0);
}

loc_80A0646C:
{
    if ((static_cast<int32_t>(r23) != static_cast<int32_t>(0))) {
        goto loc_80A06478;
    }
}

loc_80A06470:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f26.d);
    goto loc_80A06480;
}

loc_80A06478:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f27.d);
    MemoryInline::FlatWriteRam32((r24 + 16), r19);
}

loc_80A06480:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f29.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f28.d);
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r24 + 40));
    ctx->lr = 0x80A06494u;
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
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    r3 = (r24 + 24);
    r4 = (r1 + 8);
    ctx->lr = 0x80A064A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x809EA800u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r23 = (r23 + 1);
}

loc_80A064A8:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(2))) {
        goto loc_80A06318;
    }
}

loc_80A064AC:
{
    r3 = r20;
    r4 = 43;
    if constexpr (KnownRegArgsCpuCall<0x80272B14u>(&func_80272B14)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80272B14_50A4 = func_80272B14_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80272B14_50A4);
        r4 = static_cast<uint32_t>(regargs_result_80272B14_50A4 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80272B14u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80A064BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80A064C8;
    }
}

loc_80A064C0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r24 + 6), static_cast<uint8_t>(r0));
}

loc_80A064C8:
{
    r0 = 312;
    addr_psqx_80A064CC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80A064CC_loc_0));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 144), 0, 184u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 160u, (r1 + 304));
    r0 = 296;
    addr_psqx_80A064D8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80A064D8_loc_0));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 144u, (r1 + 288));
    r0 = 280;
    addr_psqx_80A064E4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80A064E4_loc_0));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 128u, (r1 + 272));
    r0 = 264;
    addr_psqx_80A064F0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80A064F0_loc_0));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 112u, (r1 + 256));
    r0 = 248;
    addr_psqx_80A064FC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80A064FC_loc_0));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 96u, (r1 + 240));
    r0 = 232;
    addr_psqx_80A06508_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80A06508_loc_0));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 80u, (r1 + 224));
    r0 = 216;
    addr_psqx_80A06514_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80A06514_loc_0));
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 64u, (r1 + 208));
    r0 = 200;
    addr_psqx_80A06520_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80A06520_loc_0));
    f24.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r1 + 192));
    r0 = 184;
    addr_psqx_80A0652C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80A0652C_loc_0));
    f23.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r1 + 176));
    r0 = 168;
    addr_psqx_80A06538_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f22, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80A06538_loc_0));
    f22.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r1 + 160));
    r0 = 152;
    addr_psqx_80A06544_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f21, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_80A06544_loc_0));
    f21.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r1 + 144));
    r11 = (r1 + 144);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    // end of inlined leaf 0x804574B0
    r0 = MemoryInline::ReadResolved32(guest_range_4, 180u, (r1 + 324));
    ctx->lr = r0;
    r1 = (r1 + 320);
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
    ctx->fpr[21] = f21;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFFE03FFF fpr_write=0xFFE03FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80A0618C func_80A0618C preserves=true fpr_mask=0x00000000
