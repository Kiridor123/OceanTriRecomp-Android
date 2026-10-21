#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80473C60(CpuContext* ctx);
extern "C" uint32_t func_80473C60_ra38_1fe_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804736F0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfdux_80473870_loc_0 = 0;
    uint32_t addr_lfdx_80473AA4_loc_0 = 0;
    uint32_t addr_lfdx_80473AF4_loc_0 = 0;
    uint32_t addr_lfdx_80473B28_loc_0 = 0;
    uint32_t addr_lfdx_80473B40_loc_0 = 0;
    uint32_t addr_lfdx_80473B58_loc_0 = 0;
    uint32_t addr_lfdx_80473B70_loc_0 = 0;
    uint32_t addr_lfdx_80473B88_loc_0 = 0;
    uint32_t addr_lfdx_80473BA0_loc_0 = 0;
    uint32_t addr_lfdx_80473BE4_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_rot_0 = 0;
    uint32_t r10_rot_1 = 0;
    uint32_t r10_rot_2 = 0;
    uint32_t r10_rot_3 = 0;
    uint32_t r10_rot_4 = 0;
    uint32_t r10_rot_5 = 0;
    uint32_t r10_rot_6 = 0;
    uint32_t r10_rot_7 = 0;
    uint32_t r11_rot_0 = 0;
    uint32_t r11_rot_1 = 0;
    uint32_t r11_rot_2 = 0;
    uint32_t r11_rot_3 = 0;
    uint32_t r11_rot_4 = 0;
    uint32_t r11_rot_5 = 0;
    uint32_t r11_rot_6 = 0;
    uint32_t r11_rot_7 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r12_rot_5 = 0;
    uint32_t r12_rot_6 = 0;
    uint32_t r12_rot_7 = 0;
    uint32_t r18_rot_0 = 0;
    uint32_t r18_rot_1 = 0;
    uint32_t r18_rot_2 = 0;
    uint32_t r18_rot_3 = 0;
    uint32_t r18_rot_4 = 0;
    uint32_t r18_rot_5 = 0;
    uint32_t r18_rot_6 = 0;
    uint32_t r18_rot_7 = 0;
    uint32_t r18_rot_8 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r19_rot_1 = 0;
    uint32_t r19_rot_2 = 0;
    uint32_t r19_rot_3 = 0;
    uint32_t r19_rot_4 = 0;
    uint32_t r19_rot_5 = 0;
    uint32_t r19_rot_6 = 0;
    uint32_t r19_rot_7 = 0;
    uint32_t r23_addr_0 = 0;
    uint32_t r23_addr_1 = 0;
    uint32_t r23_addr_2 = 0;
    uint32_t r23_addr_3 = 0;
    uint32_t r23_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t stackword16 = 0;
    uint32_t stackword17 = 0;
    uint32_t stackword18 = 0;
    uint32_t stackword19 = 0;
    uint32_t stackword20 = 0;
    uint32_t stackword21 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f25 = ctx->fpr[25];
    PPC_FPR f26 = ctx->fpr[26];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804736F0u);
    goto loc_804736F0;

loc_804736F0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -544), 0, 552u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -544), r1);
    r1 = (r1 + -544);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 548u, (r1 + 548), r0);
    r11 = (r1 + 544);
    // inline leaf 0x804573E8 (8 guest instruction(s))
    MemoryInline::WriteResolvedFloat64(guest_range_2, 488u, (r11 + -56), f25.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 496u, (r11 + -48), f26.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 504u, (r11 + -40), f27.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 512u, (r11 + -32), f28.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 520u, (r11 + -24), f29.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 528u, (r11 + -16), f30.d);
    MemoryInline::WriteResolvedFloat64(guest_range_2, 536u, (r11 + -8), f31.d);
    // end of inlined leaf 0x804573E8
    r11 = (r1 + 488);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    f28.d = MemoryInline::FlatReadFloat64((r2 + -2832));
    r26 = r3;
    f29.d = MemoryInline::FlatReadFloat64((r2 + -2824));
    r27 = r4;
    f31.d = MemoryInline::FlatReadFloat64((r2 + -2808));
    r28 = r5;
    f30.d = MemoryInline::FlatReadFloat64((r2 + -2816));
    r29 = r6;
    f27.d = MemoryInline::FlatReadFloat64((r2 + -2848));
    r23 = (r1 + 32);
    f26.d = MemoryInline::FlatReadFloat64((r2 + -2760));
    r30 = 0;
    f25.d = MemoryInline::FlatReadFloat64((r2 + -2864));
    r25 = 0x80000000u;
    r24 = 1127219200;
    r22 = 0;
}

