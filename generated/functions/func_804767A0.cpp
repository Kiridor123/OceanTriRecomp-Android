#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804767A0_ra38_1fe_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t addr_lfsx_8047691C_loc_0 = 0;
    uint32_t addr_lfsx_80476924_loc_0 = 0;
    uint32_t addr_lfsx_80476930_loc_0 = 0;
    uint32_t addr_lfsx_80476960_loc_0 = 0;
    uint32_t addr_lfsx_80476980_loc_0 = 0;
    uint32_t addr_lfsx_804769A8_loc_0 = 0;
    uint32_t addr_lfsx_804769CC_loc_0 = 0;
    uint32_t addr_lfsx_804769EC_loc_0 = 0;
    uint32_t addr_lfsx_80476A10_loc_0 = 0;
    uint32_t addr_lfsx_80476A48_loc_0 = 0;
    uint32_t addr_stfsx_80476938_loc_0 = 0;
    uint32_t addr_stfsx_80476964_loc_0 = 0;
    uint32_t addr_stfsx_80476994_loc_0 = 0;
    uint32_t addr_stfsx_804769B8_loc_0 = 0;
    uint32_t addr_stfsx_804769DC_loc_0 = 0;
    uint32_t addr_stfsx_804769F8_loc_0 = 0;
    uint32_t addr_stfsx_80476A1C_loc_0 = 0;
    uint32_t addr_stfsx_80476A54_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
    uint32_t fctiwzword6 = 0;
    uint32_t fctiwzword7 = 0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_10 = 0;
    uint32_t r26_rot_11 = 0;
    uint32_t r26_rot_12 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r26_rot_3 = 0;
    uint32_t r26_rot_4 = 0;
    uint32_t r26_rot_5 = 0;
    uint32_t r26_rot_6 = 0;
    uint32_t r26_rot_7 = 0;
    uint32_t r26_rot_8 = 0;
    uint32_t r26_rot_9 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r27_rot_3 = 0;
    uint32_t r27_rot_4 = 0;
    uint32_t stackword18 = 0;
    uint32_t stackword19 = 0;
    uint32_t stackword20 = 0;
    uint32_t stackword21 = 0;
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
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804767A0u);
    goto loc_804767A0;

loc_804767A0:
{
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r11 = (r1 + 144);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r0 = MemoryInline::FlatRead32((r4 + 316));
}

loc_804767CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804767DC;
    }
}

loc_804767D0:
{
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32((r4 + 316), r0);
    goto loc_80476D2C;
}

loc_804767DC:
{
    r8 = MemoryInline::FlatRead32((r4 + 360));
    r7 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r3 + 4));
}

loc_804767EC:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    MemoryInline::FlatWriteRam32((r1 + 56), r7);
    MemoryInline::FlatWriteRam32((r1 + 60), r6);
    MemoryInline::FlatWriteRam32((r1 + 64), r5);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80476828;
    }
}

loc_80476808:
{
    r6 = MemoryInline::FlatRead32(r8);
    r5 = MemoryInline::FlatRead32((r8 + 4));
    r3 = MemoryInline::FlatRead32((r8 + 8));
    r0 = MemoryInline::FlatRead32((r8 + 12));
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
}

loc_80476828:
{
    r8 = MemoryInline::FlatRead32((r4 + 364));
}

loc_80476830:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80476844;
    }
}

loc_80476834:
{
    r3 = MemoryInline::FlatRead32(r8);
    r5 = MemoryInline::FlatRead32((r8 + 4));
    r6 = MemoryInline::FlatRead32((r8 + 8));
    r7 = MemoryInline::FlatRead32((r8 + 12));
}

loc_80476844:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -2648));
    r30 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 312));
    r28 = 0;
    f5.d = MemoryInline::FlatReadFloat32((r2 + -2644));
    r0 = 1127219200;
    f3.d = MemoryInline::FlatReadFloat32((r4 + 356));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -2640));
    r29 = 4;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 348));
    f5.d = PpcFmulsInline(f5.d, f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 292));
    f6.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2632));
}

loc_80476880:
{
    r10 = r4;
    r11 = r4;
    r12 = r4;
    r8 = (r1 + 8);
    r9 = (r1 + 56);
    r31 = (r1 + 24);
    ctr = r29;
    // nop
}

