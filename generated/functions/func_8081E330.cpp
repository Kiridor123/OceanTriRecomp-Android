#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046DC00(CpuContext* ctx);
extern "C" uint64_t func_8046DC00_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_8046E070(CpuContext* ctx);
extern "C" uint64_t func_8046E070_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8046E110(CpuContext* ctx);
extern "C" uint64_t func_8046E110_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804D1AE0(CpuContext* ctx);
extern "C" uint32_t func_804D1AE0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804D4C80(CpuContext* ctx);
extern "C" uint64_t func_804D4C80_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_8081E330(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_8081E330;

loc_8081E330:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r6 = 131072;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = (r6 + -30976);
}

loc_8081E348:
{
    r31 = r5;
    r30 = r4;
    r29 = r3;
    if ((static_cast<uint32_t>(r5) < static_cast<uint32_t>(r0))) {
        goto loc_8081E508;
    }
}

loc_8081E364:
{
    // inline leaf 0x8046DBF0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16280));
    // end of inlined leaf 0x8046DBF0
}

loc_8081E36C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8081E37C;
    }
}

loc_8081E370:
{
    r3 = 0;
    ctx->lr = 0x8081E378u;
    if constexpr (KnownRegArgsCpuCall<0x8046DC00u>(&func_8046DC00)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_8046DC00_B74 = func_8046DC00_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046DC00_B74);
        r4 = static_cast<uint32_t>(regargs_result_8046DC00_B74 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[9] = r9;
        InvokeDirectCpu<0x8046DC00u>(ctx);
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    ctx->lr = 0x8081E37Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x8046EA50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_8081E37C:
{
    ctx->lr = 0x8081E380u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x808408E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    ctx->lr = 0x8081E384u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80842250u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    // inline leaf 0x80843F70 (10 guest instruction(s))
}

loc_inl1_0x80843F70:
{
    r5 = 0x80870000u;
    r0 = MemoryInline::FlatRead32((r5 + -29148));
}

loc_inl1_0x80843F7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80843F80:
{
    r3 = 0x80870000u;
    r4 = 0;
    r0 = 1;
    MemoryInline::FlatWriteRam32((r3 + -29152), r4);
    MemoryInline::FlatWriteRam32((r5 + -29148), r0);
    goto loc_inl1_cont_80843F70;
}

loc_inl1_return:
{
}

loc_inl1_cont_80843F70:
{
    // end of inlined leaf 0x80843F70
    r4 = (r30 + 65536);
    r5 = (r30 + 23640);
    r6 = 0;
    MemoryInline::FlatWrite8((r30 + 11804), static_cast<uint8_t>(r6));
    r0 = (r4 + 18176);
    r3 = r29;
    MemoryInline::FlatWrite32((r30 + 11808), r6);
    MemoryInline::FlatWrite32((r30 + 11812), r6);
    MemoryInline::FlatWrite8((r30 + 23624), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r30 + 23628), r6);
    MemoryInline::FlatWrite32((r30 + 23632), r6);
    MemoryInline::FlatWrite8((r5 + 11804), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r5 + 11808), r6);
    MemoryInline::FlatWrite32((r5 + 11812), r6);
    MemoryInline::FlatWrite8((r4 + -18272), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r4 + -18268), r6);
    MemoryInline::FlatWrite32((r4 + -18264), r6);
    MemoryInline::FlatWrite8((r4 + -6452), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r4 + -6448), r6);
    MemoryInline::FlatWrite32((r4 + -6444), r6);
    MemoryInline::FlatWrite8((r4 + 5368), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r4 + 5372), r6);
    MemoryInline::FlatWrite32((r4 + 5376), r6);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 17188), 0, 920u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r4 + 17188), static_cast<uint8_t>(r6));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 17192), r6);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 17196), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 912u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 912u, (r4 + 18100), r6);
        MemoryInline::WriteResolved32(guest_range_0, 916u, (r4 + 18104), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 908u, (r4 + 18096), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 17204), r6);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 17208), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 17212), r6);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 17216), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 17224), r6);
    r4 = (r4 + 17228);
    ctx->lr = 0x8081E418u;
    if constexpr (KnownRegArgsCpuCall<0x8046E070u>(&func_8046E070)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8046E070_2435 = func_8046E070_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046E070_2435);
        r4 = static_cast<uint32_t>(regargs_result_8046E070_2435 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8046E070u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8081E41C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081E508;
    }
}

