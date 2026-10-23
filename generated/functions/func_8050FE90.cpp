#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8050D6F0(CpuContext* ctx);
extern "C" uint64_t func_8050D6F0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050D8B0(CpuContext* ctx);
extern "C" uint64_t func_8050D8B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050E0E0(CpuContext* ctx);
extern "C" uint64_t func_8050E0E0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050E430(CpuContext* ctx);
extern "C" uint64_t func_8050E430_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8050FE90_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r28_mdest_0 = 0;
    uint32_t r28_mdest_1 = 0;
    uint32_t r28_mdest_2 = 0;
    uint32_t r28_mdest_3 = 0;
    uint32_t r28_mrot_0 = 0;
    uint32_t r28_mrot_1 = 0;
    uint32_t r28_mrot_2 = 0;
    uint32_t r28_mrot_3 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r29_mdest_0 = 0;
    uint32_t r29_mrot_0 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_8050FE90;

loc_8050FE90:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
}

loc_8050FEA8:
{
    r0 = MemoryInline::FlatRead8(r4);
    r29 = MemoryInline::FlatRead8((r4 + 1));
    r26 = r3;
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r29_mrot_0 = (r29_rot_0 & 65280);
    r29_mdest_0 = (r29 & -65281);
    r29 = (r29_mdest_0 | r29_mrot_0);
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(2))) {
        goto loc_8050FEC4;
    }
}

loc_8050FEBC:
{
    r28 = r29;
    goto loc_8050FF74;
}

loc_8050FEC4:
{
}

loc_8050FEC8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(4))) {
        goto loc_8050FEDC;
    }
}

loc_8050FECC:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
    r28 = MemoryInline::FlatRead8((r4 + 3));
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r28_mrot_1 = (r28_rot_1 & 65280);
    r28_mdest_1 = (r28 & -65281);
    r28 = (r28_mdest_1 | r28_mrot_1);
    goto loc_8050FF74;
}

loc_8050FEDC:
{
    r4 = MemoryInline::FlatRead32((r3 + 12));
}

loc_8050FEE4:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(5))) {
        goto loc_8050FF38;
    }
}

loc_8050FEE8:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_8050FEF0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8050FF1C;
    }
}

loc_8050FEF4:
{
    ctx->lr = 0x8050FEF8u;
    if constexpr (KnownRegArgsCpuCall<0x8050E430u>(&func_8050E430)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8050E430_12CE = func_8050E430_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050E430_12CE);
        r4 = static_cast<uint32_t>(regargs_result_8050E430_12CE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050E430u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r3 = r26;
    r4 = 7;
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x8050FF0Cu;
    if constexpr (KnownRegArgsCpuCall<0x8050D6F0u>(&func_8050D6F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8050D6F0_19C2 = func_8050D6F0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050D6F0_19C2);
        r4 = static_cast<uint32_t>(regargs_result_8050D6F0_19C2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050D6F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_8050FF10:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8050FF60;
    }
}

loc_8050FF14:
{
    r3 = 0;
    goto loc_8050FF64;
}

loc_8050FF1C:
{
}

loc_8050FF20:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_8050FF2C;
    }
}

loc_8050FF24:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 20), r0);
}

loc_8050FF2C:
{
    r3 = r26;
    ctx->lr = 0x8050FF34u;
    if constexpr (KnownRegArgsCpuCall<0x8050E430u>(&func_8050E430)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8050E430_2244 = func_8050E430_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050E430_2244);
        r4 = static_cast<uint32_t>(regargs_result_8050E430_2244 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050E430u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    goto loc_8050FF60;
}

loc_8050FF38:
{
}

loc_8050FF3C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(7))) {
        goto loc_8050FF60;
    }
}

