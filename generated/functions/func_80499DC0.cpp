#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABB0(CpuContext* ctx);
extern "C" uint64_t func_8047ABB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8049ACE0(CpuContext* ctx);
extern "C" uint32_t func_8049ACE0_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8049AD34(CpuContext* ctx);
extern "C" uint64_t func_8049AD34_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8049DA40(CpuContext* ctx);
extern "C" uint64_t func_8049DA40_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80499DC0_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r11 = ctx->gpr[11];
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

    MKW_GUEST_ENTER(0x80499DC0u);
    goto loc_80499DC0;

loc_80499DC0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r4;
    r30 = r3;
    r31 = r5;
    r28 = r6;
    if constexpr (KnownRegArgsCpuCall<0x8049ACE0u>(&func_8049ACE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8049ACE0_947 = func_8049ACE0_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8049ACE0_947;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8049ACE0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r4 = 0x80740000u;
    r29 = r3;
    r4 = (r4 + -3096);
    r0 = MemoryInline::FlatRead8((r4 + 1044));
}

loc_80499DFC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(4))) {
        goto loc_80499E14;
    }
}

loc_80499E00:
{
    r3 = 589824;
    r4 = 0x80610000u;
    r3 = (r3 + 3);
    r4 = (r4 + 31488);
    ctx->lr = 0x80499E14u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8047ABB0_CE6 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_CE6);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_CE6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8047ABB0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80499E14:
{
}

loc_80499E18:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80499E9C;
    }
}

loc_80499E1C:
{
    r3 = r27;
    if constexpr (KnownRegArgsCpuCall<0x8049AD34u>(&func_8049AD34)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8049AD34_1445 = func_8049AD34_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8049AD34_1445);
        r4 = static_cast<uint32_t>(regargs_result_8049AD34_1445 >> 32);
        r0 = ctx->gpr[0];
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
        InvokeDirectCpu<0x8049AD34u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_80499E28:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80499E90;
    }
}

loc_80499E30:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 9u, true, false);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 0u, r31);
    r4 = r27;
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r31 + 1));
    r5 = r31;
    r6 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 81), 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r3 + 81), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 82), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r31 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r31 + 3));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r3 + 83), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r3 + 84), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r31 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r31 + 5));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r3 + 85), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r3 + 86), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r31 + 6));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r31 + 7));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r3 + 87), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r3 + 88), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r31 + 8));
    MemoryInline::WriteResolved8(guest_range_2, 8u, (r3 + 89), static_cast<uint8_t>(r0));
    r3 = r30;
    ctx->lr = 0x80499E8Cu;
    if constexpr (KnownRegArgsCpuCall<0x8049DA40u>(&func_8049DA40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8049DA40_1EFE = func_8049DA40_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049DA40_1EFE);
        r4 = static_cast<uint32_t>(regargs_result_8049DA40_1EFE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8049DA40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    goto loc_80499EF8;
}

loc_80499E90:
{
    r0 = MemoryInline::FlatRead8(r3);
    r3 = (r30 + r27);
    MemoryInline::FlatWrite8((r3 + 36), static_cast<uint8_t>(r0));
}

loc_80499E9C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 9u, true, false);
    r7 = MemoryInline::ReadResolved8(guest_range_1, 0u, r31);
    r3 = r30;
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r31 + 1));
    r4 = r27;
    r5 = r31;
    r6 = r28;
    guest_range_3 = MemoryInline::ResolveRangeHost((r29 + 81), 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r29 + 81), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r29 + 82), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r31 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r31 + 3));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r29 + 83), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r29 + 84), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r31 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r31 + 5));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r29 + 85), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r29 + 86), static_cast<uint8_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r31 + 6));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r31 + 7));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r29 + 87), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r29 + 88), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 8u, (r31 + 8));
    MemoryInline::WriteResolved8(guest_range_3, 8u, (r29 + 89), static_cast<uint8_t>(r0));
    ctx->lr = 0x80499EF8u;
    if constexpr (KnownRegArgsCpuCall<0x8049DA40u>(&func_8049DA40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8049DA40_2D13 = func_8049DA40_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8049DA40_2D13);
        r4 = static_cast<uint32_t>(regargs_result_8049DA40_2D13 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8049DA40u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80499EF8:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80499DC0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80499DC0_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80499DC0 func_80499DC0 preserves=true fpr_mask=0x00000000
