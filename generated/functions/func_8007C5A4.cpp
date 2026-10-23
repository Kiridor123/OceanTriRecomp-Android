#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80060538(CpuContext* ctx);
extern "C" uint64_t func_80060538_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800697CC(CpuContext* ctx);
extern "C" uint32_t func_800697CC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80070040(CpuContext* ctx);
extern "C" uint64_t func_80070040_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800732F4(CpuContext* ctx);
extern "C" uint32_t func_800732F4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8007350C(CpuContext* ctx);
extern "C" uint32_t func_8007350C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8007360C(CpuContext* ctx);
extern "C" uint64_t func_8007360C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800740D8(CpuContext* ctx);
extern "C" uint64_t func_800740D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80074684(CpuContext* ctx);
extern "C" uint64_t func_80074684_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007B898(CpuContext* ctx);
extern "C" uint32_t func_8007B898_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8007D3FC(CpuContext* ctx);
extern "C" uint64_t func_8007D3FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007D420(CpuContext* ctx);
extern "C" uint64_t func_8007D420_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007D444(CpuContext* ctx);
extern "C" uint64_t func_8007D444_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007D468(CpuContext* ctx);
extern "C" uint64_t func_8007D468_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007E080(CpuContext* ctx);
extern "C" uint64_t func_8007E080_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007EDBC(CpuContext* ctx);
extern "C" uint64_t func_8007EDBC_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80088F88(CpuContext* ctx);
extern "C" uint64_t func_80088F88_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80089100(CpuContext* ctx);
extern "C" uint64_t func_80089100_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80089290(CpuContext* ctx);
extern "C" uint64_t func_80089290_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8007B898_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8007C5A4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r14_rot_0 = 0;
    uint32_t r14_rot_1 = 0;
    uint32_t r14_rot_2 = 0;
    uint32_t r14_rot_3 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_10 = 0;
    uint32_t r4_addr_11 = 0;
    uint32_t r4_addr_12 = 0;
    uint32_t r4_addr_13 = 0;
    uint32_t r4_addr_14 = 0;
    uint32_t r4_addr_15 = 0;
    uint32_t r4_addr_16 = 0;
    uint32_t r4_addr_17 = 0;
    uint32_t r4_addr_18 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_addr_8 = 0;
    uint32_t r4_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r23_entry = r23;
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    uint32_t cr = ctx->cr;

    goto loc_8007C5A4;

loc_8007C5A4:
{
    MemoryInline::FlatWriteRam32((r1 + -464), r1);
    r1 = (r1 + -464);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 468), r0);
    r11 = (r1 + 464);
    // inline leaf 0x80457454 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    // end of inlined leaf 0x80457454
    r16 = r3;
    r17 = r4;
    r18 = r5;
    r19 = r6;
    r20 = r7;
    r3 = r18;
    // inline leaf 0x8005D360 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8005D360
}

loc_8007C5D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8007C5E4;
    }
}

loc_8007C5DC:
{
    r3 = 0;
    goto loc_8007D3D8;
}

loc_8007C5E4:
{
}

loc_8007C5E8:
{
    if ((static_cast<int32_t>(r20) != static_cast<int32_t>(0))) {
        goto loc_8007C5F4;
    }
}

loc_8007C5EC:
{
    r20 = 1;
    goto loc_8007C600;
}

loc_8007C5F4:
{
}

loc_8007C5F8:
{
    if ((static_cast<int32_t>(r20) <= static_cast<int32_t>(16))) {
        goto loc_8007C600;
    }
}

loc_8007C5FC:
{
    r20 = 16;
}

loc_8007C600:
{
    r27 = 0;
    r3 = r18;
    ctx->lr = 0x8007C60Cu;
    if constexpr (KnownRegArgsCpuCall<0x800740D8u>(&func_800740D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800740D8_1F18 = func_800740D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800740D8_1F18);
        r4 = static_cast<uint32_t>(regargs_result_800740D8_1F18 >> 32);
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
        InvokeDirectCpu<0x800740D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 132), r3);
    r3 = (r1 + 132);
    ctx->lr = 0x8007C618u;
    if constexpr (KnownRegArgsCpuCall<0x80070040u>(&func_80070040)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80070040_23B9 = func_80070040_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80070040_23B9);
        r4 = static_cast<uint32_t>(regargs_result_80070040_23B9 >> 32);
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
        InvokeDirectCpu<0x80070040u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r21 = r3;
    r3 = r18;
    ctx->lr = 0x8007C624u;
    if constexpr (KnownRegArgsCpuCall<0x800740D8u>(&func_800740D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800740D8_282F = func_800740D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800740D8_282F);
        r4 = static_cast<uint32_t>(regargs_result_800740D8_282F >> 32);
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
        InvokeDirectCpu<0x800740D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 128), r3);
    r3 = (r1 + 128);
    ctx->lr = 0x8007C630u;
    if constexpr (KnownRegArgsCpuCall<0x80074684u>(&func_80074684)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80074684_2CD0 = func_80074684_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80074684_2CD0);
        r4 = static_cast<uint32_t>(regargs_result_80074684_2CD0 >> 32);
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
        InvokeDirectCpu<0x80074684u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r29 = r3;
    r3 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800988CCu>(ctx);
    r3 = ctx->gpr[3];
    r15 = r3;
    r3 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80097FE4u>(ctx);
    r3 = ctx->gpr[3];
    r14 = r3;
    r0 = (r21 * 48);
    MemoryInline::FlatWriteRam32((r1 + 264), r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    MemoryInline::FlatWriteRam32((r1 + 260), r0);
    r21 = (r29 * 48);
    r3 = r21;
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    r0 = (r20 * r3);
    MemoryInline::FlatWriteRam32((r1 + 256), r0);
    r22 = (r29 * 36);
    r3 = r18;
    ctx->lr = 0x8007C67Cu;
    if constexpr (KnownRegArgsCpuCall<0x800740D8u>(&func_800740D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800740D8_345A = func_800740D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800740D8_345A);
        r4 = static_cast<uint32_t>(regargs_result_800740D8_345A >> 32);
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
        InvokeDirectCpu<0x800740D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 124), r3);
    r3 = (r1 + 124);
    ctx->lr = 0x8007C688u;
    if constexpr (KnownRegArgsCpuCall<0x8007D468u>(&func_8007D468)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8007D468_38FB = func_8007D468_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007D468_38FB);
        r4 = static_cast<uint32_t>(regargs_result_8007D468_38FB >> 32);
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
        InvokeDirectCpu<0x8007D468u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r3 + 32));
}

loc_8007C690:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007C6A8;
    }
}