loc_8047374C:
{
    r3 = (r1 + 32);
    r4 = (r1 + 208);
    ctr = r27;
}

loc_8047375C:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(0))) {
        goto loc_8047377C;
    }
}

loc_80473760:
{
    MemoryInline::FlatWriteFloat64(r4, f25.d);
    MemoryInline::FlatWriteFloat64((r4 + 8), f25.d);
    MemoryInline::FlatWrite32(r3, r22);
    r3 = (r3 + 4);
    MemoryInline::FlatWriteFloat64((r4 + 16), f25.d);
    r4 = (r4 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80473760;
    }
}

loc_8047377C:
{
    r5 = r28;
    r7 = 0;
    goto loc_804738E4;
}

loc_80473788:
{
    r3 = r26;
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2872));
    r0 = 0;
    r4 = 0;
    ctr = r27;
}

loc_804737A0:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(0))) {
        goto loc_80473850;
    }
}

loc_804737A4:
{
    f2.d = MemoryInline::FlatReadFloat64((r5 + 8));
    f1.d = MemoryInline::FlatReadFloat64((r5 + 16));
    f11.d = (-(f2.d));
    f5.d = MemoryInline::FlatReadFloat64(r3);
    f9.d = (-(f1.d));
    f3.d = MemoryInline::FlatReadFloat64((r3 + 8));
    f2.d = (f5.d * f5.d);
    f7.d = MemoryInline::FlatReadFloat64((r3 + 16));
    f1.d = (f9.d * f11.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 200), f9.d);
    f4.d = (f9.d * f9.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 184), f28.d);
    f8.d = (f11.d + f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 192), f11.d);
    f1.d = (f3.d * f3.d);
    f6.d = (f28.d - f4.d);
    f4.d = (f5.d * f7.d);
    f6.d = (f8.d / f6.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 168), f6.d);
    f10.d = (f6.d * f28.d);
    f1.d = (f2.d + f1.d);
    f6.d = (f7.d * f7.d);
    f8.d = (f9.d * f28.d);
    f9.d = (f11.d * f10.d);
    f6.d = (f6.d + f1.d);
    f2.d = (f5.d * f3.d);
    f1.d = (f3.d * f7.d);
    f8.d = (f9.d + f8.d);
    f5.d = (f2.d + f1.d);
    f1.d = (f26.d * f10.d);
    f3.d = (f26.d * f8.d);
    f2.d = (f28.d * f6.d);
    f1.d = (f1.d * f5.d);
    f3.d = (f3.d * f4.d);
    f1.d = (f2.d + f1.d);
    f1.d = (f3.d + f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80473838:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80473844;
    }
}

loc_8047383C:
{
    f0.d = f1.d;
    r0 = r4;
}

loc_80473844:
{
    r3 = (r3 + 24);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804737A4;
    }
}