loc_8081E420:
{
    r3 = (r30 + 65536);
    r4 = 0x80840000u;
    r4 = (r4 + 17600);
    r5 = (r1 + 20);
    r3 = (r3 + 17228);
    ctx->lr = 0x8081E438u;
    if constexpr (KnownRegArgsCpuCall<0x8046E110u>(&func_8046E110)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_8046E110_28CD = func_8046E110_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046E110_28CD);
        r4 = static_cast<uint32_t>(regargs_result_8046E110_28CD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[9] = r9;
        InvokeDirectCpu<0x8046E110u>(ctx);
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8081E43C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081E508;
    }
}

loc_8081E440:
{
    r3 = (r1 + 20);
    // inline leaf 0x8046E860 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r4);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8046E860
    r5 = (r30 + 65536);
    r4 = 0x80840000u;
    MemoryInline::FlatWrite32((r5 + 18100), r3);
    r3 = r5;
    r4 = (r4 + 17620);
    r5 = (r1 + 8);
    r3 = (r3 + 17228);
    ctx->lr = 0x8081E468u;
    if constexpr (KnownRegArgsCpuCall<0x8046E110u>(&func_8046E110)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_8046E110_31D1 = func_8046E110_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8046E110_31D1);
        r4 = static_cast<uint32_t>(regargs_result_8046E110_31D1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
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
        ctx->gpr[9] = r9;
        InvokeDirectCpu<0x8046E110u>(ctx);
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
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
}

loc_8081E46C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081E508;
    }
}

loc_8081E470:
{
    r3 = (r1 + 8);
    // inline leaf 0x8046E860 (5 guest instruction(s))
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r4);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8046E860
    r4 = (r30 + 65536);
    r5 = 4;
    MemoryInline::FlatWrite32((r4 + 18104), r3);
    r3 = r4;
    r3 = (r3 + 18048);
    r4 = (r4 + 18080);
    ctx->lr = 0x8081E494u;
    if constexpr (KnownRegArgsCpuCall<0x804D1AE0u>(&func_804D1AE0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_804D1AE0_3A4A = func_804D1AE0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804D1AE0_3A4A;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804D1AE0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r30 + 65536);
    r7 = (r31 + -65536);
    r0 = MemoryInline::FlatRead32((r3 + 18096));
    r6 = (r7 + -18176);
    r4 = 0x80820000u;
    r5 = 0;
    r4 = (r4 + -8272);
    r6 = (r0 + r6);
    r8 = 4;
    r9 = 0;
    r3 = (r3 + 17256);
    r7 = (r7 + -18176);
    ctx->lr = 0x8081E4C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x804D45F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
}

loc_8081E4CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8081E508;
    }
}

loc_8081E4D0:
{
    r4 = 0x80870000u;
    r3 = (r30 + 65536);
    MemoryInline::FlatWriteRam32((r4 + -32328), r30);
    r3 = (r3 + 17256);
    ctx->lr = 0x8081E4E4u;
    if constexpr (KnownRegArgsCpuCall<0x804D4C80u>(&func_804D4C80)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        const auto regargs_result_804D4C80_41D7 = func_804D4C80_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804D4C80_41D7);
        r4 = static_cast<uint32_t>(regargs_result_804D4C80_41D7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r13 = ctx->gpr[13];
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
        ctx->gpr[9] = r9;
        InvokeDirectCpu<0x804D4C80u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = 0x80820000u;
    r31 = r3;
    r3 = (r4 + -8384);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80470BA0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = (r30 + 65536);
    MemoryInline::FlatWrite32((r4 + 17224), r3);
    r3 = r31;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl5_0x804D1330:
{
}

loc_inl5_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl5_0x804D1344;
    }
}

loc_inl5_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl5_0x804D1348;
}

loc_inl5_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl5_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl5_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_8081E508:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x1FFFFFFF gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8081E330 func_8081E330 preserves=true fpr_mask=0x00000000