loc_8050FF40:
{
    ctx->lr = 0x8050FF44u;
    if constexpr (KnownRegArgsCpuCall<0x8050E430u>(&func_8050E430)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8050E430_29C4 = func_8050E430_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050E430_29C4);
        r4 = static_cast<uint32_t>(regargs_result_8050E430_29C4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050E430u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
    r3 = r26;
    r4 = 2;
    ctx->lr = 0x8050FF50u;
    if constexpr (KnownRegArgsCpuCall<0x8050D8B0u>(&func_8050D8B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8050D8B0_309E = func_8050D8B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050D8B0_309E);
        r4 = static_cast<uint32_t>(regargs_result_8050D8B0_309E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050D8B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_8050FF54:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8050FF60;
    }
}

loc_8050FF58:
{
    r3 = 0;
    goto loc_8050FF64;
}

loc_8050FF60:
{
    r3 = 1;
}

loc_8050FF64:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    goto loc_80510060;
}

loc_8050FF74:
{
    r3 = MemoryInline::FlatRead32((r3 + 96));
    // inline leaf 0x8050B2B0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x8050B2B0
    r30 = r3;
    r27 = 0;
    goto loc_80510054;
}

loc_8050FF88:
{
    r3 = MemoryInline::FlatRead32((r26 + 96));
    r4 = r27;
    // inline leaf 0x8050B2C0 (12 guest instruction(s))
}

loc_inl2_0x8050B2C0:
{
}

loc_inl2_0x8050B2C4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl2_0x8050B2D4;
    }
}

loc_inl2_0x8050B2C8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x8050B2D0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl2_0x8050B2DC;
    }
}

loc_inl2_0x8050B2D4:
{
    r3 = 0;
    goto loc_inl2_cont_8050B2C0;
}

loc_inl2_0x8050B2DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl2_cont_8050B2C0:
{
    // end of inlined leaf 0x8050B2C0
    r4 = MemoryInline::FlatRead16((r3 + 8));
    r31 = r3;
    r0 = (r4 - r29);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80510050;
    }
}

loc_8050FFA8:
{
    r0 = (r4 - r28);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_80510050;
    }
}

loc_8050FFB4:
{
    r4 = MemoryInline::FlatRead32((r26 + 8));
    r0 = MemoryInline::FlatRead32(r3);
    r3 = r26;
    r4 = MemoryInline::FlatRead32((r4 + 68));
    r5 = MemoryInline::FlatRead16((r26 + 102));
    r4 = (r0 + r4);
    r6 = MemoryInline::FlatRead32((r26 + 80));
    r4 = (r4 + 5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 255);
    r6_addr_2 = (r6 + r4);
    MemoryInline::FlatWrite8(r6_addr_2, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
    r6_addr_3 = (r6 + r4);
    MemoryInline::FlatWrite8(r6_addr_3, static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead32((r26 + 80));
    r0 = MemoryInline::FlatRead32(r31);
    r5 = MemoryInline::FlatRead32((r31 + 4));
    r4 = (r4 + r0);
    ctx->lr = 0x8050FFF8u;
    if constexpr (KnownRegArgsCpuCall<0x8050E0E0u>(&func_8050E0E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        const auto regargs_result_8050E0E0_421C = func_8050E0E0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050E0E0_421C);
        r4 = static_cast<uint32_t>(regargs_result_8050E0E0_421C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050E0E0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_8050FFFC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80510008;
    }
}

loc_80510000:
{
    r0 = 0;
    goto loc_80510040;
}

loc_80510008:
{
    r0 = MemoryInline::FlatRead32((r26 + 136));
    MemoryInline::FlatWrite32((r31 + 12), r0);
    r3 = MemoryInline::FlatRead32((r26 + 8));
    r4 = MemoryInline::FlatRead32((r26 + 80));
    r0 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 68));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80510030:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8051003C;
    }
}

loc_80510034:
{
    r0 = MemoryInline::FlatRead32((r26 + 136));
    MemoryInline::FlatWrite32((r26 + 140), r0);
}

loc_8051003C:
{
    r0 = 1;
}

loc_80510040:
{
}

loc_80510044:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80510050;
    }
}

loc_80510048:
{
    r3 = 0;
    goto loc_80510060;
}

loc_80510050:
{
    r27 = (r27 + 1);
}

loc_80510054:
{
}

loc_80510058:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(r30))) {
        goto loc_8050FF88;
    }
}

loc_8051005C:
{
    r3 = 1;
}

loc_80510060:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_8050FE90(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050FE90_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8050FE90 func_8050FE90 preserves=true fpr_mask=0x00000000
