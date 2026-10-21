#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80070040(CpuContext* ctx);
extern "C" uint64_t func_80070040_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80071CA0(CpuContext* ctx);
extern "C" uint64_t func_80071CA0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800740D8(CpuContext* ctx);
extern "C" uint64_t func_800740D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007B5C8(CpuContext* ctx);
extern "C" uint64_t func_8007B5C8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8007F738(CpuContext* ctx);
extern "C" uint64_t func_8007F738_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80081A54(CpuContext* ctx);
extern "C" uint32_t func_80081A54_ra8_6_8_0(CpuContext*, uint32_t, double, double);
extern "C" void func_80502E40(CpuContext* ctx);
extern "C" uint64_t func_80502E40_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80502E8C(CpuContext* ctx);
extern "C" uint64_t func_80502E8C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8007F480(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    const uint32_t r24_entry = r24;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8007F480u);
    goto loc_8007F480;

loc_8007F480:
{
    MemoryAlias::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryAlias::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryAlias::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r29 = r3;
    r0 = r4;
    MemoryAlias::FlatWriteRam32((r1 + 8), r4);
    r24 = r5;
    r4 = 1;
    r5 = r0;
    r6 = r24;
    ctx->lr = 0x8007F4B4u;
    if constexpr (KnownRegArgsCpuCall<0x8007B5C8u>(&func_8007B5C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8007B5C8_DCD = func_8007B5C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8007B5C8_DCD);
        r4 = static_cast<uint32_t>(regargs_result_8007B5C8_DCD >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8007B5C8u>(ctx);
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
        r12 = ctx->gpr[12];
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
    r4 = r24;
    r5 = (r1 + 8);
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 48));
    ctr = r12;
    ctx->lr = 0x8007F4D0u;
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
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    r3 = r29;
    r4 = 2;
    r5 = MemoryAlias::FlatRead32((r1 + 8));
    r6 = r24;
    ctx->lr = 0x8007F4E4u;
    if constexpr (KnownRegArgsCpuCall<0x8007B5C8u>(&func_8007B5C8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_8007B5C8_19CA = func_8007B5C8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8007B5C8_19CA);
        r4 = static_cast<uint32_t>(regargs_result_8007B5C8_19CA >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8007B5C8u>(ctx);
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
        r12 = ctx->gpr[12];
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
    // inline leaf 0x8005AB64 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r3 + 232));
    // end of inlined leaf 0x8005AB64
    MemoryAlias::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 20);
    ctx->lr = 0x8007F4F8u;
    if constexpr (KnownRegArgsCpuCall<0x800740D8u>(&func_800740D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_800740D8_2204 = func_800740D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800740D8_2204);
        r4 = static_cast<uint32_t>(regargs_result_800740D8_2204 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x800740D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    MemoryAlias::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 24);
    ctx->lr = 0x8007F504u;
    if constexpr (KnownRegArgsCpuCall<0x80070040u>(&func_80070040)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_80070040_2626 = func_80070040_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80070040_2626);
        r4 = static_cast<uint32_t>(regargs_result_80070040_2626 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x80070040u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
    r31 = r3;
    r30 = 0;
    r0 = (r3 + -9);
}

loc_8007F514:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(332))) {
        goto loc_8007F550;
    }
}

loc_8007F518:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80502DD0u>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
}

loc_8007F524:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8007F550;
    }
}

