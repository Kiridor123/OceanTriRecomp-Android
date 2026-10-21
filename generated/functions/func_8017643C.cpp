#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80129AD4(CpuContext* ctx);
extern "C" uint64_t func_80129AD4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80129DA0(CpuContext* ctx);
extern "C" uint64_t func_80129DA0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80129E1C(CpuContext* ctx);
extern "C" uint64_t func_80129E1C_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80129EAC(CpuContext* ctx);
extern "C" uint64_t func_80129EAC_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8012A078(CpuContext* ctx);
extern "C" uint64_t func_8012A078_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012ED54(CpuContext* ctx);
extern "C" uint32_t func_8012ED54_ra8_2_8_0(CpuContext*, uint32_t, double);

extern "C" uint64_t func_8017643C_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8017643Cu);
    goto loc_8017643C;

loc_8017643C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r30 = (r3 + 808);
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl2_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB50;
    }
}

loc_inl2_0x800CFB48:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB64;
    }
}

loc_inl2_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFB34;
}

loc_inl2_0x800CFB64:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl2_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r28 = (r3 & 65535);
    r3 = MemoryInline::FlatRead8((r25 + 480));
    // inline leaf 0x802B06CC (8 guest instruction(s))
}

loc_inl3_0x802B06CC:
{
    r0 = (r3 & 255);
    r4 = 0x805D0000u;
    r4 = (r4 + -2816);
    r4_addr_3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_3);
}

loc_inl3_0x802B06E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x802B06E4:
{
    r3 = r0;
    goto loc_inl3_cont_802B06CC;
}

loc_inl3_return:
{
}

loc_inl3_cont_802B06CC:
{
    // end of inlined leaf 0x802B06CC
    r31 = r3;
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_8017648C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_801764A0;
    }
}

loc_80176490:
{
}

loc_80176494:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_801764A0;
    }
}

loc_80176498:
{
    r3 = 0;
    goto loc_80176AF4;
}

loc_801764A0:
{
    r3 = r25;
    ctx->lr = 0x801764A8u;
    if constexpr (KnownRegArgsCpuCall<0x80129DA0u>(&func_80129DA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80129DA0_1633 = func_80129DA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80129DA0_1633);
        r4 = static_cast<uint32_t>(regargs_result_80129DA0_1633 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80129DA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_801764AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801764C0;
    }
}

loc_801764B0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80176AF4;
}

loc_801764C0:
{
    r27 = 0;
    r0 = (r31 & 255);
}

loc_801764CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801764E4;
    }
}

loc_801764D0:
{
}

loc_801764D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801764EC;
    }
}

loc_801764D8:
{
}

loc_801764DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801764F4;
    }
}

loc_801764E0:
{
    goto loc_801764FC;
}

loc_801764E4:
{
    r4 = 9;
    goto loc_80176500;
}

loc_801764EC:
{
    r4 = 5;
    goto loc_80176500;
}

loc_801764F4:
{
    r4 = 5;
    goto loc_80176500;
}

loc_801764FC:
{
    r4 = 255;
}

loc_80176500:
{
}

loc_80176504:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_80176540;
    }
}

loc_80176508:
{
    r3 = r25;
    ctx->lr = 0x80176510u;
    if constexpr (KnownRegArgsCpuCall<0x80129E1Cu>(&func_80129E1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80129E1C_1DAD = func_80129E1C_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80129E1C_1DAD);
        r4 = static_cast<uint32_t>(regargs_result_80129E1C_1DAD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80129E1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = (r3 & 255);
}

loc_80176518:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80176528;
    }
}

loc_8017651C:
{
}

loc_80176520:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80176530;
    }
}

loc_80176524:
{
    goto loc_80176540;
}

loc_80176528:
{
    r27 = 1;
    goto loc_80176540;
}

loc_80176530:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80176AF4;
}

loc_80176540:
{
}

loc_80176544:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80176580;
    }
}

