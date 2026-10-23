#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E2948(CpuContext* ctx);
extern "C" uint64_t func_800E2948_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802C221C(CpuContext* ctx);
extern "C" uint64_t func_802C221C_ra98_1ea_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);

extern "C" uint64_t func_80136E9C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint32_t r4_rot_6 = 0;
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    goto loc_80136E9C;

loc_80136E9C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r0);
    r11 = (r1 + 144);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r0);
    r0 = MemoryInline::FlatRead32((r2 + -28016));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r0);
    r3 = (r3 + 36);
    ctx->lr = 0x80136ED8u;
    if constexpr (KnownRegArgsCpuCall<0x800E2948u>(&func_800E2948)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800E2948_CC4 = func_800E2948_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E2948_CC4);
        r4 = static_cast<uint32_t>(regargs_result_800E2948_CC4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x800E2948u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r31 = r3;
    r30 = 0;
    r29 = MemoryInline::FlatRead8((r27 + 559));
    r3 = r27;
    // inline leaf 0x80130168 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 552));
    r3 = (r0 & 1);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80130168
}

loc_80136EF0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80136F0C;
    }
}

loc_80136EF4:
{
    f1.d = MemoryInline::FlatReadFloat32((r27 + 396));
    f0.d = MemoryInline::FlatReadFloat32((r27 + 528));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80136F00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80136F0C;
    }
}

loc_80136F04:
{
    r30 = 3;
    r29 = (r29 + 3);
}

loc_80136F0C:
{
    r3 = r30;
    r4 = 1;
    // inline leaf 0x802B02C0 (13 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + -21440);
    r0 = MemoryInline::FlatRead8((r5 + 3014));
    r0 = (r0 * 476);
    r5 = (r5 + r0);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r3 = (r5 + r0);
    r0 = (r4 & 255);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 3108));
    // end of inlined leaf 0x802B02C0
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 32);
    r4 = (r1 + 16);
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
    r3 = (r29 & 255);
    r4 = 1;
    // inline leaf 0x802B02C0 (13 guest instruction(s))
    r5 = 0x806C0000u;
    r5 = (r5 + -21440);
    r0 = MemoryInline::FlatRead8((r5 + 3014));
    r0 = (r0 * 476);
    r5 = (r5 + r0);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r3 = (r5 + r0);
    r0 = (r4 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 3108));
    // end of inlined leaf 0x802B02C0
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 28);
    r4 = (r1 + 12);
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
    r4 = MemoryInline::FlatRead8((r1 + 32));
}

loc_80136F4C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80136F58;
    }
}

loc_80136F50:
{
    r0 = MemoryInline::FlatRead8((r1 + 20));
    goto loc_80136F6C;
}

loc_80136F58:
{
    r3 = MemoryInline::FlatRead8((r1 + 28));
    r0 = MemoryInline::FlatRead8((r1 + 20));
    r0 = (r3 * r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80136F6C:
{
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r1 + 33));
}

loc_80136F78:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80136F88;
    }
}

loc_80136F7C:
{
    r30 = MemoryInline::FlatRead8((r1 + 21));
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r30));
    goto loc_80136FA0;
}

loc_80136F88:
{
    r30 = MemoryInline::FlatRead8((r1 + 21));
    r0 = MemoryInline::FlatRead8((r1 + 29));
    r0 = (r0 * r30);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
}

loc_80136FA0:
{
    r3 = MemoryInline::FlatRead8((r1 + 34));
}

loc_80136FA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80136FB8;
    }
}

loc_80136FAC:
{
    r29 = MemoryInline::FlatRead8((r1 + 22));
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r29));
    goto loc_80136FD0;
}

loc_80136FB8:
{
    r29 = MemoryInline::FlatRead8((r1 + 22));
    r0 = MemoryInline::FlatRead8((r1 + 30));
    r0 = (r0 * r29);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r0));
}

loc_80136FD0:
{
    r4 = 0;
    r3 = MemoryInline::FlatRead16((r1 + 44));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80136FDC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(255))) {
        goto loc_80136FF0;
    }
}

loc_80136FE0:
{
    r0 = 0;
}

loc_80136FE8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80136FF0;
    }
}

loc_80136FEC:
{
    r4 = r3;
}