loc_80473850:
{
    f1.d = MemoryInline::FlatReadFloat64((r5 + 8));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & -4);
    f0.d = MemoryInline::FlatReadFloat64((r5 + 16));
    r0 = (r0 * 24);
    f5.d = (-(f1.d));
    r6 = (r1 + 208);
    f4.d = (-(f0.d));
    r23_addr_3 = (r23 + r4);
    r3 = MemoryInline::FlatRead32(r23_addr_3);
    addr_lfdux_80473870_loc_0 = (r6 + r0);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdux_80473870_loc_0);
    r6 = addr_lfdux_80473870_loc_0;
    r0 = (r3 + 1);
    f2.d = (f4.d * f5.d);
    r23_addr_4 = (r23 + r4);
    MemoryInline::FlatWrite32(r23_addr_4, r0);
    r5 = (r5 + 24);
    r7 = (r7 + 1);
    f1.d = (f4.d * f4.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f28.d);
    f3.d = (f5.d + f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 120), f5.d);
    f2.d = (f28.d - f1.d);
    f0.d = (f0.d + f28.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f4.d);
    f1.d = (f4.d * f28.d);
    MemoryInline::FlatWriteFloat64(r6, f0.d);
    f2.d = (f3.d / f2.d);
    f0.d = MemoryInline::FlatReadFloat64((r6 + 8));
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f28.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f2.d);
    f3.d = (f2.d * f28.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f3.d);
    f2.d = (f5.d * f3.d);
    f0.d = (f0.d + f3.d);
    MemoryInline::FlatWriteFloat64((r6 + 8), f0.d);
    f1.d = (f2.d + f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r6 + 16));
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r6 + 16), f0.d);
}

loc_804738E4:
{
}

loc_804738E8:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r29))) {
        goto loc_80473788;
    }
}

loc_804738EC:
{
    r3 = (r1 + 32);
    r4 = (r1 + 208);
    ctr = r27;
}

loc_804738FC:
{
    if ((static_cast<int32_t>(r27) <= static_cast<int32_t>(0))) {
        goto loc_80473970;
    }
}

loc_80473900:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_80473908:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80473964;
    }
}

loc_8047390C:
{
    r0 = (r0 ^ -2147483648);
    stackword16 = r0;
    MemoryInline::FlatWriteRam32((r1 + 404), r0);
    f0.d = MemoryInline::FlatReadFloat64(r4);
    stackword17 = r24;
    MemoryInline::FlatWriteRam32((r1 + 400), r24);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword17), static_cast<uint32_t>(stackword16));
    stackword18 = r0;
    MemoryInline::FlatWriteRam32((r1 + 412), r0);
    f1.d = (f1.d - f27.d);
    stackword19 = r24;
    MemoryInline::FlatWriteRam32((r1 + 408), r24);
    f2.d = (f0.d / f1.d);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword19), static_cast<uint32_t>(stackword18));
    stackword20 = r0;
    MemoryInline::FlatWriteRam32((r1 + 420), r0);
    stackword21 = r24;
    MemoryInline::FlatWriteRam32((r1 + 416), r24);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword21), static_cast<uint32_t>(stackword20));
    MemoryInline::FlatWriteFloat64(r4, f2.d);
    f3.d = (f1.d - f27.d);
    f2.d = MemoryInline::FlatReadFloat64((r4 + 8));
    f1.d = (f0.d - f27.d);
    f0.d = (f2.d / f3.d);
    MemoryInline::FlatWriteFloat64((r4 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r4 + 16));
    f0.d = (f0.d / f1.d);
    MemoryInline::FlatWriteFloat64((r4 + 16), f0.d);
}

loc_80473964:
{
    r3 = (r3 + 4);
    r4 = (r4 + 24);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80473900;
    }
}

loc_80473970:
{
    r21 = r26;
    r20 = (r1 + 208);
    r31 = 0;
    goto loc_80473C20;
}

loc_80473980:
{
    r3 = r20;
    r5 = r21;
    r4 = (r1 + 8);
    ctx->lr = 0x80473990u;
    if constexpr (KnownRegArgsCpuCall<0x80473C60u>(&func_80473C60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[9] = f9;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80473C60_338D = func_80473C60_ra38_1fe_10_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r4 = regargs_result_80473C60_338D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        f9 = ctx->fpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
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
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80473C60u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        f9 = ctx->fpr[9];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_80473998:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804739A4;
    }
}

loc_804739A0:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f29.d);
}