loc_80176548:
{
    r3 = r25;
    ctx->lr = 0x80176550u;
    if constexpr (KnownRegArgsCpuCall<0x80129EACu>(&func_80129EAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80129EAC_23AE = func_80129EAC_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_80129EAC_23AE);
        r4 = static_cast<uint32_t>(regargs_result_80129EAC_23AE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80129EACu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = (r3 & 255);
}

loc_80176558:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80176568;
    }
}

loc_8017655C:
{
}

loc_80176560:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80176570;
    }
}

loc_80176564:
{
    goto loc_80176580;
}

loc_80176568:
{
    r3 = 0;
    goto loc_80176AF4;
}

loc_80176570:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80176AF4;
}

loc_80176580:
{
    r3 = r25;
    ctx->lr = 0x80176588u;
    if constexpr (KnownRegArgsCpuCall<0x8012ED54u>(&func_8012ED54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8012ED54_295D = func_8012ED54_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012ED54_295D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012ED54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
}

loc_8017658C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80176608;
    }
}

loc_80176590:
{
    r0 = MemoryInline::FlatRead16((r25 + 1106));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80176598:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(900))) {
        goto loc_80176608;
    }
}

loc_8017659C:
{
    r0 = (r31 & 255);
}

loc_801765A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801765BC;
    }
}

loc_801765A8:
{
}

loc_801765AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801765C4;
    }
}

loc_801765B0:
{
}

loc_801765B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801765CC;
    }
}

loc_801765B8:
{
    goto loc_801765D4;
}

loc_801765BC:
{
    r5 = 9;
    goto loc_801765D8;
}

loc_801765C4:
{
    r5 = 5;
    goto loc_801765D8;
}

loc_801765CC:
{
    r5 = 5;
    goto loc_801765D8;
}

loc_801765D4:
{
    r5 = 255;
}

loc_801765D8:
{
    r3 = r25;
    r4 = 0;
    r6 = (r26 & 65535);
    r7 = 0;
    r8 = (r13 + -29640);
    ctx->lr = 0x801765F0u;
    if constexpr (KnownRegArgsCpuCall<0x8012A078u>(&func_8012A078)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_8012A078_314D = func_8012A078_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012A078_314D);
        r4 = static_cast<uint32_t>(regargs_result_8012A078_314D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        InvokeDirectCpu<0x8012A078u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
    }
}

loc_801765F4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80176608;
    }
}

loc_801765F8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80176AF4;
}

loc_80176608:
{
    r3 = MemoryInline::FlatRead16((r25 + 1106));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r25 + 1104));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80176614:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_8017689C;
    }
}

loc_80176618:
{
    r0 = MemoryInline::FlatRead8((r25 + 1085));
}

loc_80176620:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8017689C;
    }
}

loc_80176624:
{
    r3 = MemoryInline::FlatRead8((r25 + 3));
    r4 = MemoryInline::FlatRead8((r25 + 10));
    ctx->lr = 0x80176630u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80343A38u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
    r3 = (r3 & 255);
    r4 = MemoryInline::FlatRead8((r25 + 1132));
    ctx->lr = 0x8017663Cu;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80343948u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    ctr = ctx->ctr;
}

loc_80176640:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8017689C;
    }
}

loc_80176644:
{
    r0 = MemoryInline::FlatRead8((r3 + 13));
}

loc_8017664C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8017689C;
    }
}

loc_80176650:
{
    r4 = 0;
    ctr = r28;
}

loc_8017665C:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(0))) {
        goto loc_801766DC;
    }
}

loc_80176660:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80176668:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801766D4;
    }
}

loc_8017666C:
{
    r0 = MemoryInline::FlatRead8((r29 + 485));
}

loc_80176674:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_801766D4;
    }
}

loc_80176678:
{
}

loc_8017667C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(12))) {
        goto loc_801766D4;
    }
}

loc_80176680:
{
    r3 = MemoryInline::FlatRead8((r29 + 481));
    r0 = MemoryInline::FlatRead8((r25 + 481));
}

loc_8017668C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_801766D4;
    }
}

loc_80176690:
{
    r0 = MemoryInline::FlatRead8((r25 + 3));
}

loc_80176698:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_801766B8;
    }
}

