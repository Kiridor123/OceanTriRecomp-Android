#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF2E4(CpuContext* ctx);
extern "C" uint32_t func_800CF2E4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800DCA6C(CpuContext* ctx);
extern "C" uint64_t func_800DCA6C_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_8012D0D8(CpuContext* ctx);
extern "C" uint32_t func_8012D0D8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B421C(CpuContext* ctx);
extern "C" uint32_t func_803B421C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B956C(CpuContext* ctx);
extern "C" uint64_t func_803B956C_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803BA104(CpuContext* ctx);
extern "C" uint32_t func_803BA104_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803B9C04_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
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
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_803B9C04;

loc_803B9C04:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r29 = r4;
    r27 = r5;
    r30 = 255;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r0 = MemoryInline::FlatRead8((r28 + 2206));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803B9C3C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803B9E98;
    }
}

loc_803B9C40:
{
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl2_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
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

loc_inl2_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = 1374420992;
    r0 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r3 = (r4 - r0);
    r0 = (r27 & 255);
}

loc_803B9C74:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_803B9E98;
    }
}

loc_803B9C78:
{
    r0 = MemoryInline::FlatRead32((r28 + 2188));
}

loc_803B9C80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_803B9C98;
    }
}

loc_803B9C84:
{
    r0 = MemoryInline::FlatRead16((r28 + 2200));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803B9C8C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803B9C98;
    }
}

loc_803B9C90:
{
    r30 = 0;
    goto loc_803B9CD4;
}

loc_803B9C98:
{
    r0 = MemoryInline::FlatRead32((r28 + 2192));
}

loc_803B9CA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_803B9CB8;
    }
}

loc_803B9CA4:
{
    r0 = MemoryInline::FlatRead16((r28 + 2202));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803B9CAC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803B9CB8;
    }
}

loc_803B9CB0:
{
    r30 = 1;
    goto loc_803B9CD4;
}

loc_803B9CB8:
{
    r0 = MemoryInline::FlatRead32((r28 + 2196));
}

loc_803B9CC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_803B9CD4;
    }
}

loc_803B9CC4:
{
    r0 = MemoryInline::FlatRead16((r28 + 2204));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803B9CCC:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_803B9CD4;
    }
}

loc_803B9CD0:
{
    r30 = 2;
}

loc_803B9CD4:
{
}

loc_803B9CD8:
{
    if ((static_cast<uint32_t>(r30) == static_cast<uint32_t>(255))) {
        goto loc_803B9E98;
    }
}

loc_803B9CDC:
{
    r0 = MemoryInline::FlatRead8((r28 + 3));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = MemoryInline::FlatRead32((r13 + -16844));
    r3_addr_1 = (r3 + r0);
    r31 = MemoryInline::FlatRead16(r3_addr_1);
}

loc_803B9CF0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_803B9E98;
    }
}

loc_803B9CF4:
{
    r3 = r28;
    ctx->lr = 0x803B9CFCu;
    if constexpr (KnownRegArgsCpuCall<0x803B956Cu>(&func_803B956C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B956C_1C36 = func_803B956C_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_803B956C_1C36);
        r4 = static_cast<uint32_t>(regargs_result_803B956C_1C36 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B956Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
    r31 = (r31 + r0);
    ctx->lr = 0x803B9D08u;
    if constexpr (KnownRegArgsCpuCall<0x800CF2E4u>(&func_800CF2E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CF2E4_1F4D = func_800CF2E4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CF2E4_1F4D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CF2E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B9D0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B9D30;
    }
}

loc_803B9D10:
{
    r3 = 0x806D0000u;
    r3 = MemoryInline::FlatRead32((r3 + 20200));
}

loc_803B9D1C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B9E98;
    }
}

loc_803B9D20:
{
    r0 = (r31 & 65535);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_2 = (r3 + r0);
    r27 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_803B9D60;
}

loc_803B9D30:
{
    r3 = 0;
    ctx->lr = 0x803B9D38u;
    if constexpr (KnownRegArgsCpuCall<0x803B421Cu>(&func_803B421C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B421C_246D = func_803B421C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B421C_246D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B421Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = 0x806D0000u;
    r3 = (r3 + 20200);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
}

loc_803B9D50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B9E98;
    }
}

loc_803B9D54:
{
    r0 = (r31 & 65535);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3_addr_4 = (r3 + r0);
    r27 = MemoryInline::FlatRead32(r3_addr_4);
}

loc_803B9D60:
{
}

loc_803B9D64:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_803B9E98;
    }
}

