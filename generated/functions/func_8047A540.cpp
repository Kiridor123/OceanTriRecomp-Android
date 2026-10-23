#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80478000(CpuContext* ctx);
extern "C" uint64_t func_80478000_ra58_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804780F0(CpuContext* ctx);
extern "C" uint64_t func_804780F0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804795E0(CpuContext* ctx);
extern "C" uint64_t func_804795E0_ra0_0_18_0(CpuContext*);
extern "C" void func_80479610(CpuContext* ctx);
extern "C" uint64_t func_80479610_ra0_0_18_0(CpuContext*);
extern "C" void func_804E5C80(CpuContext* ctx);
extern "C" uint64_t func_804E5C80_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804E5D00(CpuContext* ctx);
extern "C" uint64_t func_804E5D00_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_8047A540_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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

    goto loc_8047A540;

loc_8047A540:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0x80730000u;
    r30 = (r31 + 32160);
    r28 = r4;
    r0 = MemoryInline::FlatRead8((r30 + 41));
}

loc_8047A570:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_8047A6AC;
    }
}

loc_8047A574:
{
    r0 = MemoryInline::FlatRead8((r30 + 28));
}

loc_8047A57C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8047A6AC;
    }
}

loc_8047A580:
{
    r0 = MemoryInline::FlatRead8((r30 + 29));
}

loc_8047A588:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8047A590;
    }
}

loc_8047A58C:
{
    goto loc_8047A6AC;
}

loc_8047A590:
{
    ctx->lr = 0x8047A594u;
    if constexpr (KnownRegArgsCpuCall<0x80479610u>(&func_80479610)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_80479610_C99 = func_80479610_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_80479610_C99);
        r4 = static_cast<uint32_t>(regargs_result_80479610_C99 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80479610u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = 2;
    MemoryInline::FlatWriteRam32((r30 + 32), r28);
    MemoryInline::FlatWriteRam8((r30 + 41), static_cast<uint8_t>(r0));
    if constexpr (KnownRegArgsCpuCall<0x804795E0u>(&func_804795E0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_804795E0_1035 = func_804795E0_ra0_0_18_0(ctx);
        r3 = static_cast<uint32_t>(regargs_result_804795E0_1035);
        r4 = static_cast<uint32_t>(regargs_result_804795E0_1035 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804795E0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8047A5A4:
{
    r3 = MemoryInline::FlatRead8((r30 + 28));
    ctx->lr = 0x8047A5ACu;
    if constexpr (KnownRegArgsCpuCall<0x80478000u>(&func_80478000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        const auto regargs_result_80478000_1392 = func_80478000_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80478000_1392);
        r4 = static_cast<uint32_t>(regargs_result_80478000_1392 >> 32);
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
        InvokeDirectCpu<0x80478000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8047A5B0:
{
    r28 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047A5A4;
    }
}

loc_8047A5B8:
{
    r0 = 4096;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = (r3 + 39);
    r4 = 0;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r29 = (r0 & -32);
    r0 = (r3 + 8);
    r0 = (r29 - r0);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    // inline leaf 0x80478260 (17 guest instruction(s))
}

loc_inl0_0x80478260:
{
    r3 = (r3 + -8);
    r0 = (r3 & 1);
}

loc_inl0_0x80478268:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80478274;
    }
}

loc_inl0_0x8047826C:
{
    r3 = 0;
    goto loc_inl0_cont_80478260;
}

loc_inl0_0x80478274:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl0_0x8047827C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_inl0_0x8047829C;
    }
}

loc_inl0_0x80478280:
{
    r3 = 0x80710000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 4080);
    r3 = (r3 + -3456);
    r3 = (r3 + 196608);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + -30232));
    goto loc_inl0_cont_80478260;
}

loc_inl0_0x8047829C:
{
    r3 = 0;
}

