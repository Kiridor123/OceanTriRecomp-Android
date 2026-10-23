#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80060538(CpuContext* ctx);
extern "C" uint64_t func_80060538_ra58_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80070040(CpuContext* ctx);
extern "C" uint64_t func_80070040_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800740D8(CpuContext* ctx);
extern "C" uint64_t func_800740D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80074684(CpuContext* ctx);
extern "C" uint64_t func_80074684_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007D468(CpuContext* ctx);
extern "C" uint64_t func_8007D468_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80080CC4(CpuContext* ctx);
extern "C" uint64_t func_80080CC4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8007F148_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r22_rot_1 = 0;
    uint32_t r22_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_8007F148;

loc_8007F148:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -36), r23);
    }
    // end of inlined leaf 0x80457464
    r18 = r3;
    r19 = r4;
    r20 = r5;
    r21 = r6;
    r3 = r20;
    // inline leaf 0x8005D360 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x8005D360
}

loc_8007F178:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8007F184;
    }
}

loc_8007F17C:
{
    r3 = 0;
    goto loc_8007F45C;
}

loc_8007F184:
{
}

loc_8007F188:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_8007F194;
    }
}

loc_8007F18C:
{
    r21 = 1;
    goto loc_8007F1A0;
}

loc_8007F194:
{
}

loc_8007F198:
{
    if ((static_cast<int32_t>(r21) <= static_cast<int32_t>(16))) {
        goto loc_8007F1A0;
    }
}

loc_8007F19C:
{
    r21 = 16;
}

loc_8007F1A0:
{
    r23 = 0;
    r3 = r20;
    ctx->lr = 0x8007F1ACu;
    if constexpr (KnownRegArgsCpuCall<0x800740D8u>(&func_800740D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800740D8_12FB = func_800740D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800740D8_12FB);
        r4 = static_cast<uint32_t>(regargs_result_800740D8_12FB >> 32);
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
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r3 = (r1 + 32);
    ctx->lr = 0x8007F1B8u;
    if constexpr (KnownRegArgsCpuCall<0x80070040u>(&func_80070040)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80070040_179A = func_80070040_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80070040_179A);
        r4 = static_cast<uint32_t>(regargs_result_80070040_179A >> 32);
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
    r22 = r3;
    r3 = r20;
    ctx->lr = 0x8007F1C4u;
    if constexpr (KnownRegArgsCpuCall<0x800740D8u>(&func_800740D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800740D8_1C10 = func_800740D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800740D8_1C10);
        r4 = static_cast<uint32_t>(regargs_result_800740D8_1C10 >> 32);
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
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r3 = (r1 + 28);
    ctx->lr = 0x8007F1D0u;
    if constexpr (KnownRegArgsCpuCall<0x80074684u>(&func_80074684)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_80074684_20AF = func_80074684_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80074684_20AF);
        r4 = static_cast<uint32_t>(regargs_result_80074684_20AF >> 32);
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
    r24 = r3;
    r28 = (r22 * 48);
    r22_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r22 = (r22_rot_1 & -4);
    r26 = (r3 * 48);
    r3 = r26;
    // inline leaf 0x8007F474 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007F474
    r30 = (r21 * r3);
    r25 = (r24 * 36);
    r3 = r20;
    ctx->lr = 0x8007F1F8u;
    if constexpr (KnownRegArgsCpuCall<0x800740D8u>(&func_800740D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800740D8_268E = func_800740D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800740D8_268E);
        r4 = static_cast<uint32_t>(regargs_result_800740D8_268E >> 32);
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
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 24);
    ctx->lr = 0x8007F204u;
    if constexpr (KnownRegArgsCpuCall<0x8007D468u>(&func_8007D468)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8007D468_2B2D = func_8007D468_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007D468_2B2D);
        r4 = static_cast<uint32_t>(regargs_result_8007D468_2B2D >> 32);
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

loc_8007F20C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007F220;
    }
}

loc_8007F210:
{
    r3 = r25;
    // inline leaf 0x8007F474 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007F474
    r25 = (r21 * r3);
    goto loc_8007F224;
}

loc_8007F220:
{
    r25 = 0;
}

loc_8007F224:
{
    r3 = r20;
    ctx->lr = 0x8007F22Cu;
    if constexpr (KnownRegArgsCpuCall<0x800740D8u>(&func_800740D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_800740D8_3159 = func_800740D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800740D8_3159);
        r4 = static_cast<uint32_t>(regargs_result_800740D8_3159 >> 32);
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
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 20);
    ctx->lr = 0x8007F238u;
    if constexpr (KnownRegArgsCpuCall<0x8007D468u>(&func_8007D468)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8007D468_35F8 = func_8007D468_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007D468_35F8);
        r4 = static_cast<uint32_t>(regargs_result_8007D468_35F8 >> 32);
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

loc_8007F240:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007F254;
    }
}

loc_8007F244:
{
    r3 = r26;
    // inline leaf 0x8007F474 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007F474
    r26 = (r21 * r3);
    goto loc_8007F258;
}

loc_8007F254:
{
    r26 = 0;
}

loc_8007F258:
{
    r3 = 312;
    // inline leaf 0x8007F474 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007F474
    r27 = r3;
    r3 = (r3 + r28);
    // inline leaf 0x8007F474 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007F474
    r28 = r3;
    r3 = (r3 + r22);
    // inline leaf 0x8007F474 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007F474
    r29 = r3;
    r3 = (r3 + r30);
    // inline leaf 0x8007F474 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007F474
    r30 = r3;
    r3 = (r3 + r25);
    // inline leaf 0x8007F474 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007F474
    r31 = r3;
    r3 = (r3 + r26);
    // inline leaf 0x8007F474 (3 guest instruction(s))
    r0 = (r3 + 31);
    r3 = (r0 & -32);
    // end of inlined leaf 0x8007F474
    r22 = r3;
}