loc_803B9D68:
{
    if constexpr (KnownRegArgsCpuCall<0x803BA104u>(&func_803BA104)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803BA104_2A05 = func_803BA104_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_803BA104_2A05;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803BA104u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
}

loc_803B9D74:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B9E98;
    }
}

loc_803B9D78:
{
    r3 = (r1 + 8);
    r4 = r29;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = MemoryInline::FlatRead8((r28 + 482));
}

loc_803B9D8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803B9D98;
    }
}

loc_803B9D90:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 524));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
}

loc_803B9D98:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r31, static_cast<uint8_t>(r0));
    r29 = 0;
    MemoryInline::FlatWrite8((r31 + 1), static_cast<uint8_t>(r29));
    r0 = 2;
    MemoryInline::FlatWrite8((r31 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r29));
    r0 = MemoryInline::FlatRead8((r28 + 481));
    MemoryInline::FlatWrite8((r31 + 4), static_cast<uint8_t>(r0));
    r3 = (r31 + 20);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r31 + 464);
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r29));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5328));
    MemoryInline::FlatWriteFloat32((r31 + 496), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5352));
    MemoryInline::FlatWriteFloat32((r31 + 500), f0.d);
    r0 = MemoryInline::FlatRead8((r28 + 482));
}

loc_803B9DF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_803B9E10;
    }
}

loc_803B9DF4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 496));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5348));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 496), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 500));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 500), f0.d);
}

loc_803B9E10:
{
    r4 = 0;
    MemoryInline::FlatWrite16((r31 + 504), static_cast<uint16_t>(r4));
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 506), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r31 + 508), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r31 + 510), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r31 + 492), r27);
    r0 = 1800;
    MemoryInline::FlatWrite32((r31 + 440), r0);
    r3 = 0x803C0000u;
    r0 = (r3 + -25880);
    MemoryInline::FlatWrite32((r31 + 444), r0);
    MemoryInline::FlatWrite16((r31 + 516), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r31 + 518), static_cast<uint16_t>(r4));
    r4 = MemoryInline::FlatRead8((r31 + 2));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    r3 = (r28 + r0);
    MemoryInline::FlatWrite32((r3 + 2188), r4);
    r0 = MemoryInline::FlatRead32((r31 + 440));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r3 = (r28 + r0);
    MemoryInline::FlatWrite16((r3 + 2200), static_cast<uint16_t>(r4));
    r3 = MemoryInline::FlatRead8((r28 + 2206));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r28 + 2206), static_cast<uint8_t>(r0));
    r3 = r28;
    ctx->lr = 0x803B9E80u;
    if constexpr (KnownRegArgsCpuCall<0x8012D0D8u>(&func_8012D0D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D0D8_3AC9 = func_8012D0D8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012D0D8_3AC9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8012D0D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_803B9E84:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B9E90;
    }
}

loc_803B9E88:
{
    r3 = (r1 + 8);
    ctx->lr = 0x803B9E90u;
    if constexpr (KnownRegArgsCpuCall<0x800DCA6Cu>(&func_800DCA6C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DCA6C_3DF8 = func_800DCA6C_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DCA6C_3DF8);
        r4 = static_cast<uint32_t>(regargs_result_800DCA6C_3DF8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800DCA6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_803B9E90:
{
    r3 = 1;
    goto loc_803B9E9C;
}

loc_803B9E98:
{
    r3 = 0;
}

loc_803B9E9C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B9C04(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B9C04_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B9C04 func_803B9C04 preserves=true fpr_mask=0x00000000
