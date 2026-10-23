#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AED4(CpuContext* ctx);
extern "C" uint32_t func_8004AED4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800DD02C(CpuContext* ctx);
extern "C" uint64_t func_800DD02C_ra38_1f8_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double);
extern "C" void func_802DA4B8(CpuContext* ctx);
extern "C" uint64_t func_802DA4B8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802E05B4(CpuContext* ctx);
extern "C" uint64_t func_802E05B4_ra38_2_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double);
extern "C" void func_8031C3F4(CpuContext* ctx);
extern "C" uint64_t func_8031C3F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8031C660_ra38_1fa_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    goto loc_8031C660;

loc_8031C660:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r4 = (r4 & 65535);
    r5 = (r5 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8031C3F4u>(&func_8031C3F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8031C3F4_934 = func_8031C3F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031C3F4_934);
        r4 = static_cast<uint32_t>(regargs_result_8031C3F4_934 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8031C3F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = MemoryInline::FlatRead8((r31 + 15));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r31 + 15), static_cast<uint8_t>(r0));
    r0 = (r0 & 255);
}

loc_8031C698:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031C6A4;
    }
}

loc_8031C69C:
{
    r3 = 0;
    goto loc_8031C938;
}

loc_8031C6A4:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_8031C6AC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8031C860;
    }
}

loc_8031C6B0:
{
    r3 = MemoryInline::FlatRead32(r31);
    // inline leaf 0x8033B2FC (12 guest instruction(s))
    r6 = MemoryInline::FlatRead8((r3 + 6));
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r0 = (static_cast<int32_t>(r6) >> 3);
    r5 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r5 + 14688));
    r3 = 1;
    r0 = (r6 & 7);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite8((r5 + 14688), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8033B2FC
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r31 + 20), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 17), static_cast<uint8_t>(r0));
    r3 = 1;
    ctx->lr = 0x8031C6D4u;
    if constexpr (KnownRegArgsCpuCall<0x800DD02Cu>(&func_800DD02C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        const auto regargs_result_800DD02C_126B = func_800DD02C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DD02C_126B);
        r4 = static_cast<uint32_t>(regargs_result_800DD02C_126B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DD02Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead8((r31 + 18));
}

loc_8031C6DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8031C854;
    }
}

loc_8031C6E0:
{
    r0 = MemoryInline::FlatRead8((r31 + 14));
}

loc_8031C6E8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8031C79C;
    }
}

loc_8031C6EC:
{
    r3 = 978;
    r4 = (r1 + 12);
    ctx->lr = 0x8031C6F8u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E05B4_1AD9 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_1AD9);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_1AD9 >> 32);
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
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = 987;
    r4 = (r1 + 8);
    ctx->lr = 0x8031C704u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E05B4_1E77 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_1E77);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_1E77 >> 32);
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
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead8((r31 + 19));
    r0 = (r0 & 1);
}

loc_8031C710:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031C758;
    }
}