loc_8017669C:
{
    r3 = MemoryInline::FlatRead8((r29 + 3));
    r0 = (r3 + 246);
    r0 = (r0 & 255);
}

loc_801766AC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_801766D4;
    }
}

loc_801766B0:
{
    r4 = 1;
    goto loc_801766DC;
}

loc_801766B8:
{
}

loc_801766BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(14))) {
        goto loc_801766D4;
    }
}

loc_801766C0:
{
    r0 = MemoryInline::FlatRead8((r29 + 3));
}

loc_801766C8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_801766D4;
    }
}

loc_801766CC:
{
    r4 = 1;
    goto loc_801766DC;
}

loc_801766D4:
{
    r29 = (r29 + 2840);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80176660;
    }
}

loc_801766DC:
{
}

loc_801766E0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8017689C;
    }
}

loc_801766E4:
{
    r3 = r25;
    r4 = (r26 & 65535);
    r5 = 30;
    r6 = r30;
    // inline leaf 0x80129A80 (21 guest instruction(s))
}

loc_inl4_0x80129A80:
{
    r0 = MemoryInline::FlatRead16(r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl4_0x80129A88:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_inl4_0x80129ACC;
    }
}

loc_inl4_0x80129A8C:
{
    r4 = (r4 & 65535);
    r3 = 1374420992;
    r0 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r3 = (r4 - r0);
    r0 = (r5 & 65535);
}

loc_inl4_0x80129AB8:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_inl4_0x80129AC4;
    }
}

loc_inl4_0x80129ABC:
{
    r3 = 1;
    goto loc_inl4_cont_80129A80;
}

loc_inl4_0x80129AC4:
{
    r0 = 900;
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
}

loc_inl4_0x80129ACC:
{
    r3 = 0;
}

loc_inl4_cont_80129A80:
{
    // end of inlined leaf 0x80129A80
}

loc_801766FC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8017689C;
    }
}

loc_80176700:
{
    r3 = r25;
    ctx->lr = 0x80176708u;
    if constexpr (KnownRegArgsCpuCall<0x8012ED54u>(&func_8012ED54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8012ED54_4BE2 = func_8012ED54_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012ED54_4BE2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012ED54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
}

loc_8017670C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80176878;
    }
}

loc_80176710:
{
    r0 = (r31 & 255);
}

loc_80176718:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80176730;
    }
}

loc_8017671C:
{
}

loc_80176720:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801767A8;
    }
}

loc_80176724:
{
}

loc_80176728:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80176800;
    }
}

loc_8017672C:
{
    goto loc_8017689C;
}

loc_80176730:
{
    r0 = MemoryInline::FlatRead8((r25 + 481));
}

loc_80176738:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(9))) {
        goto loc_8017675C;
    }
}

loc_8017673C:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r25 + 508), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r25 + 510), static_cast<uint8_t>(r3));
    r0 = 9;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r3));
    r3 = 1;
    goto loc_80176AF4;
}

loc_8017675C:
{
    r0 = MemoryInline::FlatRead16((r25 + 1100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80176764:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8017689C;
    }
}

loc_80176768:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r25 + 508), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r25 + 510), static_cast<uint8_t>(r0));
    r0 = (r26 & 65535);
    r0 = (r0 & 1);
}

loc_80176780:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80176790;
    }
}

loc_80176784:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
    goto loc_80176798;
}

loc_80176790:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
}

loc_80176798:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80176AF4;
}

loc_801767A8:
{
    r0 = MemoryInline::FlatRead8((r25 + 481));
}

loc_801767B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_801767D4;
    }
}

loc_801767B4:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r25 + 508), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r25 + 510), static_cast<uint8_t>(r3));
    r0 = 5;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r3));
    r3 = 1;
    goto loc_80176AF4;
}

loc_801767D4:
{
    r0 = MemoryInline::FlatRead16((r25 + 1100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801767DC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8017689C;
    }
}

loc_801767E0:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r25 + 508), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r25 + 510), static_cast<uint8_t>(r3));
    r0 = 4;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r3));
    r3 = 1;
    goto loc_80176AF4;
}

