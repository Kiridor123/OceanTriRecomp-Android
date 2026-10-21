#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8050C060(CpuContext* ctx);
extern "C" uint64_t func_8050C060_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8050CB70(CpuContext* ctx);
extern "C" uint64_t func_8050CB70_ra98_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80520C84(CpuContext* ctx);
extern "C" uint64_t func_80520C84_ra608_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_80514500_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
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
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x80514500u);
    goto loc_80514500;

loc_80514500:
{
    MemoryInline::FlatWriteRam32((r1 + -304), r1);
    r1 = (r1 + -304);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 308), r0);
    r31 = r3;
    r30 = r4;
    r29 = r5;
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_8051452C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(2))) {
        goto loc_8051485C;
    }
}

loc_80514530:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r3 = (r1 + 20);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->lr = 0x80514540u;
    if constexpr (KnownRegArgsCpuCall<0x80520C84u>(&func_80520C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80520C84_A8F = func_80520C84_ra608_1fe_18_0(ctx, r3, r9, r10, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80520C84_A8F);
        r4 = static_cast<uint32_t>(regargs_result_80520C84_A8F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80520C84u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r3 = MemoryInline::FlatRead16((r29 + 2));
    // inline leaf 0x80520CDC (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CDC
    r0 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32((r31 + 48), r0);
    r3 = MemoryInline::FlatRead16((r29 + 2));
    // inline leaf 0x80520CDC (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CDC
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 52), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 54), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 18));
}

loc_8051456C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80514658;
    }
}

loc_80514570:
{
    r3 = (r1 + 200);
    r4 = (r13 + -19096);
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 3;
    r0 = 7;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 204u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 190u, (r1 + 206), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 191u, (r1 + 207), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 8));
    // inline leaf 0x80520CE4 (1 guest instruction(s))
    // end of inlined leaf 0x80520CE4
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r1 + 208), r3);
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r1 + 212), r0);
    r3 = MemoryInline::FlatRead16((r31 + 52));
    // inline leaf 0x80520CE8 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CE8
    MemoryInline::WriteResolved16(guest_range_0, 200u, (r1 + 216), static_cast<uint16_t>(r3));
    r3 = (r1 + 16);
    r0 = MemoryInline::FlatRead8((r31 + 54));
    MemoryInline::WriteResolved8(guest_range_0, 202u, (r1 + 218), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r31 + 16));
    r4 = (2 - r5);
    r0 = (r5 + -2);
    r0 = (r4 | r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::WriteResolved8(guest_range_0, 203u, (r1 + 219), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 16), r0);
    ctx->lr = 0x805145E0u;
    if constexpr (KnownRegArgsCpuCall<0x80520C84u>(&func_80520C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80520C84_1B72 = func_80520C84_ra608_1fe_18_0(ctx, r3, r9, r10, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80520C84_1B72);
        r4 = static_cast<uint32_t>(regargs_result_80520C84_1B72 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80520C84u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r29 = MemoryInline::FlatRead32((r31 + 4));
    r3 = MemoryInline::FlatRead16((r31 + 52));
}

loc_805145EC:
{
    r30 = MemoryInline::FlatRead32((r31 + 48));
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(-1))) {
        goto loc_805145F8;
    }
}

loc_805145F4:
{
    goto loc_805145FC;
}

loc_805145F8:
{
    r29 = MemoryInline::FlatRead32(r31);
}

loc_805145FC:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r1 + 41), static_cast<uint8_t>(r0));
    // inline leaf 0x80520CE8 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CE8
    MemoryInline::FlatWriteRam16((r1 + 42), static_cast<uint16_t>(r3));
    r3 = r29;
    r4 = (r1 + 200);
    r7 = (r1 + 40);
    MemoryInline::FlatWriteRam32((r1 + 44), r30);
    r5 = 20;
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x8051462Cu;
    if constexpr (KnownRegArgsCpuCall<0x8050C060u>(&func_8050C060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8050C060_25E1 = func_8050C060_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050C060_25E1);
        r4 = static_cast<uint32_t>(regargs_result_8050C060_25E1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050C060u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->lr = 0x80514630u;
    if constexpr (KnownRegArgsCpuCall<0x8050CB70u>(&func_8050CB70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[8] = r8;
        const auto regargs_result_8050CB70_2D34 = func_8050CB70_ra98_0_18_0(ctx, r3, r4, r7);
        r3 = static_cast<uint32_t>(regargs_result_8050CB70_2D34);
        r4 = static_cast<uint32_t>(regargs_result_8050CB70_2D34 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8050CB70u>(ctx);
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
    }
    r0 = MemoryInline::FlatRead8((r31 + 54));
    r4 = (r3 + 700);
    r3 = 7;
    MemoryInline::FlatWrite32((r31 + 44), r4);
}

loc_80514644:
{
    MemoryInline::FlatWrite32((r31 + 40), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051485C;
    }
}

loc_8051464C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 55), static_cast<uint8_t>(r0));
    goto loc_8051485C;
}

