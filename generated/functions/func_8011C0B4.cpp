#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800504B0(CpuContext* ctx);
extern "C" uint64_t func_800504B0_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_800E0880(CpuContext* ctx);
extern "C" uint64_t func_800E0880_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8011C0B4_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_8011C0B4;

loc_8011C0B4:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r29 = r3;
    r3 = (r1 + 8);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 24);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r31 = MemoryInline::FlatRead32((r29 + 48));
    r30 = MemoryInline::FlatRead32((r29 + 56));
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x8011C0F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800F9358u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
}

loc_8011C0F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8011C114;
    }
}

loc_8011C0FC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_8011C334;
}

loc_8011C114:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r29 + 12), r0);
    r0 = MemoryInline::FlatRead8((r29 + 6));
}

loc_8011C128:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8011C140;
    }
}

loc_8011C12C:
{
}

loc_8011C130:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8011C1C4;
    }
}

loc_8011C134:
{
}

loc_8011C138:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8011C254;
    }
}

loc_8011C13C:
{
    goto loc_8011C26C;
}

loc_8011C140:
{
    r3 = MemoryInline::FlatRead8((r30 + 16));
    r0 = (r3 + 15);
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28428));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28424));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28420));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_8011C190:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8011C26C;
    }
}

loc_8011C194:
{
    r0 = 30;
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28416));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28464));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    r0 = 4;
    MemoryInline::FlatWrite32((r29 + 12), r0);
    r3 = MemoryInline::FlatRead8((r29 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
    goto loc_8011C26C;
}

loc_8011C1C4:
{
    r3 = MemoryInline::FlatRead8((r30 + 16));
    r0 = (r3 + -7);
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 24));
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -28480), 0, 88u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r2 + -28428));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r2 + -28412));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28480));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r2 + -28420));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    r0 = MemoryInline::FlatRead32((r29 + 12));
}

loc_8011C218:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8011C26C;
    }
}

loc_8011C21C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 16), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r2 + -28408));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r2 + -28404));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r2 + -28400));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r2 + -28396));
    MemoryInline::FlatWriteFloat32((r30 + 36), f0.d);
    r3 = MemoryInline::FlatRead8((r29 + 6));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 6), static_cast<uint8_t>(r0));
    goto loc_8011C26C;
}

loc_8011C254:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_8011C334;
}

loc_8011C26C:
{
    r3 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = MemoryInline::FlatRead32((r29 + 40));
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800502E0u>(ctx);
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28456));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -28392));
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r1 + 8);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    r3 = MemoryInline::FlatRead32((r29 + 36));
    r4 = (r1 + 24);
    ctx->lr = 0x8011C2ACu;
    if constexpr (KnownRegArgsCpuCall<0x800504B0u>(&func_800504B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800504B0_22D9 = func_800504B0_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800504B0_22D9);
        r4 = static_cast<uint32_t>(regargs_result_800504B0_22D9 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800504B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = MemoryInline::FlatRead32((r31 + 316));
    r3 = (r3 + 4);
    r4 = 7;
    r5 = (r29 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0AF8u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 96));
    MemoryInline::FlatWriteFloat32((r29 + 28), f0.d);
    r3 = (r29 + 24);
    r4 = (r1 + 8);
    ctx->lr = 0x8011C2D4u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80073FCCu>(ctx);
    r3 = (r1 + 24);
    r4 = (r29 + 24);
    // inline leaf 0x800FBBF4 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x800FBBF4
    r0 = MemoryInline::FlatRead8((r30 + 16));
    MemoryInline::FlatWrite8((r30 + 20), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r4 = 0;
    r5 = 3;
    r6 = (r30 + 17);
    ctx->lr = 0x8011C2FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800E2DC4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r3 + 28);
    r4 = (r30 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r4 = (r1 + 24);
    r5 = 0;
    ctx->lr = 0x8011C31Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E0880u>(&func_800E0880)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        const auto regargs_result_800E0880_3025 = func_800E0880_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800E0880_3025);
        r4 = static_cast<uint32_t>(regargs_result_800E0880_3025 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800E0880u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = r29;
    r4 = (r30 + 12);
    r5 = 2;
    r6 = 1;
    r7 = 0;
    ctx->lr = 0x8011C334u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800F943Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
}

loc_8011C334:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8011C0B4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8011C0B4_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8011C0B4 func_8011C0B4 preserves=true fpr_mask=0x00000000
