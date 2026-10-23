#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80086380(CpuContext* ctx);
extern "C" uint64_t func_80086380_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800863FC(CpuContext* ctx);
extern "C" uint64_t func_800863FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80086470(CpuContext* ctx);
extern "C" uint64_t func_80086470_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800864E4(CpuContext* ctx);
extern "C" uint64_t func_800864E4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80086558(CpuContext* ctx);
extern "C" uint64_t func_80086558_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80086244(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80086244;

loc_80086244:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r3 = r31;
    ctx->lr = 0x80086268u;
    if constexpr (KnownRegArgsCpuCall<0x80086558u>(&func_80086558)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80086558_5FD = func_80086558_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80086558_5FD);
        r4 = static_cast<uint32_t>(regargs_result_80086558_5FD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80086558u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8(r30);
}

loc_80086274:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80086290;
    }
}

loc_80086278:
{
    r3 = r31;
    ctx->lr = 0x80086280u;
    if constexpr (KnownRegArgsCpuCall<0x80086558u>(&func_80086558)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80086558_9E6 = func_80086558_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80086558_9E6);
        r4 = static_cast<uint32_t>(regargs_result_80086558_9E6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80086558u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 & -4);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_80086290:
{
    r3 = r31;
    ctx->lr = 0x80086298u;
    if constexpr (KnownRegArgsCpuCall<0x800864E4u>(&func_800864E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800864E4_DC3 = func_800864E4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800864E4_DC3);
        r4 = static_cast<uint32_t>(regargs_result_800864E4_DC3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800864E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 1));
}

loc_800862A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_800862C0;
    }
}

loc_800862A8:
{
    r3 = r31;
    ctx->lr = 0x800862B0u;
    if constexpr (KnownRegArgsCpuCall<0x800864E4u>(&func_800864E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800864E4_11B2 = func_800864E4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800864E4_11B2);
        r4 = static_cast<uint32_t>(regargs_result_800864E4_11B2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800864E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 & -4);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_800862C0:
{
    r3 = r31;
    ctx->lr = 0x800862C8u;
    if constexpr (KnownRegArgsCpuCall<0x80086470u>(&func_80086470)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80086470_1598 = func_80086470_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80086470_1598);
        r4 = static_cast<uint32_t>(regargs_result_80086470_1598 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80086470u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 2));
}

loc_800862D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_800862F0;
    }
}

loc_800862D8:
{
    r3 = r31;
    ctx->lr = 0x800862E0u;
    if constexpr (KnownRegArgsCpuCall<0x80086470u>(&func_80086470)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80086470_198A = func_80086470_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80086470_198A);
        r4 = static_cast<uint32_t>(regargs_result_80086470_198A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80086470u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite8((r30 + 2), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_800862F0:
{
    r3 = r31;
    ctx->lr = 0x800862F8u;
    if constexpr (KnownRegArgsCpuCall<0x800863FCu>(&func_800863FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800863FC_1D70 = func_800863FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800863FC_1D70);
        r4 = static_cast<uint32_t>(regargs_result_800863FC_1D70 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800863FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 3));
}

loc_80086304:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r3))) {
        goto loc_80086320;
    }
}

loc_80086308:
{
    r3 = r31;
    ctx->lr = 0x80086310u;
    if constexpr (KnownRegArgsCpuCall<0x800863FCu>(&func_800863FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800863FC_2162 = func_800863FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800863FC_2162);
        r4 = static_cast<uint32_t>(regargs_result_800863FC_2162 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800863FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite8((r30 + 3), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_80086320:
{
    r3 = r31;
    ctx->lr = 0x80086328u;
    if constexpr (KnownRegArgsCpuCall<0x80086380u>(&func_80086380)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80086380_2548 = func_80086380_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80086380_2548);
        r4 = static_cast<uint32_t>(regargs_result_80086380_2548 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80086380u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r30 + 4));
}

loc_80086330:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(r3))) {
        goto loc_8008634C;
    }
}

loc_80086334:
{
    r3 = r31;
    ctx->lr = 0x8008633Cu;
    if constexpr (KnownRegArgsCpuCall<0x80086380u>(&func_80086380)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80086380_2923 = func_80086380_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80086380_2923);
        r4 = static_cast<uint32_t>(regargs_result_80086380_2923 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80086380u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWrite32((r30 + 4), r3);
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_8008634C:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = (r3 & 4);
}

loc_80086358:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80086368;
    }
}

loc_8008635C:
{
    r0 = (r3 & -4);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_80086368:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80086244 func_80086244 preserves=true fpr_mask=0x00000000