loc_804739A4:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_804739AC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804739B8;
    }
}

loc_804739B4:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
}

loc_804739B8:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_804739C0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804739CC;
    }
}

loc_804739C8:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f29.d);
}

loc_804739CC:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_804739D4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_804739E0;
    }
}

loc_804739DC:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
}

loc_804739E0:
{
    r9 = (r21 + 8);
    MemoryInline::FlatWriteFloat64(r21, f28.d);
    r7 = r9;
    r6 = (r1 + 16);
    r5 = 1;
    // nop
}

loc_804739F8:
{
    f0.d = MemoryInline::FlatReadFloat64(r6);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r5), static_cast<int32_t>(1));
}

loc_80473A00:
{
    MemoryInline::FlatWriteFloat64(r7, f0.d);
    r4 = 1;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80473C00;
    }
}

loc_80473A0C:
{
    r0 = (r5 + -1);
    r3 = (r5 + -8);
}

loc_80473A18:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_80473BBC;
    }
}

loc_80473A1C:
{
    r8 = 0;
    r10 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_80473A38;
    }
}

loc_80473A28:
{
    r0 = (r25 + -2);
}

loc_80473A30:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_80473A38;
    }
}

loc_80473A34:
{
    r10 = 1;
}

loc_80473A38:
{
}

loc_80473A3C:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80473A74;
    }
}

loc_80473A40:
{
    r11 = (r5 & -2147483648);
    r10 = 1;
    r0 = (r11 + -2147483648);
}

loc_80473A50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80473A68;
    }
}

loc_80473A54:
{
    r0 = (r5 + -1);
    r0 = (r0 & -2147483648);
}

loc_80473A60:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(r0))) {
        goto loc_80473A68;
    }
}

loc_80473A64:
{
    r10 = 0;
}

loc_80473A68:
{
}

loc_80473A6C:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80473A74;
    }
}

loc_80473A70:
{
    r8 = 1;
}

loc_80473A74:
{
}

loc_80473A78:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80473BBC;
    }
}

loc_80473A7C:
{
    r0 = (r3 + 6);
    r8 = r9;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_4 & 536870911);
    ctr = r0;
}

loc_80473A90:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(1))) {
        goto loc_80473BBC;
    }
}