loc_80176800:
{
    r0 = MemoryInline::FlatRead8((r25 + 481));
}

loc_80176808:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_8017682C;
    }
}

loc_8017680C:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r25 + 508), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r25 + 510), static_cast<uint8_t>(r3));
    r0 = 5;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r3));
    r3 = 1;
    goto loc_80176AF4;
}

loc_8017682C:
{
    r0 = MemoryInline::FlatRead16((r25 + 1100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80176834:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8017689C;
    }
}

loc_80176838:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r25 + 508), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r25 + 510), static_cast<uint8_t>(r0));
    r0 = (r26 & 65535);
    r0 = (r0 & 1);
}

loc_80176850:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80176860;
    }
}

loc_80176854:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
    goto loc_80176868;
}

loc_80176860:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
}

loc_80176868:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80176AF4;
}

loc_80176878:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r25 + 508), static_cast<uint8_t>(r0));
    r3 = 0;
    MemoryInline::FlatWrite8((r25 + 510), static_cast<uint8_t>(r3));
    r0 = 255;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r3));
    r3 = 1;
    goto loc_80176AF4;
}

loc_8017689C:
{
    r3 = r25;
    r4 = (r26 & 65535);
    ctx->lr = 0x801768A8u;
    if constexpr (KnownRegArgsCpuCall<0x80129AD4u>(&func_80129AD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_80129AD4_631B = func_80129AD4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80129AD4_631B);
        r4 = static_cast<uint32_t>(regargs_result_80129AD4_631B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80129AD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
}

loc_801768AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80176A38;
    }
}

loc_801768B0:
{
    r3 = r25;
    ctx->lr = 0x801768B8u;
    if constexpr (KnownRegArgsCpuCall<0x8012ED54u>(&func_8012ED54)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8012ED54_6744 = func_8012ED54_ra8_2_8_0(ctx, r3, f1.d);
        r3 = regargs_result_8012ED54_6744;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012ED54u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
}

loc_801768BC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80176A28;
    }
}

loc_801768C0:
{
    r0 = (r31 & 255);
}

loc_801768C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801768E0;
    }
}

loc_801768CC:
{
}

loc_801768D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80176958;
    }
}

loc_801768D4:
{
}

loc_801768D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_801769B0;
    }
}

loc_801768DC:
{
    goto loc_80176A28;
}

loc_801768E0:
{
    r0 = MemoryInline::FlatRead8((r25 + 481));
}

loc_801768E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(9))) {
        goto loc_8017690C;
    }
}

loc_801768EC:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r25 + 508), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r25 + 510), static_cast<uint8_t>(r3));
    r0 = 9;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r3));
    r3 = 1;
    goto loc_80176AF4;
}

loc_8017690C:
{
    r0 = MemoryInline::FlatRead16((r25 + 1100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80176914:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80176A28;
    }
}

loc_80176918:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r25 + 508), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r25 + 510), static_cast<uint8_t>(r0));
    r0 = (r26 & 65535);
    r0 = (r0 & 1);
}

loc_80176930:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80176940;
    }
}

loc_80176934:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
    goto loc_80176948;
}

loc_80176940:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
}

loc_80176948:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80176AF4;
}

loc_80176958:
{
    r0 = MemoryInline::FlatRead8((r25 + 481));
}

loc_80176960:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_80176984;
    }
}

loc_80176964:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r25 + 508), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r25 + 510), static_cast<uint8_t>(r3));
    r0 = 5;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r3));
    r3 = 1;
    goto loc_80176AF4;
}

loc_80176984:
{
    r0 = MemoryInline::FlatRead16((r25 + 1100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8017698C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80176A28;
    }
}

loc_80176990:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r25 + 508), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r25 + 510), static_cast<uint8_t>(r3));
    r0 = 4;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r3));
    r3 = 1;
    goto loc_80176AF4;
}

loc_801769B0:
{
    r0 = MemoryInline::FlatRead8((r25 + 481));
}

