#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8046DAA0(CpuContext* ctx);
extern "C" uint64_t func_8046DAA0_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8046F9D0(CpuContext* ctx);
extern "C" uint64_t func_8046F9D0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80470840(CpuContext* ctx);
extern "C" uint64_t func_80470840_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_804CCCC0(CpuContext* ctx);
extern "C" uint64_t func_804CCCC0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80470930_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
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
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80470930;

loc_80470930:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 32;
    r31 = 0x80700000u;
    r31 = (r31 + -13056);
    MemoryInline::FlatWrite32((r13 + -16032), r4);
    r5 = (r31 + 2272);
    MemoryInline::FlatWrite32((r13 + -16036), r4);
    MemoryInline::FlatWrite32((r13 + -16072), r3);
    MemoryInline::FlatWrite32((r13 + -16056), r4);
    ctr = r0;
}

loc_80470968:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r5, r4);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 4), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 8), r4);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r5 + 12), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 16), r4);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 20), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 24), r4);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 28), r4);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r5 + 32), r4);
    r5 = (r5 + 36);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80470968;
    }
}

loc_80470994:
{
    r3 = (r31 + 2272);
    r4 = 1152;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCCC0_F9E = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_F9E);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_F9E >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = 24;
    r4 = (r31 + 1504);
    r3 = 0;
    ctr = r0;
}

loc_804709B0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r4, r3);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r4 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r4 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r4 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r4 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r4 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r4 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r4 + 28), r3);
    }
    r4 = (r4 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804709B0;
    }
}

loc_804709D8:
{
    r3 = (r31 + 1504);
    r4 = 768;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCCC0_18F5 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_18F5);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_18F5 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r0 = 36;
    r4 = (r31 + 64);
    r3 = 0;
    ctr = r0;
}

loc_804709F4:
{
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r4, r3);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r4 + 4), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r4 + 8), r3);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r4 + 12), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r4 + 16), r3);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r4 + 20), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r4 + 24), r3);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r4 + 28), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r4 + 32), r3);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r4 + 36), r3);
    }
    r4 = (r4 + 40);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804709F4;
    }
}

loc_80470A24:
{
    r3 = (r31 + 64);
    r4 = 1440;
    if constexpr (KnownRegArgsCpuCall<0x804CCCC0u>(&func_804CCCC0)) {
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_804CCCC0_2384 = func_804CCCC0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_804CCCC0_2384);
        r4 = static_cast<uint32_t>(regargs_result_804CCCC0_2384 >> 32);
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x804CCCC0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    ctx->lr = 0x80470A34u;
    if constexpr (KnownRegArgsCpuCall<0x80470840u>(&func_80470840)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80470840_2713 = func_80470840_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_80470840_2713);
        r4 = static_cast<uint32_t>(regargs_result_80470840_2713 >> 32);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
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
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80470840u>(ctx);
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
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r3 = 0x80470000u;
    r3 = (r3 + 1792);
    ctx->lr = 0x80470A40u;
    if constexpr (KnownRegArgsCpuCall<0x8046DAA0u>(&func_8046DAA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_8046DAA0_2EB5 = func_8046DAA0_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8046DAA0_2EB5);
        r4 = static_cast<uint32_t>(regargs_result_8046DAA0_2EB5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8046DAA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r13 + -16072));
    r7 = (r31 + 64);
    r4 = 18;
    r3 = 180;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80470A54:
{
    r6 = (r7 + 360);
    r5 = (r7 + 720);
    r0 = (r7 + 1080);
    MemoryInline::FlatWriteRam32((r1 + 8), r7);
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    MemoryInline::FlatWriteRam32((r1 + 16), r5);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWrite32((r13 + -16084), r4);
    MemoryInline::FlatWrite32((r13 + -16080), r4);
    MemoryInline::FlatWrite32((r13 + -16076), r3);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80470A98;
    }
}

loc_80470A80:
{
    r4 = (r31 + 2272);
    r3 = (r31 + 1504);
    r4 = (r4 + 768);
    r5 = (r1 + 8);
    ctx->lr = 0x80470A94u;
    if constexpr (KnownRegArgsCpuCall<0x8046F9D0u>(&func_8046F9D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8046F9D0_3593 = func_8046F9D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046F9D0_3593);
        r4 = static_cast<uint32_t>(regargs_result_8046F9D0_3593 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8046F9D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    goto loc_80470AAC;
}

loc_80470A98:
{
    r4 = (r31 + 2272);
    r3 = (r31 + 1504);
    r4 = (r4 + 384);
    r5 = (r1 + 8);
    ctx->lr = 0x80470AACu;
    if constexpr (KnownRegArgsCpuCall<0x8046F9D0u>(&func_8046F9D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8046F9D0_3A6C = func_8046F9D0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8046F9D0_3A6C);
        r4 = static_cast<uint32_t>(regargs_result_8046F9D0_3A6C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8046F9D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
}

loc_80470AAC:
{
    r0 = MemoryInline::FlatRead32((r13 + -16072));
    r4 = 1;
    r3 = 0;
    MemoryInline::FlatWrite32((r13 + -16040), r4);
}

loc_80470AC0:
{
    MemoryInline::FlatWrite32((r13 + -16044), r3);
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80470AF0;
    }
}

loc_80470AC8:
{
    r3 = MemoryInline::FlatRead32((r13 + -16036));
    r0 = (r31 + 2272);
    r4 = 384;
    r3 = (r3 * 384);
    r3 = (r0 + r3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8046DAF0u>(ctx);
    r3 = MemoryInline::FlatRead32((r13 + -16036));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -16036), r0);
    goto loc_80470B08;
}

loc_80470AF0:
{
    r3 = MemoryInline::FlatRead32((r13 + -16032));
    r0 = (r31 + 2272);
    r4 = 384;
    r3 = (r3 * 384);
    r3 = (r0 + r3);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8046DAF0u>(ctx);
}

loc_80470B08:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8046DB70u>(ctx);
    r0 = 0;
    MemoryInline::FlatWrite32((r13 + -16088), r0);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80470930(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80470930_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000027FF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80470930 func_80470930 preserves=true fpr_mask=0x00000000
