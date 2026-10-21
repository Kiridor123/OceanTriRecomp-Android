#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80040E4C(CpuContext* ctx);
extern "C" uint64_t func_80040E4C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800CECC8(CpuContext* ctx);
extern "C" uint64_t func_800CECC8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800EF2D4(CpuContext* ctx);
extern "C" uint64_t func_800EF2D4_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_800EF62C(CpuContext* ctx);
extern "C" uint64_t func_800EF62C_ra1c0_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803A88F0(CpuContext* ctx);
extern "C" uint64_t func_803A88F0_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_803ADD88(CpuContext* ctx);
extern "C" uint64_t func_803ADD88_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803AEC24(CpuContext* ctx);
extern "C" uint64_t func_803AEC24_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B1F10(CpuContext* ctx);
extern "C" uint64_t func_803B1F10_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B20C4(CpuContext* ctx);
extern "C" uint64_t func_803B20C4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B32F4(CpuContext* ctx);
extern "C" uint64_t func_803B32F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803B4DC4(CpuContext* ctx);
extern "C" uint32_t func_803B4DC4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803B4E3C(CpuContext* ctx);
extern "C" uint32_t func_803B4E3C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_804469B8(CpuContext* ctx);
extern "C" uint32_t func_804469B8_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80454B10(CpuContext* ctx);
extern "C" uint32_t func_80454B10_ra148_1e_10_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_803AEF34_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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
    const uint32_t r28_entry = r28;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803AEF34u);
    goto loc_803AEF34;

loc_803AEF34:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl0_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl0_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CFB10;
    }
}

loc_inl0_0x800CFB08:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl0_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl0_0x800CFB24;
    }
}

loc_inl0_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl0_cont_800CFAF4;
}

loc_inl0_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl0_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r31 = r3;
}

loc_803AEF60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AF4F8;
    }
}

loc_803AEF64:
{
    r3 = 0x80660000u;
    r29 = (r3 + -19148);
    r28 = 0;
    r0 = MemoryInline::FlatRead16((r3 + -19148));
}

loc_803AEF78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AEFC0;
    }
}

loc_803AEF7C:
{
    r28 = 1;
    r3 = MemoryInline::FlatRead16(r29);
}

loc_803AEF88:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(60000))) {
        goto loc_803AEFB4;
    }
}

loc_803AEF8C:
{
    if constexpr (KnownRegArgsCpuCall<0x803B20C4u>(&func_803B20C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803B20C4_1742 = func_803B20C4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B20C4_1742);
        r4 = static_cast<uint32_t>(regargs_result_803B20C4_1742 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B20C4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r30 = (r3 & 65535);
    r3 = MemoryInline::FlatRead16(r29);
    ctx->lr = 0x803AEF9Cu;
    if constexpr (KnownRegArgsCpuCall<0x803B1F10u>(&func_803B1F10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803B1F10_1B23 = func_803B1F10_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B1F10_1B23);
        r4 = static_cast<uint32_t>(regargs_result_803B1F10_1B23 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803B1F10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r5 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_803AEFC0;
}

loc_803AEFB4:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    if constexpr (KnownRegArgsCpuCall<0x80454B10u>(&func_80454B10)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_80454B10_207B = func_80454B10_ra148_1e_10_0(ctx, r3, r6, r8, f1.d, f2.d, f3.d, f4.d);
        r4 = regargs_result_80454B10_207B;
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80454B10u>(ctx);
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        ctr = ctx->ctr;
    }
}

loc_803AEFC0:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
}

loc_803AEFC8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AEFE8;
    }
}

loc_803AEFCC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 26460), r0);
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r3 + 26464);
    r4 = 0;
    r5 = 24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803AEFE8:
{
    r0 = MemoryInline::FlatRead8((r29 + 8));
    MemoryInline::FlatWrite8((r31 + 8916), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 41));
    MemoryInline::FlatWrite8((r31 + 8917), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 42));
    MemoryInline::FlatWrite8((r31 + 8918), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 8916));
    r0 = (r3 & 128);
}

loc_803AF00C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF020;
    }
}

loc_803AF010:
{
    r3 = (r3 & 127);
    r4 = MemoryInline::FlatRead8((r31 + 8917));
    r5 = MemoryInline::FlatRead8((r31 + 8918));
    ctx->lr = 0x803AF020u;
    if constexpr (KnownRegArgsCpuCall<0x800EF2D4u>(&func_800EF2D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_800EF2D4_2A32 = func_800EF2D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800EF2D4_2A32);
        r4 = static_cast<uint32_t>(regargs_result_800EF2D4_2A32 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800EF2D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
}

loc_803AF020:
{
}

loc_803AF024:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(1))) {
        goto loc_803AF4B8;
    }
}

loc_803AF028:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 & 8);
}

