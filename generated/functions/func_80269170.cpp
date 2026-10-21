#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80047D10(CpuContext* ctx);
extern "C" uint64_t func_80047D10_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800EFCCC(CpuContext* ctx);
extern "C" uint64_t func_800EFCCC_rac8_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80268ED4(CpuContext* ctx);
extern "C" uint64_t func_80268ED4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80269170_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
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
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80269170u);
    goto loc_80269170;

loc_80269170:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r28 = r3;
    r29 = MemoryInline::FlatRead32((r3 + 12));
    r30 = MemoryInline::FlatRead32((r3 + 16));
    r31 = 0;
    r25 = 1;
    r26 = 0;
    goto loc_802693D4;
}

loc_802691A0:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_802691A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802693C8;
    }
}

loc_802691AC:
{
    r6 = MemoryInline::FlatRead32((r13 + -17144));
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r4 = (r6 + r3);
    r0 = MemoryInline::FlatRead8((r4 + 560));
}

loc_802691C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802691D0;
    }
}

loc_802691C4:
{
}

loc_802691C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80269278;
    }
}

loc_802691CC:
{
    goto loc_802692AC;
}

loc_802691D0:
{
    r7 = 0;
    r8 = MemoryInline::FlatRead32((r28 + 12));
    r4 = 0;
    ctr = r5;
}

loc_802691E4:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80269218;
    }
}

loc_802691E8:
{
    r0 = MemoryInline::FlatRead8(r8);
}

loc_802691F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80269208;
    }
}

loc_802691F4:
{
    r0 = MemoryInline::FlatRead8((r6 + 560));
}

loc_802691FC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_80269208;
    }
}

loc_80269200:
{
    r7 = 1;
    goto loc_80269218;
}

loc_80269208:
{
    r6 = (r6 + 1);
    r4 = (r4 + 1);
    r8 = (r8 + 2848);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802691E8;
    }
}

loc_80269218:
{
}

loc_8026921C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r31))) {
        goto loc_80269228;
    }
}

loc_80269220:
{
}

loc_80269224:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(1))) {
        goto loc_802692AC;
    }
}

loc_80269228:
{
    r4 = MemoryInline::FlatRead8((r29 + 20));
    r5 = MemoryInline::FlatRead8((r29 + 609));
    r6 = MemoryInline::FlatRead8((r29 + 2844));
    r7 = MemoryInline::FlatRead8((r29 + 2845));
    ctx->lr = 0x8026923Cu;
    if constexpr (KnownRegArgsCpuCall<0x80047D10u>(&func_80047D10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->ctr = ctr;
        const auto regargs_result_80047D10_14D1 = func_80047D10_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80047D10_14D1);
        r4 = static_cast<uint32_t>(regargs_result_80047D10_14D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80047D10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
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
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r4 = MemoryInline::FlatRead8((r29 + 2846));
    r0 = MemoryInline::FlatRead8((r29 + 2847));
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // inline leaf 0x80047CEC (9 guest instruction(s))
    r6 = 0x80670000u;
    r6 = (r6 + -18072);
    r0 = (r3 & 255);
    r3 = (r6 + r0);
    MemoryInline::FlatWrite8((r3 + 1220), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1210), static_cast<uint8_t>(r5));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 1200), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80047CEC
    r3 = MemoryInline::FlatRead8((r29 + 8));
    r4 = MemoryInline::FlatRead8((r29 + 20));
    // inline leaf 0x80047CCC (8 guest instruction(s))
    r5 = 0x80670000u;
    r5 = (r5 + -18072);
    r0 = (r3 & 255);
    r3 = (r5 + r0);
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r4));
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 1200), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80047CCC
    r3 = MemoryInline::FlatRead32((r13 + -17144));
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 560));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 560), static_cast<uint8_t>(r0));
    goto loc_802692AC;
}

loc_80269278:
{
    ctx->lr = 0x8026927Cu;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80047954u>(ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
    r3 = MemoryInline::FlatRead8((r29 + 8));
    // inline leaf 0x80047D9C (13 guest instruction(s))
}

loc_inl3_0x80047D9C:
{
    r4 = 0x80670000u;
    r4 = (r4 + -18072);
    r0 = (r3 & 255);
    r3 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 19));
}

loc_inl3_0x80047DB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x80047DC0;
    }
}

loc_inl3_0x80047DB8:
{
    r3 = 1;
    goto loc_inl3_cont_80047D9C;
}

loc_inl3_0x80047DC0:
{
    r0 = MemoryInline::FlatRead8((r3 + 1200));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_2 & 134217727);
}

loc_inl3_cont_80047D9C:
{
    // end of inlined leaf 0x80047D9C
}

loc_80269288:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802692AC;
    }
}

