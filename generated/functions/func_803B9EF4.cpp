#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF80C(CpuContext* ctx);
extern "C" uint64_t func_800CF80C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803B9FF0(CpuContext* ctx);
extern "C" uint64_t func_803B9FF0_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803B9EF4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
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

    goto loc_803B9EF4;

loc_803B9EF4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = 196608;
    r3 = (r30 + 19048);
    ctx->lr = 0x803B9F1Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[28] = r28;
        const auto regargs_result_800CF80C_729 = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_729);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_729 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    }
    r29 = r3;
    MemoryInline::FlatWrite32((r13 + -16840), r3);
    r4 = 0;
    r5 = (r30 + 19048);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r31 = 65536;
    r3 = (r31 + 4608);
    ctx->lr = 0x803B9F3Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[28] = r28;
        const auto regargs_result_800CF80C_EE0 = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_EE0);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_EE0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    }
    MemoryInline::FlatWriteRam32((r29 + 28), r3);
    r3 = MemoryInline::FlatRead32((r29 + 28));
    r4 = 0;
    r5 = (r31 + 4608);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r30 = 128;
    MemoryInline::FlatWriteRam32((r29 + 32), r30);
    r3 = (r31 + 1536);
    ctx->lr = 0x803B9F60u;
    if constexpr (KnownRegArgsCpuCall<0x800CF80Cu>(&func_800CF80C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[28] = r28;
        const auto regargs_result_800CF80C_16E8 = func_800CF80C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CF80C_16E8);
        r4 = static_cast<uint32_t>(regargs_result_800CF80C_16E8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
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
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[28] = r28;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800CF80Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
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
    }
    MemoryInline::FlatWriteRam32((r29 + 36), r3);
    r3 = MemoryInline::FlatRead32((r29 + 36));
    r4 = 0;
    r5 = (r31 + 1536);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r29 + 40), r30);
    r28 = 0;
    r3 = 0x806D0000u;
    r29 = (r3 + 20216);
    r31 = 0;
}

loc_803B9F88:
{
    r3 = 12;
    ctx->lr = 0x803B9F90u;
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
    InvokeDirectCpu<0x800404DCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    r30 = r3;
}

loc_803B9F98:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B9FA0;
    }
}

loc_803B9F9C:
{
    ctx->lr = 0x803B9FA0u;
    if constexpr (KnownRegArgsCpuCall<0x803B9FF0u>(&func_803B9FF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803B9FF0_2244 = func_803B9FF0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_803B9FF0_2244);
        r4 = static_cast<uint32_t>(regargs_result_803B9FF0_2244 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803B9FF0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B9FA0:
{
    MemoryInline::FlatWrite32(r29, r30);
    r3 = MemoryInline::FlatRead32(r29);
}

loc_803B9FAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803B9FBC;
    }
}

loc_803B9FB0:
{
    MemoryInline::FlatWrite8((r3 + 4), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWrite32((r3 + 8), r31);
}

loc_803B9FBC:
{
    r29 = (r29 + 4);
    r28 = (r28 + 1);
}

loc_803B9FC8:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(32))) {
        goto loc_803B9F88;
    }
}

loc_803B9FCC:
{
    // inline leaf 0x803BE7FC (23 guest instruction(s))
    r3 = 0x806D0000u;
    r0 = MemoryInline::FlatRead32((r3 + 20344));
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -16832), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r13 + -16832), r0);
    r3 = (r3 + 20344);
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r3 + 4));
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r13 + -16828), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r3 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r13 + -16824), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r3 + 12));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r13 + -16820), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r3 + 16));
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r13 + -16816), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r3 + 20));
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r13 + -16812), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r3 + 24));
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r13 + -16808), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r3 + 28));
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r13 + -16804), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r3 + 32));
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r13 + -16800), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r3 + 36));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r13 + -16796), r0);
    // end of inlined leaf 0x803BE7FC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->gpr[28] = r28_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B9EF4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B9EF4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x0FFFFFFF gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803B9EF4 func_803B9EF4 preserves=true fpr_mask=0x00000000