loc_80473A94:
{
    r0 = (r5 - r4);
    r3 = (r4 + 1);
    r10_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r10 = (r10_rot_5 & -8);
    r12 = (r4 + 5);
    addr_lfdx_80473AA4_loc_0 = (r21 + r10);
    f0.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473AA4_loc_0);
    r18 = (r5 - r3);
    guest_range_3 = MemoryInline::ResolveRangeHost(r7, 0, 8u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, r7);
    r0 = (r4 + 2);
    r3 = (r5 - r0);
    r10 = (r4 + 4);
    f1.d = (f1.d * f0.d);
    r19 = (r5 - r10);
    f0.d = MemoryInline::FlatReadFloat64(r8);
    r0 = (r4 + 3);
    r12 = (r5 - r12);
    r11 = (r4 + 6);
    f0.d = (f0.d + f1.d);
    r10 = (r4 + 7);
    r18_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r18), static_cast<uint32_t>(3));
    r18 = (r18_rot_5 & -8);
    r11 = (r5 - r11);
    MemoryInline::FlatWriteFloat64(r8, f0.d);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r3 = (r3_rot_5 & -8);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, r7);
    r0 = (r5 - r0);
    addr_lfdx_80473AF4_loc_0 = (r21 + r18);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473AF4_loc_0);
    r18_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r18 = (r18_rot_6 & -8);
    f0.d = MemoryInline::FlatReadFloat64((r8 + 8));
    r10 = (r5 - r10);
    f1.d = (f2.d * f1.d);
    r19_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r19), static_cast<uint32_t>(3));
    r19 = (r19_rot_5 & -8);
    r12_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r12), static_cast<uint32_t>(3));
    r12 = (r12_rot_5 & -8);
    r11_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(3));
    r11 = (r11_rot_5 & -8);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r10), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r4 = (r4 + 8);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r8 + 8), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, r7);
    addr_lfdx_80473B28_loc_0 = (r21 + r3);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473B28_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r8 + 16));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r8 + 16), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, r7);
    addr_lfdx_80473B40_loc_0 = (r21 + r18);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473B40_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r8 + 24));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r8 + 24), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, r7);
    addr_lfdx_80473B58_loc_0 = (r21 + r19);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473B58_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r8 + 32));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r8 + 32), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, r7);
    addr_lfdx_80473B70_loc_0 = (r21 + r12);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473B70_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r8 + 40));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r8 + 40), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, r7);
    addr_lfdx_80473B88_loc_0 = (r21 + r11);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473B88_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r8 + 48));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r8 + 48), f0.d);
    f2.d = MemoryInline::ReadResolvedFloat64(guest_range_3, 0u, r7);
    addr_lfdx_80473BA0_loc_0 = (r21 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473BA0_loc_0);
    f0.d = MemoryInline::FlatReadFloat64((r8 + 56));
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64((r8 + 56), f0.d);
    r8 = (r8 + 64);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80473A94;
    }
}

loc_80473BBC:
{
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r3 = (r3_rot_7 & -8);
    r0 = (r5 - r4);
    r3 = (r21 + r3);
    ctr = r0;
}

loc_80473BD0:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r5))) {
        goto loc_80473C00;
    }
}

loc_80473BD4:
{
    r0 = (r5 - r4);
    f2.d = MemoryInline::FlatReadFloat64(r7);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & -8);
    f0.d = MemoryInline::FlatReadFloat64(r3);
    addr_lfdx_80473BE4_loc_0 = (r21 + r0);
    f1.d = MemoryInline::FlatReadFloat64(addr_lfdx_80473BE4_loc_0);
    r4 = (r4 + 1);
    f1.d = (f2.d * f1.d);
    f0.d = (f0.d + f1.d);
    MemoryInline::FlatWriteFloat64(r3, f0.d);
    r3 = (r3 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80473BD4;
    }
}

loc_80473C00:
{
    r5 = (r5 + 1);
    r7 = (r7 + 8);
}

loc_80473C0C:
{
    r6 = (r6 + 8);
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(2))) {
        goto loc_804739F8;
    }
}

loc_80473C14:
{
    r21 = (r21 + 24);
    r20 = (r20 + 24);
    r31 = (r31 + 1);
}

loc_80473C20:
{
}

loc_80473C24:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r27))) {
        goto loc_80473980;
    }
}

loc_80473C28:
{
    r30 = (r30 + 1);
}

loc_80473C30:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(2))) {
        goto loc_8047374C;
    }
}

loc_80473C34:
{
    r11 = (r1 + 544);
    // inline leaf 0x80457434 (8 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 64u, true, false);
    f25.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 0u, (r11 + -56));
    f26.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 8u, (r11 + -48));
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 16u, (r11 + -40));
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 24u, (r11 + -32));
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 32u, (r11 + -24));
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 40u, (r11 + -16));
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_4, 48u, (r11 + -8));
    // end of inlined leaf 0x80457434
    r11 = (r1 + 488);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    // end of inlined leaf 0x804574B0
    r0 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r1 + 548));
    ctx->lr = r0;
    r1 = (r1 + 544);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
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
    ctx->fpr[25] = f25;
    ctx->fpr[26] = f26;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804736F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804736F0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFE000FFF fpr_write=0xFE000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804736F0 func_804736F0 preserves=true fpr_mask=0x00000000
