#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004D3DC(CpuContext* ctx);
extern "C" uint64_t func_8004D3DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8021290C(CpuContext* ctx);
extern "C" uint64_t func_8021290C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80213060(CpuContext* ctx);
extern "C" uint64_t func_80213060_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80213120(CpuContext* ctx);
extern "C" uint64_t func_80213120_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80217E04(CpuContext* ctx);
extern "C" uint64_t func_80217E04_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802A8F78(CpuContext* ctx);
extern "C" uint64_t func_802A8F78_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80360308(CpuContext* ctx);
extern "C" uint64_t func_80360308_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_8035FEF8_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t addr_lhax_8004D404_loc_0 = 0;
    uint32_t addr_lhax_8004D4F8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_8035FEF8;

loc_8035FEF8:
{
}

loc_8035FEFC:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8035FF1C;
    }
}

loc_8035FF00:
{
    r3 = MemoryInline::FlatRead8((r21 + 7));
    r4 = MemoryInline::FlatRead8((r21 + 156));
    r5 = r26;
    r6 = r25;
    ctx->lr = 0x8035FF14u;
    if constexpr (KnownRegArgsCpuCall<0x80213060u>(&func_80213060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_80213060_C55 = func_80213060_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80213060_C55);
        r4 = static_cast<uint32_t>(regargs_result_80213060_C55 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80213060u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    r26 = r3;
    goto loc_8035FF34;
}

loc_8035FF1C:
{
    r3 = MemoryInline::FlatRead8((r21 + 7));
    r4 = MemoryInline::FlatRead8((r21 + 156));
    r5 = r26;
    r6 = r24;
    ctx->lr = 0x8035FF30u;
    if constexpr (KnownRegArgsCpuCall<0x80213120u>(&func_80213120)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_80213120_117C = func_80213120_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80213120_117C);
        r4 = static_cast<uint32_t>(regargs_result_80213120_117C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80213120u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
    }
    r26 = r3;
}

loc_8035FF34:
{
}

loc_8035FF38:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(-1))) {
        goto loc_80360044;
    }
}

loc_8035FF3C:
{
}

loc_8035FF40:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_8035FF54;
    }
}

loc_8035FF44:
{
    r0 = (r26 * 24);
    r3 = (r25 + r0);
    r19 = MemoryInline::FlatRead16((r3 + 2));
    goto loc_8035FF60;
}

loc_8035FF54:
{
    r0 = (r26 * 36);
    r3 = (r24 + r0);
    r19 = MemoryInline::FlatRead16((r3 + 2));
}

loc_8035FF60:
{
    r3 = MemoryInline::FlatRead8((r21 + 157));
    r4 = MemoryInline::FlatRead8((r21 + 7));
    r5 = r19;
    ctx->lr = 0x8035FF70u;
    if constexpr (KnownRegArgsCpuCall<0x8021290Cu>(&func_8021290C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021290C_1851 = func_8021290C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8021290C_1851);
        r4 = static_cast<uint32_t>(regargs_result_8021290C_1851 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8021290Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8035FF74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8035FEF8;
    }
}

loc_8035FF78:
{
}

loc_8035FF7C:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(r28))) {
        goto loc_8036003C;
    }
}

loc_8035FF80:
{
}

loc_8035FF84:
{
    if ((static_cast<int32_t>(r28) > static_cast<int32_t>(r27))) {
        goto loc_8036003C;
    }
}

loc_8035FF88:
{
    r3 = MemoryInline::FlatRead8((r21 + 7));
    r3 = (r3 & 65535);
    r4 = (r26 & 65535);
    r5 = 0;
    ctx->lr = 0x8035FF9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x802138D4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r23 = (r3 & 255);
    r0 = MemoryInline::FlatRead16((r21 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * 24);
    r20 = (r21 + r0);
    r0 = MemoryInline::FlatRead8((r21 + 7));
    MemoryInline::FlatWrite8((r20 + 612), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r20 + 616), static_cast<uint16_t>(r19));
    r3 = MemoryInline::FlatRead8((r21 + 7));
    r4 = r19;
    ctx->lr = 0x8035FFC4u;
    if constexpr (KnownRegArgsCpuCall<0x80217E04u>(&func_80217E04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80217E04_21C3 = func_80217E04_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217E04_21C3);
        r4 = static_cast<uint32_t>(regargs_result_80217E04_21C3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80217E04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite32((r20 + 620), r3);
    r3 = MemoryInline::FlatRead8((r21 + 7));
    r4 = r19;
    r5 = 1;
    // inline leaf 0x8004D4C0 (24 guest instruction(s))
}

loc_inl0_0x8004D4C0:
{
    r7 = (r3 & 255);
}

loc_inl0_0x8004D4C8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004D4D4;
    }
}

loc_inl0_0x8004D4CC:
{
}

loc_inl0_0x8004D4D0:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(16))) {
        goto loc_inl0_0x8004D4DC;
    }
}

loc_inl0_0x8004D4D4:
{
    r3 = 0;
    goto loc_inl0_cont_8004D4C0;
}

loc_inl0_0x8004D4DC:
{
    r3 = 1;
    r0 = (r5 & 65535);
    r6 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r5 = MemoryInline::FlatRead32((r13 + -17824));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r3 = 0x80580000u;
    r3 = (r3 + 7560);
    addr_lhax_8004D4F8_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_8004D4F8_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 19280));
    r3 = (r6 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl0_cont_8004D4C0:
{
    // end of inlined leaf 0x8004D4C0
}

loc_8035FFDC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80360000;
    }
}