loc_8007C694:
{
    r3 = r22;
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    r0 = (r20 * r3);
    MemoryInline::FlatWriteRam32((r1 + 316), r0);
    goto loc_8007C6B0;
}

loc_8007C6A8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 316), r0);
}

loc_8007C6B0:
{
    r3 = r18;
    ctx->lr = 0x8007C6B8u;
    if constexpr (KnownRegArgsCpuCall<0x800740D8u>(&func_800740D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800740D8_3F8B = func_800740D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800740D8_3F8B);
        r4 = static_cast<uint32_t>(regargs_result_800740D8_3F8B >> 32);
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
        InvokeDirectCpu<0x800740D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 120), r3);
    r3 = (r1 + 120);
    ctx->lr = 0x8007C6C4u;
    if constexpr (KnownRegArgsCpuCall<0x8007D468u>(&func_8007D468)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8007D468_442C = func_8007D468_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007D468_442C);
        r4 = static_cast<uint32_t>(regargs_result_8007D468_442C >> 32);
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
        InvokeDirectCpu<0x8007D468u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r3 + 33));
}

loc_8007C6CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007C6E4;
    }
}

loc_8007C6D0:
{
    r3 = r21;
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    r0 = (r20 * r3);
    MemoryInline::FlatWriteRam32((r1 + 320), r0);
    goto loc_8007C6EC;
}

loc_8007C6E4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 320), r0);
}

loc_8007C6EC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    MemoryInline::FlatWriteRam32((r1 + 252), r0);
    r0 = (r19 & 1);
}

loc_8007C6FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007C70C;
    }
}

loc_8007C700:
{
    r0 = (r15 * 260);
    MemoryInline::FlatWriteRam32((r1 + 312), r0);
    goto loc_8007C714;
}

loc_8007C70C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 312), r0);
}

loc_8007C714:
{
    r0 = (r19 & 2);
}

loc_8007C71C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007C72C;
    }
}

loc_8007C720:
{
    r0 = (r15 * 100);
    MemoryInline::FlatWriteRam32((r1 + 308), r0);
    goto loc_8007C734;
}

loc_8007C72C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 308), r0);
}

loc_8007C734:
{
    r0 = (r19 & 4);
}

loc_8007C73C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007C74C;
    }
}

loc_8007C740:
{
    r0 = (r15 * 584);
    MemoryInline::FlatWriteRam32((r1 + 304), r0);
    goto loc_8007C754;
}

loc_8007C74C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 304), r0);
}

loc_8007C754:
{
    r0 = (r19 & 8);
}

loc_8007C75C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007C76C;
    }
}

loc_8007C760:
{
    r0 = (r15 * 40);
    MemoryInline::FlatWriteRam32((r1 + 300), r0);
    goto loc_8007C774;
}

loc_8007C76C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 300), r0);
}

loc_8007C774:
{
    r3 = (r19 & 16);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3 = (static_cast<int32_t>(r0) >> 31);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r0 = (r0 & r3);
    MemoryInline::FlatWriteRam32((r1 + 296), r0);
    r0 = (r19 & 32);
}

loc_8007C798:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007C7A8;
    }
}

loc_8007C79C:
{
    r0 = (r15 * 12);
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
    goto loc_8007C7B0;
}

loc_8007C7A8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 292), r0);
}

loc_8007C7B0:
{
    r3 = (r19 & 64);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0 = (static_cast<int32_t>(r0) >> 31);
    r0 = (r14 & r0);
    MemoryInline::FlatWriteRam32((r1 + 288), r0);
    r3 = (r19 & 128);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3 = (static_cast<int32_t>(r0) >> 31);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & -32);
    r0 = (r0 & r3);
    MemoryInline::FlatWriteRam32((r1 + 284), r0);
    r3 = (r19 & 256);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3 = (static_cast<int32_t>(r0) >> 31);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(7));
    r0 = (r0_rot_5 & -128);
    r0 = (r0 & r3);
    MemoryInline::FlatWriteRam32((r1 + 280), r0);
    r3 = (r19 & 512);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3 = (static_cast<int32_t>(r0) >> 31);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(6));
    r0 = (r0_rot_6 & -64);
    r0 = (r0 & r3);
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    r0 = (r19 & 1024);
}

loc_8007C824:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007C834;
    }
}

loc_8007C828:
{
    r0 = (r15 * 160);
    MemoryInline::FlatWriteRam32((r1 + 272), r0);
    goto loc_8007C83C;
}

loc_8007C834:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 272), r0);
}

loc_8007C83C:
{
    r3 = (r19 & 2048);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3 = (static_cast<int32_t>(r0) >> 31);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r15), static_cast<uint32_t>(9));
    r0 = (r0_rot_7 & -512);
    r0 = (r0 & r3);
    MemoryInline::FlatWriteRam32((r1 + 268), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 248), r0);
    r26 = 0;
    r0 = (r19 & 4096);
}

loc_8007C86C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007C930;
    }
}

loc_8007C870:
{
    r3 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800980FCu>(ctx);
    r3 = ctx->gpr[3];
    r21 = r3;
    r3 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800989E4u>(ctx);
    r3 = ctx->gpr[3];
    r15 = r3;
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r21), static_cast<uint32_t>(2));
    r0 = (r0_rot_8 & -4);
    MemoryInline::FlatWriteRam32((r1 + 248), r0);
    r22 = 0;
    goto loc_8007C928;
}

loc_8007C898:
{
    r3 = r18;
    r4 = r22;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098094u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 116), r3);
    r3 = (r1 + 180);
    r4 = (r1 + 116);
    ctx->lr = 0x8007C8B4u;
    if constexpr (KnownRegArgsCpuCall<0x800697CCu>(&func_800697CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800697CC_5E41 = func_800697CC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800697CC_5E41;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800697CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r23 = 0;
    goto loc_8007C904;
}

loc_8007C8BC:
{
    r3 = r18;
    r4 = r23;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8009897Cu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 112), r3);
    r3 = (r1 + 176);
    r4 = (r1 + 112);
    ctx->lr = 0x8007C8D8u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8007B898u) && KnownTranslatedCpuCall<0x8007B898u>::kAvailable && !KnownTranslatedCpuCall<0x8007B898u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8007B898u>()) {
        const auto state_free_result_8007B898_624D = func_8007B898_statefree(r1, r3, r4, 0x8007C8D8u);
        r0 = static_cast<uint32_t>(state_free_result_8007B898_624D[0]);
        r1 = static_cast<uint32_t>(state_free_result_8007B898_624D[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007B898u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = (r1 + 176);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800999D8u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 108), r3);
    r3 = (r1 + 108);
    // inline leaf 0x80073754 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073754
    r14 = r3;
    r3 = (r1 + 180);
    // inline leaf 0x80073754 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073754
}