loc_803AF03C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF064;
    }
}

loc_803AF040:
{
    r0 = 128;
    MemoryInline::FlatWrite8((r31 + 8916), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 8917), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 8918), static_cast<uint8_t>(r0));
    r3 = 0;
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x803AF064u;
    if constexpr (KnownRegArgsCpuCall<0x800EF2D4u>(&func_800EF2D4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_800EF2D4_3458 = func_800EF2D4_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800EF2D4_3458);
        r4 = static_cast<uint32_t>(regargs_result_800EF2D4_3458 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800EF2D4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
}

loc_803AF064:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r3 = MemoryInline::FlatRead32((r3 + 912));
}

loc_803AF074:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AF0A0;
    }
}

loc_803AF078:
{
    r0 = (r3 + -1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 8923), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r3 = MemoryInline::FlatRead32((r3 + 912));
    r0 = (r3 + -1);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->lr = 0x803AF09Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80146604u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    goto loc_803AF0B0;
}

loc_803AF0A0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 8923), static_cast<uint8_t>(r0));
    r3 = 0;
    ctx->lr = 0x803AF0B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80146604u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_803AF0B0:
{
    r30 = 1;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite32((r3 + 26460), r30);
    r0 = MemoryInline::FlatRead16(r29);
    MemoryInline::FlatWrite32((r31 + 288), r0);
    r3 = MemoryInline::FlatRead32((r31 + 288));
    ctx->lr = 0x803AF0CCu;
    if constexpr (KnownRegArgsCpuCall<0x803A88F0u>(&func_803A88F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803A88F0_45C8 = func_803A88F0_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_803A88F0_45C8);
        r4 = static_cast<uint32_t>(regargs_result_803A88F0_45C8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803A88F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        ctr = ctx->ctr;
    }
    ctx->lr = 0x803AF0D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x803AE9F4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r5 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead8((r5 + 139));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r3 = 0x80600000u;
    r0 = (r3 + -32680);
    r4 = (r0 + r4);
    r0 = MemoryInline::FlatRead32((r5 + 784));
    r3 = (r0 & 196608);
    r0 = (r3 + -196608);
}

loc_803AF0FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_803AF110;
    }
}

loc_803AF100:
{
    r0 = (r3 + -131072);
}

loc_803AF108:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_803AF120;
    }
}

loc_803AF10C:
{
    goto loc_803AF130;
}

loc_803AF110:
{
    r0 = MemoryInline::FlatRead8((r29 + 9));
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    MemoryInline::FlatWrite8((r31 + 237), static_cast<uint8_t>(r0));
    goto loc_803AF140;
}

loc_803AF120:
{
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8((r31 + 237), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r29 + 9), static_cast<uint8_t>(r30));
    goto loc_803AF140;
}

loc_803AF130:
{
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r31 + 237), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r29 + 9), static_cast<uint8_t>(r0));
}

loc_803AF140:
{
    r0 = MemoryInline::FlatRead8((r29 + 9));
    MemoryInline::FlatWrite8((r31 + 8920), static_cast<uint8_t>(r0));
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 26997), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x803B32F4u>(&func_803B32F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B32F4_541D = func_803B32F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803B32F4_541D);
        r4 = static_cast<uint32_t>(regargs_result_803B32F4_541D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803B32F4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803AF15C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AF1A4;
    }
}

loc_803AF160:
{
    r5 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r5 + 60));
    r3 = (r3 + 812);
    r4 = (r5 + 26464);
    r6 = 0x806D0000u;
    r6 = (r6 + -6000);
    r12 = MemoryInline::FlatRead32((r6 + 4));
    ctr = r12;
    ctx->lr = 0x803AF184u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r0 = (r3 & 255);
}

loc_803AF18C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803AF1A4;
    }
}

loc_803AF190:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 26998), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 26997), static_cast<uint8_t>(r0));
}

loc_803AF1A4:
{
    r3 = 0;
    ctx->lr = 0x803AF1ACu;
    if constexpr (KnownRegArgsCpuCall<0x803B4E3Cu>(&func_803B4E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4E3C_5D5F = func_803B4E3C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4E3C_5D5F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803AF1B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AF1E0;
    }
}

loc_803AF1B4:
{
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r4 + 26464);
    r4 = MemoryInline::FlatRead32((r4 + 60));
    r4 = (r4 + 804);
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 26998), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 26997), static_cast<uint8_t>(r0));
}

loc_803AF1E0:
{
    r30 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r30 + 60));
    r0 = MemoryInline::FlatRead8((r3 + 812));
}

loc_803AF1F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF268;
    }
}

loc_803AF1F4:
{
    r3 = 3;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl1_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl1_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF40;
    }
}

loc_inl1_0x800CEF3C:
{
    r0 = 1;
}

