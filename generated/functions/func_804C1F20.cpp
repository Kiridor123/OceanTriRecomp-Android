#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804C1DE0(CpuContext* ctx);
extern "C" uint64_t func_804C1DE0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804C2B60(CpuContext* ctx);
extern "C" void func_804C2B60_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804D2560(CpuContext* ctx);
extern "C" void func_804D2560_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_804D25A0(CpuContext* ctx);
extern "C" uint32_t func_804D25A0_ra68_1fe_8_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D2680(CpuContext* ctx);
extern "C" uint64_t func_804D2680_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804C1F20_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;

    MKW_GUEST_ENTER(0x804C1F20u);
    goto loc_804C1F20;

loc_804C1F20:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r4);
    r0 = 0;
    r0_mrot_0 = (r7 & 255);
    r0_mdest_0 = (r0 & -256);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r27 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r5);
    r4 = 4;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r6);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r0);
    r3 = (r3 + 12);
    // inline leaf 0x804C2B40 (6 guest instruction(s))
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, r3, r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 20u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r4)))) {
        MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 8), r0);
        MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 10), r4);
    }
    // end of inlined leaf 0x804C2B40
    r0 = MemoryInline::FlatRead32((r13 + -15240));
}

loc_804C1F64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804C1F8C;
    }
}

loc_804C1F68:
{
    r3 = 0x80750000u;
    r4 = 4;
    r3 = (r3 + -20400);
    // inline leaf 0x804C2B40 (6 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam16((r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x804C2B40
    r3 = 0x80750000u;
    r3 = (r3 + -20384);
    ctx->lr = 0x804C1F84u;
    if constexpr (KnownRegArgsCpuCall<0x804D2560u>(&func_804D2560)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_804D2560_ra8_0_0_0(ctx, r3);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x804D2560u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    }
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -15240), r0);
}

loc_804C1F8C:
{
    r3 = (r27 + 32);
    ctx->lr = 0x804C1F94u;
    if constexpr (KnownRegArgsCpuCall<0x804D2560u>(&func_804D2560)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_804D2560_ra8_0_0_0(ctx, r3);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x804D2560u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    }
    r3 = 0x80750000u;
    r3 = (r3 + -20384);
    ctx->lr = 0x804C1FA0u;
    if constexpr (KnownRegArgsCpuCall<0x804D25A0u>(&func_804D25A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        const auto regargs_result_804D25A0_1585 = func_804D25A0_ra68_1fe_8_0(ctx, r3, r5, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = regargs_result_804D25A0_1585;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
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
        ctx->gpr[27] = r27;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804D25A0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r31 = 0x80750000u;
    r30 = 0;
    r28 = (r31 + -20400);
    goto loc_804C2088;
}

loc_804C1FB0:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_804C1FB8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r27))) {
        goto loc_804C2088;
    }
}

loc_804C1FBC:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_804C1FC4:
{
    if ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r0))) {
        goto loc_804C2088;
    }
}

loc_804C1FC8:
{
    r31 = 0;
    goto loc_804C2058;
}

loc_804C1FD0:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_804C1FD8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r27))) {
        goto loc_804C2058;
    }
}

loc_804C1FDC:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_804C1FE4:
{
    if ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r0))) {
        goto loc_804C2058;
    }
}

loc_804C1FE8:
{
    r29 = 0;
    goto loc_804C2028;
}

loc_804C1FF0:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_804C1FF8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r27))) {
        goto loc_804C2028;
    }
}

loc_804C1FFC:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_804C2004:
{
    if ((static_cast<uint32_t>(r27) >= static_cast<uint32_t>(r0))) {
        goto loc_804C2028;
    }
}

loc_804C2008:
{
    r4 = r27;
    r3 = (r3 + 12);
    ctx->lr = 0x804C2014u;
    if constexpr (KnownRegArgsCpuCall<0x804C1DE0u>(&func_804C1DE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804C1DE0_2187 = func_804C1DE0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804C1DE0_2187);
        r4 = static_cast<uint32_t>(regargs_result_804C1DE0_2187 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804C1DE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_804C2018:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C2020;
    }
}

loc_804C201C:
{
    goto loc_804C2044;
}

loc_804C2020:
{
    r3 = r29;
    goto loc_804C2044;
}

loc_804C2028:
{
    r4 = r29;
    r3 = (r31 + 12);
    // inline leaf 0x804C2C40 (8 guest instruction(s))
}

loc_inl3_0x804C2C40:
{
}

loc_inl3_0x804C2C44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl3_0x804C2C50;
    }
}

loc_inl3_0x804C2C48:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl3_cont_804C2C40;
}

loc_inl3_0x804C2C50:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl3_cont_804C2C40:
{
    // end of inlined leaf 0x804C2C40
}

loc_804C2038:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C1FF0;
    }
}

loc_804C2040:
{
    r3 = 0;
}

loc_804C2044:
{
}

loc_804C2048:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C2050;
    }
}

loc_804C204C:
{
    goto loc_804C2074;
}

loc_804C2050:
{
    r3 = r31;
    goto loc_804C2074;
}

loc_804C2058:
{
    r4 = r31;
    r3 = (r30 + 12);
    // inline leaf 0x804C2C40 (8 guest instruction(s))
}

loc_inl4_0x804C2C40:
{
}

loc_inl4_0x804C2C44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl4_0x804C2C50;
    }
}

loc_inl4_0x804C2C48:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl4_cont_804C2C40;
}

loc_inl4_0x804C2C50:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl4_cont_804C2C40:
{
    // end of inlined leaf 0x804C2C40
}

loc_804C2068:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C1FD0;
    }
}

loc_804C2070:
{
    r3 = 0;
}

loc_804C2074:
{
}

loc_804C2078:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C2080;
    }
}

loc_804C207C:
{
    goto loc_804C20A4;
}

loc_804C2080:
{
    r3 = r30;
    goto loc_804C20A4;
}

loc_804C2088:
{
    r4 = r30;
    r3 = (r31 + -20400);
    // inline leaf 0x804C2C40 (8 guest instruction(s))
}

loc_inl5_0x804C2C40:
{
}

loc_inl5_0x804C2C44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl5_0x804C2C50;
    }
}

loc_inl5_0x804C2C48:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl5_cont_804C2C40;
}

loc_inl5_0x804C2C50:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl5_cont_804C2C40:
{
    // end of inlined leaf 0x804C2C40
}

loc_804C2098:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804C1FB0;
    }
}

loc_804C20A0:
{
    r3 = 0;
}

loc_804C20A4:
{
}

loc_804C20A8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C20B0;
    }
}

loc_804C20AC:
{
    r28 = (r3 + 12);
}

loc_804C20B0:
{
    r3 = r28;
    r4 = r27;
    if constexpr (KnownRegArgsCpuCall<0x804C2B60u>(&func_804C2B60)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        func_804C2B60_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804C2B60u>(ctx);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    r3 = 0x80750000u;
    r3 = (r3 + -20384);
    ctx->lr = 0x804C20C8u;
    if constexpr (KnownRegArgsCpuCall<0x804D2680u>(&func_804D2680)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        const auto regargs_result_804D2680_341F = func_804D2680_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D2680_341F);
        r4 = static_cast<uint32_t>(regargs_result_804D2680_341F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804D2680u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804C1F20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C1F20_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x07FFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804C1F20 func_804C1F20 preserves=true fpr_mask=0x00000000
