#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80275218(CpuContext* ctx);
extern "C" uint64_t func_80275218_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_80315A30(CpuContext* ctx);
extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80317428_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t addr_psqx_803177C0_loc_0 = 0;
    uint32_t addr_psqx_803177CC_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_80317428;

loc_80317428:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 80);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r26 = r3;
    r27 = r5;
    r28 = r6;
    r31 = MemoryInline::FlatRead32(r4);
    r25 = MemoryInline::FlatRead32((r4 + 4));
    r24 = MemoryInline::FlatRead32((r4 + 8));
    r30 = MemoryInline::FlatRead32((r4 + 12));
    r23 = MemoryInline::FlatRead32((r4 + 16));
    r29 = 0;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    f31.d = MemoryInline::FlatReadFloat32((r2 + -11376));
    f30.d = f31.d;
    r3 = (r5 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80315A30u>(&func_80315A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80315A30_CC7 = func_80315A30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80315A30_CC7;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80315A30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r3 & 255);
}

loc_80317490:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(5))) {
        goto loc_803174A8;
    }
}

loc_80317494:
{
}

loc_80317498:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(3))) {
        goto loc_803175EC;
    }
}

loc_8031749C:
{
}

loc_803174A0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(1))) {
        goto loc_803174BC;
    }
}

loc_803174A4:
{
    goto loc_80317770;
}

loc_803174A8:
{
}

loc_803174AC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(9))) {
        goto loc_80317770;
    }
}

loc_803174B0:
{
}

loc_803174B4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(7))) {
        goto loc_80317720;
    }
}

loc_803174B8:
{
    goto loc_803176BC;
}

loc_803174BC:
{
}

loc_803174C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803174C8;
    }
}

loc_803174C4:
{
    goto loc_803174CC;
}

loc_803174C8:
{
    r26 = 0;
}

loc_803174CC:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_803174D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80317524;
    }
}

loc_803174D8:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_803174E0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80317504;
    }
}

loc_803174E4:
{
    r3 = r26;
    r4 = r30;
    r5 = 0;
    r6 = (r1 + 8);
    ctx->lr = 0x803174F8u;
    if constexpr (KnownRegArgsCpuCall<0x80275218u>(&func_80275218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80275218_159A = func_80275218_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80275218_159A);
        r4 = static_cast<uint32_t>(regargs_result_80275218_159A >> 32);
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
        InvokeDirectCpu<0x80275218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f30.d = f1.d;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
}

loc_80317504:
{
    r3 = r26;
    r4 = r31;
    r5 = 0;
    r6 = (r1 + 8);
    ctx->lr = 0x80317518u;
    if constexpr (KnownRegArgsCpuCall<0x80275218u>(&func_80275218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80275218_1B0D = func_80275218_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80275218_1B0D);
        r4 = static_cast<uint32_t>(regargs_result_80275218_1B0D >> 32);
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
        InvokeDirectCpu<0x80275218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r29 = (r29 | 1);
    goto loc_80317574;
}

loc_80317524:
{
}

loc_80317528:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80317574;
    }
}

loc_8031752C:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80317534:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80317558;
    }
}

loc_80317538:
{
    r3 = r26;
    r4 = 0;
    r5 = r30;
    r6 = (r1 + 8);
    ctx->lr = 0x8031754Cu;
    if constexpr (KnownRegArgsCpuCall<0x80275218u>(&func_80275218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80275218_21AF = func_80275218_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80275218_21AF);
        r4 = static_cast<uint32_t>(regargs_result_80275218_21AF >> 32);
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
        InvokeDirectCpu<0x80275218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f30.d = f1.d;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
}

loc_80317558:
{
    r3 = r26;
    r4 = 0;
    r5 = r31;
    r6 = (r1 + 8);
    ctx->lr = 0x8031756Cu;
    if constexpr (KnownRegArgsCpuCall<0x80275218u>(&func_80275218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80275218_2722 = func_80275218_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80275218_2722);
        r4 = static_cast<uint32_t>(regargs_result_80275218_2722 >> 32);
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
        InvokeDirectCpu<0x80275218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r29 = (r29 | 1);
}

loc_80317574:
{
    r0 = (r29 & 255);
    r0 = (r0 & 1);
}

loc_80317580:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80317770;
    }
}

loc_80317584:
{
    r3 = MemoryInline::FlatRead8(r30);
    r0 = (r3 + 245);
    r0 = (r0 & 255);
}

loc_80317594:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80317770;
    }
}

loc_80317598:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -11352));
    f0.d = PpcFmulsInline(f2.d, f30.d);
    f1.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    r3 = fctiwzword0;
    f0.d = PpcFmulsInline(f2.d, f31.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
}

loc_803175C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_80317770;
    }
}

loc_803175C4:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f1.d);
    r3 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_803175D8:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803175E4;
    }
}

loc_803175E0:
{
    r0 = 2;
}

loc_803175E4:
{
    r29 = (r29 | r0);
    goto loc_80317770;
}

loc_803175EC:
{
}

loc_803175F0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(3))) {
        goto loc_803175F8;
    }
}

loc_803175F4:
{
    goto loc_803175FC;
}

loc_803175F8:
{
    r26 = 0;
}

loc_803175FC:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80317604:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80317634;
    }
}

loc_80317608:
{
    r0 = MemoryInline::FlatRead8(r23);
}

loc_80317610:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80317634;
    }
}