loc_8035FFE0:
{
    r3 = MemoryInline::FlatRead8((r21 + 7));
    r4 = r19;
    r5 = 1;
    // inline leaf 0x8004D3DC (22 guest instruction(s))
}

loc_inl1_0x8004D3DC:
{
    r0 = (r3 & 255);
}

loc_inl1_0x8004D3E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8004D3E8:
{
}

loc_inl1_0x8004D3EC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(16))) {
        goto loc_inl1_0x8004D3F4;
    }
}

loc_inl1_0x8004D3F0:
{
    goto loc_inl1_cont_8004D3DC;
}

loc_inl1_0x8004D3F4:
{
    r6 = MemoryInline::FlatRead32((r13 + -17824));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = 0x80580000u;
    r3 = (r3 + 7560);
    addr_lhax_8004D404_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_8004D404_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6 = (r6 + r0);
    r4 = MemoryInline::FlatRead8((r6 + 19280));
    r3 = 1;
    r0 = (r5 & 65535);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite8((r6 + 19280), static_cast<uint8_t>(r0));
    goto loc_inl1_cont_8004D3DC;
}

loc_inl1_return:
{
}

loc_inl1_cont_8004D3DC:
{
    // end of inlined leaf 0x8004D3DC
    r3 = MemoryInline::FlatRead8((r21 + 7));
    r4 = r19;
    r5 = 2;
    if constexpr (KnownRegArgsCpuCall<0x8004D3DCu>(&func_8004D3DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8004D3DC_31D2 = func_8004D3DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004D3DC_31D2);
        r4 = static_cast<uint32_t>(regargs_result_8004D3DC_31D2 >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8004D3DCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
    }
}

loc_80360000:
{
}

loc_80360004:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_8036001C;
    }
}

loc_80360008:
{
    r0 = (r26 * 24);
    r0 = (r25 + r0);
    MemoryInline::FlatWrite32((r20 + 624), r0);
    MemoryInline::FlatWrite32((r20 + 628), r30);
    goto loc_8036002C;
}

loc_8036001C:
{
    r0 = (r26 * 36);
    r0 = (r24 + r0);
    MemoryInline::FlatWrite32((r20 + 628), r0);
    MemoryInline::FlatWrite32((r20 + 624), r30);
}

loc_8036002C:
{
    MemoryInline::FlatWrite16((r20 + 614), static_cast<uint16_t>(r23));
    r3 = MemoryInline::FlatRead16((r21 + 24));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r21 + 24), static_cast<uint16_t>(r0));
}

loc_8036003C:
{
    r28 = (r28 + 1);
    goto loc_8035FEF8;
}

loc_80360044:
{
    r3 = MemoryInline::FlatRead16((r21 + 24));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r21 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80360050:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_80360070;
    }
}

loc_80360054:
{
    r0 = (r3 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r0));
}

loc_80360064:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_80360070;
    }
}

loc_80360068:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r21 + 12), static_cast<uint16_t>(r0));
}

loc_80360070:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x802A8F78u>(&func_802A8F78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802A8F78_3B97 = func_802A8F78_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802A8F78_3B97);
        r4 = static_cast<uint32_t>(regargs_result_802A8F78_3B97 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802A8F78u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite16((r21 + 20), static_cast<uint16_t>(r3));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80360088:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80360094;
    }
}

loc_8036008C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r21 + 20), static_cast<uint16_t>(r0));
}

loc_80360094:
{
    r3 = r21;
    ctx->lr = 0x8036009Cu;
    if constexpr (KnownRegArgsCpuCall<0x80360308u>(&func_80360308)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_80360308_406F = func_80360308_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80360308_406F);
        r4 = static_cast<uint32_t>(regargs_result_80360308_406F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80360308u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r11 = (r1 + 64);
    {
        uint8_t* const guest_thunk_stack = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
        r19 = MemoryInline::ReadResolved32(guest_thunk_stack, 0u, (r11 + -52));
        r20 = MemoryInline::ReadResolved32(guest_thunk_stack, 4u, (r11 + -48));
        r21 = MemoryInline::ReadResolved32(guest_thunk_stack, 8u, (r11 + -44));
        r22 = MemoryInline::ReadResolved32(guest_thunk_stack, 12u, (r11 + -40));
        r23 = MemoryInline::ReadResolved32(guest_thunk_stack, 16u, (r11 + -36));
        r24 = MemoryInline::ReadResolved32(guest_thunk_stack, 20u, (r11 + -32));
        r25 = MemoryInline::ReadResolved32(guest_thunk_stack, 24u, (r11 + -28));
        r26 = MemoryInline::ReadResolved32(guest_thunk_stack, 28u, (r11 + -24));
        r27 = MemoryInline::ReadResolved32(guest_thunk_stack, 32u, (r11 + -20));
        r28 = MemoryInline::ReadResolved32(guest_thunk_stack, 36u, (r11 + -16));
        r29 = MemoryInline::ReadResolved32(guest_thunk_stack, 40u, (r11 + -12));
        r30 = MemoryInline::ReadResolved32(guest_thunk_stack, 44u, (r11 + -8));
        r31 = MemoryInline::ReadResolved32(guest_thunk_stack, 48u, (r11 + -4));
    }
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8035FEF8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8035FEF8_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xFFF83FFF gpr_write=0xFFF81FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8035FEF8 func_8035FEF8 preserves=true fpr_mask=0x00000000