loc_8007C8FC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r14))) {
        goto loc_8007C90C;
    }
}

loc_8007C900:
{
    r23 = (r23 + 1);
}

loc_8007C904:
{
}

loc_8007C908:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(r15))) {
        goto loc_8007C8BC;
    }
}

loc_8007C90C:
{
}

loc_8007C910:
{
    if ((static_cast<uint32_t>(r23) == static_cast<uint32_t>(r15))) {
        goto loc_8007C924;
    }
}

loc_8007C914:
{
    r3 = (r1 + 180);
    ctx->lr = 0x8007C91Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007D444u>(&func_8007D444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8007D444_6CAE = func_8007D444_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007D444_6CAE);
        r4 = static_cast<uint32_t>(regargs_result_8007D444_6CAE >> 32);
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
        InvokeDirectCpu<0x8007D444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    r26 = (r26 + r3);
}

loc_8007C924:
{
    r22 = (r22 + 1);
}

loc_8007C928:
{
}

loc_8007C92C:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(r21))) {
        goto loc_8007C898;
    }
}

loc_8007C930:
{
    r14 = 0;
    r25 = 0;
    r0 = (r19 & 8192);
}

loc_8007C940:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CA00;
    }
}

loc_8007C944:
{
    r3 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80098214u>(ctx);
    r3 = ctx->gpr[3];
    r22 = r3;
    r3 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800989E4u>(ctx);
    r3 = ctx->gpr[3];
    r21 = r3;
    r14_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r14 = (r14_rot_1 & -4);
    r23 = 0;
    goto loc_8007C9F8;
}

loc_8007C968:
{
    r3 = r18;
    r4 = r23;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800981ACu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 104), r3);
    r3 = (r1 + 172);
    r4 = (r1 + 104);
    ctx->lr = 0x8007C984u;
    if constexpr (KnownRegArgsCpuCall<0x8007350Cu>(&func_8007350C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007350C_75C5 = func_8007350C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007350C_75C5;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007350Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r24 = 0;
    goto loc_8007C9D4;
}

loc_8007C98C:
{
    r3 = r18;
    r4 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8009897Cu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 100), r3);
    r3 = (r1 + 168);
    r4 = (r1 + 100);
    ctx->lr = 0x8007C9A8u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8007B898u) && KnownTranslatedCpuCall<0x8007B898u>::kAvailable && !KnownTranslatedCpuCall<0x8007B898u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8007B898u>()) {
        const auto state_free_result_8007B898_79D1 = func_8007B898_statefree(r1, r3, r4, 0x8007C9A8u);
        r0 = static_cast<uint32_t>(state_free_result_8007B898_79D1[0]);
        r1 = static_cast<uint32_t>(state_free_result_8007B898_79D1[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007B898u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = (r1 + 168);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80099A4Cu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 96), r3);
    r3 = (r1 + 96);
    // inline leaf 0x80073460 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073460
    r15 = r3;
    r3 = (r1 + 172);
    // inline leaf 0x80073460 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073460
}

loc_8007C9CC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r15))) {
        goto loc_8007C9DC;
    }
}

loc_8007C9D0:
{
    r24 = (r24 + 1);
}

loc_8007C9D4:
{
}

loc_8007C9D8:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(r21))) {
        goto loc_8007C98C;
    }
}

loc_8007C9DC:
{
}

loc_8007C9E0:
{
    if ((static_cast<uint32_t>(r24) == static_cast<uint32_t>(r21))) {
        goto loc_8007C9F4;
    }
}

loc_8007C9E4:
{
    r3 = (r1 + 172);
    ctx->lr = 0x8007C9ECu;
    if constexpr (KnownRegArgsCpuCall<0x8007D420u>(&func_8007D420)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8007D420_8430 = func_8007D420_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007D420_8430);
        r4 = static_cast<uint32_t>(regargs_result_8007D420_8430 >> 32);
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
        InvokeDirectCpu<0x8007D420u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    r25 = (r25 + r3);
}

loc_8007C9F4:
{
    r23 = (r23 + 1);
}

loc_8007C9F8:
{
}

loc_8007C9FC:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(r22))) {
        goto loc_8007C968;
    }
}

loc_8007CA00:
{
    r24 = 0;
    r23 = 0;
    r0 = (r19 & 16384);
}

loc_8007CA10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CB10;
    }
}

loc_8007CA14:
{
    r3 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8009832Cu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    r3 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800989E4u>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r24_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r24 = (r24_rot_1 & -4);
    r22 = 0;
    goto loc_8007CB08;
}

loc_8007CA38:
{
    r3 = r18;
    r4 = r22;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800982C4u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 92), r3);
    r3 = (r1 + 164);
    r4 = (r1 + 92);
    ctx->lr = 0x8007CA54u;
    if constexpr (KnownRegArgsCpuCall<0x800732F4u>(&func_800732F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800732F4_8D46 = func_800732F4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800732F4_8D46;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800732F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r21 = 0;
    goto loc_8007CAE4;
}

loc_8007CA5C:
{
    r3 = r18;
    r4 = r21;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8009897Cu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 88), r3);
    r3 = (r1 + 160);
    r4 = (r1 + 88);
    ctx->lr = 0x8007CA78u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8007B898u) && KnownTranslatedCpuCall<0x8007B898u>::kAvailable && !KnownTranslatedCpuCall<0x8007B898u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8007B898u>()) {
        const auto state_free_result_8007B898_9150 = func_8007B898_statefree(r1, r3, r4, 0x8007CA78u);
        r0 = static_cast<uint32_t>(state_free_result_8007B898_9150[0]);
        r1 = static_cast<uint32_t>(state_free_result_8007B898_9150[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007B898u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r28 = 1;
    r3 = (r1 + 160);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80099ABCu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 84), r3);
    r3 = (r1 + 84);
    // inline leaf 0x80073248 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073248
    r15 = r3;
    r3 = (r1 + 164);
    // inline leaf 0x80073248 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073248
}

loc_8007CAA4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r15))) {
        goto loc_8007CAD8;
    }
}

loc_8007CAA8:
{
    r3 = (r1 + 160);
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80099ABCu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 80), r3);
    r3 = (r1 + 80);
    // inline leaf 0x80073248 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073248
    r15 = r3;
    r3 = (r1 + 164);
    // inline leaf 0x80073248 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073248
}

loc_8007CAD0:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r15))) {
        goto loc_8007CAD8;
    }
}

loc_8007CAD4:
{
    r28 = 0;
}

loc_8007CAD8:
{
}

loc_8007CADC:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_8007CAEC;
    }
}

