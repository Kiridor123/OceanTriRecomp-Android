#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DBC94(CpuContext* ctx);
extern "C" uint64_t func_800DBC94_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_800DBCE8(CpuContext* ctx);
extern "C" uint64_t func_800DBCE8_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802121A0(CpuContext* ctx);
extern "C" uint64_t func_802121A0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80359DFC(CpuContext* ctx);
extern "C" uint64_t func_80359DFC_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8035A098(CpuContext* ctx);
extern "C" uint64_t func_8035A098_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_803A56E4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_803A56E4;

loc_803A56E4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r26 = r3;
    r29 = MemoryInline::FlatRead32((r3 + 208));
    r28 = 0;
    r0 = MemoryInline::FlatRead8((r3 + 1));
}

loc_803A570C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A5724;
    }
}

loc_803A5710:
{
}

loc_803A5714:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803A58E4;
    }
}

loc_803A5718:
{
}

loc_803A571C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803A5A9C;
    }
}

loc_803A5720:
{
    goto loc_803A5B70;
}

loc_803A5724:
{
    r4 = MemoryInline::FlatRead16((r3 + 48));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_803A572C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_803A573C;
    }
}

loc_803A5730:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 48), static_cast<uint16_t>(r0));
    goto loc_803A5B70;
}

loc_803A573C:
{
    r3 = 16;
    ctx->lr = 0x803A5744u;
    if constexpr (KnownRegArgsCpuCall<0x802121A0u>(&func_802121A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802121A0_1200 = func_802121A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802121A0_1200);
        r4 = static_cast<uint32_t>(regargs_result_802121A0_1200 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802121A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A5748:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A57B4;
    }
}

loc_803A574C:
{
    r4 = MemoryInline::FlatRead8((r29 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_803A5758:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803A577C;
    }
}

loc_803A575C:
{
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
}

loc_803A577C:
{
    r4 = MemoryInline::FlatRead8((r29 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_803A5788:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803A57A8;
    }
}

loc_803A578C:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 12));
    r0 = (r0 + r4);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 3), static_cast<uint8_t>(r0));
}

loc_803A57A8:
{
    r3 = 0;
    ctx->lr = 0x803A57B0u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_1AA6 = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_1AA6);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_1AA6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_803A582C;
}

loc_803A57B4:
{
    r4 = 0;
    r3 = MemoryInline::FlatRead8((r29 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803A57C4:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803A57EC;
    }
}

loc_803A57C8:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r29 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 12), static_cast<uint8_t>(r0));
    r4 = 1;
}

loc_803A57EC:
{
    r3 = MemoryInline::FlatRead8((r29 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803A57F8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803A581C;
    }
}

loc_803A57FC:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r29 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r4 = (r29 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 12), static_cast<uint8_t>(r0));
    r4 = 1;
}

loc_803A581C:
{
}

loc_803A5820:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803A582C;
    }
}

loc_803A5824:
{
    r3 = 47;
    ctx->lr = 0x803A582Cu;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBCE8_27FE = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_27FE);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_27FE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_803A582C:
{
    r27 = 0;
    r30 = r26;
    r31 = 1;
    goto loc_803A58AC;
}

loc_803A583C:
{
    r25 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r27));
    r0 = MemoryInline::FlatRead16((r26 + 38));
    r0 = (r0 & r25);
}

loc_803A584C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A5864;
    }
}

loc_803A5850:
{
    r3 = MemoryInline::FlatRead16((r30 + 222));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_803A5858:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(40))) {
        goto loc_803A5864;
    }
}

loc_803A585C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r30 + 222), static_cast<uint16_t>(r0));
}

loc_803A5864:
{
    r0 = MemoryInline::FlatRead32((r26 + 208));
    r3 = (r0 + r27);
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_803A5874:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(100))) {
        goto loc_803A58A4;
    }
}

loc_803A5878:
{
    r0 = MemoryInline::FlatRead16((r26 + 38));
    r0 = (r0 & r25);
}