loc_8026928C:
{
    r3 = MemoryInline::FlatRead32((r13 + -17144));
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r4 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r4 + 560));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 560), static_cast<uint8_t>(r0));
    r3 = r29;
    ctx->lr = 0x802692ACu;
    if constexpr (KnownRegArgsCpuCall<0x800EFCCCu>(&func_800EFCCC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_800EFCCC_2AEB = func_800EFCCC_rac8_1fe_18_0(ctx, r3, r6, r7, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800EFCCC_2AEB);
        r4 = static_cast<uint32_t>(regargs_result_800EFCCC_2AEB >> 32);
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
        InvokeDirectCpu<0x800EFCCCu>(ctx);
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
        ctr = ctx->ctr;
    }
}

loc_802692AC:
{
    r3 = MemoryInline::FlatRead32((r13 + -17144));
    r0 = MemoryInline::FlatRead8((r29 + 8));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 560));
}

loc_802692C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802693C8;
    }
}

loc_802692C4:
{
    r23 = 0;
    r24 = r30;
    r27 = r30;
}

loc_802692D0:
{
    r3 = MemoryInline::FlatRead8(r27);
}

loc_802692D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80269308;
    }
}

loc_802692DC:
{
}

loc_802692E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_80269310;
    }
}

loc_802692E4:
{
}

loc_802692E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_80269328;
    }
}

loc_802692EC:
{
}

loc_802692F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_80269368;
    }
}

loc_802692F4:
{
}

loc_802692F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(8))) {
        goto loc_80269390;
    }
}

loc_802692FC:
{
}

loc_80269300:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(9))) {
        goto loc_8026939C;
    }
}

loc_80269304:
{
    goto loc_802693B4;
}

loc_80269308:
{
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r25));
    goto loc_802693B4;
}

loc_80269310:
{
    r3 = r29;
    r4 = r30;
    r5 = (r23 & 255);
    r6 = 0;
    ctx->lr = 0x80269324u;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80268914u>(ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
    goto loc_802693B4;
}

loc_80269328:
{
}

loc_8026932C:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_8026933C;
    }
}

loc_80269330:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80269338:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802693B4;
    }
}

loc_8026933C:
{
    r0 = (r23 + -8);
}

loc_80269344:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80269354;
    }
}

loc_80269348:
{
    r0 = MemoryInline::FlatRead8((r30 + 7));
}

loc_80269350:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_802693B4;
    }
}

loc_80269354:
{
    r3 = r29;
    r4 = r30;
    r5 = (r23 & 255);
    ctx->lr = 0x80269364u;
    if constexpr (KnownRegArgsCpuCall<0x80268ED4u>(&func_80268ED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_80268ED4_3E75 = func_80268ED4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80268ED4_3E75);
        r4 = static_cast<uint32_t>(regargs_result_80268ED4_3E75 >> 32);
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
        InvokeDirectCpu<0x80268ED4u>(ctx);
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
        ctr = ctx->ctr;
    }
    goto loc_802693B4;
}

loc_80269368:
{
    r3 = r29;
    r4 = r30;
    r5 = (r23 & 255);
    // inline leaf 0x80268E9C (4 guest instruction(s))
    r3 = 3;
    r0 = (r5 & 255);
    r4_addr_3 = (r4 + r0);
    MemoryInline::FlatWrite8(r4_addr_3, static_cast<uint8_t>(r3));
    // end of inlined leaf 0x80268E9C
    r3 = r29;
    r4 = r30;
    r5 = (r23 & 255);
    r6 = 1;
    ctx->lr = 0x8026938Cu;
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
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80268914u>(ctx);
    r0 = ctx->gpr[0];
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
    ctr = ctx->ctr;
    goto loc_802693B4;
}

loc_80269390:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r0));
    goto loc_802693B4;
}

loc_8026939C:
{
    r3 = MemoryInline::FlatRead32((r24 + 288));
}

loc_802693A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802693AC;
    }
}

loc_802693A8:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r25));
}

loc_802693AC:
{
    MemoryInline::FlatWrite32((r24 + 288), r26);
    MemoryInline::FlatWrite8(r27, static_cast<uint8_t>(r25));
}

loc_802693B4:
{
    r24 = (r24 + 4);
    r23 = (r23 + 1);
    r27 = (r27 + 1);
}

loc_802693C4:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(11))) {
        goto loc_802692D0;
    }
}

loc_802693C8:
{
    r31 = (r31 + 1);
    r29 = (r29 + 2848);
    r30 = (r30 + 332);
}

loc_802693D4:
{
    r5 = MemoryInline::FlatRead32((r28 + 4));
}

loc_802693DC:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r5))) {
        goto loc_802691A0;
    }
}

loc_802693E0:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
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
    ctx->ctr = ctr;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80269170(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80269170_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x007FFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80269170 func_80269170 preserves=true fpr_mask=0x00000000