loc_80136FF0:
{
    r3 = MemoryInline::FlatRead16((r1 + 46));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80136FF8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(255))) {
        goto loc_8013700C;
    }
}

loc_80136FFC:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80137004:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_8013700C;
    }
}

loc_80137008:
{
    r4 = r3;
}

loc_8013700C:
{
    r3 = MemoryInline::FlatRead16((r1 + 48));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80137014:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(255))) {
        goto loc_80137028;
    }
}

loc_80137018:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_80137020:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_80137028;
    }
}

loc_80137024:
{
    r4 = r3;
}

loc_80137028:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = 0;
    r3 = 255;
}

loc_80137038:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(255))) {
        goto loc_80137054;
    }
}

loc_8013703C:
{
    r5 = MemoryInline::FlatRead16((r1 + 44));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & -256);
    r4 = (r4 - r5);
    r4 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r6));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r4));
}

loc_80137054:
{
    r4 = MemoryInline::FlatRead16((r1 + 44));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8013705C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(255))) {
        goto loc_80137068;
    }
}

loc_80137060:
{
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r3));
    goto loc_80137074;
}

loc_80137068:
{
}

loc_8013706C:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_80137074;
    }
}

loc_80137070:
{
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r0));
}

loc_80137074:
{
}

loc_80137078:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(255))) {
        goto loc_80137094;
    }
}

loc_8013707C:
{
    r5 = MemoryInline::FlatRead16((r1 + 46));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r4 = (r4_rot_3 & -256);
    r4 = (r4 - r5);
    r4 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r6));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r4));
}

loc_80137094:
{
    r4 = MemoryInline::FlatRead16((r1 + 46));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_8013709C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(255))) {
        goto loc_801370A8;
    }
}

loc_801370A0:
{
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r3));
    goto loc_801370B4;
}

loc_801370A8:
{
}

loc_801370AC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_801370B4;
    }
}

loc_801370B0:
{
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
}

loc_801370B4:
{
}

loc_801370B8:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(255))) {
        goto loc_801370D4;
    }
}

loc_801370BC:
{
    r5 = MemoryInline::FlatRead16((r1 + 48));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r4 = (r4_rot_5 & -256);
    r4 = (r4 - r5);
    r4 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r6));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r4));
}

loc_801370D4:
{
    r4 = MemoryInline::FlatRead16((r1 + 48));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_801370DC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(255))) {
        goto loc_801370E8;
    }
}

loc_801370E0:
{
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r3));
    goto loc_801370F4;
}

loc_801370E8:
{
}

loc_801370EC:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_801370F4;
    }
}

loc_801370F0:
{
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r0));
}

loc_801370F4:
{
    r3 = (r27 + 392);
    r4 = (r1 + 24);
    ctx->lr = 0x80137100u;
    if constexpr (KnownRegArgsCpuCall<0x802C221Cu>(&func_802C221C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_802C221C_3B31 = func_802C221C_ra98_1ea_18_0(ctx, r3, r4, r7, f1.d, f3.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802C221C_3B31);
        r4 = static_cast<uint32_t>(regargs_result_802C221C_3B31 >> 32);
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802C221Cu>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80137104:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801372FC;
    }
}

loc_80137108:
{
    r0 = MemoryInline::FlatRead8((r1 + 25));
    r3 = MemoryInline::FlatRead8((r1 + 24));
}

loc_80137114:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80137130;
    }
}

loc_80137118:
{
    r0 = MemoryInline::FlatRead8((r1 + 26));
}

loc_80137120:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80137128;
    }
}

loc_80137124:
{
    goto loc_80137140;
}

loc_80137128:
{
    r3 = r0;
    goto loc_80137140;
}

loc_80137130:
{
    r3 = MemoryInline::FlatRead8((r1 + 26));
}

loc_80137138:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80137140;
    }
}

loc_8013713C:
{
    r3 = r0;
}