loc_803A5884:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A58A4;
    }
}

loc_803A5888:
{
    r3 = 48;
    ctx->lr = 0x803A5890u;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBCE8_34C1 = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_34C1);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_34C1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead16((r26 + 38));
    r0 = (r25 & 65535);
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r26 + 38), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 222), static_cast<uint16_t>(r31));
}

loc_803A58A4:
{
    r30 = (r30 + 2);
    r27 = (r27 + 1);
}

loc_803A58AC:
{
    r0 = MemoryInline::FlatRead16((r26 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803A58B4:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r0))) {
        goto loc_803A583C;
    }
}

loc_803A58B8:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803A58C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A5B70;
    }
}

loc_803A58C8:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803A58D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A5B70;
    }
}

loc_803A58D8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    goto loc_803A5B70;
}

loc_803A58E4:
{
    r7 = 0;
    r6 = r26;
    r5 = 1;
    goto loc_803A5924;
}

loc_803A58F4:
{
    r4 = MemoryInline::FlatRead16((r3 + 38));
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r7));
    r0 = (r4 & r0);
}

loc_803A5904:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A591C;
    }
}

loc_803A5908:
{
    r4 = MemoryInline::FlatRead16((r6 + 222));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_803A5910:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(40))) {
        goto loc_803A591C;
    }
}

loc_803A5914:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite16((r6 + 222), static_cast<uint16_t>(r0));
}

loc_803A591C:
{
    r6 = (r6 + 2);
    r7 = (r7 + 1);
}

loc_803A5924:
{
    r0 = MemoryInline::FlatRead16((r3 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803A592C:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_803A58F4;
    }
}

loc_803A5930:
{
    r3 = 16;
    ctx->lr = 0x803A5938u;
    if constexpr (KnownRegArgsCpuCall<0x802121A0u>(&func_802121A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802121A0_44E4 = func_802121A0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802121A0_44E4);
        r4 = static_cast<uint32_t>(regargs_result_802121A0_44E4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802121A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A593C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A5B70;
    }
}

loc_803A5940:
{
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_803A5954:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(100))) {
        goto loc_803A596C;
    }
}

loc_803A5958:
{
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r3 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_803A5968:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(100))) {
        goto loc_803A5A84;
    }
}

loc_803A596C:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r0));
    r3 = (r26 + 68);
    r4 = 0;
    r5 = 44;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8(r29);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r29 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 12));
}

loc_803A5998:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(100))) {
        goto loc_803A59F4;
    }
}

loc_803A599C:
{
    r8 = (r4 & 65535);
    r7 = (r29 + r8);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + 10416);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead8((r7 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    MemoryInline::FlatWrite16((r26 + 68), static_cast<uint16_t>(r0));
    r6 = 1;
    MemoryInline::FlatWrite16((r26 + 70), static_cast<uint16_t>(r6));
    r5 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = MemoryInline::FlatRead32((r5 + 21128));
    r3 = (r8 * 6);
    r0 = MemoryInline::FlatRead8((r7 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + r0);
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r5 + 21128), r0);
}

loc_803A59F4:
{
    r8 = MemoryInline::FlatRead8((r29 + 2));
    r7 = (r29 + r8);
    r0 = MemoryInline::FlatRead8((r7 + 12));
}

loc_803A5A04:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(100))) {
        goto loc_803A5A68;
    }
}

loc_803A5A08:
{
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803A5A14:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(r0))) {
        goto loc_803A5A68;
    }
}

loc_803A5A18:
{
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r3 = 0x805F0000u;
    r3 = (r3 + 10416);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    r0 = MemoryInline::FlatRead8((r7 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_5);
    MemoryInline::FlatWrite16((r26 + 72), static_cast<uint16_t>(r0));
    r6 = 1;
    MemoryInline::FlatWrite16((r26 + 74), static_cast<uint16_t>(r6));
    r5 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = MemoryInline::FlatRead32((r5 + 21128));
    r3 = (r8 * 6);
    r0 = MemoryInline::FlatRead8((r7 + 8));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r3 + r0);
    r0 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r5 + 21128), r0);
}

