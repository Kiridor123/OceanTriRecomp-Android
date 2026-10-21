#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80040870(CpuContext* ctx);
extern "C" uint64_t func_80040870_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80051178(CpuContext* ctx);
extern "C" uint64_t func_80051178_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_8005BA04(CpuContext* ctx);
extern "C" uint64_t func_8005BA04_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800D2E98(CpuContext* ctx);
extern "C" uint32_t func_800D2E98_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_800D10B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_800D2054_loc_0 = 0;
    uint32_t addr_psqx_800D2060_loc_0 = 0;
    uint32_t addr_psqx_800D206C_loc_0 = 0;
    uint32_t addr_psqx_800D2078_loc_0 = 0;
    uint32_t addr_psqx_800D2084_loc_0 = 0;
    uint32_t addr_psqx_800D2090_loc_0 = 0;
    uint32_t addr_psqx_800D209C_loc_0 = 0;
    uint32_t addr_psqx_800D20A8_loc_0 = 0;
    uint32_t addr_psqx_800D20B4_loc_0 = 0;
    uint32_t addr_psqx_800D20C0_loc_0 = 0;
    uint32_t addr_psqx_800D20CC_loc_0 = 0;
    uint32_t addr_psqx_800D20D8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword10 = 0;
    uint32_t fctiwzword11 = 0;
    uint32_t fctiwzword12 = 0;
    uint32_t fctiwzword13 = 0;
    uint32_t fctiwzword14 = 0;
    uint32_t fctiwzword15 = 0;
    uint32_t fctiwzword16 = 0;
    uint32_t fctiwzword17 = 0;
    uint32_t fctiwzword18 = 0;
    uint32_t fctiwzword19 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword20 = 0;
    uint32_t fctiwzword21 = 0;
    uint32_t fctiwzword22 = 0;
    uint32_t fctiwzword23 = 0;
    uint32_t fctiwzword24 = 0;
    uint32_t fctiwzword25 = 0;
    uint32_t fctiwzword26 = 0;
    uint32_t fctiwzword27 = 0;
    uint32_t fctiwzword28 = 0;
    uint32_t fctiwzword29 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword30 = 0;
    uint32_t fctiwzword31 = 0;
    uint32_t fctiwzword32 = 0;
    uint32_t fctiwzword33 = 0;
    uint32_t fctiwzword34 = 0;
    uint32_t fctiwzword35 = 0;
    uint32_t fctiwzword36 = 0;
    uint32_t fctiwzword37 = 0;
    uint32_t fctiwzword38 = 0;
    uint32_t fctiwzword39 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword40 = 0;
    uint32_t fctiwzword41 = 0;
    uint32_t fctiwzword42 = 0;
    uint32_t fctiwzword43 = 0;
    uint32_t fctiwzword44 = 0;
    uint32_t fctiwzword45 = 0;
    uint32_t fctiwzword46 = 0;
    uint32_t fctiwzword47 = 0;
    uint32_t fctiwzword48 = 0;
    uint32_t fctiwzword49 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    uint32_t fctiwzword8 = 0;
    uint32_t fctiwzword9 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_10 = 0;
    uint32_t r1_psq_tmp_11 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint32_t r1_psq_tmp_6 = 0;
    uint32_t r1_psq_tmp_7 = 0;
    uint32_t r1_psq_tmp_8 = 0;
    uint32_t r1_psq_tmp_9 = 0;
    uint32_t r24_addr_0 = 0;
    uint32_t r24_addr_1 = 0;
    uint32_t r24_addr_2 = 0;
    uint32_t r24_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;
    uint8_t mkw_fifo_burst_0[16];
    uint8_t mkw_fifo_burst_1[16];
    uint8_t mkw_fifo_burst_2[16];
    uint8_t mkw_fifo_burst_3[16];
    uint8_t mkw_fifo_burst_4[16];
    uint8_t mkw_fifo_burst_5[16];
    uint8_t mkw_fifo_burst_6[16];
    uint8_t mkw_fifo_burst_7[16];
    uint8_t mkw_fifo_burst_8[16];
    uint8_t mkw_fifo_burst_9[16];
    uint8_t mkw_fifo_burst_10[16];
    uint8_t mkw_fifo_burst_11[16];
    uint8_t mkw_fifo_burst_12[16];
    uint8_t mkw_fifo_burst_13[16];
    uint8_t mkw_fifo_burst_14[16];
    uint8_t mkw_fifo_burst_15[16];

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f20 = ctx->fpr[20];
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
    uint32_t cr = ctx->cr;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    MKW_GUEST_ENTER(0x800D10B0u);
    goto loc_800D10B0;

loc_800D10B0:
{
    guest_range_4 = MemoryHw::ResolveRangeHost((r1 + -720), 0, 728u, false, true);
    MemoryHw::WriteResolved32(guest_range_4, 0u, (r1 + -720), r1);
    r1 = (r1 + -720);
    r0 = ctx->lr;
    MemoryHw::WriteResolved32(guest_range_4, 724u, (r1 + 724), r0);
    MemoryHw::WriteResolvedFloat64(guest_range_4, 704u, (r1 + 704), f31.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 712);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryHw::WriteResolvedFloat64(guest_range_4, 688u, (r1 + 688), f30.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 696);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryHw::WriteResolvedFloat64(guest_range_4, 672u, (r1 + 672), f29.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 680);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryHw::WriteResolvedFloat64(guest_range_4, 656u, (r1 + 656), f28.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 664);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryHw::WriteResolvedFloat64(guest_range_4, 640u, (r1 + 640), f27.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 648);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryHw::WriteResolvedFloat64(guest_range_4, 624u, (r1 + 624), f26.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_5 = (r1 + 632);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_5, PPC_PsFromScalarInline(f26.d));
    MemoryHw::WriteResolvedFloat64(guest_range_4, 608u, (r1 + 608), f25.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_6 = (r1 + 616);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_6, PPC_PsFromScalarInline(f25.d));
    MemoryHw::WriteResolvedFloat64(guest_range_4, 592u, (r1 + 592), f24.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_7 = (r1 + 600);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_7, PPC_PsFromScalarInline(f24.d));
    MemoryHw::WriteResolvedFloat64(guest_range_4, 576u, (r1 + 576), f23.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_8 = (r1 + 584);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_8, PPC_PsFromScalarInline(f23.d));
    MemoryHw::WriteResolvedFloat64(guest_range_4, 560u, (r1 + 560), f22.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_9 = (r1 + 568);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_9, PPC_PsFromScalarInline(f22.d));
    MemoryHw::WriteResolvedFloat64(guest_range_4, 544u, (r1 + 544), f21.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_10 = (r1 + 552);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_10, PPC_PsFromScalarInline(f21.d));
    MemoryHw::WriteResolvedFloat64(guest_range_4, 528u, (r1 + 528), f20.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r1_psq_tmp_11 = (r1 + 536);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_11, PPC_PsFromScalarInline(f20.d));
    r11 = (r1 + 528);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryHw::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r0 = 1127219200;
    MemoryHw::WriteResolved32(guest_range_4, 200u, (r1 + 200), r0);
    r0 = 1127219200;
    MemoryHw::WriteResolved32(guest_range_4, 208u, (r1 + 208), r0);
    r24 = 0x80690000u;
    r26 = (r24 + 30624);
    r3 = (r1 + 40);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 52);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 64);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 76);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryHw::FlatRead8((r24 + 30624));
}

