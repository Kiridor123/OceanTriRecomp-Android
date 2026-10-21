#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80535DB0(CpuContext* ctx);
extern "C" uint64_t func_80535DB0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_805364B0(CpuContext* ctx);
extern "C" uint64_t func_805364B0_ra38_6_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double);

extern "C" uint64_t func_8052F054_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8052F054u);
    goto loc_8052F054;

loc_8052F054:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r6;
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r4 = r30;
    r3 = (r3 + 232);
    if constexpr (KnownRegArgsCpuCall<0x80535DB0u>(&func_80535DB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80535DB0_7E6 = func_80535DB0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80535DB0_7E6);
        r4 = static_cast<uint32_t>(regargs_result_80535DB0_7E6 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80535DB0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = r3;
    r3 = MemoryInline::FlatRead32((r27 + 40));
    r5 = r30;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8052F0A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    ctr = ctx->ctr;
    r4 = MemoryInline::FlatRead8((r27 + 249));
    r31 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80535E6Cu>(ctx);
}

loc_8052F0B0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_8052F0BC;
    }
}

loc_8052F0B4:
{
    r7 = (r27 + 232);
    goto loc_8052F0C0;
}

loc_8052F0BC:
{
    r7 = 0;
}

loc_8052F0C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 76), 0, 180u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r27 + 80));
    r8 = r30;
    f6.d = MemoryInline::FlatReadFloat32((r29 + 8));
    r3 = (r1 + 16);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r27 + 76));
    r4 = (r1 + 8);
    f4.d = MemoryInline::FlatReadFloat32(r29);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 148u, (r27 + 224));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 140u, (r27 + 216));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 12));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 176u, (r27 + 252));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f3.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 152u, (r27 + 228));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 144u, (r27 + 220));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f5.d));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 173u, (r27 + 249));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f3.d);
    f0.d = MemoryInline::FlatReadFloat32(r28);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 148u, (r27 + 224));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 140u, (r27 + 216));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    ctx->lr = 0x8052F150u;
    if constexpr (KnownRegArgsCpuCall<0x805364B0u>(&func_805364B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->ctr = ctr;
        const auto regargs_result_805364B0_1A13 = func_805364B0_ra38_6_18_0(ctx, r3, r4, r5, f1.d, f2.d);
        r3 = static_cast<uint32_t>(regargs_result_805364B0_1A13);
        r4 = static_cast<uint32_t>(regargs_result_805364B0_1A13 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
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
        ctx->gpr[12] = r12;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x805364B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        ctr = ctx->ctr;
    }
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
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052F054(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052F054_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8052F054 func_8052F054 preserves=true fpr_mask=0x00000000