loc_inl1_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl1_cont_800CEF20:
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
    r0 = (r4 - r0);
    r4 = (r0 & 255);
    r3 = MemoryInline::FlatRead32((r30 + 60));
    r0 = MemoryInline::FlatRead8((r3 + 812));
}

loc_803AF230:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_803AF268;
    }
}

loc_803AF234:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 26997), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r4 + 60));
    r0 = MemoryInline::FlatRead8((r3 + 813));
}

loc_803AF24C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(6))) {
        goto loc_803AF260;
    }
}

loc_803AF250:
{
    r3 = (r13 + -22460);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    MemoryInline::FlatWrite8((r4 + 27316), static_cast<uint8_t>(r0));
    goto loc_803AF268;
}

loc_803AF260:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 27316), static_cast<uint8_t>(r0));
}

loc_803AF268:
{
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r4 + 60));
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 & 262144);
}

loc_803AF27C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF288;
    }
}

loc_803AF280:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r4 + 147), static_cast<uint8_t>(r0));
}

loc_803AF288:
{
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r4 + 60));
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 & 64);
}

loc_803AF29C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF2A8;
    }
}

loc_803AF2A0:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r4 + 147), static_cast<uint8_t>(r0));
}

loc_803AF2A8:
{
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r4 + 60));
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 & 8388608);
}

loc_803AF2BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF2C8;
    }
}

loc_803AF2C0:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r4 + 147), static_cast<uint8_t>(r0));
}

loc_803AF2C8:
{
    r3 = 0;
    ctx->lr = 0x803AF2D0u;
    if constexpr (KnownRegArgsCpuCall<0x803B4DC4u>(&func_803B4DC4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803B4DC4_7272 = func_803B4DC4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803B4DC4_7272;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B4DC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803AF2D4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AF2E4;
    }
}

loc_803AF2D8:
{
    r0 = 4;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 147), static_cast<uint8_t>(r0));
}

loc_803AF2E4:
{
    r30 = 0;
    MemoryInline::FlatWrite8((r31 + 238), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead8((r3 + 139));
    MemoryInline::FlatWrite8((r31 + 233), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r31 + 237));
    ctx->lr = 0x803AF304u;
    if constexpr (KnownRegArgsCpuCall<0x80040E4Cu>(&func_80040E4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->ctr = ctr;
        const auto regargs_result_80040E4C_77C2 = func_80040E4C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80040E4C_77C2);
        r4 = static_cast<uint32_t>(regargs_result_80040E4C_77C2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
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
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80040E4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
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
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r4 + 148);
    r4 = MemoryInline::FlatRead32((r4 + 60));
    r4 = (r4 + 916);
    r5 = 288;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r4 + 436);
    r4 = MemoryInline::FlatRead32((r4 + 60));
    r4 = (r4 + 916);
    r5 = 288;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = (r4 + 740);
    r4 = MemoryInline::FlatRead32((r4 + 60));
    r4 = (r4 + 840);
    r5 = 36;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite32((r3 + 728), r30);
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite32((r3 + 732), r30);
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite32((r3 + 736), r30);
    r0 = MemoryInline::FlatRead8((r31 + 238));
}

loc_803AF36C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF37C;
    }
}

loc_803AF370:
{
    MemoryInline::FlatWrite8((r31 + 238), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r31 + 234), static_cast<uint8_t>(r30));
    goto loc_803AF380;
}

loc_803AF37C:
{
    MemoryInline::FlatWrite8((r31 + 234), static_cast<uint8_t>(r0));
}

loc_803AF380:
{
    r4 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r4 + 756));
}

loc_803AF38C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_803AF3D0;
    }
}

loc_803AF390:
{
    r0 = MemoryInline::FlatRead32((r4 + 744));
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r3));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite8((r4 + 144), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = MemoryInline::FlatRead8((r5 + 144));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    r0 = MemoryInline::FlatRead32((r5 + 756));
    r3 = (r3 * r0);
    r0 = MemoryInline::FlatRead32((r5 + 744));
    r0 = (r0 - r3);
}

loc_803AF3C0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803AF3D8;
    }
}

loc_803AF3C4:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite8((r5 + 144), static_cast<uint8_t>(r0));
    goto loc_803AF3D8;
}

loc_803AF3D0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 144), static_cast<uint8_t>(r0));
}

loc_803AF3D8:
{
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 145), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 146), static_cast<uint8_t>(r0));
    ctx->lr = 0x803AF3F0u;
    if constexpr (KnownRegArgsCpuCall<0x803ADD88u>(&func_803ADD88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803ADD88_8B5D = func_803ADD88_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803ADD88_8B5D);
        r4 = static_cast<uint32_t>(regargs_result_803ADD88_8B5D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803ADD88u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    ctx->lr = 0x803AF3F4u;
    if constexpr (KnownRegArgsCpuCall<0x804469B8u>(&func_804469B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_804469B8_8F1A = func_804469B8_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_804469B8_8F1A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x804469B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803AF3F8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803AF478;
    }
}

loc_803AF3FC:
{
    r0 = MemoryInline::FlatRead8((r29 + 153));
}

loc_803AF404:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(19))) {
        goto loc_803AF414;
    }
}