loc_800D1164:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D2050;
    }
}

loc_800D1168:
{
    r0 = MemoryHw::FlatRead8((r26 + 166));
}

loc_800D1170:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_800D1190;
    }
}

loc_800D1174:
{
    // inline leaf 0x800D0744 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryHw::FlatRead8((r3 + 2151));
    // end of inlined leaf 0x800D0744
    r0 = (r3 & 255);
}

loc_800D1180:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D1190;
    }
}

loc_800D1184:
{
    r0 = 0;
    MemoryHw::FlatWriteRam8(r26, static_cast<uint8_t>(r0));
    goto loc_800D2050;
}

loc_800D1190:
{
    ctx->lr = 0x800D1194u;
    if constexpr (KnownRegArgsCpuCall<0x80040870u>(&func_80040870)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->cr = cr;
        const auto regargs_result_80040870_30BA = func_80040870_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80040870_30BA);
        r4 = static_cast<uint32_t>(regargs_result_80040870_30BA >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->cr = cr;
        InvokeDirectCpu<0x80040870u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        cr = ctx->cr;
    }
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryHw::FlatRead8((r3 + 5));
}

loc_800D11A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D11AC;
    }
}

loc_800D11A8:
{
    ctx->lr = 0x800D11ACu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x800D09E4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
}

loc_800D11AC:
{
    ctx->lr = 0x800D11B0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x8005AF80u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x800D11C4u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B7970u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    ctx->lr = 0x800D11C8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8FA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 1;
    r4 = 4;
    r5 = 5;
    r6 = 0;
    ctx->lr = 0x800D11DCu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BA550u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 1;
    ctx->lr = 0x800D11E4u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BA5A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = (r1 + 136);
    f1.d = MemoryHw::FlatReadFloat32((r2 + -30528));
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f2.d = MemoryHw::FlatReadFloat32((r4 + 8));
    f3.d = f1.d;
    f4.d = MemoryHw::FlatReadFloat32((r4 + 4));
    f5.d = f1.d;
    f6.d = MemoryHw::FlatReadFloat32((r2 + -30520));
    // inline leaf 0x804C7110 (38 guest instruction(s))
    f11.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f8.d = MemoryHw::FlatReadFloat32((r2 + -2048));
    f10.d = MemoryHw::FlatReadFloat32((r2 + -2056));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f9.d = MemoryHw::FlatReadFloat32((r2 + -2052));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f10.d / f11.d));
    f5.d = MemoryHw::FlatReadFloat32((r2 + -2044));
    guest_range_2 = MemoryHw::ResolveRangeHost(r3, 0, 64u, false, true);
    if (!MemoryHw::WriteResolvedPair32(guest_range_2, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryHw::WriteResolvedFloat32(guest_range_2, 4u, (r3 + 4), f8.d);
        MemoryHw::WriteResolvedFloat32(guest_range_2, 8u, (r3 + 8), f8.d);
    }
    MemoryHw::WriteResolvedFloat32(guest_range_2, 16u, (r3 + 16), f8.d);
    MemoryHw::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 24), f8.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f10.d / f7.d));
    if (!MemoryHw::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryHw::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 32), f8.d);
        MemoryHw::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 36), f8.d);
    }
    if (!MemoryHw::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f8.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f8.d))))) {
        MemoryHw::WriteResolvedFloat32(guest_range_2, 48u, (r3 + 48), f8.d);
        MemoryHw::WriteResolvedFloat32(guest_range_2, 52u, (r3 + 52), f8.d);
    }
    MemoryHw::WriteResolvedFloat32(guest_range_2, 56u, (r3 + 56), f8.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f10.d / f0.d));
    MemoryHw::WriteResolvedFloat32(guest_range_2, 60u, (r3 + 60), f10.d);
    f0.d = (-(f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f6.d = PpcFmulsInline(f9.d, f12.d);
    f0.d = PpcFmulsInline(f0.d, f7.d);
    f2.d = (-(f3.d));
    MemoryHw::WriteResolvedFloat32(guest_range_2, 0u, r3, f6.d);
    f3.d = PpcFmulsInline(f9.d, f11.d);
    f1.d = (-(f1.d));
    MemoryHw::WriteResolvedFloat32(guest_range_2, 44u, (r3 + 44), f0.d);
    f4.d = PpcFmulsInline(f12.d, f2.d);
    MemoryHw::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 20), f3.d);
    f2.d = PpcFmulsInline(f11.d, f1.d);
    f1.d = PpcFmulsInline(f5.d, f7.d);
    MemoryHw::WriteResolvedFloat32(guest_range_2, 12u, (r3 + 12), f4.d);
    MemoryHw::WriteResolvedFloat32(guest_range_2, 28u, (r3 + 28), f2.d);
    MemoryHw::WriteResolvedFloat32(guest_range_2, 40u, (r3 + 40), f1.d);
    // end of inlined leaf 0x804C7110
    r3 = (r1 + 136);
    r4 = 1;
    ctx->lr = 0x800D1218u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BAA90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = (r1 + 88);
    // inline leaf 0x804C6290 (11 guest instruction(s))
    f0.d = MemoryHw::FlatReadFloat32((r2 + -2084));
    f1.d = MemoryHw::FlatReadFloat32((r2 + -2088));
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r3_psq_tmp_1 = (r3 + 8);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_1, PPC_PsFromScalarInline(f0.d));
    PpcSetPairedFprInline(f2, PPC_PsMerge10Inline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f0.d)));
    PpcSetPairedFprInline(f1, PPC_PsMerge01Inline(PPC_PsFromScalarInline(f0.d), PPC_PsFromScalarInline(f1.d)));
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r3_psq_tmp_2 = (r3 + 24);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_2, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r3_psq_tmp_3 = (r3 + 32);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_3, PPC_PsFromScalarInline(f0.d));
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r3_psq_tmp_4 = (r3 + 16);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_4, f1.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r3, f2.d);
    // psq_store w=0 quant=0 (using MemoryHw::PPC_PsqSt)
    r3_psq_tmp_5 = (r3 + 40);
    MemoryHw::PPC_PsqStStackInline<0u, 0u>(ctx, r3_psq_tmp_5, f2.d);
    // end of inlined leaf 0x804C6290
    r3 = (r1 + 88);
    r4 = 0;
    ctx->lr = 0x800D122Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BAB90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 0;
    ctx->lr = 0x800D1234u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BACB0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 0;
    ctx->lr = 0x800D123Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B71E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 1;
    r4 = 7;
    r5 = 0;
    ctx->lr = 0x800D124Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BA600u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 1;
    ctx->lr = 0x800D1254u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B6400u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 0;
    r4 = 1;
    r5 = 4;
    r6 = 60;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x800D2130u>(ctx);
    r3 = 1;
    ctx->lr = 0x800D1270u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BA080u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 0;
    ctx->lr = 0x800D1278u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9920u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x800D1284u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B99E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 0;
    r4 = 0;
    r5 = 0;
    r6 = 4;
    ctx->lr = 0x800D1298u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9F20u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 1;
    ctx->lr = 0x800D12A0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8500u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 4;
    r4 = 0;
    r5 = 0;
    r6 = 1;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->lr = 0x800D12C0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8530u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    ctx->lr = 0x800D12C4u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5AD0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 9;
    r4 = 1;
    ctx->lr = 0x800D12D0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B54C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 11;
    r4 = 1;
    ctx->lr = 0x800D12DCu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B54C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 13;
    r4 = 1;
    ctx->lr = 0x800D12E8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B54C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 0;
    r4 = 9;
    r5 = 0;
    r6 = 3;
    r7 = 0;
    ctx->lr = 0x800D1300u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5B10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 0;
    r4 = 11;
    r5 = 1;
    r6 = 5;
    r7 = 0;
    ctx->lr = 0x800D1318u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5B10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 0;
    r4 = 13;
    r5 = 1;
    r6 = 4;
    r7 = 0;
    ctx->lr = 0x800D1330u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B5B10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    f0.d = MemoryHw::FlatReadFloat32((r2 + -30516));
    MemoryHw::FlatWriteRamFloat32((r1 + 16), f0.d);
    f0.d = MemoryHw::FlatReadFloat32((r2 + -30512));
    MemoryHw::FlatWriteRamFloat32((r1 + 20), f0.d);
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryHw::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80040424
}

