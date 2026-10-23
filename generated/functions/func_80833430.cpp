#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457338(CpuContext* ctx);
extern "C" uint64_t func_80457338_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_80833430(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t stackword27 = 0;
    uint32_t stackword28 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_80833430;

loc_80833430:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -224), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 228u, (r1 + 228), r0);
    r11 = (r1 + 144);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 208u, (r1 + 208), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 216);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 192u, (r1 + 192), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 176u, (r1 + 176), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 160u, (r1 + 160), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_2, 144u, (r1 + 144), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    f30.d = f1.d;
    r0 = 0;
    r25 = r4;
    MemoryInline::WriteResolved32(guest_range_2, 80u, (r1 + 80), r0);
    r24 = r3;
    r26 = r5;
    MemoryInline::WriteResolved32(guest_range_2, 84u, (r1 + 84), r0);
    r27 = r6;
    r28 = r7;
    r3 = r25;
    MemoryInline::WriteResolved32(guest_range_2, 88u, (r1 + 88), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r1 + 72), r4);
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r1 + 76), r5);
    }
    // inline leaf 0x80837280 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x80837280
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r23 = 0x80840000u;
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r31 = 0;
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r3 = r25;
    MemoryInline::WriteResolved32(guest_range_2, 68u, (r1 + 68), r0);
    r30 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r23 + 18680));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r1 + 56), r31);
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r1 + 60), r5);
    }
    MemoryInline::WriteResolved32(guest_range_2, 64u, (r1 + 64), r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 12), r4);
    }
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 16), r0);
    MemoryInline::FlatWriteFloat32(r24, f31.d);
    MemoryInline::FlatWriteFloat32((r24 + 8), f31.d);
    ctx->lr = 0x808334ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8083DEF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    f0.d = f31.d;
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_808334F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808334FC;
    }
}

loc_808334F8:
{
    goto loc_80833500;
}

loc_808334FC:
{
    f1.d = f0.d;
}

loc_80833500:
{
    MemoryInline::FlatWriteFloat32((r24 + 4), f1.d);
    r3 = r25;
    ctx->lr = 0x8083350Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8083DEF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 0x80840000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 18680));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80833518:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80833520;
    }
}

loc_8083351C:
{
    goto loc_80833524;
}

loc_80833520:
{
    f1.d = f0.d;
}

loc_80833524:
{
    MemoryInline::FlatWriteFloat32((r24 + 12), f1.d);
    r0 = 0;
    r3 = (r1 + 56);
    r12 = (r1 + 60);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 56), r26);
    f3.d = MemoryInline::FlatReadFloat32(r24);
    f2.d = MemoryInline::FlatReadFloat32((r24 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    ctx->lr = 0x80833560u;
    if constexpr (KnownRegArgsCpuCall<0x80457338u>(&func_80457338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80457338_23F5 = func_80457338_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457338_23F5);
        r4 = static_cast<uint32_t>(regargs_result_80457338_23F5 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80457338u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    // nop
    r5 = 0x80840000u;
    r4 = 0x80840000u;
    f27.d = MemoryInline::FlatReadFloat32((r5 + 18680));
    r29 = r3;
    f29.d = MemoryInline::FlatReadFloat64((r4 + 18688));
    r23 = 1127219200;
    goto loc_808337BC;
}

loc_80833580:
{
    r0 = (r29 & 65535);
}

loc_80833588:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(32))) {
        goto loc_808336C0;
    }
}

loc_8083358C:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r31));
    f1.d = f31.d;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_3 & 134217727);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f31.d);
    r3 = r25;
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f27.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f27.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f27.d);
    MemoryInline::FlatWriteRam32((r1 + 76), r4);
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    // inline leaf 0x808388E0 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    // end of inlined leaf 0x808388E0
    r3 = r25;
    // inline leaf 0x8083E020 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 92));
    // end of inlined leaf 0x8083E020
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r1 + 24);
    r5 = (r29 & 65535);
    r6 = (r1 + 72);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x808335DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r1 + 76));
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r0);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = MemoryInline::FlatReadFloat32(r24);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_808335F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_808335FC;
    }
}

loc_808335F8:
{
    goto loc_80833600;
}

loc_808335FC:
{
    f1.d = f0.d;
}

loc_80833600:
{
    MemoryInline::FlatWriteFloat32(r24, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 28));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80833610:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80833618;
    }
}

loc_80833614:
{
    goto loc_8083361C;
}

loc_80833618:
{
    f1.d = f0.d;
}

loc_8083361C:
{
    MemoryInline::FlatWriteFloat32((r24 + 4), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8083362C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80833634;
    }
}

loc_80833630:
{
    goto loc_80833638;
}

loc_80833634:
{
    f1.d = f0.d;
}

loc_80833638:
{
    MemoryInline::FlatWriteFloat32((r24 + 8), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r24 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80833648:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80833650;
    }
}

loc_8083364C:
{
    goto loc_80833654;
}

loc_80833650:
{
    f1.d = f0.d;
}