loc_inl0_cont_80478260:
{
    // end of inlined leaf 0x80478260
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead16((r28 + 4));
    r5 = (r3 + -40);
    r7 = 0x80480000u;
    r3 = MemoryInline::FlatRead32((r31 + 32160));
    r6 = r29;
    r4 = MemoryInline::FlatRead8((r30 + 18));
    r8 = r28;
    r5 = (r5 - r0);
    r7 = (r7 + -25072);
    ctx->lr = 0x8047A60Cu;
    if constexpr (KnownRegArgsCpuCall<0x804E5C80u>(&func_804E5C80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E5C80_1E8D = func_804E5C80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E5C80_1E8D);
        r4 = static_cast<uint32_t>(regargs_result_804E5C80_1E8D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x804E5C80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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

loc_8047A610:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047A61C;
    }
}

loc_8047A614:
{
    r3 = r28;
    ctx->lr = 0x8047A61Cu;
    if constexpr (KnownRegArgsCpuCall<0x804780F0u>(&func_804780F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804780F0_2600 = func_804780F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804780F0_2600);
        r4 = static_cast<uint32_t>(regargs_result_804780F0_2600 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804780F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8047A61C:
{
    r30 = 0x80730000u;
    r0 = 1;
    r31 = (r30 + 32160);
    MemoryInline::FlatWriteRam8((r31 + 43), static_cast<uint8_t>(r0));
}

loc_8047A62C:
{
    r3 = MemoryInline::FlatRead8((r31 + 29));
    ctx->lr = 0x8047A634u;
    if constexpr (KnownRegArgsCpuCall<0x80478000u>(&func_80478000)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        const auto regargs_result_80478000_2A3E = func_80478000_ra58_0_18_0(ctx, r3, r4, r6);
        r3 = static_cast<uint32_t>(regargs_result_80478000_2A3E);
        r4 = static_cast<uint32_t>(regargs_result_80478000_2A3E >> 32);
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
        InvokeDirectCpu<0x80478000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_8047A638:
{
    r29 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047A62C;
    }
}

loc_8047A640:
{
    r0 = 4352;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    r0 = (r3 + 39);
    r4 = 0;
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r4));
    r28 = (r0 & -32);
    r0 = (r3 + 8);
    r0 = (r28 - r0);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    // inline leaf 0x80478260 (17 guest instruction(s))
}

loc_inl1_0x80478260:
{
    r3 = (r3 + -8);
    r0 = (r3 & 1);
}

loc_inl1_0x80478268:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x80478274;
    }
}

loc_inl1_0x8047826C:
{
    r3 = 0;
    goto loc_inl1_cont_80478260;
}

loc_inl1_0x80478274:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_inl1_0x8047827C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_inl1_0x8047829C;
    }
}

loc_inl1_0x80478280:
{
    r3 = 0x80710000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & 4080);
    r3 = (r3 + -3456);
    r3 = (r3 + 196608);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + -30232));
    goto loc_inl1_cont_80478260;
}

loc_inl1_0x8047829C:
{
    r3 = 0;
}

loc_inl1_cont_80478260:
{
    // end of inlined leaf 0x80478260
    r3 = (r3 & 65535);
    r0 = MemoryInline::FlatRead16((r29 + 4));
    r5 = (r3 + -40);
    r7 = 0x80480000u;
    r3 = MemoryInline::FlatRead32((r30 + 32160));
    r6 = r28;
    r4 = MemoryInline::FlatRead8((r31 + 17));
    r8 = r29;
    r5 = (r5 - r0);
    r7 = (r7 + -24640);
    ctx->lr = 0x8047A694u;
    if constexpr (KnownRegArgsCpuCall<0x804E5D00u>(&func_804E5D00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804E5D00_3539 = func_804E5D00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804E5D00_3539);
        r4 = static_cast<uint32_t>(regargs_result_804E5D00_3539 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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
        InvokeDirectCpu<0x804E5D00u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
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

loc_8047A698:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8047A6A4;
    }
}

loc_8047A69C:
{
    r3 = r29;
    ctx->lr = 0x8047A6A4u;
    if constexpr (KnownRegArgsCpuCall<0x804780F0u>(&func_804780F0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804780F0_3CAC = func_804780F0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_804780F0_3CAC);
        r4 = static_cast<uint32_t>(regargs_result_804780F0_3CAC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804780F0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8047A6A4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -20720), r0);
}

loc_8047A6AC:
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

extern "C" void func_8047A540(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8047A540_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003DFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8047A540 func_8047A540 preserves=true fpr_mask=0x00000000