loc_80514658:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
}

loc_80514660:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8051476C;
    }
}

loc_80514664:
{
    r0 = MemoryInline::FlatRead8((r31 + 55));
}

loc_8051466C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80514754;
    }
}

loc_80514670:
{
    r3 = (r1 + 124);
    r4 = (r13 + -19096);
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 3;
    r0 = 7;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 132u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 118u, (r1 + 130), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_1, 119u, (r1 + 131), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 8));
    // inline leaf 0x80520CE4 (1 guest instruction(s))
    // end of inlined leaf 0x80520CE4
    MemoryInline::WriteResolved32(guest_range_1, 120u, (r1 + 132), r3);
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_1, 124u, (r1 + 136), r0);
    r3 = MemoryInline::FlatRead16((r31 + 52));
    // inline leaf 0x80520CE8 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CE8
    MemoryInline::WriteResolved16(guest_range_1, 128u, (r1 + 140), static_cast<uint16_t>(r3));
    r3 = (r1 + 12);
    r0 = MemoryInline::FlatRead8((r31 + 54));
    MemoryInline::WriteResolved8(guest_range_1, 130u, (r1 + 142), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r31 + 16));
    r4 = (2 - r5);
    r0 = (r5 + -2);
    r0 = (r4 | r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    MemoryInline::WriteResolved8(guest_range_1, 131u, (r1 + 143), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + 12), r0);
    ctx->lr = 0x805146E0u;
    if constexpr (KnownRegArgsCpuCall<0x80520C84u>(&func_80520C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80520C84_3BA5 = func_80520C84_ra608_1fe_18_0(ctx, r3, r9, r10, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80520C84_3BA5);
        r4 = static_cast<uint32_t>(regargs_result_80520C84_3BA5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80520C84u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r29 = MemoryInline::FlatRead32((r31 + 4));
    r3 = MemoryInline::FlatRead16((r31 + 52));
}

loc_805146EC:
{
    r30 = MemoryInline::FlatRead32((r31 + 48));
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(-1))) {
        goto loc_805146F8;
    }
}

loc_805146F4:
{
    goto loc_805146FC;
}

loc_805146F8:
{
    r29 = MemoryInline::FlatRead32(r31);
}

loc_805146FC:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r1 + 33), static_cast<uint8_t>(r0));
    // inline leaf 0x80520CE8 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CE8
    MemoryInline::FlatWriteRam16((r1 + 34), static_cast<uint16_t>(r3));
    r3 = r29;
    r4 = (r1 + 124);
    r7 = (r1 + 32);
    MemoryInline::FlatWriteRam32((r1 + 36), r30);
    r5 = 20;
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x8051472Cu;
    if constexpr (KnownRegArgsCpuCall<0x8050C060u>(&func_8050C060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8050C060_4614 = func_8050C060_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050C060_4614);
        r4 = static_cast<uint32_t>(regargs_result_8050C060_4614 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050C060u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->lr = 0x80514730u;
    if constexpr (KnownRegArgsCpuCall<0x8050CB70u>(&func_8050CB70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[8] = r8;
        const auto regargs_result_8050CB70_4D67 = func_8050CB70_ra98_0_18_0(ctx, r3, r4, r7);
        r3 = static_cast<uint32_t>(regargs_result_8050CB70_4D67);
        r4 = static_cast<uint32_t>(regargs_result_8050CB70_4D67 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8050CB70u>(ctx);
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
    }
    r0 = MemoryInline::FlatRead8((r31 + 54));
    r4 = (r3 + 700);
    r3 = 7;
    MemoryInline::FlatWrite32((r31 + 44), r4);
}

loc_80514744:
{
    MemoryInline::FlatWrite32((r31 + 40), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80514754;
    }
}

loc_8051474C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 55), static_cast<uint8_t>(r0));
}