loc_80137140:
{
    r0 = (r3 & 255);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28192));
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28052));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = MemoryInline::FlatRead16((r1 + 44));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead8((r1 + 20));
    r0 = (r0 - r3);
    f4.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28208));
    f5.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = PPC_Fctiwz(f5.d);
    fctiwzword0 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f1.d);
    r0 = fctiwzword0;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f1.d);
    r4 = fctiwzword1;
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead16((r1 + 46));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r30 - r3);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f5.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = PPC_Fctiwz(f5.d);
    fctiwzword2 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 88), f1.d);
    r0 = fctiwzword2;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword3 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f1.d);
    r0 = fctiwzword3;
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead16((r1 + 48));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r29 - r3);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 60), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 56));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f1.d = PPC_Fctiwz(f3.d);
    fctiwzword4 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 104), f1.d);
    r0 = fctiwzword4;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f0.d);
    r0 = fctiwzword5;
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r0));
    r0 = 0;
    r3 = 255;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_801372A4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(255))) {
        goto loc_801372B0;
    }
}

loc_801372A8:
{
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r3));
    goto loc_801372BC;
}

loc_801372B0:
{
}

loc_801372B4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_801372BC;
    }
}

loc_801372B8:
{
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r0));
}

loc_801372BC:
{
    r4 = MemoryInline::FlatRead16((r1 + 46));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_801372C4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(255))) {
        goto loc_801372D0;
    }
}

loc_801372C8:
{
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r3));
    goto loc_801372DC;
}

loc_801372D0:
{
}

loc_801372D4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_801372DC;
    }
}

loc_801372D8:
{
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
}

loc_801372DC:
{
    r4 = MemoryInline::FlatRead16((r1 + 48));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_801372E4:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(255))) {
        goto loc_801372F0;
    }
}

loc_801372E8:
{
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r3));
    goto loc_801372FC;
}

loc_801372F0:
{
}

loc_801372F4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_801372FC;
    }
}

loc_801372F8:
{
    MemoryInline::FlatWriteRam16((r1 + 48), static_cast<uint16_t>(r0));
}

loc_801372FC:
{
    r3 = MemoryInline::FlatRead32((r27 + 1884));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & 255);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 36), static_cast<uint16_t>(r0));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_3 & 255);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 38), static_cast<uint16_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_4 & 255);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWriteRam16((r1 + 40), static_cast<uint16_t>(r0));
    r6 = (r1 + 44);
    r7 = (r1 + 36);
    r5 = (r28 & 255);
    r0 = 3;
    ctr = r0;
}

loc_80137338:
{
}

loc_8013733C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(1))) {
        goto loc_8013734C;
    }
}

loc_80137340:
{
    r0 = MemoryInline::FlatRead16(r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
    goto loc_80137390;
}

loc_8013734C:
{
    r4 = MemoryInline::FlatRead16(r6);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r3 = MemoryInline::FlatRead16(r7);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_80137358:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r3))) {
        goto loc_80137378;
    }
}

loc_8013735C:
{
    r0 = (r3 + -5);
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16(r7);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8013736C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r4))) {
        goto loc_80137390;
    }
}

loc_80137370:
{
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r4));
    goto loc_80137390;
}

loc_80137378:
{
    r0 = (r3 + 5);
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16(r7);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80137388:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r4))) {
        goto loc_80137390;
    }
}

loc_8013738C:
{
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r4));
}

loc_80137390:
{
    r6 = (r6 + 2);
    r7 = (r7 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80137338;
    }
}

loc_8013739C:
{
    r0 = MemoryInline::FlatRead16((r1 + 36));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 38));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 21), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 40));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 22), static_cast<uint8_t>(r0));
    r29 = 0;
    r28 = MemoryInline::FlatRead32((r1 + 20));
    goto loc_801373EC;
}

loc_801373CC:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r28);
    r3 = (r27 + 36);
    r4 = r29;
    r5 = 0;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x801373E8u;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r29 = (r29 + 1);
}

loc_801373EC:
{
}

loc_801373F0:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r31))) {
        goto loc_801373CC;
    }
}

loc_801373F4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 132u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r1 + 20));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r3 = (r3_rot_1 & -16777216);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r1 + 21));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_5 & -65536);
    r3 = (r3 | r0);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r1 + 22));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & -256);
    r0 = (r0 | 255);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r27 + 1884), r0);
    r11 = (r1 + 144);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 128u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80136E9C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80136E9C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80136E9C func_80136E9C preserves=true fpr_mask=0x00000000