loc_804768A0:
{
    r25 = MemoryInline::FlatRead32((r4 + 360));
}

loc_804768A8:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_804768E0;
    }
}

loc_804768AC:
{
    r26 = MemoryInline::FlatRead32(r8);
    r27 = MemoryInline::FlatRead32(r9);
    r25 = MemoryInline::FlatRead32(r26);
    r26 = (r26 + 4);
    r27 = MemoryInline::FlatRead32(r27);
    stackword18 = r0;
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    r25 = (r27 + r25);
    r25 = (r25 ^ -2147483648);
    stackword19 = r25;
    MemoryInline::FlatWriteRam32((r1 + 76), r25);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword18), static_cast<uint32_t>(stackword19));
    MemoryInline::FlatWrite32(r8, r26);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    goto loc_804768FC;
}

loc_804768E0:
{
    r25 = MemoryInline::FlatRead32(r9);
    stackword20 = r0;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    r25 = MemoryInline::FlatRead32(r25);
    r25 = (r25 ^ -2147483648);
    stackword21 = r25;
    MemoryInline::FlatWriteRam32((r1 + 84), r25);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword20), static_cast<uint32_t>(stackword21));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
}

loc_804768FC:
{
    r27 = MemoryInline::FlatRead32((r4 + 16));
    r26 = MemoryInline::FlatRead32((r4 + 20));
    r25 = MemoryInline::FlatRead32((r4 + 24));
    r27_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(2));
    r27 = (r27_rot_3 & -4);
    r24 = MemoryInline::FlatRead32(r10);
    r26_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r26 = (r26_rot_3 & -4);
    f9.d = MemoryInline::FlatReadFloat32((r4 + 36));
    r25_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r25 = (r25_rot_3 & -4);
    addr_lfsx_8047691C_loc_0 = (r24 + r27);
    f8.d = MemoryInline::FlatReadFloat32(addr_lfsx_8047691C_loc_0);
    f7.d = MemoryInline::FlatReadFloat32((r4 + 40));
    addr_lfsx_80476924_loc_0 = (r24 + r26);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_80476924_loc_0);
    f8.d = PpcFmulsInline(f9.d, f8.d);
    f10.d = MemoryInline::FlatReadFloat32((r4 + 44));
    addr_lfsx_80476930_loc_0 = (r24 + r25);
    f9.d = MemoryInline::FlatReadFloat32(addr_lfsx_80476930_loc_0);
    f2.d = PpcFmulsInline(f7.d, f2.d);
    addr_stfsx_80476938_loc_0 = (r24 + r25);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80476938_loc_0, f11.d);
    f7.d = PpcFmulsInline(f10.d, f9.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f2.d));
    r26 = MemoryInline::FlatRead32((r4 + 68));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_8047694C:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8047696C;
    }
}

loc_80476954:
{
    r26 = MemoryInline::FlatRead32((r4 + 64));
    r27 = MemoryInline::FlatRead32((r10 + 48));
    r26_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r26 = (r26_rot_4 & -4);
    addr_lfsx_80476960_loc_0 = (r27 + r26);
    f9.d = MemoryInline::FlatReadFloat32(addr_lfsx_80476960_loc_0);
    addr_stfsx_80476964_loc_0 = (r27 + r26);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80476964_loc_0, f11.d);
    goto loc_80476970;
}

loc_8047696C:
{
    f9.d = f11.d;
}