loc_8007CAE0:
{
    r21 = (r21 + 1);
}

loc_8007CAE4:
{
}

loc_8007CAE8:
{
    if ((static_cast<uint32_t>(r21) < static_cast<uint32_t>(r31))) {
        goto loc_8007CA5C;
    }
}

loc_8007CAEC:
{
}

loc_8007CAF0:
{
    if ((static_cast<uint32_t>(r21) == static_cast<uint32_t>(r31))) {
        goto loc_8007CB04;
    }
}

loc_8007CAF4:
{
    r3 = (r1 + 164);
    ctx->lr = 0x8007CAFCu;
    if constexpr (KnownRegArgsCpuCall<0x8007D3FCu>(&func_8007D3FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8007D3FC_9F52 = func_8007D3FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007D3FC_9F52);
        r4 = static_cast<uint32_t>(regargs_result_8007D3FC_9F52 >> 32);
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
        InvokeDirectCpu<0x8007D3FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    r23 = (r23 + r3);
}

loc_8007CB04:
{
    r22 = (r22 + 1);
}

loc_8007CB08:
{
}

loc_8007CB0C:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(r30))) {
        goto loc_8007CA38;
    }
}

loc_8007CB10:
{
    r3 = 392;
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 324), 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 324), r3);
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 248), 0, 76u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r1 + 264));
    r3 = (r3 + r0);
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 328), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r1 + 260));
    r3 = (r3 + r0);
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 332), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 256));
    r3 = (r3 + r0);
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 336), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 68u, (r1 + 316));
    r3 = (r3 + r0);
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 340), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 72u, (r1 + 320));
    r3 = (r3 + r0);
    // inline leaf 0x8007D3F0 (3 guest instruction(s))
    r0 = (r3 + 3);
    r3 = (r0 & -4);
    // end of inlined leaf 0x8007D3F0
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 344), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 252));
    r3 = (r3 + r0);
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    r21 = r3;
    r0 = MemoryInline::ReadResolved32(guest_range_3, 64u, (r1 + 312));
    r3 = (r3 + r0);
    // inline leaf 0x8007D3F0 (3 guest instruction(s))
    r0 = (r3 + 3);
    r3 = (r0 & -4);
    // end of inlined leaf 0x8007D3F0
    r15 = r3;
    r0 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r1 + 308));
    r3 = (r3 + r0);
    // inline leaf 0x8007D3F0 (3 guest instruction(s))
    r0 = (r3 + 3);
    r3 = (r0 & -4);
    // end of inlined leaf 0x8007D3F0
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 348), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 56u, (r1 + 304));
    r3 = (r3 + r0);
    // inline leaf 0x8007D3F0 (3 guest instruction(s))
    r0 = (r3 + 3);
    r3 = (r0 & -4);
    // end of inlined leaf 0x8007D3F0
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 352), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r1 + 300));
    r3 = (r3 + r0);
    // inline leaf 0x8007D3F0 (3 guest instruction(s))
    r0 = (r3 + 3);
    r3 = (r0 & -4);
    // end of inlined leaf 0x8007D3F0
    MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 356), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r1 + 296));
    r3 = (r3 + r0);
    // inline leaf 0x8007D3F0 (3 guest instruction(s))
    r0 = (r3 + 3);
    r3 = (r0 & -4);
    // end of inlined leaf 0x8007D3F0
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 360), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r1 + 292));
    r3 = (r3 + r0);
    // inline leaf 0x8007D3F0 (3 guest instruction(s))
    r0 = (r3 + 3);
    r3 = (r0 & -4);
    // end of inlined leaf 0x8007D3F0
    r31 = r3;
    r0 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r1 + 288));
    r3 = (r3 + r0);
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 364), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r1 + 284));
    r3 = (r3 + r0);
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 368), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 280));
    r3 = (r3 + r0);
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    MemoryInline::WriteResolved32(guest_range_2, 48u, (r1 + 372), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r1 + 276));
    r3 = (r3 + r0);
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 376), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r1 + 272));
    r3 = (r3 + r0);
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    MemoryInline::WriteResolved32(guest_range_2, 56u, (r1 + 380), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 268));
    r3 = (r3 + r0);
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    MemoryInline::WriteResolved32(guest_range_2, 60u, (r1 + 384), r3);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 248));
    r22 = (r3 + r0);
    r28 = (r22 + r14);
    r3 = (r28 + r24);
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    r30 = r3;
    r3 = (r3 + r26);
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    r26 = r3;
    r3 = (r3 + r25);
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    r25 = r3;
    r3 = (r3 + r23);
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    r23 = r3;
}

loc_8007CC7C:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_8007CD70;
    }
}

loc_8007CC80:
{
    r0 = 1;
    r3 = 1;
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r9 = 1;
    r7 = (r17 & -16777216);
    r8 = (r7 + -2147483648);
}

loc_8007CCA4:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(0))) {
        goto loc_8007CCBC;
    }
}

loc_8007CCA8:
{
    r8 = (r17 & -8388608);
    r8 = (r8 + 2130706432);
}

loc_8007CCB4:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(0))) {
        goto loc_8007CCBC;
    }
}

loc_8007CCB8:
{
    r9 = 0;
}

loc_8007CCBC:
{
}

loc_8007CCC0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8007CCD8;
    }
}

loc_8007CCC4:
{
    r8 = (r17 & -134217728);
    r8 = (r8 + 1879048192);
}

loc_8007CCD0:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(0))) {
        goto loc_8007CCD8;
    }
}

loc_8007CCD4:
{
    r6 = 0;
}

loc_8007CCD8:
{
}

loc_8007CCDC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8007CCF0;
    }
}

loc_8007CCE0:
{
    r6 = (r7 + 1073741824);
}

loc_8007CCE8:
{
    if ((static_cast<uint32_t>(r6) == static_cast<uint32_t>(0))) {
        goto loc_8007CCF0;
    }
}

loc_8007CCEC:
{
    r5 = 0;
}

loc_8007CCF0:
{
}

loc_8007CCF4:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8007CD0C;
    }
}

loc_8007CCF8:
{
    r5 = (r17 & -8388608);
    r5 = (r5 + 1056964608);
}

loc_8007CD04:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(0))) {
        goto loc_8007CD0C;
    }
}

loc_8007CD08:
{
    r4 = 0;
}

loc_8007CD0C:
{
}

loc_8007CD10:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8007CD28;
    }
}

loc_8007CD14:
{
    r4 = (r17 & -134217728);
    r4 = (r4 + 805306368);
}

loc_8007CD20:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(0))) {
        goto loc_8007CD28;
    }
}