loc_803A5A68:
{
    r3 = (r26 + 68);
    r4 = MemoryInline::FlatRead32((r13 + -17200));
    r4 = (r4 + 128);
    ctx->lr = 0x803A5A78u;
    if constexpr (KnownRegArgsCpuCall<0x80359DFCu>(&func_80359DFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80359DFC_5858 = func_80359DFC_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80359DFC_5858);
        r4 = static_cast<uint32_t>(regargs_result_80359DFC_5858 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x80359DFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    r3 = 12;
    ctx->lr = 0x803A5A80u;
    if constexpr (KnownRegArgsCpuCall<0x800DBCE8u>(&func_800DBCE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBCE8_5D21 = func_800DBCE8_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBCE8_5D21);
        r4 = static_cast<uint32_t>(regargs_result_800DBCE8_5D21 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_803A5A90;
}

loc_803A5A84:
{
    r28 = 1;
    r3 = 0;
    ctx->lr = 0x803A5A90u;
    if constexpr (KnownRegArgsCpuCall<0x800DBC94u>(&func_800DBC94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800DBC94_652B = func_800DBC94_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DBC94_652B);
        r4 = static_cast<uint32_t>(regargs_result_800DBC94_652B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DBC94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_803A5A90:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 38), static_cast<uint16_t>(r0));
    goto loc_803A5B70;
}

loc_803A5A9C:
{
    ctx->lr = 0x803A5AA0u;
    if constexpr (KnownRegArgsCpuCall<0x8035A098u>(&func_8035A098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_8035A098_6D4F = func_8035A098_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8035A098_6D4F);
        r4 = static_cast<uint32_t>(regargs_result_8035A098_6D4F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8035A098u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = (r3 + -1);
}

loc_803A5AA8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_803A5B70;
    }
}

loc_803A5AAC:
{
    r28 = 1;
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r4 = (r29 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 12));
}

loc_803A5AC4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(100))) {
        goto loc_803A5B0C;
    }
}

loc_803A5AC8:
{
    r0 = (r3 + -100);
    MemoryInline::FlatWrite8((r4 + 12), static_cast<uint8_t>(r0));
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl1_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl1_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF40;
    }
}

loc_inl1_0x800CEF3C:
{
    r0 = 1;
}

loc_inl1_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_2 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_1 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl1_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = 715849728;
    r0 = (r3 + -21845);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 6);
    r0 = (r4 - r0);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r29 + r0);
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r4));
}

loc_803A5B0C:
{
    r5 = MemoryInline::FlatRead8((r29 + 2));
    r4 = (r29 + r5);
    r3 = MemoryInline::FlatRead8((r4 + 12));
}

loc_803A5B1C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(100))) {
        goto loc_803A5B70;
    }
}

loc_803A5B20:
{
    r0 = MemoryInline::FlatRead8(r29);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803A5B2C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(r0))) {
        goto loc_803A5B70;
    }
}

loc_803A5B30:
{
    r0 = (r3 + -100);
    MemoryInline::FlatWrite8((r4 + 12), static_cast<uint8_t>(r0));
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl2_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl2_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CEF40;
    }
}

loc_inl2_0x800CEF3C:
{
    r0 = 1;
}

loc_inl2_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_6 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_3 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl2_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = 715849728;
    r0 = (r3 + -21845);
    r3 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
    r0 = (r3 + r0);
    r0 = (r0 * 6);
    r0 = (r4 - r0);
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead8((r29 + 2));
    r3 = (r29 + r0);
    MemoryInline::FlatWrite8((r3 + 8), static_cast<uint8_t>(r4));
}

loc_803A5B70:
{
    r3 = r28;
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803A56E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A56E4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFE fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803A56E4 func_803A56E4 preserves=true fpr_mask=0x00000000