loc_8007F2A4:
{
    if ((static_cast<int32_t>(r19) == static_cast<int32_t>(0))) {
        goto loc_8007F398;
    }
}

loc_8007F2A8:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r19 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8007F2CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007F2E4;
    }
}

loc_8007F2D0:
{
    r3 = (r19 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8007F2DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007F2E4;
    }
}

loc_8007F2E0:
{
    r9 = 0;
}

loc_8007F2E4:
{
}

loc_8007F2E8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8007F300;
    }
}

loc_8007F2EC:
{
    r3 = (r19 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8007F2F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007F300;
    }
}

loc_8007F2FC:
{
    r8 = 0;
}

loc_8007F300:
{
}

loc_8007F304:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8007F318;
    }
}

loc_8007F308:
{
    r0 = (r10 + 1073741824);
}

loc_8007F310:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007F318;
    }
}

loc_8007F314:
{
    r7 = 0;
}

loc_8007F318:
{
}

loc_8007F31C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8007F334;
    }
}

loc_8007F320:
{
    r3 = (r19 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8007F32C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007F334;
    }
}

loc_8007F330:
{
    r6 = 0;
}

loc_8007F334:
{
}

loc_8007F338:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8007F350;
    }
}

loc_8007F33C:
{
    r3 = (r19 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8007F348:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007F350;
    }
}

loc_8007F34C:
{
    r5 = 0;
}

loc_8007F350:
{
}

loc_8007F354:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8007F36C;
    }
}

loc_8007F358:
{
    r3 = (r19 & -16384);
    r0 = (r3 + 536870912);
}

loc_8007F364:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8007F36C;
    }
}

loc_8007F368:
{
    r4 = 0;
}

loc_8007F36C:
{
}

loc_8007F370:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8007F394;
    }
}

loc_8007F374:
{
    r3 = 0x80590000u;
    r3 = (r3 + -1952);
    r4 = 87;
    r5 = 0x80590000u;
    r5 = (r5 + -1932);
    r6 = r19;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8007F394u;
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

loc_8007F394:
{
    MemoryInline::FlatWrite32(r19, r22);
}

loc_8007F398:
{
}

loc_8007F39C:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_8007F458;
    }
}

loc_8007F3A0:
{
    r3 = r18;
    r4 = r22;
    ctx->lr = 0x8007F3ACu;
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
        const auto regargs_result_80060538_4EBF = func_80060538_ra58_1fe_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80060538_4EBF);
        r4 = static_cast<uint32_t>(regargs_result_80060538_4EBF >> 32);
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
    r19 = r3;
    r0 = (r3 & 31);
}

loc_8007F3B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007F3D8;
    }
}

loc_8007F3BC:
{
    r3 = 0x80590000u;
    r3 = (r3 + -1952);
    r4 = 98;
    r5 = 0x80590000u;
    r5 = (r5 + -1880);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8007F3D8u;
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

loc_8007F3D8:
{
}

loc_8007F3DC:
{
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(0))) {
        goto loc_8007F3E8;
    }
}

loc_8007F3E0:
{
    r3 = 0;
    goto loc_8007F45C;
}

loc_8007F3E8:
{
    r3 = 312;
    r4 = r19;
    // inline leaf 0x80060530 (2 guest instruction(s))
    r3 = r4;
    // end of inlined leaf 0x80060530
    r23 = r3;
}

loc_8007F3FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8007F458;
    }
}

loc_8007F400:
{
}

loc_8007F404:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8007F410;
    }
}

loc_8007F408:
{
    r10 = (r19 + r31);
    goto loc_8007F414;
}

loc_8007F410:
{
    r10 = 0;
}

loc_8007F414:
{
}

loc_8007F418:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_8007F424;
    }
}

loc_8007F41C:
{
    r9 = (r19 + r30);
    goto loc_8007F428;
}

loc_8007F424:
{
    r9 = 0;
}

loc_8007F428:
{
    r0 = MemoryInline::FlatRead32(r20);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    MemoryInline::FlatWriteRam32((r1 + 8), r21);
    MemoryInline::FlatWriteRam32((r1 + 12), r24);
    r3 = r23;
    r4 = r18;
    r5 = (r1 + 16);
    r6 = (r19 + r27);
    r7 = (r19 + r28);
    r8 = (r19 + r29);
    ctx->lr = 0x8007F454u;
    if constexpr (KnownRegArgsCpuCall<0x80080CC4u>(&func_80080CC4)) {
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
        const auto regargs_result_80080CC4_600A = func_80080CC4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80080CC4_600A);
        r4 = static_cast<uint32_t>(regargs_result_80080CC4_600A >> 32);
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
        InvokeDirectCpu<0x80080CC4u>(ctx);
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
    r23 = r3;
}

loc_8007F458:
{
    r3 = r23;
}

loc_8007F45C:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574B0 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -36));
        }
    }
    // end of inlined leaf 0x804574B0
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[22] = r22;
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

extern "C" void func_8007F148(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8007F148_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00403FFF gpr_write=0x00401FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8007F148 func_8007F148 preserves=true fpr_mask=0x00000000