loc_80833654:
{
    MemoryInline::FlatWriteFloat32((r24 + 12), f1.d);
    r3 = r25;
    // inline leaf 0x80838940 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    // end of inlined leaf 0x80838940
    f2.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f31.d = f1.d;
    f0.d = MemoryInline::FlatReadFloat32(r24);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80833674:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80833684;
    }
}

loc_80833678:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    goto loc_808337D8;
}

loc_80833684:
{
}

loc_80833688:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(4))) {
        goto loc_80833694;
    }
}

loc_8083368C:
{
    r3 = r27;
    goto loc_80833834;
}

loc_80833694:
{
}

loc_80833698:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(1))) {
        goto loc_808336A4;
    }
}

loc_8083369C:
{
    r31 = 0;
    goto loc_80833784;
}

loc_808336A4:
{
}

loc_808336A8:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(2))) {
        goto loc_808336B4;
    }
}

loc_808336AC:
{
    r31 = 1;
    goto loc_80833784;
}

loc_808336B4:
{
}

loc_808336B8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(3))) {
        goto loc_808337D8;
    }
}

loc_808336BC:
{
    goto loc_80833784;
}

loc_808336C0:
{
}

loc_808336C4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_808336D4;
    }
}

loc_808336C8:
{
    r3 = r25;
    // inline leaf 0x8083DFB0 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 76));
    // end of inlined leaf 0x8083DFB0
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
}

loc_808336D4:
{
    r3 = r25;
    r31 = 1;
    // inline leaf 0x80838670 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 67));
    // end of inlined leaf 0x80838670
}

loc_808336E4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_808336F8;
    }
}

loc_808336E8:
{
    r3 = r25;
    // inline leaf 0x80838690 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 68));
    // end of inlined leaf 0x80838690
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f1.d));
    goto loc_8083373C;
}

loc_808336F8:
{
    r3 = r25;
    // inline leaf 0x808382D0 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    // end of inlined leaf 0x808382D0
    f28.d = f1.d;
    r3 = r25;
    // inline leaf 0x80837280 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x80837280
    r12 = MemoryInline::FlatRead32(r3);
    r4 = (r29 & 65535);
    r12 = MemoryInline::FlatRead32((r12 + 72));
    ctr = r12;
    ctx->lr = 0x80833720u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (r3 ^ -2147483648);
    stackword27 = r0;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    stackword28 = r23;
    MemoryInline::FlatWriteRam32((r1 + 96), r23);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword28), static_cast<uint32_t>(stackword27));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f29.d));
    f0.d = PpcFmulsInline(f0.d, f28.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
}

loc_8083373C:
{
    f0.d = MemoryInline::FlatReadFloat32(r24);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_80833744:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8083374C;
    }
}

loc_80833748:
{
    f0.d = f31.d;
}

loc_8083374C:
{
    f2.d = MemoryInline::FlatReadFloat32((r24 + 8));
    MemoryInline::FlatWriteFloat32(r24, f0.d);
    SetCRFloatResident(cr, 0, f2.d, f31.d);
}

loc_80833758:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80833760;
    }
}

loc_8083375C:
{
    f2.d = f31.d;
}

loc_80833760:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d));
    f0.d = MemoryInline::FlatReadFloat32(r24);
    MemoryInline::FlatWriteFloat32((r24 + 8), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_80833774:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80833784;
    }
}

loc_80833778:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    goto loc_808337D8;
}

loc_80833784:
{
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r3 = (r1 + 56);
    r12 = (r1 + 60);
    ctx->lr = 0x80833794u;
    if constexpr (KnownRegArgsCpuCall<0x80457338u>(&func_80457338)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80457338_50CF = func_80457338_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80457338_50CF);
        r4 = static_cast<uint32_t>(regargs_result_80457338_50CF >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80457338u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    // nop
    f3.d = MemoryInline::FlatReadFloat32(r24);
    r29 = r3;
    f2.d = MemoryInline::FlatReadFloat32((r24 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r24 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
}

loc_808337BC:
{
    r4 = MemoryInline::FlatRead32((r1 + 56));
    r3 = (r4 - r26);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(r0) >> 1);
}

loc_808337D4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r27))) {
        goto loc_80833580;
    }
}

loc_808337D8:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_808337E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80833820;
    }
}

loc_808337E4:
{
}

loc_808337E8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80833820;
    }
}

loc_808337EC:
{
    r3 = (r30 - r26);
    f3.d = MemoryInline::FlatReadFloat32((r1 + 40));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r0 = (r0 + r3);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    r3 = (static_cast<int32_t>(r0) >> 1);
    MemoryInline::FlatWriteFloat32(r24, f3.d);
    MemoryInline::FlatWriteFloat32((r24 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r24 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r24 + 12), f0.d);
    goto loc_80833834;
}

loc_80833820:
{
    r0 = MemoryInline::FlatRead32((r1 + 56));
    r3 = (r0 - r26);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
}

loc_80833834:
{
    r11 = (r1 + 144);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 208));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80833430 func_80833430 preserves=true fpr_mask=0x00000000