loc_8007CD24:
{
    r3 = 0;
}

loc_8007CD28:
{
}

loc_8007CD2C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8007CD44;
    }
}

loc_8007CD30:
{
    r3 = (r17 & -16384);
    r3 = (r3 + 536870912);
}

loc_8007CD3C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(0))) {
        goto loc_8007CD44;
    }
}

loc_8007CD40:
{
    r0 = 0;
}

loc_8007CD44:
{
}

loc_8007CD48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8007CD6C;
    }
}

loc_8007CD4C:
{
    r3 = 0x80590000u;
    r3 = (r3 + -2720);
    r4 = 802;
    r5 = 0x80590000u;
    r5 = (r5 + -2704);
    r6 = r17;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8007CD6Cu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_8007CD6C:
{
    MemoryInline::FlatWrite32(r17, r23);
}

loc_8007CD70:
{
}

loc_8007CD74:
{
    if ((static_cast<int32_t>(r16) == static_cast<int32_t>(0))) {
        goto loc_8007D3D4;
    }
}

loc_8007CD78:
{
    r3 = r16;
    r4 = r23;
    ctx->lr = 0x8007CD84u;
    if constexpr (KnownRegArgsCpuCall<0x80060538u>(&func_80060538)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80060538_CD0A = func_80060538_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80060538_CD0A);
        r4 = static_cast<uint32_t>(regargs_result_80060538_CD0A >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x80060538u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r17 = r3;
    r0 = (r3 & 31);
}

loc_8007CD90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CDB0;
    }
}

loc_8007CD94:
{
    r3 = 0x80590000u;
    r3 = (r3 + -2720);
    r4 = 813;
    r5 = 0x80590000u;
    r5 = (r5 + -2652);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8007CDB0u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_8007CDB0:
{
}

loc_8007CDB4:
{
    if ((static_cast<int32_t>(r17) != static_cast<int32_t>(0))) {
        goto loc_8007CDC0;
    }
}

loc_8007CDB8:
{
    r3 = 0;
    goto loc_8007D3D8;
}

loc_8007CDC0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 184), r0);
    r19 = (r19 & 16777216);
}

loc_8007CDD0:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(0))) {
        goto loc_8007CDDC;
    }
}

loc_8007CDD4:
{
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r1 + 184), r0);
}

loc_8007CDDC:
{
    r0 = MemoryInline::FlatRead32((r1 + 288));
}

loc_8007CDE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CDF0;
    }
}

loc_8007CDE8:
{
    r0 = (r17 + r31);
    goto loc_8007CDF4;
}

loc_8007CDF0:
{
    r0 = 0;
}

loc_8007CDF4:
{
    MemoryInline::FlatWriteRam32((r1 + 188), r0);
    r0 = MemoryInline::FlatRead32((r1 + 312));
}

loc_8007CE00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CE0C;
    }
}

loc_8007CE04:
{
    r0 = (r17 + r21);
    goto loc_8007CE10;
}

loc_8007CE0C:
{
    r0 = 0;
}

loc_8007CE10:
{
    MemoryInline::FlatWriteRam32((r1 + 192), r0);
    r0 = MemoryInline::FlatRead32((r1 + 308));
}

loc_8007CE1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CE28;
    }
}

loc_8007CE20:
{
    r0 = (r17 + r15);
    goto loc_8007CE2C;
}

loc_8007CE28:
{
    r0 = 0;
}

loc_8007CE2C:
{
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    r0 = MemoryInline::FlatRead32((r1 + 304));
}

loc_8007CE38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CE48;
    }
}

loc_8007CE3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 348));
    r0 = (r17 + r0);
    goto loc_8007CE4C;
}

loc_8007CE48:
{
    r0 = 0;
}

loc_8007CE4C:
{
    MemoryInline::FlatWriteRam32((r1 + 200), r0);
    r0 = MemoryInline::FlatRead32((r1 + 300));
}

loc_8007CE58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CE68;
    }
}

loc_8007CE5C:
{
    r0 = MemoryInline::FlatRead32((r1 + 352));
    r0 = (r17 + r0);
    goto loc_8007CE6C;
}

loc_8007CE68:
{
    r0 = 0;
}

loc_8007CE6C:
{
    MemoryInline::FlatWriteRam32((r1 + 204), r0);
    r0 = MemoryInline::FlatRead32((r1 + 296));
}

loc_8007CE78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CE88;
    }
}

loc_8007CE7C:
{
    r0 = MemoryInline::FlatRead32((r1 + 356));
    r0 = (r17 + r0);
    goto loc_8007CE8C;
}

loc_8007CE88:
{
    r0 = 0;
}

loc_8007CE8C:
{
    MemoryInline::FlatWriteRam32((r1 + 208), r0);
    r0 = MemoryInline::FlatRead32((r1 + 292));
}

loc_8007CE98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CEA8;
    }
}

loc_8007CE9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 360));
    r0 = (r17 + r0);
    goto loc_8007CEAC;
}

loc_8007CEA8:
{
    r0 = 0;
}

loc_8007CEAC:
{
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    r0 = MemoryInline::FlatRead32((r1 + 284));
}

loc_8007CEB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CEC8;
    }
}

loc_8007CEBC:
{
    r0 = MemoryInline::FlatRead32((r1 + 364));
    r0 = (r17 + r0);
    goto loc_8007CECC;
}

loc_8007CEC8:
{
    r0 = 0;
}

loc_8007CECC:
{
    MemoryInline::FlatWriteRam32((r1 + 216), r0);
    r0 = MemoryInline::FlatRead32((r1 + 280));
}

loc_8007CED8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CEE8;
    }
}

loc_8007CEDC:
{
    r0 = MemoryInline::FlatRead32((r1 + 368));
    r0 = (r17 + r0);
    goto loc_8007CEEC;
}

loc_8007CEE8:
{
    r0 = 0;
}

loc_8007CEEC:
{
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    r0 = MemoryInline::FlatRead32((r1 + 276));
}

loc_8007CEF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CF08;
    }
}

loc_8007CEFC:
{
    r0 = MemoryInline::FlatRead32((r1 + 372));
    r0 = (r17 + r0);
    goto loc_8007CF0C;
}

loc_8007CF08:
{
    r0 = 0;
}

loc_8007CF0C:
{
    MemoryInline::FlatWriteRam32((r1 + 224), r0);
    r0 = MemoryInline::FlatRead32((r1 + 272));
}

loc_8007CF18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CF28;
    }
}

loc_8007CF1C:
{
    r0 = MemoryInline::FlatRead32((r1 + 376));
    r0 = (r17 + r0);
    goto loc_8007CF2C;
}