loc_8007F528:
{
    r0 = MemoryAlias::FlatRead32((r29 + 260));
    r0 = (r0 | 1);
    MemoryAlias::FlatWrite32((r29 + 260), r0);
    r3 = r29;
    // inline leaf 0x8007F7D8 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r3 + 236));
    // end of inlined leaf 0x8007F7D8
    r4 = (r31 * 48);
    if constexpr (KnownRegArgsCpuCall<0x80071CA0u>(&func_80071CA0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        const auto regargs_result_80071CA0_2CA9 = func_80071CA0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80071CA0_2CA9);
        r4 = static_cast<uint32_t>(regargs_result_80071CA0_2CA9 >> 32);
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80071CA0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    // inline leaf 0x80071CA4 (2 guest instruction(s))
    r3 = -536870912;
    // end of inlined leaf 0x80071CA4
    r25 = r3;
    goto loc_8007F568;
}

loc_8007F550:
{
    r0 = MemoryAlias::FlatRead32((r29 + 260));
    r0 = (r0 & -2);
    MemoryAlias::FlatWrite32((r29 + 260), r0);
    r3 = r29;
    // inline leaf 0x8007F7D8 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r3 + 236));
    // end of inlined leaf 0x8007F7D8
    r25 = r3;
}

loc_8007F568:
{
    r3 = r29;
    if constexpr (KnownRegArgsCpuCall<0x80081A54u>(&func_80081A54)) {
        ctx->gpr[1] = r1;
        const auto regargs_result_80081A54_312A = func_80081A54_ra8_6_8_0(ctx, r3, f1.d, f2.d);
        r3 = regargs_result_80081A54_312A;
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x80081A54u>(ctx);
        r3 = ctx->gpr[3];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
    }
    r26 = r3;
    // inline leaf 0x80074178 (2 guest instruction(s))
    r3 = -268435456;
    // end of inlined leaf 0x80074178
    r24 = r3;
    r3 = r29;
    r4 = 131072;
    r4 = (r4 + 1);
    r5 = (r1 + 28);
    r12 = MemoryAlias::FlatRead32(r3);
    r12 = MemoryAlias::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8007F59Cu;
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
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
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

loc_8007F5A0:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(1))) {
        goto loc_8007F5B4;
    }
}

loc_8007F5A4:
{
    r3 = r24;
    // inline leaf 0x80073818 (2 guest instruction(s))
    r3 = (r3 & 1073741823);
    // end of inlined leaf 0x80073818
    r24 = r3;
    goto loc_8007F5C8;
}

loc_8007F5B4:
{
}

loc_8007F5B8:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(2))) {
        goto loc_8007F5C8;
    }
}

loc_8007F5BC:
{
    r3 = r24;
    // inline leaf 0x80073810 (2 guest instruction(s))
    r3 = (r3 & 268435455);
    // end of inlined leaf 0x80073810
    r24 = r3;
}

loc_8007F5C8:
{
    r0 = MemoryAlias::FlatRead32((r1 + 28));
}

loc_8007F5D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8007F5E0;
    }
}

loc_8007F5D4:
{
    r3 = r24;
    // inline leaf 0x8007F7D0 (2 guest instruction(s))
    r3 = (r3 | 134217728);
    // end of inlined leaf 0x8007F7D0
    r24 = r3;
}

loc_8007F5E0:
{
    r3 = r29;
    // inline leaf 0x8007F7C8 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r3 + 284));
    // end of inlined leaf 0x8007F7C8
}

loc_8007F5EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8007F688;
    }
}

loc_8007F5F0:
{
    r3 = r29;
    // inline leaf 0x8007F7B8 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead16((r3 + 290));
    // end of inlined leaf 0x8007F7B8
    r27 = r3;
    r3 = r29;
    // inline leaf 0x8007F7C0 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead8((r3 + 288));
    // end of inlined leaf 0x8007F7C0
    r26 = (r3 & 255);
    r3 = r29;
    // inline leaf 0x8007F7C8 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r3 + 284));
    // end of inlined leaf 0x8007F7C8
    r4 = r3;
    r3 = (r1 + 32);
    r5 = r26;
    r6 = r27;
    ctx->lr = 0x8007F624u;
    if constexpr (KnownRegArgsCpuCall<0x8007F738u>(&func_8007F738)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8007F738_3ED2 = func_8007F738_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007F738_3ED2);
        r4 = static_cast<uint32_t>(regargs_result_8007F738_3ED2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x8007F738u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = r29;
    // inline leaf 0x8005AB64 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r3 + 232));
    // end of inlined leaf 0x8005AB64
    MemoryAlias::FlatWriteRam32((r1 + 16), r3);
    r3 = r29;
    // inline leaf 0x8007F720 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r3 + 292));
    // end of inlined leaf 0x8007F720
    r28 = r3;
    r3 = r29;
    r4 = 1;
    // inline leaf 0x8007B5A8 (8 guest instruction(s))
}

loc_inl15_0x8007B5A8:
{
}

loc_inl15_0x8007B5AC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(3))) {
        goto loc_inl15_0x8007B5C0;
    }
}