loc_8031C714:
{
    r3 = 0;
    r4 = 2;
    r5 = MemoryInline::FlatRead16((r1 + 12));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r1 + 14));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = 1;
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x8031C734u;
    if constexpr (KnownRegArgsCpuCall<0x802DA4B8u>(&func_802DA4B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_802DA4B8_2457 = func_802DA4B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DA4B8_2457);
        r4 = static_cast<uint32_t>(regargs_result_802DA4B8_2457 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x802DA4B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r3 = 0;
    r4 = 4;
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r1 + 10));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = 1;
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x8031C754u;
    if constexpr (KnownRegArgsCpuCall<0x802DA4B8u>(&func_802DA4B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_802DA4B8_2A4D = func_802DA4B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DA4B8_2A4D);
        r4 = static_cast<uint32_t>(regargs_result_802DA4B8_2A4D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x802DA4B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    goto loc_8031C848;
}

loc_8031C758:
{
    r3 = 0;
    r4 = 3;
    r5 = MemoryInline::FlatRead16((r1 + 12));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r1 + 14));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = 1;
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x8031C778u;
    if constexpr (KnownRegArgsCpuCall<0x802DA4B8u>(&func_802DA4B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_802DA4B8_3073 = func_802DA4B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DA4B8_3073);
        r4 = static_cast<uint32_t>(regargs_result_802DA4B8_3073 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x802DA4B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r3 = 0;
    r4 = 5;
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r1 + 10));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = 1;
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x8031C798u;
    if constexpr (KnownRegArgsCpuCall<0x802DA4B8u>(&func_802DA4B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_802DA4B8_3669 = func_802DA4B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DA4B8_3669);
        r4 = static_cast<uint32_t>(regargs_result_802DA4B8_3669 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x802DA4B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    goto loc_8031C848;
}

loc_8031C79C:
{
    r3 = 7005;
    r4 = (r1 + 12);
    ctx->lr = 0x8031C7A8u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E05B4_3B25 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_3B25);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_3B25 >> 32);
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
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r3 = 7006;
    r4 = (r1 + 8);
    ctx->lr = 0x8031C7B4u;
    if constexpr (KnownRegArgsCpuCall<0x802E05B4u>(&func_802E05B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802E05B4_3EC4 = func_802E05B4_ra38_2_18_0(ctx, r3, r4, r5, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E05B4_3EC4);
        r4 = static_cast<uint32_t>(regargs_result_802E05B4_3EC4 >> 32);
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
        InvokeDirectCpu<0x802E05B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead8((r31 + 19));
    r0 = (r0 & 1);
}

loc_8031C7C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8031C808;
    }
}

loc_8031C7C4:
{
    r3 = 0;
    r4 = 2;
    r5 = MemoryInline::FlatRead16((r1 + 12));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r1 + 14));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = 1;
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x8031C7E4u;
    if constexpr (KnownRegArgsCpuCall<0x802DA4B8u>(&func_802DA4B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_802DA4B8_44A4 = func_802DA4B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DA4B8_44A4);
        r4 = static_cast<uint32_t>(regargs_result_802DA4B8_44A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x802DA4B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r3 = 0;
    r4 = 7;
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r1 + 10));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = 1;
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x8031C804u;
    if constexpr (KnownRegArgsCpuCall<0x802DA4B8u>(&func_802DA4B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_802DA4B8_4A9A = func_802DA4B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DA4B8_4A9A);
        r4 = static_cast<uint32_t>(regargs_result_802DA4B8_4A9A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x802DA4B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    goto loc_8031C848;
}

loc_8031C808:
{
    r3 = 0;
    r4 = 3;
    r5 = MemoryInline::FlatRead16((r1 + 12));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r1 + 14));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = 1;
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x8031C828u;
    if constexpr (KnownRegArgsCpuCall<0x802DA4B8u>(&func_802DA4B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_802DA4B8_50C0 = func_802DA4B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DA4B8_50C0);
        r4 = static_cast<uint32_t>(regargs_result_802DA4B8_50C0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x802DA4B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
    r3 = 0;
    r4 = 8;
    r5 = MemoryInline::FlatRead16((r1 + 8));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r6 = MemoryInline::FlatRead16((r1 + 10));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r7 = 1;
    r8 = 1;
    r9 = 0;
    ctx->lr = 0x8031C848u;
    if constexpr (KnownRegArgsCpuCall<0x802DA4B8u>(&func_802DA4B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_802DA4B8_56B6 = func_802DA4B8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802DA4B8_56B6);
        r4 = static_cast<uint32_t>(regargs_result_802DA4B8_56B6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        InvokeDirectCpu<0x802DA4B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
    }
}

loc_8031C848:
{
    r3 = MemoryInline::FlatRead8((r31 + 19));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r31 + 19), static_cast<uint8_t>(r0));
}

loc_8031C854:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 34), static_cast<uint8_t>(r0));
    goto loc_8031C878;
}