loc_80476970:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 124), 0, 88u, true, false);
    r26 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r4 + 124));
    r24 = MemoryInline::FlatRead32((r11 + 76));
    r26_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r26 = (r26_rot_6 & -4);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r4 + 160));
    addr_lfsx_80476980_loc_0 = (r24 + r26);
    f8.d = MemoryInline::FlatReadFloat32(addr_lfsx_80476980_loc_0);
    f10.d = MemoryInline::FlatReadFloat32((r2 + -2652));
    f7.d = PpcFmulsInline(f8.d, f7.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f8.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f7.d));
    addr_stfsx_80476994_loc_0 = (r24 + r26);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80476994_loc_0, f7.d);
    r26 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r4 + 128));
    r25 = MemoryInline::FlatRead32((r11 + 80));
    r26_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r26 = (r26_rot_7 & -4);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r4 + 164));
    addr_lfsx_804769A8_loc_0 = (r25 + r26);
    f8.d = MemoryInline::FlatReadFloat32(addr_lfsx_804769A8_loc_0);
    f7.d = PpcFmulsInline(f8.d, f7.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f8.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f7.d));
    addr_stfsx_804769B8_loc_0 = (r25 + r26);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804769B8_loc_0, f7.d);
    r26 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r4 + 132));
    r27 = MemoryInline::FlatRead32((r11 + 84));
    r26_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r26 = (r26_rot_8 & -4);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r4 + 168));
    addr_lfsx_804769CC_loc_0 = (r27 + r26);
    f8.d = MemoryInline::FlatReadFloat32(addr_lfsx_804769CC_loc_0);
    f7.d = PpcFmulsInline(f8.d, f7.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f8.d));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f7.d));
    addr_stfsx_804769DC_loc_0 = (r27 + r26);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804769DC_loc_0, f7.d);
    r26 = MemoryInline::ReadResolved32(guest_range_2, 80u, (r4 + 204));
    r24 = MemoryInline::FlatRead32((r12 + 172));
    r26_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r26 = (r26_rot_9 & -4);
    addr_lfsx_804769EC_loc_0 = (r24 + r26);
    f8.d = MemoryInline::FlatReadFloat32(addr_lfsx_804769EC_loc_0);
    f7.d = PpcFmulsInline(f8.d, f3.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f7.d));
    addr_stfsx_804769F8_loc_0 = (r24 + r26);
    MemoryInline::FlatWriteFloat32(addr_stfsx_804769F8_loc_0, f7.d);
    f7.d = PpcFmulsInline(f7.d, f3.d);
    r26 = MemoryInline::ReadResolved32(guest_range_2, 84u, (r4 + 208));
    r25 = MemoryInline::FlatRead32((r12 + 176));
    r26_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r26 = (r26_rot_10 & -4);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f7.d));
    addr_lfsx_80476A10_loc_0 = (r25 + r26);
    f9.d = MemoryInline::FlatReadFloat32(addr_lfsx_80476A10_loc_0);
    f7.d = PpcFmulsInline(f9.d, f3.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f7.d));
    addr_stfsx_80476A1C_loc_0 = (r25 + r26);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80476A1C_loc_0, f7.d);
    f8.d = PpcFmulsInline(f7.d, f3.d);
    f7.d = MemoryInline::FlatReadFloat32((r10 + 296));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f8.d));
    f7.d = PpcFmulsInline(f1.d, f7.d);
    f8.d = PpcFmulsInline(f4.d, f8.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f7.d));
    MemoryInline::FlatWriteFloat32((r10 + 296), f9.d);
    r26 = MemoryInline::FlatRead32((r10 + 244));
    r27 = MemoryInline::FlatRead32((r10 + 228));
    r26_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r26 = (r26_rot_11 & -4);
    addr_lfsx_80476A48_loc_0 = (r27 + r26);
    f8.d = MemoryInline::FlatReadFloat32(addr_lfsx_80476A48_loc_0);
    f7.d = PpcFmulsInline(f8.d, f3.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f9.d + f7.d));
    addr_stfsx_80476A54_loc_0 = (r27 + r26);
    MemoryInline::FlatWriteFloat32(addr_stfsx_80476A54_loc_0, f7.d);
    f7.d = PpcFmulsInline(f7.d, f3.d);
    r26 = MemoryInline::FlatRead32((r10 + 244));
    r27 = (r26 + 1);
    MemoryInline::FlatWrite32((r10 + 244), r27);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f8.d - f7.d));
    r26 = MemoryInline::FlatRead32((r10 + 260));
    MemoryInline::FlatWriteFloat32(r31, f7.d);
}

loc_80476A78:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r26))) {
        goto loc_80476A80;
    }
}

loc_80476A7C:
{
    MemoryInline::FlatWrite32((r10 + 244), r28);
}