loc_8007CF28:
{
    r0 = 0;
}

loc_8007CF2C:
{
    MemoryInline::FlatWriteRam32((r1 + 228), r0);
    r0 = MemoryInline::FlatRead32((r1 + 268));
}

loc_8007CF38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CF48;
    }
}

loc_8007CF3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 380));
    r0 = (r17 + r0);
    goto loc_8007CF4C;
}

loc_8007CF48:
{
    r0 = 0;
}

loc_8007CF4C:
{
    MemoryInline::FlatWriteRam32((r1 + 232), r0);
    r0 = MemoryInline::FlatRead32((r1 + 248));
}

loc_8007CF58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007CF68;
    }
}

loc_8007CF5C:
{
    r0 = MemoryInline::FlatRead32((r1 + 384));
    r0 = (r17 + r0);
    goto loc_8007CF6C;
}

loc_8007CF68:
{
    r0 = 0;
}

loc_8007CF6C:
{
    MemoryInline::FlatWriteRam32((r1 + 236), r0);
}

loc_8007CF74:
{
    if ((static_cast<int32_t>(r14) == static_cast<int32_t>(0))) {
        goto loc_8007CF80;
    }
}

loc_8007CF78:
{
    r0 = (r17 + r22);
    goto loc_8007CF84;
}

loc_8007CF80:
{
    r0 = 0;
}

loc_8007CF84:
{
    MemoryInline::FlatWriteRam32((r1 + 240), r0);
}

loc_8007CF8C:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_8007CF98;
    }
}

loc_8007CF90:
{
    r0 = (r17 + r28);
    goto loc_8007CF9C;
}

loc_8007CF98:
{
    r0 = 0;
}

loc_8007CF9C:
{
    MemoryInline::FlatWriteRam32((r1 + 244), r0);
    r0 = MemoryInline::FlatRead32((r1 + 236));
}

loc_8007CFA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007D0E0;
    }
}

loc_8007CFAC:
{
    r3 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800980FCu>(ctx);
    r3 = ctx->gpr[3];
    r15 = r3;
    r3 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800989E4u>(ctx);
    r3 = ctx->gpr[3];
    r14 = r3;
    r22 = 0;
    r21 = 0;
    r24 = 0x80590000u;
    r23 = 0x80590000u;
    goto loc_8007D0D8;
}

loc_8007CFD8:
{
    r3 = r18;
    r4 = r22;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098094u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 76), r3);
    r3 = (r1 + 156);
    r4 = (r1 + 76);
    ctx->lr = 0x8007CFF4u;
    if constexpr (KnownRegArgsCpuCall<0x800697CCu>(&func_800697CC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800697CC_F399 = func_800697CC_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800697CC_F399;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800697CCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r28 = 0;
    goto loc_8007D044;
}

loc_8007CFFC:
{
    r3 = r18;
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8009897Cu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 72), r3);
    r3 = (r1 + 152);
    r4 = (r1 + 72);
    ctx->lr = 0x8007D018u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8007B898u) && KnownTranslatedCpuCall<0x8007B898u>::kAvailable && !KnownTranslatedCpuCall<0x8007B898u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8007B898u>()) {
        const auto state_free_result_8007B898_F7A3 = func_8007B898_statefree(r1, r3, r4, 0x8007D018u);
        r0 = static_cast<uint32_t>(state_free_result_8007B898_F7A3[0]);
        r1 = static_cast<uint32_t>(state_free_result_8007B898_F7A3[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007B898u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = (r1 + 152);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800999D8u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 68), r3);
    r3 = (r1 + 68);
    // inline leaf 0x80073754 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073754
    r27 = r3;
    r3 = (r1 + 156);
    // inline leaf 0x80073754 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073754
}

loc_8007D03C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r27))) {
        goto loc_8007D04C;
    }
}

loc_8007D040:
{
    r28 = (r28 + 1);
}

loc_8007D044:
{
}

loc_8007D048:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r14))) {
        goto loc_8007CFFC;
    }
}

loc_8007D04C:
{
}

loc_8007D050:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(r14))) {
        goto loc_8007D0C0;
    }
}

loc_8007D054:
{
    r0 = (r17 + r30);
    r3 = MemoryInline::FlatRead32((r1 + 236));
    r3_addr_2 = (r3 + r21);
    MemoryInline::FlatWrite32(r3_addr_2, r0);
    r3 = (r1 + 156);
    ctx->lr = 0x8007D068u;
    if constexpr (KnownRegArgsCpuCall<0x8007D444u>(&func_8007D444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8007D444_10295 = func_8007D444_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007D444_10295);
        r4 = static_cast<uint32_t>(regargs_result_8007D444_10295 >> 32);
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
        InvokeDirectCpu<0x8007D444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    r30 = (r30 + r3);
    r3 = (r1 + 156);
    r4 = MemoryInline::FlatRead32((r1 + 236));
    r4_addr_2 = (r4 + r21);
    r4 = MemoryInline::FlatRead32(r4_addr_2);
    ctx->lr = 0x8007D080u;
    if constexpr (KnownRegArgsCpuCall<0x80088F88u>(&func_80088F88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80088F88_10823 = func_80088F88_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80088F88_10823);
        r4 = static_cast<uint32_t>(regargs_result_80088F88_10823 >> 32);
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
        InvokeDirectCpu<0x80088F88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r3 = (r1 + 64);
    r4 = MemoryInline::FlatRead32((r1 + 236));
    r4_addr_3 = (r4 + r21);
    r4 = MemoryInline::FlatRead32(r4_addr_3);
    ctx->lr = 0x8007D090u;
    if constexpr (KnownRegArgsCpuCall<0x8007360Cu>(&func_8007360C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8007360C_10CD9 = func_8007360C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007360C_10CD9);
        r4 = static_cast<uint32_t>(regargs_result_8007360C_10CD9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007360Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    ctx->lr = 0x8007D094u;
    if constexpr (KnownRegArgsCpuCall<0x8007D444u>(&func_8007D444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8007D444_11092 = func_8007D444_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007D444_11092);
        r4 = static_cast<uint32_t>(regargs_result_8007D444_11092 >> 32);
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
        InvokeDirectCpu<0x8007D444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    r27 = r3;
    r3 = (r1 + 156);
    ctx->lr = 0x8007D0A0u;
    if constexpr (KnownRegArgsCpuCall<0x8007D444u>(&func_8007D444)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8007D444_11512 = func_8007D444_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007D444_11512);
        r4 = static_cast<uint32_t>(regargs_result_8007D444_11512 >> 32);
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
        InvokeDirectCpu<0x8007D444u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
}

loc_8007D0A4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r27))) {
        goto loc_8007D0D0;
    }
}

loc_8007D0A8:
{
    r3 = (r24 + -2720);
    r4 = 866;
    r5 = (r23 + -2604);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8007D0BCu;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
    goto loc_8007D0D0;
}

loc_8007D0C0:
{
    r3 = (r1 + 156);
    // inline leaf 0x80073754 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073754
    r4 = MemoryInline::FlatRead32((r1 + 236));
    r4_addr_4 = (r4 + r21);
    MemoryInline::FlatWrite32(r4_addr_4, r3);
}

loc_8007D0D0:
{
    r21 = (r21 + 4);
    r22 = (r22 + 1);
}

loc_8007D0D8:
{
}

loc_8007D0DC:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(r15))) {
        goto loc_8007CFD8;
    }
}

