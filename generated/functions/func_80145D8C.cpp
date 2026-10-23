#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80128AF0(CpuContext* ctx);
extern "C" uint64_t func_80128AF0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_801308A8(CpuContext* ctx);
extern "C" void func_801308A8_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_80133C24(CpuContext* ctx);
extern "C" void func_80133C24_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_8013AB28(CpuContext* ctx);
extern "C" uint64_t func_8013AB28_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_802AFCE8(CpuContext* ctx);
extern "C" uint32_t func_802AFCE8_ra0_0_8_0(CpuContext*);

extern "C" void func_801308A8_statefree(uint32_t);
extern "C" void func_80133C24_statefree(uint32_t);
extern "C" uint64_t func_802AFCE8_statefree();

extern "C" uint64_t func_80145D8C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t ctr = ctx->ctr;

    goto loc_80145D8C;

loc_80145D8C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r22 = r3;
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
    r25 = r3;
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
    r24 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r3 = (r22 & 255);
    // inline leaf 0x80145018 (11 guest instruction(s))
}

loc_inl3_0x80145018:
{
    r4 = 0x806A0000u;
    r4 = (r4 + 27152);
    r4 = MemoryInline::FlatRead32((r4 + 3912));
}

loc_inl3_0x80145028:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x8014503C;
    }
}

loc_inl3_0x8014502C:
{
    r0 = (r3 & 255);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4_addr_3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_3);
    goto loc_inl3_cont_80145018;
}

loc_inl3_0x8014503C:
{
    r3 = 0;
}

loc_inl3_cont_80145018:
{
    // end of inlined leaf 0x80145018
}

loc_80145DC8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80145F30;
    }
}

loc_80145DCC:
{
    r26 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80145DD4:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80145F30;
    }
}

loc_80145DD8:
{
    r4 = 0;
    r5 = r25;
    r0 = 0;
    ctr = r24;
}

loc_80145DEC:
{
    if ((static_cast<int32_t>(r24) <= static_cast<int32_t>(0))) {
        goto loc_80145E0C;
    }
}

loc_80145DF0:
{
    r3 = MemoryInline::FlatRead8(r5);
}

loc_80145DF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80145E00;
    }
}

loc_80145DFC:
{
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r0));
}

loc_80145E00:
{
    r4 = (r4 + 1);
    r5 = (r5 + 2840);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80145DF0;
    }
}

loc_80145E0C:
{
    r28 = 0;
    r27 = 0;
    r31 = 1;
    r3 = 0x806B0000u;
    r22 = (r3 + -25760);
    r23 = 13;
    goto loc_80145F24;
}

loc_80145E28:
{
    r30 = 0;
    r29 = r25;
    goto loc_80145F10;
}

loc_80145E34:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_80145E3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80145F08;
    }
}

loc_80145E40:
{
    r0 = MemoryInline::FlatRead8((r29 + 1131));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80145E4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_80145E5C;
    }
}

loc_80145E50:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
}

loc_80145E58:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80145F08;
    }
}

loc_80145E5C:
{
    r3 = MemoryInline::FlatRead8((r29 + 3));
    r0 = MemoryInline::FlatRead8(r26);
}

loc_80145E68:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80145F08;
    }
}

loc_80145E6C:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
}

loc_80145E74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80145E88;
    }
}

loc_80145E78:
{
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = MemoryInline::FlatRead8((r26 + 2));
}

loc_80145E84:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80145F08;
    }
}

loc_80145E88:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x802AFCE8u) && KnownTranslatedCpuCall<0x802AFCE8u>::kAvailable && !KnownTranslatedCpuCall<0x802AFCE8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x802AFCE8u>()) {
        const auto state_free_result_802AFCE8_2088 = func_802AFCE8_statefree();
        r3 = static_cast<uint32_t>(state_free_result_802AFCE8_2088);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x802AFCE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r29 + 481));
}

loc_80145E98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_80145F08;
    }
}

loc_80145E9C:
{
    r3 = r29;
    r4 = 13;
    r5 = MemoryInline::FlatRead8((r26 + 3));
    ctx->lr = 0x80145EACu;
    if constexpr (KnownRegArgsCpuCall<0x80128AF0u>(&func_80128AF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80128AF0_2680 = func_80128AF0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80128AF0_2680);
        r4 = static_cast<uint32_t>(regargs_result_80128AF0_2680 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80128AF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r3 = r29;
    ctx->lr = 0x80145EB4u;
    if constexpr (KnownRegArgsCpuCall<0x8013AB28u>(&func_8013AB28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_8013AB28_2D2A = func_8013AB28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8013AB28_2D2A);
        r4 = static_cast<uint32_t>(regargs_result_8013AB28_2D2A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8013AB28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80133C24u) && KnownTranslatedCpuCall<0x80133C24u>::kAvailable && !KnownTranslatedCpuCall<0x80133C24u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80133C24u>()) {
        func_80133C24_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80133C24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r27)));
    MemoryInline::FlatWrite8((r29 + 1131), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r31));
    r3 = r29;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x801308A8u) && KnownTranslatedCpuCall<0x801308A8u>::kAvailable && !KnownTranslatedCpuCall<0x801308A8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x801308A8u>()) {
        func_801308A8_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801308A8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        ctr = ctx->ctr;
    }
    r0 = (r28 & 255);
    r0 = (r0 * 12);
    r3 = (r22 + r0);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r23));
    r0 = MemoryInline::FlatRead8((r26 + 3));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 4));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r26 + 5));
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 8), r29);
    r28 = (r28 + 1);
    goto loc_80145F1C;
}

loc_80145F08:
{
    r30 = (r30 + 1);
    r29 = (r29 + 2840);
}

loc_80145F10:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_80145F18:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r24))) {
        goto loc_80145E34;
    }
}

loc_80145F1C:
{
    r26 = (r26 + 12);
    r27 = (r27 + 1);
}

loc_80145F24:
{
    r0 = MemoryInline::FlatRead8(r26);
}

loc_80145F2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80145E28;
    }
}

loc_80145F30:
{
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80145D8C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80145D8C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FBF gpr_write=0x003FFFFF gpr_return=0x00000018 fpr_read=0xF8003FFF fpr_write=0xF8003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80145D8C func_80145D8C preserves=true fpr_mask=0x00000000