loc_80476A80:
{
    f7.d = MemoryInline::FlatReadFloat32(r31);
    r8 = (r8 + 4);
    r9 = (r9 + 4);
    r10 = (r10 + 4);
    f7.d = PpcFmulsInline(f7.d, f5.d);
    r11 = (r11 + 12);
    r12 = (r12 + 8);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f2.d));
    MemoryInline::FlatWriteFloat32(r31, f2.d);
    r31 = (r31 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804768A0;
    }
}

loc_80476AAC:
{
    f31.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f13.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f10.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f13.d));
    f12.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f13.d));
    r26 = MemoryInline::FlatRead32((r1 + 56));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f31.d));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f7.d));
    r27 = (r26 + 4);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f2.d));
    r12 = (r31 + 4);
    r9 = MemoryInline::FlatRead32((r1 + 68));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f11.d));
    f9.d = PpcFmulsInline(f7.d, f6.d);
    r11 = MemoryInline::FlatRead32((r1 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 368));
    r8 = (r9 + 4);
    r10 = (r11 + 4);
    f8.d = PpcFmulsInline(f8.d, f6.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f9.d));
    MemoryInline::FlatWriteRam32((r1 + 56), r27);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f8.d));
    f7.d = PpcFmulsInline(f30.d, f6.d);
    MemoryInline::FlatWriteRam32((r1 + 60), r12);
    f2.d = PpcFmulsInline(f10.d, f2.d);
    MemoryInline::FlatWriteRam32((r1 + 68), r8);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f13.d + f7.d));
    f2.d = PPC_Fctiwz(f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f10.d);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f13.d + f11.d));
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    r27 = fctiwzword0;
    f7.d = PpcFmulsInline(f7.d, f6.d);
    MemoryInline::FlatWrite32(r26, r27);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 368));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f12.d + f7.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f9.d);
    f2.d = PpcFmulsInline(f9.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f8.d);
    f2.d = PPC_Fctiwz(f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f7.d);
    fctiwzword1 = PPC_FprLowWordInline(f2.d);
    r12 = fctiwzword1;
    MemoryInline::FlatWrite32(r31, r12);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 368));
    MemoryInline::FlatWriteRam32((r1 + 64), r10);
    f2.d = PpcFmulsInline(f8.d, f2.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword2 = PPC_FprLowWordInline(f2.d);
    r8 = fctiwzword2;
    MemoryInline::FlatWrite32(r11, r8);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 368));
    f2.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword3 = PPC_FprLowWordInline(f2.d);
    r8 = fctiwzword3;
    MemoryInline::FlatWrite32(r9, r8);
    r8 = MemoryInline::FlatRead32((r4 + 364));
}

loc_80476BA0:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80476C14;
    }
}

loc_80476BA4:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 372));
    f2.d = PpcFmulsInline(f10.d, f2.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword4 = PPC_FprLowWordInline(f2.d);
    r8 = fctiwzword4;
    MemoryInline::FlatWrite32(r3, r8);
    r3 = (r3 + 4);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 372));
    f2.d = PpcFmulsInline(f9.d, f2.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword5 = PPC_FprLowWordInline(f2.d);
    r8 = fctiwzword5;
    MemoryInline::FlatWrite32(r5, r8);
    r5 = (r5 + 4);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 372));
    f2.d = PpcFmulsInline(f8.d, f2.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword6 = PPC_FprLowWordInline(f2.d);
    r8 = fctiwzword6;
    MemoryInline::FlatWrite32(r6, r8);
    r6 = (r6 + 4);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 372));
    f2.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword7 = PPC_FprLowWordInline(f2.d);
    r8 = fctiwzword7;
    MemoryInline::FlatWrite32(r7, r8);
    r7 = (r7 + 4);
}

loc_80476C14:
{
    r8 = MemoryInline::FlatRead32((r4 + 16));
    r9 = (r8 + 1);
    MemoryInline::FlatWrite32((r4 + 16), r9);
    r8 = MemoryInline::FlatRead32((r4 + 28));
}

loc_80476C28:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r8))) {
        goto loc_80476C30;
    }
}

loc_80476C2C:
{
    MemoryInline::FlatWrite32((r4 + 16), r28);
}

