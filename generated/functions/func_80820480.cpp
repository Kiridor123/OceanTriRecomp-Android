#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804F1580(CpuContext* ctx);
extern "C" uint64_t func_804F1580_ra0_0_18_0(CpuContext*);
extern "C" void func_804F15C0(CpuContext* ctx);
extern "C" uint32_t func_804F15C0_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_80820480(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword11 = 0;
    uint32_t stackword12 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80820480;

loc_80820480:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    r11 = (r1 + 64);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r31 = 0x80840000u;
    r29 = r3;
    r31 = (r31 + 17656);
    ctx->lr = 0x808204B4u;
    if constexpr (KnownRegArgsCpuCall<0x804F1580u>(&func_804F1580)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804F1580_A8C = func_804F1580_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804F1580_A8C);
        r4 = static_cast<uint32_t>(regargs_result_804F1580_A8C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804F1580u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
    r26 = 1127219200;
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 127;
    f3.d = MemoryInline::FlatReadFloat64((r31 + 744));
    stackword10 = r26;
    MemoryInline::FlatWriteRam32((r1 + 8), r26);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 776));
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 772));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite32((r29 + 132), r0);
    ctx->lr = 0x808204F8u;
    if constexpr (KnownRegArgsCpuCall<0x804F15C0u>(&func_804F15C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_804F15C0_1141 = func_804F15C0_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804F15C0_1141;
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
        InvokeDirectCpu<0x804F15C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    f30.d = MemoryInline::FlatReadFloat64((r31 + 784));
    r25 = r29;
    f31.d = MemoryInline::FlatReadFloat32((r31 + 780));
    r27 = 0;
}

loc_80820508:
{
    r0 = MemoryInline::FlatRead32((r29 + 132));
    stackword11 = r26;
    MemoryInline::FlatWriteRam32((r1 + 16), r26);
    r0 = (r0 ^ -2147483648);
    r3 = MemoryInline::FlatRead32((r25 + 684));
    stackword12 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword11), static_cast<uint32_t>(stackword12));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f30.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f31.d));
    // inline leaf 0x8081CC30 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    // end of inlined leaf 0x8081CC30
    r3 = MemoryInline::FlatRead32((r25 + 684));
    ctx->lr = 0x80820534u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8081CC10u>(ctx);
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
    ctr = ctx->ctr;
    r27 = (r27 + 1);
    r25 = (r25 + 4);
}

loc_80820540:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(4))) {
        goto loc_80820508;
    }
}

loc_80820544:
{
    r30 = 0;
    r26 = 1;
    r27 = 37;
    r28 = 37;
}

loc_80820554:
{
    r0 = MemoryInline::FlatRead32((r29 + 132));
}

loc_8082055C:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r0))) {
        goto loc_808205D8;
    }
}

loc_80820560:
{
    r5 = (r31 + 104);
    r3 = (r30 + 21);
    r4 = 0;
    ctr = r27;
}

loc_80820570:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80820578:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8082058C;
    }
}

loc_8082057C:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80820584:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_8082058C;
    }
}

loc_80820588:
{
    goto loc_808205BC;
}

loc_8082058C:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_80820598:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_808205AC;
    }
}

loc_8082059C:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_808205A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_808205AC;
    }
}

loc_808205A8:
{
    goto loc_808205BC;
}

loc_808205AC:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80820570;
    }
}

loc_808205B8:
{
    r4 = -1;
}

loc_808205BC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r29 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl2_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl2_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x8081AA24;
    }
}

loc_inl2_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl2_0x8081AA28;
}

loc_inl2_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl2_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl2_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    MemoryInline::FlatWrite32((r25 + 20), r26);
    goto loc_8082064C;
}

loc_808205D8:
{
    r5 = (r31 + 104);
    r3 = (r30 + 21);
    r4 = 0;
    ctr = r28;
}

loc_808205E8:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_808205F0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80820604;
    }
}

loc_808205F4:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_808205FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_80820604;
    }
}

loc_80820600:
{
    goto loc_80820634;
}

loc_80820604:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_80820610:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80820624;
    }
}

loc_80820614:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_8082061C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(9))) {
        goto loc_80820624;
    }
}

loc_80820620:
{
    goto loc_80820634;
}

loc_80820624:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_808205E8;
    }
}

loc_80820630:
{
    r4 = -1;
}

loc_80820634:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r29 + r0);
    r25 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r25;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl3_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl3_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl3_0x8081AA24;
    }
}

loc_inl3_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl3_0x8081AA28;
}

loc_inl3_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl3_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl3_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    MemoryInline::FlatWrite32((r25 + 20), r26);
}

loc_8082064C:
{
    r30 = (r30 + 1);
}

loc_80820654:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(10))) {
        goto loc_80820554;
    }
}

loc_80820658:
{
    r11 = (r1 + 64);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 68u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 64));
    // inline leaf 0x804574CC (8 guest instruction(s))
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80820480 func_80820480 preserves=true fpr_mask=0x00000000
