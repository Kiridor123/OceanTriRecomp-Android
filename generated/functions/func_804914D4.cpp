#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8047ABB0(CpuContext* ctx);
extern "C" uint64_t func_8047ABB0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80493514(CpuContext* ctx);
extern "C" uint64_t func_80493514_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804936B0(CpuContext* ctx);
extern "C" uint64_t func_804936B0_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" uint64_t func_804914D4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_804914D4;

loc_804914D4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 65536;
    r6 = 1;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 + -1);
    r5 = 640;
    r3 = 17;
    r31 = 0x80570000u;
    r4 = (r31 + 16440);
    r30 = 0x80740000u;
    r30 = (r30 + -6152);
    MemoryInline::FlatWriteRam8((r30 + 838), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam16((r30 + 840), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam8((r30 + 868), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam16((r30 + 870), static_cast<uint16_t>(r0));
    ctx->lr = 0x80491520u;
    if constexpr (KnownRegArgsCpuCall<0x80493514u>(&func_80493514)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80493514_969 = func_80493514_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80493514_969);
        r4 = static_cast<uint32_t>(regargs_result_80493514_969 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80493514u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = (r3 & 255);
}

loc_80491524:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049154C;
    }
}

loc_80491528:
{
    r0 = MemoryInline::FlatRead8((r30 + 1025));
}

loc_80491530:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_80491544;
    }
}

loc_80491534:
{
    r4 = 0x80610000u;
    r3 = 1966080;
    r4 = (r4 + 24504);
    ctx->lr = 0x80491544u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8047ABB0_1160 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_1160);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_1160 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_80491544:
{
    r3 = 14;
    goto loc_80491614;
}

loc_8049154C:
{
    r4 = (r31 + 16440);
    r3 = 19;
    ctx->lr = 0x80491558u;
    if constexpr (KnownRegArgsCpuCall<0x80493514u>(&func_80493514)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80493514_1825 = func_80493514_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80493514_1825);
        r4 = static_cast<uint32_t>(regargs_result_80493514_1825 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x80493514u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = (r3 & 255);
}

loc_8049155C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8049158C;
    }
}

loc_80491560:
{
    r3 = 17;
    ctx->lr = 0x80491568u;
    if constexpr (KnownRegArgsCpuCall<0x804936B0u>(&func_804936B0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_804936B0_1F26 = func_804936B0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_804936B0_1F26);
        r4 = static_cast<uint32_t>(regargs_result_804936B0_1F26 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x804936B0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead8((r30 + 1025));
}

loc_80491570:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_80491584;
    }
}

loc_80491574:
{
    r4 = 0x80610000u;
    r3 = 1966080;
    r4 = (r4 + 24536);
    ctx->lr = 0x80491584u;
    if constexpr (KnownRegArgsCpuCall<0x8047ABB0u>(&func_8047ABB0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_8047ABB0_2677 = func_8047ABB0_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_8047ABB0_2677);
        r4 = static_cast<uint32_t>(regargs_result_8047ABB0_2677 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
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

loc_80491584:
{
    r3 = 14;
    goto loc_80491614;
}

loc_8049158C:
{
    r0 = 0;
    r3 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 797u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r30, static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r30 + 16), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 52u, (r30 + 52), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 68u, (r30 + 68), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 104u, (r30 + 104), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 120u, (r30 + 120), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 156u, (r30 + 156), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 172u, (r30 + 172), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 208u, (r30 + 208), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 224u, (r30 + 224), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 260u, (r30 + 260), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 276u, (r30 + 276), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 312u, (r30 + 312), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 328u, (r30 + 328), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 364u, (r30 + 364), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 380u, (r30 + 380), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 416u, (r30 + 416), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 432u, (r30 + 432), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 468u, (r30 + 468), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 484u, (r30 + 484), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 520u, (r30 + 520), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 536u, (r30 + 536), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 572u, (r30 + 572), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 588u, (r30 + 588), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 624u, (r30 + 624), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 640u, (r30 + 640), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 676u, (r30 + 676), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 692u, (r30 + 692), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 728u, (r30 + 728), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 744u, (r30 + 744), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 780u, (r30 + 780), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 796u, (r30 + 796), static_cast<uint8_t>(r0));
}

loc_80491614:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

extern "C" void func_804914D4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804914D4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804914D4 func_804914D4 preserves=true fpr_mask=0x00000000
