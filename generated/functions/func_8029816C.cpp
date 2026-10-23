#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80135B04(CpuContext* ctx);
extern "C" uint64_t func_80135B04_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_80298854(CpuContext* ctx);
extern "C" uint64_t func_80298854_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8029816C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_8029816C;

loc_8029816C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r3 = 3;
    // inline leaf 0x800CFB34 (15 guest instruction(s))
}

loc_inl1_0x800CFB34:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB50;
    }
}

loc_inl1_0x800CFB48:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB50:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB58:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB64;
    }
}

loc_inl1_0x800CFB5C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFB34;
}

loc_inl1_0x800CFB64:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead16(r4_addr_1);
}

loc_inl1_cont_800CFB34:
{
    // end of inlined leaf 0x800CFB34
    r28 = (r3 & 65535);
    r3 = 3;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
    r27 = 0;
    r30 = r29;
    r25 = (r28 + -1);
    goto loc_802982B4;
}

loc_802981A8:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_802981B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802982AC;
    }
}

loc_802981B4:
{
    r0 = MemoryInline::FlatRead16((r30 + 2242));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802981BC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802982AC;
    }
}

loc_802981C0:
{
    r0 = MemoryInline::FlatRead16((r30 + 2244));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802981C8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802982AC;
    }
}

loc_802981CC:
{
    r26 = (r27 + 1);
    r0 = (r26 * 2840);
    r31 = (r29 + r0);
    goto loc_802982A4;
}

loc_802981DC:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_802981E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029829C;
    }
}

loc_802981E8:
{
    r0 = MemoryInline::FlatRead16((r31 + 2242));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802981F0:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8029829C;
    }
}

loc_802981F4:
{
    r0 = MemoryInline::FlatRead16((r31 + 2244));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802981FC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_8029829C;
    }
}

loc_80298200:
{
    r3 = MemoryInline::FlatRead8((r30 + 481));
    r0 = MemoryInline::FlatRead8((r31 + 481));
}

loc_8029820C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8029829C;
    }
}

loc_80298210:
{
    r3 = r30;
    ctx->lr = 0x80298218u;
    if constexpr (KnownRegArgsCpuCall<0x80135B04u>(&func_80135B04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80135B04_1804 = func_80135B04_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B04_1804);
        r4 = static_cast<uint32_t>(regargs_result_80135B04_1804 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80135B04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_80298220:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(9))) {
        goto loc_80298238;
    }
}

loc_80298224:
{
    r3 = r31;
    ctx->lr = 0x8029822Cu;
    if constexpr (KnownRegArgsCpuCall<0x80135B04u>(&func_80135B04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80135B04_1BF4 = func_80135B04_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B04_1BF4);
        r4 = static_cast<uint32_t>(regargs_result_80135B04_1BF4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80135B04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_80298234:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(9))) {
        goto loc_8029829C;
    }
}

loc_80298238:
{
    r0 = MemoryInline::FlatRead16((r30 + 2246));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_80298240:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80298264;
    }
}

loc_80298244:
{
    r3 = r31;
    ctx->lr = 0x8029824Cu;
    if constexpr (KnownRegArgsCpuCall<0x80135B04u>(&func_80135B04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80135B04_20EB = func_80135B04_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B04_20EB);
        r4 = static_cast<uint32_t>(regargs_result_80135B04_20EB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80135B04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r24 = (r3 & 255);
    r3 = r30;
    ctx->lr = 0x80298258u;
    if constexpr (KnownRegArgsCpuCall<0x80135B04u>(&func_80135B04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80135B04_2447 = func_80135B04_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B04_2447);
        r4 = static_cast<uint32_t>(regargs_result_80135B04_2447 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80135B04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_80298260:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r24))) {
        goto loc_8029829C;
    }
}

loc_80298264:
{
    r0 = MemoryInline::FlatRead16((r31 + 2246));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8029826C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_80298290;
    }
}

loc_80298270:
{
    r3 = r30;
    ctx->lr = 0x80298278u;
    if constexpr (KnownRegArgsCpuCall<0x80135B04u>(&func_80135B04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80135B04_2940 = func_80135B04_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B04_2940);
        r4 = static_cast<uint32_t>(regargs_result_80135B04_2940 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80135B04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r24 = (r3 & 255);
    r3 = r31;
    ctx->lr = 0x80298284u;
    if constexpr (KnownRegArgsCpuCall<0x80135B04u>(&func_80135B04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80135B04_2C9C = func_80135B04_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B04_2C9C);
        r4 = static_cast<uint32_t>(regargs_result_80135B04_2C9C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80135B04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_8029828C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r24))) {
        goto loc_8029829C;
    }
}

loc_80298290:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x8029829Cu;
    if constexpr (KnownRegArgsCpuCall<0x80298854u>(&func_80298854)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_80298854_309F = func_80298854_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80298854_309F);
        r4 = static_cast<uint32_t>(regargs_result_80298854_309F >> 32);
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
        InvokeDirectCpu<0x80298854u>(ctx);
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
    }
}

loc_8029829C:
{
    r31 = (r31 + 2840);
    r26 = (r26 + 1);
}

loc_802982A4:
{
}

loc_802982A8:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(r28))) {
        goto loc_802981DC;
    }
}

loc_802982AC:
{
    r30 = (r30 + 2840);
    r27 = (r27 + 1);
}

loc_802982B4:
{
}

loc_802982B8:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r25))) {
        goto loc_802981A8;
    }
}

loc_802982BC:
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8029816C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8029816C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xC0003FFF fpr_write=0xC0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8029816C func_8029816C preserves=true fpr_mask=0x00000000