loc_8007D0E0:
{
    r0 = MemoryInline::FlatRead32((r1 + 240));
}

loc_8007D0E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007D1DC;
    }
}

loc_8007D0EC:
{
    r3 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80098214u>(ctx);
    r3 = ctx->gpr[3];
    r21 = r3;
    r3 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800989E4u>(ctx);
    r3 = ctx->gpr[3];
    r15 = r3;
    r23 = 0;
    r22 = 0;
    goto loc_8007D1D4;
}

loc_8007D110:
{
    r3 = r18;
    r4 = r23;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800981ACu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    r3 = (r1 + 148);
    r4 = (r1 + 60);
    ctx->lr = 0x8007D12Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007350Cu>(&func_8007350C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007350C_1213F = func_8007350C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007350C_1213F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007350Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r24 = 0;
    goto loc_8007D17C;
}

loc_8007D134:
{
    r3 = r18;
    r4 = r24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8009897Cu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 56), r3);
    r3 = (r1 + 144);
    r4 = (r1 + 56);
    ctx->lr = 0x8007D150u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8007B898u) && KnownTranslatedCpuCall<0x8007B898u>::kAvailable && !KnownTranslatedCpuCall<0x8007B898u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8007B898u>()) {
        const auto state_free_result_8007B898_1254B = func_8007B898_statefree(r1, r3, r4, 0x8007D150u);
        r0 = static_cast<uint32_t>(state_free_result_8007B898_1254B[0]);
        r1 = static_cast<uint32_t>(state_free_result_8007B898_1254B[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007B898u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r3 = (r1 + 144);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80099A4Cu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    r3 = (r1 + 52);
    // inline leaf 0x80073460 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073460
    r14 = r3;
    r3 = (r1 + 148);
    // inline leaf 0x80073460 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073460
}

loc_8007D174:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r14))) {
        goto loc_8007D184;
    }
}

loc_8007D178:
{
    r24 = (r24 + 1);
}

loc_8007D17C:
{
}

loc_8007D180:
{
    if ((static_cast<uint32_t>(r24) < static_cast<uint32_t>(r15))) {
        goto loc_8007D134;
    }
}

loc_8007D184:
{
}

loc_8007D188:
{
    if ((static_cast<uint32_t>(r24) == static_cast<uint32_t>(r15))) {
        goto loc_8007D1BC;
    }
}

loc_8007D18C:
{
    r0 = (r17 + r26);
    r3 = MemoryInline::FlatRead32((r1 + 240));
    r3_addr_6 = (r3 + r22);
    MemoryInline::FlatWrite32(r3_addr_6, r0);
    r3 = (r1 + 148);
    ctx->lr = 0x8007D1A0u;
    if constexpr (KnownRegArgsCpuCall<0x8007D420u>(&func_8007D420)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8007D420_13040 = func_8007D420_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007D420_13040);
        r4 = static_cast<uint32_t>(regargs_result_8007D420_13040 >> 32);
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
        InvokeDirectCpu<0x8007D420u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    r26 = (r26 + r3);
    r3 = (r1 + 148);
    r4 = MemoryInline::FlatRead32((r1 + 240));
    r4_addr_8 = (r4 + r22);
    r4 = MemoryInline::FlatRead32(r4_addr_8);
    ctx->lr = 0x8007D1B8u;
    if constexpr (KnownRegArgsCpuCall<0x80089100u>(&func_80089100)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80089100_135CE = func_80089100_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80089100_135CE);
        r4 = static_cast<uint32_t>(regargs_result_80089100_135CE >> 32);
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
        InvokeDirectCpu<0x80089100u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    goto loc_8007D1CC;
}

loc_8007D1BC:
{
    r3 = (r1 + 148);
    // inline leaf 0x80073460 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073460
    r4 = MemoryInline::FlatRead32((r1 + 240));
    r4_addr_9 = (r4 + r22);
    MemoryInline::FlatWrite32(r4_addr_9, r3);
}

loc_8007D1CC:
{
    r22 = (r22 + 4);
    r23 = (r23 + 1);
}

loc_8007D1D4:
{
}

loc_8007D1D8:
{
    if ((static_cast<uint32_t>(r23) < static_cast<uint32_t>(r21))) {
        goto loc_8007D110;
    }
}

loc_8007D1DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 244));
}

loc_8007D1E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007D318;
    }
}

loc_8007D1E8:
{
    r3 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8009832Cu>(ctx);
    r3 = ctx->gpr[3];
    r23 = r3;
    r3 = r18;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800989E4u>(ctx);
    r3 = ctx->gpr[3];
    r22 = r3;
    r15 = 0;
    r14 = 0;
    goto loc_8007D310;
}

loc_8007D20C:
{
    r3 = r18;
    r4 = r15;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800982C4u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    r3 = (r1 + 140);
    r4 = (r1 + 48);
    ctx->lr = 0x8007D228u;
    if constexpr (KnownRegArgsCpuCall<0x800732F4u>(&func_800732F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800732F4_13F38 = func_800732F4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_800732F4_13F38;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800732F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r26 = 0;
    goto loc_8007D2B8;
}

loc_8007D230:
{
    r3 = r18;
    r4 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8009897Cu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r3 = (r1 + 136);
    r4 = (r1 + 44);
    ctx->lr = 0x8007D24Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8007B898u) && KnownTranslatedCpuCall<0x8007B898u>::kAvailable && !KnownTranslatedCpuCall<0x8007B898u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8007B898u>()) {
        const auto state_free_result_8007B898_14344 = func_8007B898_statefree(r1, r3, r4, 0x8007D24Cu);
        r0 = static_cast<uint32_t>(state_free_result_8007B898_14344[0]);
        r1 = static_cast<uint32_t>(state_free_result_8007B898_14344[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007B898u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r24 = 1;
    r3 = (r1 + 136);
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80099ABCu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r3 = (r1 + 40);
    // inline leaf 0x80073248 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073248
    r21 = r3;
    r3 = (r1 + 140);
    // inline leaf 0x80073248 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073248
}

loc_8007D278:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r21))) {
        goto loc_8007D2AC;
    }
}