loc_80317614:
{
    r3 = r26;
    r4 = r30;
    r5 = r23;
    r6 = (r1 + 8);
    ctx->lr = 0x80317628u;
    if constexpr (KnownRegArgsCpuCall<0x80275218u>(&func_80275218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80275218_345F = func_80275218_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80275218_345F);
        r4 = static_cast<uint32_t>(regargs_result_80275218_345F >> 32);
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
        InvokeDirectCpu<0x80275218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f30.d = f1.d;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
}

loc_80317634:
{
    r3 = r26;
    r4 = r31;
    r5 = r25;
    r6 = (r1 + 8);
    ctx->lr = 0x80317648u;
    if constexpr (KnownRegArgsCpuCall<0x80275218u>(&func_80275218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80275218_39D4 = func_80275218_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80275218_39D4);
        r4 = static_cast<uint32_t>(regargs_result_80275218_39D4 >> 32);
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
        InvokeDirectCpu<0x80275218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r29 = (r29 | 1);
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80317658:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80317770;
    }
}

loc_8031765C:
{
    r0 = MemoryInline::FlatRead8(r23);
}

loc_80317664:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80317770;
    }
}

loc_80317668:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -11352));
    f0.d = PpcFmulsInline(f3.d, f30.d);
    f2.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f2.d);
    r3 = fctiwzword2;
    f0.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
}

loc_80317690:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(r0))) {
        goto loc_80317770;
    }
}

loc_80317694:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f2.d);
    r3 = MemoryInline::FlatRead32((r1 + 28));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_803176A8:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803176B4;
    }
}

loc_803176B0:
{
    r0 = 2;
}

loc_803176B4:
{
    r29 = (r29 | r0);
    goto loc_80317770;
}

loc_803176BC:
{
}

loc_803176C0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(5))) {
        goto loc_803176C8;
    }
}

loc_803176C4:
{
    goto loc_803176CC;
}

loc_803176C8:
{
    r26 = 0;
}

loc_803176CC:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_803176D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_803176F8;
    }
}

loc_803176D8:
{
    r3 = r26;
    r4 = r31;
    r5 = 0;
    r6 = (r1 + 8);
    ctx->lr = 0x803176ECu;
    if constexpr (KnownRegArgsCpuCall<0x80275218u>(&func_80275218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80275218_460F = func_80275218_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80275218_460F);
        r4 = static_cast<uint32_t>(regargs_result_80275218_460F >> 32);
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
        InvokeDirectCpu<0x80275218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r29 = (r29 | 1);
    goto loc_80317770;
}

loc_803176F8:
{
}

loc_803176FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80317770;
    }
}

loc_80317700:
{
    r3 = r26;
    r4 = 0;
    r5 = r31;
    r6 = (r1 + 8);
    ctx->lr = 0x80317714u;
    if constexpr (KnownRegArgsCpuCall<0x80275218u>(&func_80275218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80275218_4BF3 = func_80275218_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80275218_4BF3);
        r4 = static_cast<uint32_t>(regargs_result_80275218_4BF3 >> 32);
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
        InvokeDirectCpu<0x80275218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r29 = (r29 | 1);
    goto loc_80317770;
}

loc_80317720:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_80317728:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_80317770;
    }
}

loc_8031772C:
{
    r0 = MemoryInline::FlatRead8(r25);
}

loc_80317734:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80317770;
    }
}

loc_80317738:
{
    r0 = MemoryInline::FlatRead8(r24);
}

loc_80317740:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80317770;
    }
}

loc_80317744:
{
}

loc_80317748:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(7))) {
        goto loc_80317754;
    }
}

loc_8031774C:
{
    r3 = r26;
    goto loc_80317758;
}

loc_80317754:
{
    r3 = 0;
}

loc_80317758:
{
    r4 = r31;
    r5 = r25;
    r6 = (r1 + 8);
    ctx->lr = 0x80317768u;
    if constexpr (KnownRegArgsCpuCall<0x80275218u>(&func_80275218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        const auto regargs_result_80275218_5465 = func_80275218_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80275218_5465);
        r4 = static_cast<uint32_t>(regargs_result_80275218_5465 >> 32);
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
        InvokeDirectCpu<0x80275218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
    }
    f31.d = f1.d;
    r29 = (r29 | 1);
}

loc_80317770:
{
    r0 = (r29 & 255);
    r0 = (r0 & 1);
}

loc_8031777C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803177B8;
    }
}

loc_80317780:
{
    r0 = (r27 & 255);
    r0 = (r0 & 4);
}

loc_8031778C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803177B4;
    }
}

loc_80317790:
{
    r0 = MemoryInline::FlatRead8((r1 + 8));
}

loc_80317798:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803177A8;
    }
}

loc_8031779C:
{
}

loc_803177A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803177B0;
    }
}

loc_803177A4:
{
    goto loc_803177B4;
}

loc_803177A8:
{
    r29 = (r29 | 8);
    goto loc_803177B4;
}

loc_803177B0:
{
    r29 = (r29 | 16);
}

loc_803177B4:
{
    MemoryInline::FlatWriteFloat32(r28, f31.d);
}

loc_803177B8:
{
    r3 = r29;
    r0 = 104;
    addr_psqx_803177C0_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803177C0_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    r0 = 88;
    addr_psqx_803177CC_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f30, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_803177CC_loc_0));
    f30.d = MemoryInline::FlatReadFloat64((r1 + 80));
    r11 = (r1 + 80);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80317428(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80317428_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80317428 func_80317428 preserves=true fpr_mask=0x00000000