loc_800D1348:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800D1360;
    }
}

loc_800D134C:
{
    f0.d = MemoryHw::FlatReadFloat32((r2 + -30528));
    MemoryHw::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryHw::FlatWriteRamFloat32((r1 + 28), f0.d);
    MemoryHw::FlatWriteRamFloat32((r1 + 24), f0.d);
    goto loc_800D1374;
}

loc_800D1360:
{
    f0.d = MemoryHw::FlatReadFloat32((r2 + -30508));
    MemoryHw::FlatWriteRamFloat32((r1 + 24), f0.d);
    f0.d = MemoryHw::FlatReadFloat32((r2 + -30528));
    MemoryHw::FlatWriteRamFloat32((r1 + 32), f0.d);
    MemoryHw::FlatWriteRamFloat32((r1 + 28), f0.d);
}

loc_800D1374:
{
    r0 = MemoryHw::FlatRead8((r26 + 166));
}

loc_800D137C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_800D13B4;
    }
}

loc_800D1380:
{
    r0 = MemoryHw::FlatRead16((r26 + 256));
    f1.d = MemoryHw::FlatReadFloat64((r2 + -30448));
    MemoryHw::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 200));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryHw::FlatRead16((r26 + 258));
    MemoryHw::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 208));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = (r26 + 220);
    r4 = 0;
    ctx->lr = 0x800D13B0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[20] = f20;
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
    ctx->cr = cr;
    ctx->fpr[2].d = PPC_PsToScalarInline(ctx->fpr[2].d);
    InvokeDirectCpu<0x804B8DA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800D1430;
}

loc_800D13B4:
{
    r3 = 4550;
    r4 = 0;
    ctx->lr = 0x800D13C0u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802E05B4_CC3B = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_CC3B);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_CC3B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
}

loc_800D13C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D1400;
    }
}

loc_800D13C8:
{
    f27.d = MemoryHw::FlatReadFloat32((r2 + -30504));
    f26.d = f27.d;
    r3 = MemoryHw::FlatRead8((r3 + 18));
    r3 = (r3 & 65535);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x800D13E4u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[20] = f20;
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
    ctx->cr = cr;
    ctx->fpr[2].d = PPC_PsToScalarInline(ctx->fpr[2].d);
    InvokeDirectCpu<0x80054CD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryHw::FlatRead32((r1 + 8));
    r4 = 0;
    ctx->lr = 0x800D13F0u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8E30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    r3 = MemoryHw::FlatRead32((r1 + 12));
    r4 = 0;
    ctx->lr = 0x800D13FCu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8DA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
    goto loc_800D1C8C;
}

loc_800D1400:
{
    r0 = MemoryHw::FlatRead16((r26 + 368));
    f1.d = MemoryHw::FlatReadFloat64((r2 + -30448));
    MemoryHw::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 200));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryHw::FlatRead16((r26 + 370));
    MemoryHw::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 208));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = (r26 + 332);
    r4 = 0;
    ctx->lr = 0x800D1430u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[20] = f20;
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
    ctx->cr = cr;
    ctx->fpr[2].d = PPC_PsToScalarInline(ctx->fpr[2].d);
    InvokeDirectCpu<0x804B8DA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    f20 = ctx->fpr[20];
    f21 = ctx->fpr[21];
    f22 = ctx->fpr[22];
    f23 = ctx->fpr[23];
    f24 = ctx->fpr[24];
    f25 = ctx->fpr[25];
    f26 = ctx->fpr[26];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_800D1430:
{
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x800D1440u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    guest_range_5 = MemoryHw::ResolveRangeHost((r1 + 16), 0, 16u, true, false);
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 8u, (r1 + 24));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    guest_range_6 = MemoryHw::ResolveRangeHost((r1 + 216), 0, 64u, false, true);
    MemoryHw::WriteResolvedFloat64(guest_range_6, 0u, (r1 + 216), f0.d);
    r3 = fctiwzword0;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 12u, (r1 + 28));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_6, 8u, (r1 + 224), f0.d);
    r4 = fctiwzword1;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x800D210C
    guest_range_1 = MemoryHw::ResolveRangeHost((r2 + -30528), 0, 96u, true, false);
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30528));
    f2.d = f1.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800D20FC
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 8u, (r1 + 24));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 0u, (r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_6, 16u, (r1 + 232), f0.d);
    r3 = fctiwzword2;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 12u, (r1 + 28));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_6, 24u, (r1 + 240), f0.d);
    r4 = fctiwzword3;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x800D210C
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -30520));
    f2.d = MemoryHw::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30528));
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800D20FC
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 8u, (r1 + 24));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 0u, (r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_6, 32u, (r1 + 248), f0.d);
    r3 = fctiwzword4;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 12u, (r1 + 28));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 4u, (r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_6, 40u, (r1 + 256), f0.d);
    r4 = fctiwzword5;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x800D210C
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_1, 8u, (r2 + -30520));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -30500));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f27.d));
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800D20FC
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 8u, (r1 + 24));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword6 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_6, 48u, (r1 + 264), f0.d);
    r3 = fctiwzword6;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 12u, (r1 + 28));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_5, 4u, (r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword7 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_6, 56u, (r1 + 272), f0.d);
    r4 = fctiwzword7;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x800D210C
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30528));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_1, 28u, (r2 + -30500));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f27.d));
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800D20FC
    // inline leaf 0x800D20F8 (1 guest instruction(s))
    // end of inlined leaf 0x800D20F8
    r3 = MemoryHw::FlatRead8((r26 + 166));
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_800D157C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_800D1C5C;
    }
}