loc_8007D27C:
{
    r3 = (r1 + 136);
    r4 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80099ABCu>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = (r1 + 36);
    // inline leaf 0x80073248 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073248
    r21 = r3;
    r3 = (r1 + 140);
    // inline leaf 0x80073248 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073248
}

loc_8007D2A4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r21))) {
        goto loc_8007D2AC;
    }
}

loc_8007D2A8:
{
    r24 = 0;
}

loc_8007D2AC:
{
}

loc_8007D2B0:
{
    if ((static_cast<int32_t>(r24) != static_cast<int32_t>(0))) {
        goto loc_8007D2C0;
    }
}

loc_8007D2B4:
{
    r26 = (r26 + 1);
}

loc_8007D2B8:
{
}

loc_8007D2BC:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(r22))) {
        goto loc_8007D230;
    }
}

loc_8007D2C0:
{
}

loc_8007D2C4:
{
    if ((static_cast<uint32_t>(r26) == static_cast<uint32_t>(r22))) {
        goto loc_8007D2F8;
    }
}

loc_8007D2C8:
{
    r0 = (r17 + r25);
    r3 = MemoryInline::FlatRead32((r1 + 244));
    r3_addr_10 = (r3 + r14);
    MemoryInline::FlatWrite32(r3_addr_10, r0);
    r3 = (r1 + 140);
    ctx->lr = 0x8007D2DCu;
    if constexpr (KnownRegArgsCpuCall<0x8007D3FCu>(&func_8007D3FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8007D3FC_151DE = func_8007D3FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007D3FC_151DE);
        r4 = static_cast<uint32_t>(regargs_result_8007D3FC_151DE >> 32);
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
        InvokeDirectCpu<0x8007D3FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    // inline leaf 0x8007D4D4 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007D4D4
    r25 = (r25 + r3);
    r3 = (r1 + 140);
    r4 = MemoryInline::FlatRead32((r1 + 244));
    r4_addr_13 = (r4 + r14);
    r4 = MemoryInline::FlatRead32(r4_addr_13);
    ctx->lr = 0x8007D2F4u;
    if constexpr (KnownRegArgsCpuCall<0x80089290u>(&func_80089290)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80089290_1576E = func_80089290_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80089290_1576E);
        r4 = static_cast<uint32_t>(regargs_result_80089290_1576E >> 32);
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
        InvokeDirectCpu<0x80089290u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    goto loc_8007D308;
}

loc_8007D2F8:
{
    r3 = (r1 + 140);
    // inline leaf 0x80073248 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80073248
    r4 = MemoryInline::FlatRead32((r1 + 244));
    r4_addr_14 = (r4 + r14);
    MemoryInline::FlatWrite32(r4_addr_14, r3);
}

loc_8007D308:
{
    r14 = (r14 + 4);
    r15 = (r15 + 1);
}

loc_8007D310:
{
}

loc_8007D314:
{
    if ((static_cast<uint32_t>(r15) < static_cast<uint32_t>(r23))) {
        goto loc_8007D20C;
    }
}

loc_8007D318:
{
    r14 = 0;
}

loc_8007D320:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_8007D328;
    }
}

loc_8007D324:
{
    r14 = (r14 | 1);
}

loc_8007D328:
{
    r3 = 392;
    r4 = r17;
    // inline leaf 0x80060530 (2 guest instruction(s))
    r3 = r4;
    // end of inlined leaf 0x80060530
    r27 = r3;
}

loc_8007D33C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8007D3CC;
    }
}

loc_8007D340:
{
    r0 = MemoryInline::FlatRead32((r1 + 320));
}

loc_8007D348:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007D358;
    }
}

loc_8007D34C:
{
    r0 = MemoryInline::FlatRead32((r1 + 340));
    r10 = (r17 + r0);
    goto loc_8007D35C;
}

loc_8007D358:
{
    r10 = 0;
}

loc_8007D35C:
{
    r0 = MemoryInline::FlatRead32((r1 + 316));
}

loc_8007D364:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007D374;
    }
}

loc_8007D368:
{
    r0 = MemoryInline::FlatRead32((r1 + 336));
    r9 = (r17 + r0);
    goto loc_8007D378;
}

loc_8007D374:
{
    r9 = 0;
}

loc_8007D378:
{
    r0 = MemoryInline::FlatRead32(r18);
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r20);
    MemoryInline::FlatWriteRam32((r1 + 12), r29);
    r0 = (r1 + 184);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r0 = MemoryInline::FlatRead32((r1 + 344));
    r0 = (r17 + r0);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 24), r14);
    r3 = r27;
    r4 = r16;
    r5 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 324));
    r6 = (r17 + r0);
    r0 = MemoryInline::FlatRead32((r1 + 328));
    r7 = (r17 + r0);
    r0 = MemoryInline::FlatRead32((r1 + 332));
    r8 = (r17 + r0);
    ctx->lr = 0x8007D3C8u;
    if constexpr (KnownRegArgsCpuCall<0x8007EDBCu>(&func_8007EDBC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->cr = cr;
        const auto regargs_result_8007EDBC_16639 = func_8007EDBC_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8007EDBC_16639);
        r4 = static_cast<uint32_t>(regargs_result_8007EDBC_16639 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->cr = cr;
        InvokeDirectCpu<0x8007EDBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
        cr = ctx->cr;
    }
    r27 = r3;
}

loc_8007D3CC:
{
    r3 = r27;
    ctx->lr = 0x8007D3D4u;
    if constexpr (KnownRegArgsCpuCall<0x8007E080u>(&func_8007E080)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->cr = cr;
        const auto regargs_result_8007E080_17097 = func_8007E080_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007E080_17097);
        r4 = static_cast<uint32_t>(regargs_result_8007E080_17097 >> 32);
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
        cr = ctx->cr;
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
        ctx->cr = cr;
        InvokeDirectCpu<0x8007E080u>(ctx);
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
        cr = ctx->cr;
    }
}

loc_8007D3D4:
{
    r3 = r27;
}

loc_8007D3D8:
{
    r11 = (r1 + 464);
    // inline leaf 0x804574A0 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    // end of inlined leaf 0x804574A0
    r0 = MemoryInline::FlatRead32((r1 + 468));
    ctx->lr = r0;
    r1 = (r1 + 464);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    ctx->gpr[23] = r23_entry;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8007C5A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8007C5A4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8007C5A4 func_8007C5A4 preserves=true fpr_mask=0x00000000