loc_inl15_0x8007B5B0:
{
    r0 = (r4 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 12);
    goto loc_inl15_cont_8007B5A8;
}

loc_inl15_0x8007B5C0:
{
    r3 = 0;
}

loc_inl15_cont_8007B5A8:
{
    // end of inlined leaf 0x8007B5A8
    r27 = r3;
    r3 = r29;
    // inline leaf 0x8007F728 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r3 + 264));
    // end of inlined leaf 0x8007F728
    r26 = r3;
    r3 = r29;
    // inline leaf 0x8007F730 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r3 + 240));
    // end of inlined leaf 0x8007F730
    r4 = r3;
    r3 = r25;
    r5 = r26;
    r6 = r27;
    r7 = (r1 + 16);
    r8 = r28;
    r9 = (r1 + 32);
    r10 = r24;
    ctx->lr = 0x8007F684u;
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
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80073830u>(ctx);
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
    r12 = ctx->gpr[12];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    ctr = ctx->ctr;
    goto loc_8007F6E8;
}

loc_8007F688:
{
    r3 = r29;
    // inline leaf 0x8005AB64 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r3 + 232));
    // end of inlined leaf 0x8005AB64
    MemoryAlias::FlatWriteRam32((r1 + 12), r3);
    r3 = r29;
    // inline leaf 0x8007F720 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r3 + 292));
    // end of inlined leaf 0x8007F720
    r26 = r3;
    r3 = r29;
    r4 = 1;
    // inline leaf 0x8007B5A8 (8 guest instruction(s))
}

loc_inl20_0x8007B5A8:
{
}

loc_inl20_0x8007B5AC:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(3))) {
        goto loc_inl20_0x8007B5C0;
    }
}

loc_inl20_0x8007B5B0:
{
    r0 = (r4 * 48);
    r3 = (r3 + r0);
    r3 = (r3 + 12);
    goto loc_inl20_cont_8007B5A8;
}

loc_inl20_0x8007B5C0:
{
    r3 = 0;
}

loc_inl20_cont_8007B5A8:
{
    // end of inlined leaf 0x8007B5A8
    r27 = r3;
    r3 = r29;
    // inline leaf 0x8007F728 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r3 + 264));
    // end of inlined leaf 0x8007F728
    r28 = r3;
    r3 = r29;
    // inline leaf 0x8007F730 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r3 + 240));
    // end of inlined leaf 0x8007F730
    r4 = r3;
    r3 = r25;
    r5 = r28;
    r6 = r27;
    r7 = (r1 + 12);
    r8 = r26;
    r9 = 0;
    r10 = r24;
    ctx->lr = 0x8007F6E8u;
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
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80073830u>(ctx);
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
    r12 = ctx->gpr[12];
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

loc_8007F6E8:
{
}

loc_8007F6EC:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8007F708;
    }
}

loc_8007F6F0:
{
    r3 = r29;
    // inline leaf 0x8007F7D8 (2 guest instruction(s))
    r3 = MemoryAlias::FlatRead32((r3 + 236));
    // end of inlined leaf 0x8007F7D8
    r4 = -536870912;
    r5 = (r31 * 48);
    ctx->lr = 0x8007F704u;
    if constexpr (KnownRegArgsCpuCall<0x80502E8Cu>(&func_80502E8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80502E8C_5401 = func_80502E8C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80502E8C_5401);
        r4 = static_cast<uint32_t>(regargs_result_80502E8C_5401 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80502E8Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    ctx->lr = 0x8007F708u;
    if constexpr (KnownRegArgsCpuCall<0x80502E40u>(&func_80502E40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->ctr = ctr;
        const auto regargs_result_80502E40_58D8 = func_80502E40_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80502E40_58D8);
        r4 = static_cast<uint32_t>(regargs_result_80502E40_58D8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
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
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80502E40u>(ctx);
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
        r12 = ctx->gpr[12];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
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

loc_8007F708:
{
    r11 = (r1 + 80);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryAlias::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryAlias::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    ctx->gpr[24] = r24_entry;
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00FFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8007F480 func_8007F480 preserves=true fpr_mask=0x00000000