loc_80514754:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    ctx->lr = 0x80514760u;
    if constexpr (KnownRegArgsCpuCall<0x8050CB70u>(&func_8050CB70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[8] = r8;
        const auto regargs_result_8050CB70_53EB = func_8050CB70_ra98_0_18_0(ctx, r3, r4, r7);
        r3 = static_cast<uint32_t>(regargs_result_8050CB70_53EB);
        r4 = static_cast<uint32_t>(regargs_result_8050CB70_53EB >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8050CB70u>(ctx);
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
    }
    r0 = (r3 + 5000);
    MemoryInline::FlatWrite32((r31 + 44), r0);
    goto loc_8051485C;
}

loc_8051476C:
{
    r0 = MemoryInline::FlatRead8((r30 + 19));
}

loc_80514774:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8051485C;
    }
}

loc_80514778:
{
    r3 = (r1 + 48);
    r4 = (r13 + -19096);
    r5 = 6;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 3;
    r0 = 7;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 60u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 46u, (r1 + 54), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_2, 47u, (r1 + 55), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 8));
    // inline leaf 0x80520CE4 (1 guest instruction(s))
    // end of inlined leaf 0x80520CE4
    MemoryInline::WriteResolved32(guest_range_2, 48u, (r1 + 56), r3);
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 60), r0);
    r3 = MemoryInline::FlatRead16((r31 + 52));
    // inline leaf 0x80520CE8 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CE8
    MemoryInline::WriteResolved16(guest_range_2, 56u, (r1 + 64), static_cast<uint16_t>(r3));
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead8((r31 + 54));
    MemoryInline::WriteResolved8(guest_range_2, 58u, (r1 + 66), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r31 + 16));
    r4 = (2 - r5);
    r0 = (r5 + -2);
    r0 = (r4 | r0);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    MemoryInline::WriteResolved8(guest_range_2, 59u, (r1 + 67), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 8), r0);
    ctx->lr = 0x805147E8u;
    if constexpr (KnownRegArgsCpuCall<0x80520C84u>(&func_80520C84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_80520C84_6052 = func_80520C84_ra608_1fe_18_0(ctx, r3, r9, r10, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80520C84_6052);
        r4 = static_cast<uint32_t>(regargs_result_80520C84_6052 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80520C84u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r29 = MemoryInline::FlatRead32((r31 + 4));
    r3 = MemoryInline::FlatRead16((r31 + 52));
}

loc_805147F4:
{
    r30 = MemoryInline::FlatRead32((r31 + 48));
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(-1))) {
        goto loc_80514800;
    }
}

loc_805147FC:
{
    goto loc_80514804;
}

loc_80514800:
{
    r29 = MemoryInline::FlatRead32(r31);
}

loc_80514804:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r0));
    // inline leaf 0x80520CE8 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x80520CE8
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r3));
    r3 = r29;
    r4 = (r1 + 48);
    r7 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 28), r30);
    r5 = 20;
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x80514834u;
    if constexpr (KnownRegArgsCpuCall<0x8050C060u>(&func_8050C060)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_8050C060_6AC0 = func_8050C060_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8050C060_6AC0);
        r4 = static_cast<uint32_t>(regargs_result_8050C060_6AC0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
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
        ctx->gpr[8] = r8;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8050C060u>(ctx);
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
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->lr = 0x80514838u;
    if constexpr (KnownRegArgsCpuCall<0x8050CB70u>(&func_8050CB70)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[8] = r8;
        const auto regargs_result_8050CB70_7213 = func_8050CB70_ra98_0_18_0(ctx, r3, r4, r7);
        r3 = static_cast<uint32_t>(regargs_result_8050CB70_7213);
        r4 = static_cast<uint32_t>(regargs_result_8050CB70_7213 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x8050CB70u>(ctx);
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
    }
    r0 = MemoryInline::FlatRead8((r31 + 54));
    r4 = (r3 + 700);
    r3 = 7;
    MemoryInline::FlatWrite32((r31 + 44), r4);
}

loc_8051484C:
{
    MemoryInline::FlatWrite32((r31 + 40), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8051485C;
    }
}

loc_80514854:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 55), static_cast<uint8_t>(r0));
}

loc_8051485C:
{
    r0 = MemoryInline::FlatRead32((r1 + 308));
    ctx->lr = r0;
    r1 = (r1 + 304);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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

extern "C" void func_80514500(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80514500_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000037FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80514500 func_80514500 preserves=true fpr_mask=0x00000000