loc_803AF408:
{
}

loc_803AF40C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_803AF448;
    }
}

loc_803AF410:
{
    goto loc_803AF478;
}

loc_803AF414:
{
    r0 = 1216;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    MemoryInline::FlatWrite32((r3 + 892), r0);
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r3 = 0x80600000u;
    r3 = (r3 + -31984);
    r0 = MemoryInline::FlatRead32((r4 + 892));
    r4 = (r0 + r4);
    r5 = 1536;
    ctx->lr = 0x803AF444u;
    if constexpr (KnownRegArgsCpuCall<0x800CECC8u>(&func_800CECC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->ctr = ctr;
        const auto regargs_result_800CECC8_9569 = func_800CECC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CECC8_9569);
        r4 = static_cast<uint32_t>(regargs_result_800CECC8_9569 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
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
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CECC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
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
    goto loc_803AF478;
}

loc_803AF448:
{
    r0 = 1216;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    MemoryInline::FlatWrite32((r3 + 892), r0);
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r3 = 0x80600000u;
    r3 = (r3 + -31964);
    r0 = MemoryInline::FlatRead32((r4 + 892));
    r4 = (r0 + r4);
    r5 = 2816;
    ctx->lr = 0x803AF478u;
    if constexpr (KnownRegArgsCpuCall<0x800CECC8u>(&func_800CECC8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->ctr = ctr;
        const auto regargs_result_800CECC8_9F0A = func_800CECC8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CECC8_9F0A);
        r4 = static_cast<uint32_t>(regargs_result_800CECC8_9F0A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
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
        ctx->gpr[12] = r12;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800CECC8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r12 = ctx->gpr[12];
        r13 = ctx->gpr[13];
        r28 = ctx->gpr[28];
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

loc_803AF478:
{
    r0 = MemoryInline::FlatRead8((r31 + 233));
    r3 = 0x80600000u;
    r3 = (r3 + -32652);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_3);
    ctx->lr = 0x803AF48Cu;
    if constexpr (KnownRegArgsCpuCall<0x803AEC24u>(&func_803AEC24)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        const auto regargs_result_803AEC24_A781 = func_803AEC24_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_803AEC24_A781);
        r4 = static_cast<uint32_t>(regargs_result_803AEC24_A781 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x803AEC24u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        ctr = ctx->ctr;
    }
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead32((r3 + 784));
    r0 = (r0 & 16777216);
}

loc_803AF4A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AF4F8;
    }
}

loc_803AF4A4:
{
    r3 = MemoryInline::FlatRead8((r3 + 878));
    r3 = (r3 & 65535);
    // inline leaf 0x8033A1A0 (9 guest instruction(s))
    r5 = 0;
    r4 = 0x806C0000u;
    MemoryInline::FlatWriteRam8((r4 + 5024), static_cast<uint8_t>(r5));
    r4 = (r4 + 5024);
    MemoryInline::FlatWriteRam8((r4 + 8), static_cast<uint8_t>(r5));
    r0 = (r3 & 255);
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r4 + 12), r5);
    // end of inlined leaf 0x8033A1A0
    ctx->lr = 0x803AF4B4u;
    if constexpr (KnownRegArgsCpuCall<0x800EF62Cu>(&func_800EF62C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[12] = r12;
        ctx->ctr = ctr;
        const auto regargs_result_800EF62C_AE96 = func_800EF62C_ra1c0_1fe_18_0(ctx, r6, r7, r8, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800EF62C_AE96);
        r4 = static_cast<uint32_t>(regargs_result_800EF62C_AE96 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        ctx->gpr[12] = r12;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x800EF62Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
    goto loc_803AF4F8;
}

loc_803AF4B8:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
}

loc_803AF4C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803AF4D4;
    }
}

loc_803AF4C4:
{
    r0 = MemoryInline::FlatRead32((r31 + 288));
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r0));
    goto loc_803AF4F8;
}

loc_803AF4D4:
{
    r0 = MemoryInline::FlatRead32((r31 + 288));
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r31 + 237), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 288));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3 = 0x80600000u;
    r3 = (r3 + -32680);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
    MemoryInline::FlatWrite8((r31 + 233), static_cast<uint8_t>(r0));
}

loc_803AF4F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->ctr = ctr;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803AEF34(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AEF34_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803AEF34 func_803AEF34 preserves=true fpr_mask=0x00000000