loc_80476C30:
{
    r8 = MemoryInline::FlatRead32((r4 + 20));
    r9 = (r8 + 1);
    MemoryInline::FlatWrite32((r4 + 20), r9);
    r8 = MemoryInline::FlatRead32((r4 + 28));
}

loc_80476C44:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r8))) {
        goto loc_80476C4C;
    }
}

loc_80476C48:
{
    MemoryInline::FlatWrite32((r4 + 20), r28);
}

loc_80476C4C:
{
    r8 = MemoryInline::FlatRead32((r4 + 24));
    r10 = (r4 + 8);
    r9 = (r8 + 1);
    MemoryInline::FlatWrite32((r4 + 24), r9);
    r8 = MemoryInline::FlatRead32((r4 + 28));
}

loc_80476C64:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r8))) {
        goto loc_80476C6C;
    }
}

loc_80476C68:
{
    MemoryInline::FlatWrite32((r10 + 16), r28);
}

loc_80476C6C:
{
    r9 = MemoryInline::FlatRead32((r4 + 68));
}

loc_80476C74:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80476C90;
    }
}

loc_80476C78:
{
    r8 = MemoryInline::FlatRead32((r4 + 64));
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r4 + 64), r8);
}

loc_80476C88:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r9))) {
        goto loc_80476C90;
    }
}

loc_80476C8C:
{
    MemoryInline::FlatWrite32((r4 + 64), r28);
}

loc_80476C90:
{
    r8 = MemoryInline::FlatRead32((r4 + 124));
    r9 = (r8 + 1);
    MemoryInline::FlatWrite32((r4 + 124), r9);
    r8 = MemoryInline::FlatRead32((r4 + 136));
}

loc_80476CA4:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r8))) {
        goto loc_80476CAC;
    }
}

loc_80476CA8:
{
    MemoryInline::FlatWrite32((r4 + 124), r28);
}

loc_80476CAC:
{
    r8 = MemoryInline::FlatRead32((r4 + 128));
    r9 = (r8 + 1);
    MemoryInline::FlatWrite32((r4 + 128), r9);
    r8 = MemoryInline::FlatRead32((r4 + 140));
}

loc_80476CC0:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r8))) {
        goto loc_80476CC8;
    }
}

loc_80476CC4:
{
    MemoryInline::FlatWrite32((r4 + 128), r28);
}

loc_80476CC8:
{
    r8 = MemoryInline::FlatRead32((r4 + 132));
    r10 = (r4 + 8);
    r9 = (r8 + 1);
    MemoryInline::FlatWrite32((r4 + 132), r9);
    r8 = MemoryInline::FlatRead32((r4 + 144));
}

loc_80476CE0:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r8))) {
        goto loc_80476CE8;
    }
}

loc_80476CE4:
{
    MemoryInline::FlatWrite32((r10 + 124), r28);
}

loc_80476CE8:
{
    r8 = MemoryInline::FlatRead32((r4 + 204));
    r9 = (r8 + 1);
    MemoryInline::FlatWrite32((r4 + 204), r9);
    r8 = MemoryInline::FlatRead32((r4 + 212));
}

loc_80476CFC:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r8))) {
        goto loc_80476D04;
    }
}

loc_80476D00:
{
    MemoryInline::FlatWrite32((r4 + 204), r28);
}

loc_80476D04:
{
    r8 = MemoryInline::FlatRead32((r4 + 208));
    r9 = (r8 + 1);
    MemoryInline::FlatWrite32((r4 + 208), r9);
    r8 = MemoryInline::FlatRead32((r4 + 216));
}

loc_80476D18:
{
    if ((static_cast<uint32_t>(r9) < static_cast<uint32_t>(r8))) {
        goto loc_80476D20;
    }
}

loc_80476D1C:
{
    MemoryInline::FlatWrite32((r4 + 208), r28);
}

loc_80476D20:
{
    r30 = (r30 + 1);
}

loc_80476D28:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(96))) {
        goto loc_80476880;
    }
}

loc_80476D2C:
{
    r11 = (r1 + 144);
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
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
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_804767A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804767A0_ra38_1fe_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00001FFF gpr_write=0x00001FEB gpr_return=0x00000008 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804767A0 func_804767A0 preserves=true fpr_mask=0x00000000