loc_8031C860:
{
    r0 = 376;
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 21), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x8031C878u;
    if constexpr (KnownRegArgsCpuCall<0x800DD02Cu>(&func_800DD02C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        const auto regargs_result_800DD02C_5D91 = func_800DD02C_ra38_1f8_18_0(ctx, r3, r4, r5, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800DD02C_5D91);
        r4 = static_cast<uint32_t>(regargs_result_800DD02C_5D91 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
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
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->fpr[1] = f1;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800DD02Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        f1 = ctx->fpr[1];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8031C878:
{
    r0 = MemoryInline::FlatRead8((r31 + 14));
}

loc_8031C880:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_8031C8D4;
    }
}

loc_8031C884:
{
    r30 = MemoryInline::FlatRead32((r31 + 28));
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r31 + 8));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x802A9E44 (16 guest instruction(s))
}

loc_inl1_0x802A9E44:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_inl1_0x802A9E4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x802A9E70;
    }
}

loc_inl1_0x802A9E50:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl1_0x802A9E58:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(24))) {
        goto loc_inl1_0x802A9E70;
    }
}

loc_inl1_0x802A9E5C:
{
    r3 = MemoryInline::FlatRead32((r3 + 408));
    r0 = (r5 + -24);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    goto loc_inl1_cont_802A9E44;
}

loc_inl1_0x802A9E70:
{
    r3 = MemoryInline::FlatRead32((r3 + 404));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
}

loc_inl1_cont_802A9E44:
{
    // end of inlined leaf 0x802A9E44
    r0 = MemoryInline::FlatRead16(r3);
}

loc_8031C89C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8031C8AC;
    }
}

loc_8031C8A0:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
}

loc_8031C8AC:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead16((r31 + 10));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    // inline leaf 0x802A9E44 (16 guest instruction(s))
}

loc_inl2_0x802A9E44:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_inl2_0x802A9E4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x802A9E70;
    }
}

loc_inl2_0x802A9E50:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl2_0x802A9E58:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(24))) {
        goto loc_inl2_0x802A9E70;
    }
}

loc_inl2_0x802A9E5C:
{
    r3 = MemoryInline::FlatRead32((r3 + 408));
    r0 = (r5 + -24);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r3 + r0);
    goto loc_inl2_cont_802A9E44;
}

loc_inl2_0x802A9E70:
{
    r3 = MemoryInline::FlatRead32((r3 + 404));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + r0);
}

loc_inl2_cont_802A9E44:
{
    // end of inlined leaf 0x802A9E44
    r0 = MemoryInline::FlatRead16(r3);
}

loc_8031C8C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8031C934;
    }
}

loc_8031C8C4:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
    goto loc_8031C934;
}

loc_8031C8D4:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x8031C8DCu;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004AED4_720F = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_720F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r5 = (r3 & 65535);
    r3 = MemoryInline::FlatRead16((r31 + 4));
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r4 + 384);
    ctx->lr = 0x8031C8F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8004B770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_8031C8F4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_8031C904;
    }
}

loc_8031C8F8:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r0));
}

loc_8031C904:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    ctx->lr = 0x8031C90Cu;
    if constexpr (KnownRegArgsCpuCall<0x8004AED4u>(&func_8004AED4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        const auto regargs_result_8004AED4_7A01 = func_8004AED4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8004AED4_7A01;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8004AED4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r5 = (r3 & 65535);
    r3 = MemoryInline::FlatRead16((r31 + 6));
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r4 + 384);
    ctx->lr = 0x8031C920u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    InvokeDirectCpu<0x8004B770u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_8031C924:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(0))) {
        goto loc_8031C934;
    }
}

loc_8031C928:
{
    r3 = 65536;
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
}

loc_8031C934:
{
    r3 = 1;
}

loc_8031C938:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[1] = f1;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8031C660(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8031C660_ra38_1fa_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8031C660 func_8031C660 preserves=true fpr_mask=0x00000000
