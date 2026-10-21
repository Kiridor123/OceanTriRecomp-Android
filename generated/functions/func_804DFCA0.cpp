#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804DF880(CpuContext* ctx);
extern "C" uint64_t func_804DF880_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804DFCA0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804DFCA0u);
    goto loc_804DFCA0;

loc_804DFCA0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(7));
    r7 = (r7_rot_0 & 32640);
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    r6 = (r3 + r0);
    r7 = (r3 + r7);
    r0 = 13107200;
    r29 = r4;
    r28 = r3;
    MemoryInline::FlatWrite32((r6 + 2216), r0);
    r0 = 4;
    MemoryInline::FlatWrite32((r6 + 2280), r5);
    r6 = MemoryInline::FlatRead8((r7 + 127));
    r31 = MemoryInline::FlatRead8((r7 + 130));
    r30 = MemoryInline::FlatRead8((r7 + 131));
    ctr = r0;
}

loc_804DFCF8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 120), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r7 + 120), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r7 + 121), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r7 + 122), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r7 + 123), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r7 + 124), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r7 + 125), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r7 + 126), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r7 + 127), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r7 + 128), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r7 + 129), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 10u, (r7 + 130), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 11u, (r7 + 131), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r7 + 132), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 13u, (r7 + 133), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r7 + 134), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r7 + 135), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r7 + 136), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r7 + 137), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r7 + 138), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r7 + 139), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r7 + 140), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r7 + 141), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r7 + 142), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r7 + 143), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r7 + 144), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r7 + 145), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r7 + 146), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r7 + 147), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r7 + 148), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r7 + 149), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r7 + 150), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r7 + 151), static_cast<uint8_t>(r5));
    r7 = (r7 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804DFCF8;
    }
}

loc_804DFD80:
{
    r3 = r28;
    r4 = r29;
    r5 = 7;
    ctx->lr = 0x804DFD90u;
    if constexpr (KnownRegArgsCpuCall<0x804DF880u>(&func_804DF880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_804DF880_157C = func_804DF880_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF880_157C);
        r4 = static_cast<uint32_t>(regargs_result_804DF880_157C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DF880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r3 = r28;
    r4 = r29;
    r6 = r31;
    r5 = 10;
    ctx->lr = 0x804DFDA4u;
    if constexpr (KnownRegArgsCpuCall<0x804DF880u>(&func_804DF880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_804DF880_1AF2 = func_804DF880_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF880_1AF2);
        r4 = static_cast<uint32_t>(regargs_result_804DF880_1AF2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DF880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r3 = r28;
    r4 = r29;
    r6 = r30;
    r5 = 11;
    ctx->lr = 0x804DFDB8u;
    if constexpr (KnownRegArgsCpuCall<0x804DF880u>(&func_804DF880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_804DF880_2068 = func_804DF880_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF880_2068);
        r4 = static_cast<uint32_t>(regargs_result_804DF880_2068 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DF880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r3 = r28;
    r4 = r29;
    r5 = 91;
    r6 = 0;
    ctx->lr = 0x804DFDCCu;
    if constexpr (KnownRegArgsCpuCall<0x804DF880u>(&func_804DF880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_804DF880_25DC = func_804DF880_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF880_25DC);
        r4 = static_cast<uint32_t>(regargs_result_804DF880_25DC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DF880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r3 = r28;
    r4 = r29;
    r5 = 92;
    r6 = 0;
    ctx->lr = 0x804DFDE0u;
    if constexpr (KnownRegArgsCpuCall<0x804DF880u>(&func_804DF880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->ctr = ctr;
        const auto regargs_result_804DF880_2B50 = func_804DF880_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804DF880_2B50);
        r4 = static_cast<uint32_t>(regargs_result_804DF880_2B50 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804DF880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DFCA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DFCA0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000077B gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804DFCA0 func_804DFCA0 preserves=true fpr_mask=0x00000000
