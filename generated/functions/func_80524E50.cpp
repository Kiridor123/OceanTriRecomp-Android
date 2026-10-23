#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_804E6680(CpuContext* ctx);
extern "C" uint64_t func_804E6680_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80524E50_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_80524E50;

loc_80524E50:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = 32;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 64;
    r31 = (r13 + -13480);
    r30 = (r13 + -13472);
    r29 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -13480), 0, 12u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r13 + -13472));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r3));
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 4), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r3));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13480));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r13 + -13472));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r3));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r3));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13480));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r13 + -13472));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r3));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r3));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13480));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r13 + -13472));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r3));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r3));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13480));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r13 + -13472));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r3));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r3));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13480));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r13 + -13472));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 10), static_cast<uint16_t>(r3));
    r4 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 10), static_cast<uint16_t>(r3));
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13480));
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 10), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 4));
    r5 = 512;
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite16((r4 + 10), static_cast<uint16_t>(r0));
    r4 = 0;
    r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r13 + -13472));
    r6 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite16((r6 + 12), static_cast<uint16_t>(r3));
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 4));
    r6 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite16((r6 + 12), static_cast<uint16_t>(r3));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13480));
    r6 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite16((r6 + 12), static_cast<uint16_t>(r0));
    r6 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 4));
    r6 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite16((r6 + 12), static_cast<uint16_t>(r0));
    r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r13 + -13472));
    r6 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite16((r6 + 14), static_cast<uint16_t>(r3));
    r6 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 4));
    r6 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWrite16((r6 + 14), static_cast<uint16_t>(r3));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13480));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite16((r3 + 14), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite16((r3 + 14), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -13480));
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 0;
    r5 = 512;
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead32((r13 + -13480));
    r4 = 512;
    r3 = MemoryInline::FlatRead32(r3);
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804CCCC0_227A = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_227A);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_227A >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 512;
    r3 = MemoryInline::FlatRead32(r3);
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804CCCC0_255D = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_255D);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_255D >> 32);
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r28 = 0x80520000u;
    r3 = MemoryInline::FlatRead32((r13 + -13404));
    r5 = MemoryInline::FlatRead32((r13 + -13472));
    r6 = (r28 + 21488);
    r4 = 129;
    r7 = 0;
    ctx->lr = 0x80525064u;
    if constexpr (KnownRegArgsCpuCall<0x804E6680u>(&func_804E6680)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804E6680_28E1 = func_804E6680_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E6680_28E1);
        r4 = static_cast<uint32_t>(regargs_result_804E6680_28E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804E6680u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80525068:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8052507C;
    }
}

loc_8052506C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -13488), r0);
    r29 = 0;
    goto loc_80525124;
}

loc_8052507C:
{
    r3 = MemoryInline::FlatRead32((r13 + -13404));
    r6 = (r28 + 21488);
    r5 = MemoryInline::FlatRead32((r30 + 4));
    r4 = 129;
    r7 = 0;
    ctx->lr = 0x80525094u;
    if constexpr (KnownRegArgsCpuCall<0x804E6680u>(&func_804E6680)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804E6680_3140 = func_804E6680_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E6680_3140);
        r4 = static_cast<uint32_t>(regargs_result_804E6680_3140 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804E6680u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_80525098:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_805250AC;
    }
}

loc_8052509C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -13488), r0);
    r29 = 0;
    goto loc_80525124;
}

loc_805250AC:
{
    r30 = 0x80520000u;
    r3 = MemoryInline::FlatRead32((r13 + -13404));
    r5 = MemoryInline::FlatRead32((r13 + -13480));
    r6 = (r30 + 22176);
    r4 = 3;
    r7 = 0;
    ctx->lr = 0x805250C8u;
    if constexpr (KnownRegArgsCpuCall<0x804E6680u>(&func_804E6680)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804E6680_39BA = func_804E6680_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E6680_39BA);
        r4 = static_cast<uint32_t>(regargs_result_804E6680_39BA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804E6680u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_805250CC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_805250E0;
    }
}

loc_805250D0:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r13 + -13488), r0);
    r29 = 0;
    goto loc_80525124;
}

loc_805250E0:
{
    r3 = MemoryInline::FlatRead32((r13 + -13404));
    r6 = (r30 + 22176);
    r5 = MemoryInline::FlatRead32((r31 + 4));
    r4 = 3;
    r7 = 0;
    ctx->lr = 0x805250F8u;
    if constexpr (KnownRegArgsCpuCall<0x804E6680u>(&func_804E6680)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804E6680_4217 = func_804E6680_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E6680_4217);
        r4 = static_cast<uint32_t>(regargs_result_804E6680_4217 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804E6680u>(ctx);
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
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_805250FC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80525110;
    }
}

loc_80525100:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r13 + -13488), r0);
    r29 = 0;
    goto loc_80525124;
}

loc_80525110:
{
    r0 = -1;
    r3 = 4;
    MemoryInline::FlatWrite32((r13 + -13488), r3);
    MemoryInline::FlatWrite32((r13 + -13492), r0);
    MemoryInline::FlatWrite32((r13 + -13496), r0);
}

loc_80525124:
{
    r3 = r29;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
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
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80524E50(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80524E50_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80524E50 func_80524E50 preserves=true fpr_mask=0x00000000