loc_800D1580:
{
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_1, 32u, (r2 + -30496));
    MemoryHw::FlatWriteRamFloat32((r1 + 16), f1.d);
    f2.d = MemoryHw::ReadResolvedFloat32(guest_range_1, 36u, (r2 + -30492));
    MemoryHw::FlatWriteRamFloat32((r1 + 20), f2.d);
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_1, 40u, (r2 + -30488));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_1, 44u, (r2 + -30484));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryHw::FlatWriteRamFloat32((r1 + 24), f0.d);
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_1, 16u, (r2 + -30512));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryHw::FlatWriteRamFloat32((r1 + 28), f0.d);
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_1, 0u, (r2 + -30528));
    MemoryHw::FlatWriteRamFloat32((r1 + 32), f0.d);
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryHw::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80040424
}

loc_800D15C4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800D15D8;
    }
}

loc_800D15C8:
{
    f1.d = MemoryHw::FlatReadFloat32((r1 + 24));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_1, 48u, (r2 + -30480));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryHw::FlatWriteRamFloat32((r1 + 24), f0.d);
}

loc_800D15D8:
{
    f28.d = MemoryHw::FlatReadFloat32((r1 + 24));
    f31.d = MemoryHw::ReadResolvedFloat32(guest_range_1, 52u, (r2 + -30476));
    r25 = 0x80590000u;
    r24 = (r25 + 23240);
    r0 = MemoryHw::FlatRead16((r24 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryHw::ReadResolvedFloat64(guest_range_1, 88u, (r2 + -30440));
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 200));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryHw::FlatRead16((r24 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 208));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f20.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f26.d));
    f21.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f27.d));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f26.d));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f27.d));
    r3 = 3;
    r4 = 2;
    r5 = 2;
    r6 = 0;
    ctx->lr = 0x800D1648u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BA550u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x800D1658u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    f0.d = f28.d;
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword8 = PPC_FprLowWordInline(f0.d);
    guest_range_7 = MemoryHw::ResolveRangeHost((r1 + 216), 0, 64u, false, true);
    MemoryHw::WriteResolvedFloat64(guest_range_7, 56u, (r1 + 272), f0.d);
    r3 = fctiwzword8;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    guest_range_8 = MemoryHw::ResolveRangeHost((r1 + 16), 0, 16u, true, false);
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_8, 12u, (r1 + 28));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword9 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_7, 48u, (r1 + 264), f0.d);
    r4 = fctiwzword9;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800D2118
    r3 = MemoryHw::FlatRead32((r13 + -31416));
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x800D210C
    f1.d = f20.d;
    f2.d = f21.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800D20FC
    f1.d = f28.d;
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_8, 0u, (r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword10 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_7, 40u, (r1 + 256), f0.d);
    r3 = fctiwzword10;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_8, 12u, (r1 + 28));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword11 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_7, 32u, (r1 + 248), f0.d);
    r4 = fctiwzword11;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800D2118
    r3 = MemoryHw::FlatRead32((r13 + -31416));
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x800D210C
    f1.d = f22.d;
    f2.d = f21.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800D20FC
    f1.d = f28.d;
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_8, 0u, (r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword12 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_7, 24u, (r1 + 240), f0.d);
    r3 = fctiwzword12;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_8, 12u, (r1 + 28));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_8, 4u, (r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword13 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_7, 16u, (r1 + 232), f0.d);
    r4 = fctiwzword13;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800D2118
    r3 = MemoryHw::FlatRead32((r13 + -31416));
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x800D210C
    f1.d = f22.d;
    f2.d = f23.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800D20FC
    f0.d = f28.d;
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword14 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_7, 8u, (r1 + 224), f0.d);
    r3 = fctiwzword14;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_8, 12u, (r1 + 28));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_8, 4u, (r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword15 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_7, 0u, (r1 + 216), f0.d);
    r4 = fctiwzword15;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    GX_HLE_FIFO_Write16(static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800D2118
    r3 = MemoryHw::FlatRead32((r13 + -31416));
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    // end of inlined leaf 0x800D210C
    f1.d = f20.d;
    f2.d = f23.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f1.d));
    GX_HLE_FIFO_WriteFloat(static_cast<float>(f2.d));
    // end of inlined leaf 0x800D20FC
    // inline leaf 0x800D20F8 (1 guest instruction(s))
    // end of inlined leaf 0x800D20F8
    r3 = 1;
    r4 = 4;
    r5 = 5;
    r6 = 0;
    ctx->lr = 0x800D1790u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804BA550u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    f3.d = MemoryHw::FlatReadFloat32((r2 + -30472));
    MemoryHw::FlatWriteRamFloat32((r1 + 16), f3.d);
    f2.d = MemoryHw::FlatReadFloat32((r2 + -30492));
    MemoryHw::FlatWriteRamFloat32((r1 + 20), f2.d);
    f0.d = MemoryHw::FlatReadFloat32((r2 + -30468));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f28.d - f0.d));
    MemoryHw::FlatWriteRamFloat32((r1 + 24), f0.d);
    r0 = MemoryHw::FlatRead16((r25 + 23240));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryHw::FlatReadFloat64((r2 + -30440));
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 200));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryHw::FlatRead16((r24 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 208));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f26.d));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f27.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f26.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f27.d));
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x800D1800u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    f0.d = MemoryHw::FlatReadFloat32((r1 + 24));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword16 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 280), f0.d);
    r3 = fctiwzword16;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 28));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword17 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 288), f0.d);
    r4 = fctiwzword17;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_0[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_0[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f25.d;
    f2.d = f24.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_0[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_0[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_0[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_0[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_0[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_0, 16u);
    // end of inlined leaf 0x800D20FC
    f1.d = MemoryHw::FlatReadFloat32((r1 + 24));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword18 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 296), f0.d);
    r3 = fctiwzword18;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 28));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword19 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 304), f0.d);
    r4 = fctiwzword19;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_1[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_1[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_1[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f23.d;
    f2.d = f24.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_1[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_1[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_1[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_1[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_1[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_1, 16u);
    // end of inlined leaf 0x800D20FC
    f1.d = MemoryHw::FlatReadFloat32((r1 + 24));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword20 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 312), f0.d);
    r3 = fctiwzword20;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryHw::FlatReadFloat32((r1 + 28));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword21 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 320), f0.d);
    r4 = fctiwzword21;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_2[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_2[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_2[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f23.d;
    f2.d = f22.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_2[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_2[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_2[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_2[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_2[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_2, 16u);
    // end of inlined leaf 0x800D20FC
    f0.d = MemoryHw::FlatReadFloat32((r1 + 24));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword22 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 328), f0.d);
    r3 = fctiwzword22;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryHw::FlatReadFloat32((r1 + 28));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword23 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 336), f0.d);
    r4 = fctiwzword23;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_3[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_3[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_3[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_3[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_3[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f25.d;
    f2.d = f22.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_3[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_3[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_3[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_3[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_3[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_3[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_3[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_3, 16u);
    // end of inlined leaf 0x800D20FC
    // inline leaf 0x800D20F8 (1 guest instruction(s))
    // end of inlined leaf 0x800D20F8
    f3.d = MemoryHw::FlatReadFloat32((r2 + -30472));
    MemoryHw::FlatWriteRamFloat32((r1 + 16), f3.d);
    f2.d = MemoryHw::FlatReadFloat32((r2 + -30492));
    MemoryHw::FlatWriteRamFloat32((r1 + 20), f2.d);
    f0.d = MemoryHw::FlatReadFloat32((r2 + -30496));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f28.d));
    f0.d = MemoryHw::FlatReadFloat32((r2 + -30468));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryHw::FlatWriteRamFloat32((r1 + 24), f0.d);
    r0 = MemoryHw::FlatRead16((r24 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryHw::FlatReadFloat64((r2 + -30440));
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 200));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryHw::FlatRead16((r24 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 208));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f26.d));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f27.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f26.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f27.d));
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x800D199Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    f0.d = MemoryHw::FlatReadFloat32((r1 + 24));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword24 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 344), f0.d);
    r3 = fctiwzword24;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 28));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword25 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 352), f0.d);
    r4 = fctiwzword25;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_4[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_4[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_4[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_4[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_4[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_4[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_4[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_4[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f25.d;
    f2.d = f24.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_4[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_4[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_4[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_4[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_4[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_4[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_4[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_4[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_4, 16u);
    // end of inlined leaf 0x800D20FC
    f1.d = MemoryHw::FlatReadFloat32((r1 + 24));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword26 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 360), f0.d);
    r3 = fctiwzword26;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 28));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword27 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 368), f0.d);
    r4 = fctiwzword27;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_5[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_5[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_5[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_5[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_5[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_5[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_5[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_5[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f23.d;
    f2.d = f24.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_5[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_5[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_5[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_5[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_5[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_5[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_5[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_5[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_5, 16u);
    // end of inlined leaf 0x800D20FC
    f1.d = MemoryHw::FlatReadFloat32((r1 + 24));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword28 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 376), f0.d);
    r3 = fctiwzword28;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryHw::FlatReadFloat32((r1 + 28));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword29 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 384), f0.d);
    r4 = fctiwzword29;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_6[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_6[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_6[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_6[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_6[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_6[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_6[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_6[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f23.d;
    f2.d = f22.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_6[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_6[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_6[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_6[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_6[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_6[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_6[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_6[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_6, 16u);
    // end of inlined leaf 0x800D20FC
    f0.d = MemoryHw::FlatReadFloat32((r1 + 24));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword30 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 392), f0.d);
    r3 = fctiwzword30;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryHw::FlatReadFloat32((r1 + 28));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword31 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 400), f0.d);
    r4 = fctiwzword31;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_7[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_7[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_7[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_7[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_7[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_7[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_7[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_7[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f25.d;
    f2.d = f22.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_7[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_7[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_7[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_7[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_7[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_7[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_7[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_7[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_7, 16u);
    // end of inlined leaf 0x800D20FC
    // inline leaf 0x800D20F8 (1 guest instruction(s))
    // end of inlined leaf 0x800D20F8
    f3.d = MemoryHw::FlatReadFloat32((r2 + -30472));
    MemoryHw::FlatWriteRamFloat32((r1 + 16), f3.d);
    f2.d = MemoryHw::FlatReadFloat32((r2 + -30492));
    MemoryHw::FlatWriteRamFloat32((r1 + 20), f2.d);
    f0.d = MemoryHw::FlatReadFloat32((r2 + -30464));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f28.d));
    f0.d = MemoryHw::FlatReadFloat32((r2 + -30468));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryHw::FlatWriteRamFloat32((r1 + 24), f0.d);
    r0 = MemoryHw::FlatRead16((r24 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f1.d = MemoryHw::FlatReadFloat64((r2 + -30440));
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 200));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryHw::FlatRead16((r24 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 208));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f26.d));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f27.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f26.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f27.d));
    r3 = 128;
    r4 = 0;
    r5 = 4;
    ctx->lr = 0x800D1B38u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    guest_range_9 = MemoryHw::ResolveRangeHost((r1 + 16), 0, 16u, true, false);
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_9, 8u, (r1 + 24));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword32 = PPC_FprLowWordInline(f0.d);
    guest_range_10 = MemoryHw::ResolveRangeHost((r1 + 408), 0, 64u, false, true);
    MemoryHw::WriteResolvedFloat64(guest_range_10, 0u, (r1 + 408), f0.d);
    r3 = fctiwzword32;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_9, 12u, (r1 + 28));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword33 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_10, 8u, (r1 + 416), f0.d);
    r4 = fctiwzword33;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_8[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_8[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_8[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_8[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_8[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_8[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_8[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_8[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f25.d;
    f2.d = f24.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_8[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_8[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_8[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_8[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_8[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_8[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_8[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_8[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_8, 16u);
    // end of inlined leaf 0x800D20FC
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_9, 8u, (r1 + 24));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_9, 0u, (r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword34 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_10, 16u, (r1 + 424), f0.d);
    r3 = fctiwzword34;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_9, 12u, (r1 + 28));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword35 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_10, 24u, (r1 + 432), f0.d);
    r4 = fctiwzword35;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_9[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_9[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_9[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_9[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_9[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_9[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_9[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_9[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f23.d;
    f2.d = f24.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_9[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_9[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_9[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_9[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_9[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_9[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_9[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_9[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_9, 16u);
    // end of inlined leaf 0x800D20FC
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_9, 8u, (r1 + 24));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_9, 0u, (r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword36 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_10, 32u, (r1 + 440), f0.d);
    r3 = fctiwzword36;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_9, 12u, (r1 + 28));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_9, 4u, (r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword37 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_10, 40u, (r1 + 448), f0.d);
    r4 = fctiwzword37;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_10[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_10[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_10[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_10[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_10[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_10[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_10[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_10[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f23.d;
    f2.d = f22.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_10[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_10[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_10[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_10[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_10[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_10[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_10[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_10[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_10, 16u);
    // end of inlined leaf 0x800D20FC
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_9, 8u, (r1 + 24));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword38 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_10, 48u, (r1 + 456), f0.d);
    r3 = fctiwzword38;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f1.d = MemoryHw::ReadResolvedFloat32(guest_range_9, 12u, (r1 + 28));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_9, 4u, (r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword39 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_10, 56u, (r1 + 464), f0.d);
    r4 = fctiwzword39;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_11[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_11[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_11[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_11[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_11[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_11[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_11[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_11[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f25.d;
    f2.d = f22.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_11[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_11[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_11[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_11[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_11[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_11[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_11[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_11[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_11, 16u);
    // end of inlined leaf 0x800D20FC
    // inline leaf 0x800D20F8 (1 guest instruction(s))
    // end of inlined leaf 0x800D20F8
}

loc_800D1C5C:
{
    r0 = MemoryHw::FlatRead16((r26 + 312));
    f1.d = MemoryHw::FlatReadFloat64((r2 + -30448));
    MemoryHw::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 200));
    f27.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r0 = MemoryHw::FlatRead16((r26 + 314));
    MemoryHw::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 208));
    f26.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = (r26 + 276);
    r4 = 0;
    ctx->lr = 0x800D1C8Cu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B8DA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_800D1C8C:
{
    r3 = 0x80660000u;
    r31 = (r3 + -21920);
    r0 = MemoryHw::FlatRead8((r31 + 9));
    r3 = (r13 + -31424);
    r3_addr_1 = (r3 + r0);
    r27 = MemoryHw::FlatRead8(r3_addr_1);
    r3 = 128;
    r4 = 0;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r0 & 65535);
    ctx->lr = 0x800D1CB4u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B6EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r25 = 0;
    r30 = r26;
    r29 = 0;
    r28 = r26;
    f28.d = MemoryHw::FlatReadFloat64((r2 + -30440));
    f29.d = MemoryHw::FlatReadFloat32((r2 + -30464));
    r3 = 0x80590000u;
    r24 = (r3 + 23016);
    f30.d = MemoryHw::FlatReadFloat32((r2 + -30460));
    goto loc_800D1ECC;
}

loc_800D1CDC:
{
    r0 = MemoryHw::FlatRead16((r30 + 122));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 200));
    f21.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    r0 = MemoryHw::FlatRead16((r30 + 144));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 208));
    f20.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryHw::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x80040424
}

loc_800D1D0C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800D1D14;
    }
}

loc_800D1D10:
{
    f21.d = static_cast<double>(PpcForceSingleValueInline(f21.d - f29.d));
}

loc_800D1D14:
{
    r0 = MemoryHw::FlatRead8((r31 + 9));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r24_addr_2 = (r24 + r0);
    r0 = MemoryHw::FlatRead32(r24_addr_2);
    r3 = (r0 + r29);
    r0 = MemoryHw::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 200));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    r0 = MemoryHw::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 212), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 208));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f28.d));
    f25.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f27.d));
    f24.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f26.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f1.d));
    f23.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f27.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f2.d));
    f22.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f26.d));
    r21 = 0;
    r23 = (r26 + 52);
    r22 = (r1 + 40);
}

loc_800D1D70:
{
    r3 = r22;
    r4 = r23;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4 = MemoryHw::FlatRead32((r28 + 8));
}

loc_800D1D84:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800D1D90;
    }
}

loc_800D1D88:
{
    r3 = r22;
    ctx->lr = 0x800D1D90u;
    if constexpr (KnownRegArgsCpuCall<0x80051178u>(&func_80051178)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80051178_2013F = func_80051178_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80051178_2013F);
        r4 = static_cast<uint32_t>(regargs_result_80051178_2013F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[29] = f29;
        ctx->fpr[30] = f30;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x80051178u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f29 = ctx->fpr[29];
        f30 = ctx->fpr[30];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
}

loc_800D1D90:
{
    f0.d = MemoryHw::FlatReadFloat32(r22);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f21.d));
    MemoryHw::FlatWriteFloat32(r22, f0.d);
    f0.d = MemoryHw::FlatReadFloat32((r22 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f20.d));
    MemoryHw::FlatWriteFloat32((r22 + 4), f0.d);
    r23 = (r23 + 12);
    r22 = (r22 + 12);
    r21 = (r21 + 1);
}

loc_800D1DB8:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(4))) {
        goto loc_800D1D70;
    }
}

loc_800D1DBC:
{
    guest_range_11 = MemoryHw::ResolveRangeHost((r1 + 40), 0, 44u, true, false);
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_11, 0u, (r1 + 40));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword40 = PPC_FprLowWordInline(f0.d);
    guest_range_12 = MemoryHw::ResolveRangeHost((r1 + 408), 0, 64u, false, true);
    MemoryHw::WriteResolvedFloat64(guest_range_12, 56u, (r1 + 464), f0.d);
    r3 = fctiwzword40;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_11, 4u, (r1 + 44));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword41 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_12, 48u, (r1 + 456), f0.d);
    r4 = fctiwzword41;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_12[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_12[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_12[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_12[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_12[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_12[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_12[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_12[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f25.d;
    f2.d = f24.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_12[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_12[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_12[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_12[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_12[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_12[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_12[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_12[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_12, 16u);
    // end of inlined leaf 0x800D20FC
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_11, 12u, (r1 + 52));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword42 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_12, 40u, (r1 + 448), f0.d);
    r3 = fctiwzword42;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_11, 16u, (r1 + 56));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword43 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_12, 32u, (r1 + 440), f0.d);
    r4 = fctiwzword43;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_13[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_13[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_13[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_13[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_13[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_13[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_13[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_13[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f23.d;
    f2.d = f24.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_13[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_13[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_13[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_13[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_13[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_13[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_13[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_13[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_13, 16u);
    // end of inlined leaf 0x800D20FC
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_11, 24u, (r1 + 64));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword44 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_12, 24u, (r1 + 432), f0.d);
    r3 = fctiwzword44;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_11, 28u, (r1 + 68));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword45 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_12, 16u, (r1 + 424), f0.d);
    r4 = fctiwzword45;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_14[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_14[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_14[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_14[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_14[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_14[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_14[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_14[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f23.d;
    f2.d = f22.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_14[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_14[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_14[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_14[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_14[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_14[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_14[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_14[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_14, 16u);
    // end of inlined leaf 0x800D20FC
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_11, 36u, (r1 + 76));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword46 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_12, 8u, (r1 + 416), f0.d);
    r3 = fctiwzword46;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    f0.d = MemoryHw::ReadResolvedFloat32(guest_range_11, 40u, (r1 + 80));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword47 = PPC_FprLowWordInline(f0.d);
    MemoryHw::WriteResolvedFloat64(guest_range_12, 0u, (r1 + 408), f0.d);
    r4 = fctiwzword47;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    // inline leaf 0x800D2118 (6 guest instruction(s))
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_15[0] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_15[1] = static_cast<uint8_t>(mkw_fifo_word);
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r0);
        mkw_fifo_burst_15[2] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_15[3] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D2118
    r3 = -1;
    // inline leaf 0x800D210C (3 guest instruction(s))
    r4 = -872349696;
    {
        const uint32_t mkw_fifo_word = static_cast<uint32_t>(r3);
        mkw_fifo_burst_15[4] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_15[5] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_15[6] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_15[7] = static_cast<uint8_t>(mkw_fifo_word);
    }
    // end of inlined leaf 0x800D210C
    f1.d = f25.d;
    f2.d = f22.d;
    // inline leaf 0x800D20FC (4 guest instruction(s))
    r3 = -872349696;
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f1.d));
        mkw_fifo_burst_15[8] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_15[9] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_15[10] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_15[11] = static_cast<uint8_t>(mkw_fifo_word);
    }
    {
        const uint32_t mkw_fifo_word = PpcBitCastToU32Inline(static_cast<float>(f2.d));
        mkw_fifo_burst_15[12] = static_cast<uint8_t>((mkw_fifo_word >> 24));
        mkw_fifo_burst_15[13] = static_cast<uint8_t>((mkw_fifo_word >> 16));
        mkw_fifo_burst_15[14] = static_cast<uint8_t>((mkw_fifo_word >> 8));
        mkw_fifo_burst_15[15] = static_cast<uint8_t>(mkw_fifo_word);
    }
    GX_HLE_FIFO_WriteBurst(mkw_fifo_burst_15, 16u);
    // end of inlined leaf 0x800D20FC
    r30 = (r30 + 2);
    r29 = (r29 + 4);
    r28 = (r28 + 4);
    r25 = (r25 + 1);
}

loc_800D1ECC:
{
}

loc_800D1ED0:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r27))) {
        goto loc_800D1CDC;
    }
}

loc_800D1ED4:
{
    // inline leaf 0x800D20F8 (1 guest instruction(s))
    // end of inlined leaf 0x800D20F8
    r0 = MemoryHw::FlatRead8((r26 + 166));
}

loc_800D1EE0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_800D1EF8;
    }
}

loc_800D1EE4:
{
    r3 = 2047;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800885F4u>(ctx);
    r3 = 0;
    ctx->lr = 0x800D1EF4u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9900u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    goto loc_800D2050;
}

loc_800D1EF8:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryHw::FlatRead8((r3 + 2012));
}

loc_800D1F08:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_800D1F14;
    }
}

loc_800D1F0C:
{
    r3 = 0;
    ctx->lr = 0x800D1F14u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x800D29DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_800D1F14:
{
    r3 = MemoryHw::FlatRead8((r26 + 166));
    r0 = (r3 + 252);
    r0 = (r0 & 255);
}

loc_800D1F24:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_800D1F44;
    }
}

loc_800D1F28:
{
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r0 = MemoryHw::FlatRead8((r3 + 2013));
}

loc_800D1F38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_800D1F44;
    }
}

loc_800D1F3C:
{
    r3 = 1;
    ctx->lr = 0x800D1F44u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x800D29DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_800D1F44:
{
    r3 = 2047;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800885F4u>(ctx);
    r3 = 0;
    ctx->lr = 0x800D1F54u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9900u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    r3 = MemoryHw::FlatRead8((r26 + 166));
    r0 = (r3 + 255);
    r0 = (r0 & 255);
}

loc_800D1F64:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_800D2050;
    }
}

loc_800D1F68:
{
    // inline leaf 0x80040424 (7 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = MemoryHw::FlatRead8((r3 + 25));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x80040424
}

loc_800D1F70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800D1F7C;
    }
}

loc_800D1F74:
{
    f0.d = MemoryHw::FlatReadFloat32((r2 + -30516));
    goto loc_800D1F80;
}

loc_800D1F7C:
{
    f0.d = MemoryHw::FlatReadFloat32((r2 + -30488));
}

loc_800D1F80:
{
    MemoryHw::FlatWriteRamFloat32((r1 + 16), f0.d);
    r0 = MemoryHw::FlatRead8((r26 + 167));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_800D1F90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D1FD0;
    }
}

loc_800D1F94:
{
    r3 = 62;
    ctx->lr = 0x800D1F9Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D2E98u>(&func_800D2E98)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800D2E98_25198 = func_800D2E98_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800D2E98_25198;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800D2E98u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r0 = MemoryHw::FlatRead8((r26 + 166));
}

loc_800D1FA4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800D1FB0;
    }
}

loc_800D1FA8:
{
}

loc_800D1FAC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_800D1FB8;
    }
}

loc_800D1FB0:
{
    r21 = MemoryHw::FlatRead32(r3);
    goto loc_800D1FD4;
}

loc_800D1FB8:
{
}

loc_800D1FBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_800D1FC8;
    }
}

loc_800D1FC0:
{
    r21 = MemoryHw::FlatRead32((r3 + 12));
    goto loc_800D1FD4;
}

loc_800D1FC8:
{
    r21 = MemoryHw::FlatRead32((r3 + 8));
    goto loc_800D1FD4;
}

loc_800D1FD0:
{
    r21 = (r26 + 167);
}

loc_800D1FD4:
{
    r3 = r21;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80456C40_256BF = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_256BF);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_256BF >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 * 11);
    f1.d = MemoryHw::FlatReadFloat64((r2 + -30440));
    r0 = (r0 ^ -2147483648);
    MemoryHw::FlatWriteRam32((r1 + 204), r0);
    f0.d = MemoryHw::FlatReadFloat64((r1 + 200));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryHw::FlatReadFloat32((r1 + 16));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryHw::FlatReadFloat32((r2 + -30484));
    f20.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = MemoryHw::FlatReadFloat32((r2 + -30456));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f0.d));
    r3 = 22;
    r4 = 22;
    // inline leaf 0x8005B714 (9 guest instruction(s))
}

loc_inl90_0x8005B714:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl90_0x8005B71C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl90_return;
    }
}

loc_inl90_0x8005B720:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20576), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20580), r4);
    goto loc_inl90_cont_8005B714;
}

loc_inl90_return:
{
}

loc_inl90_cont_8005B714:
{
    // end of inlined leaf 0x8005B714
    f0.d = PPC_Fctiwz(f20.d);
    fctiwzword48 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 464), f0.d);
    r3 = fctiwzword48;
    f0.d = PPC_Fctiwz(f31.d);
    fctiwzword49 = PPC_FprLowWordInline(f0.d);
    MemoryHw::FlatWriteRamFloat64((r1 + 456), f0.d);
    r4 = fctiwzword49;
    // inline leaf 0x8005B780 (9 guest instruction(s))
}

loc_inl91_0x8005B780:
{
    r5 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl91_0x8005B788:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl91_return;
    }
}

loc_inl91_0x8005B78C:
{
    r5 = (r5 + 65536);
    MemoryHw::FlatWrite32((r5 + 20584), r3);
    r3 = MemoryHw::FlatRead32((r13 + -17736));
    r3 = (r3 + 65536);
    MemoryHw::FlatWrite32((r3 + 20588), r4);
    goto loc_inl91_cont_8005B780;
}

loc_inl91_return:
{
}

loc_inl91_cont_8005B780:
{
    // end of inlined leaf 0x8005B780
    r3 = -1061093376;
    r3 = (r3 + -16129);
    // inline leaf 0x8005B7EC (6 guest instruction(s))
}

loc_inl92_0x8005B7EC:
{
    r4 = MemoryHw::FlatRead32((r13 + -17736));
}

loc_inl92_0x8005B7F4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl92_return;
    }
}

loc_inl92_0x8005B7F8:
{
    r4 = (r4 + 65536);
    MemoryHw::FlatWrite32((r4 + 20600), r3);
    goto loc_inl92_cont_8005B7EC;
}

loc_inl92_return:
{
}

loc_inl92_cont_8005B7EC:
{
    // end of inlined leaf 0x8005B7EC
    r3 = r21;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D204Cu;
    if constexpr (KnownRegArgsCpuCall<0x8005BA04u>(&func_8005BA04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_8005BA04_26607 = func_8005BA04_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8005BA04_26607);
        r4 = static_cast<uint32_t>(regargs_result_8005BA04_26607 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
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
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->fpr[9] = f9;
        ctx->fpr[10] = f10;
        ctx->fpr[11] = f11;
        ctx->fpr[12] = f12;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005BA04u>(ctx);
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
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        f9 = ctx->fpr[9];
        f10 = ctx->fpr[10];
        f11 = ctx->fpr[11];
        f12 = ctx->fpr[12];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    mkw_gqr0 = ctx->gqr[0];
    ctx->lr = 0x800D2050u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->cr = cr;
    InvokeDirectCpu<0x8005C174u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
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
    f9 = ctx->fpr[9];
    f10 = ctx->fpr[10];
    f11 = ctx->fpr[11];
    f12 = ctx->fpr[12];
    cr = ctx->cr;
    mkw_gqr0 = ctx->gqr[0];
}

loc_800D2050:
{
    r0 = 712;
    addr_psqx_800D2054_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D2054_loc_0));
    guest_range_13 = MemoryHw::ResolveRangeHost((r1 + 528), 0, 200u, true, false);
    f31.d = MemoryHw::ReadResolvedFloat64(guest_range_13, 176u, (r1 + 704));
    r0 = 696;
    addr_psqx_800D2060_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D2060_loc_0));
    f30.d = MemoryHw::ReadResolvedFloat64(guest_range_13, 160u, (r1 + 688));
    r0 = 680;
    addr_psqx_800D206C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f29, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D206C_loc_0));
    f29.d = MemoryHw::ReadResolvedFloat64(guest_range_13, 144u, (r1 + 672));
    r0 = 664;
    addr_psqx_800D2078_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f28, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D2078_loc_0));
    f28.d = MemoryHw::ReadResolvedFloat64(guest_range_13, 128u, (r1 + 656));
    r0 = 648;
    addr_psqx_800D2084_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f27, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D2084_loc_0));
    f27.d = MemoryHw::ReadResolvedFloat64(guest_range_13, 112u, (r1 + 640));
    r0 = 632;
    addr_psqx_800D2090_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f26, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D2090_loc_0));
    f26.d = MemoryHw::ReadResolvedFloat64(guest_range_13, 96u, (r1 + 624));
    r0 = 616;
    addr_psqx_800D209C_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f25, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D209C_loc_0));
    f25.d = MemoryHw::ReadResolvedFloat64(guest_range_13, 80u, (r1 + 608));
    r0 = 600;
    addr_psqx_800D20A8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f24, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D20A8_loc_0));
    f24.d = MemoryHw::ReadResolvedFloat64(guest_range_13, 64u, (r1 + 592));
    r0 = 584;
    addr_psqx_800D20B4_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f23, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D20B4_loc_0));
    f23.d = MemoryHw::ReadResolvedFloat64(guest_range_13, 48u, (r1 + 576));
    r0 = 568;
    addr_psqx_800D20C0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f22, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D20C0_loc_0));
    f22.d = MemoryHw::ReadResolvedFloat64(guest_range_13, 32u, (r1 + 560));
    r0 = 552;
    addr_psqx_800D20CC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f21, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D20CC_loc_0));
    f21.d = MemoryHw::ReadResolvedFloat64(guest_range_13, 16u, (r1 + 544));
    r0 = 536;
    addr_psqx_800D20D8_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f20, MemoryHw::PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_800D20D8_loc_0));
    f20.d = MemoryHw::ReadResolvedFloat64(guest_range_13, 0u, (r1 + 528));
    r11 = (r1 + 528);
    // inline leaf 0x804574BC (12 guest instruction(s))
    guest_range_3 = MemoryHw::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    // end of inlined leaf 0x804574BC
    r0 = MemoryHw::ReadResolved32(guest_range_13, 196u, (r1 + 724));
    ctx->lr = r0;
    r1 = (r1 + 720);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[20] = f20;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFFF03FFF fpr_write=0xFFF03FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800D10B0 func_800D10B0 preserves=true fpr_mask=0x00000000