loc_801769B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(5))) {
        goto loc_801769DC;
    }
}

loc_801769BC:
{
    r3 = 1;
    MemoryInline::FlatWrite8((r25 + 508), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r25 + 510), static_cast<uint8_t>(r3));
    r0 = 5;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r3));
    r3 = 1;
    goto loc_80176AF4;
}

loc_801769DC:
{
    r0 = MemoryInline::FlatRead16((r25 + 1100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801769E4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80176A28;
    }
}

loc_801769E8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r25 + 508), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r25 + 510), static_cast<uint8_t>(r0));
    r0 = (r26 & 65535);
    r0 = (r0 & 1);
}

loc_80176A00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80176A10;
    }
}

loc_80176A04:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
    goto loc_80176A18;
}

loc_80176A10:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r25 + 511), static_cast<uint8_t>(r0));
}

loc_80176A18:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80176AF4;
}

loc_80176A28:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_80176AF4;
}

loc_80176A38:
{
    r3 = r25;
    // inline leaf 0x8012A268 (20 guest instruction(s))
}

loc_inl5_0x8012A268:
{
    r0 = MemoryInline::FlatRead16((r3 + 1100));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl5_0x8012A270:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl5_0x8012A290;
    }
}

loc_inl5_0x8012A274:
{
    r0 = MemoryInline::FlatRead8((r3 + 1085));
}

loc_inl5_0x8012A27C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_inl5_0x8012A2B0;
    }
}

loc_inl5_0x8012A280:
{
    r4 = MemoryInline::FlatRead16((r3 + 1106));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 1102));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_inl5_0x8012A28C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_inl5_0x8012A2B0;
    }
}

loc_inl5_0x8012A290:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 508), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r3 + 510), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWrite8((r3 + 511), static_cast<uint8_t>(r0));
    r3 = 1;
    goto loc_inl5_cont_8012A268;
}

loc_inl5_0x8012A2B0:
{
    r3 = 0;
}

loc_inl5_cont_8012A268:
{
    // end of inlined leaf 0x8012A268
}

loc_80176A44:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80176AF0;
    }
}

loc_80176A48:
{
}

loc_80176A4C:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(1))) {
        goto loc_80176AE0;
    }
}

loc_80176A50:
{
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r25 + 484), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r25 + 508), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r25 + 510), static_cast<uint8_t>(r0));
    r0 = (r31 & 255);
}

loc_80176A64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80176A7C;
    }
}

loc_80176A68:
{
}

loc_80176A6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80176AA4;
    }
}

loc_80176A70:
{
}

loc_80176A74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80176AB0;
    }
}

loc_80176A78:
{
    goto loc_80176AD4;
}

loc_80176A7C:
{
    r0 = (r26 & 65535);
    r0 = (r0 & 1);
}

loc_80176A88:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80176A98;
    }
}

loc_80176A8C:
{
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r25 + 511), static_cast<uint8_t>(r0));
    goto loc_80176AD4;
}

loc_80176A98:
{
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r25 + 511), static_cast<uint8_t>(r0));
    goto loc_80176AD4;
}

loc_80176AA4:
{
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r25 + 511), static_cast<uint8_t>(r0));
    goto loc_80176AD4;
}

loc_80176AB0:
{
    r0 = (r26 & 65535);
    r0 = (r0 & 1);
}

loc_80176ABC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80176ACC;
    }
}

loc_80176AC0:
{
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r25 + 511), static_cast<uint8_t>(r0));
    goto loc_80176AD4;
}

loc_80176ACC:
{
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r25 + 511), static_cast<uint8_t>(r0));
}

loc_80176AD4:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r25 + 484), static_cast<uint8_t>(r0));
    goto loc_80176AE8;
}

loc_80176AE0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r25 + 484), static_cast<uint8_t>(r0));
}

loc_80176AE8:
{
    r3 = 1;
    goto loc_80176AF4;
}

loc_80176AF0:
{
    r3 = 0;
}

loc_80176AF4:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 52));
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
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8017643C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8017643C_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8017643C func_8017643C preserves=true fpr_mask=0x00000000
