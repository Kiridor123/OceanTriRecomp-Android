#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" uint64_t func_803D15BC_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_803D15BC;

loc_803D15BC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
}

loc_803D15E0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_803D17CC;
    }
}

loc_803D15E4:
{
}

loc_803D15E8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(4))) {
        goto loc_803D15F0;
    }
}

loc_803D15EC:
{
    goto loc_803D17CC;
}

loc_803D15F0:
{
    r4 = (r0 * 2340);
    r0 = (r3 + 65536);
    r31 = (r0 + r4);
    r3 = MemoryInline::FlatRead32((r31 + 18516));
}

loc_803D1604:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803D17CC;
    }
}

loc_803D1608:
{
    r29 = (r31 + 18556);
    r28 = (r31 + 18684);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x803D1620u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r31 + 18516));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_803D1628:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803D164C;
    }
}

loc_803D162C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803D1644;
    }
}

loc_803D1630:
{
    r4 = 1;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x803D1644u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_803D1644:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 18516), r0);
}

loc_803D164C:
{
    r30 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 18472), 0, 29u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 18472), r30);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 18476), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 18480), r30);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 18484), r30);
    }
    r0 = -1;
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r31 + 18488), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5136));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 18492), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 24u, (r31 + 18496), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r31 + 18497), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r31 + 18498), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r31 + 18499), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 28u, (r31 + 18500), static_cast<uint8_t>(r30));
    r3 = (r31 + 18504);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32((r31 + 18516), r30);
    r3 = (r31 + 18520);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 24));
    ctr = r12;
    ctx->lr = 0x803D16ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 18552), 0, 200u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r31 + 18552), r30);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5048));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 156u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 156u, (r31 + 18708), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 160u, (r31 + 18712), f0.d);
    }
    r3 = 65536;
    r0 = (r3 + -1);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 164u, (r31 + 18716), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 168u, (r31 + 18720), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_2, 172u, (r31 + 18724), r30);
    MemoryInline::WriteResolved8(guest_range_2, 176u, (r31 + 18728), static_cast<uint8_t>(r30));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 180u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 180u, (r31 + 18732), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 184u, (r31 + 18736), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 188u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 188u, (r31 + 18740), f0.d);
        MemoryInline::WriteResolved32(guest_range_2, 192u, (r31 + 18744), r30);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 196u, (r31 + 18748), f0.d);
    r3 = r29;
    // inline leaf 0x803FA8E0 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x803FA8E0
    r3 = (r29 + 24);
    // inline leaf 0x803FA8E0 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x803FA8E0
    r3 = (r29 + 48);
    // inline leaf 0x803FA8E0 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x803FA8E0
    r3 = (r29 + 72);
    // inline leaf 0x803FA8E0 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x803FA8E0
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x803D171Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5044));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_2A32 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_2A32;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r31 = r3;
    // inline leaf 0x8045E620 (8 guest instruction(s))
    r3 = 1103495168;
    r4 = MemoryInline::FlatRead32((r13 + -20792));
    r0 = (r3 + 20077);
    r3 = (r4 * r0);
    r0 = (r3 + 12345);
    MemoryInline::FlatWrite32((r13 + -20792), r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & 32767);
    // end of inlined leaf 0x8045E620
    r0 = (r3 + r31);
    r4 = (r0 & 65535);
    r3 = r29;
    // inline leaf 0x803FA8EC (2 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x803FA8EC
    // inline leaf 0x803C99D8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -16736));
    // end of inlined leaf 0x803C99D8
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x803D1754u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5044));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80457360_34A8 = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_34A8;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r31 = r3;
    // inline leaf 0x8045E620 (8 guest instruction(s))
    r3 = 1103495168;
    r4 = MemoryInline::FlatRead32((r13 + -20792));
    r0 = (r3 + 20077);
    r3 = (r4 * r0);
    r0 = (r3 + 12345);
    MemoryInline::FlatWrite32((r13 + -20792), r0);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3 = (r3_rot_2 & 32767);
    // end of inlined leaf 0x8045E620
    r0 = (r3 + r31);
    r4 = (r0 & 65535);
    r3 = (r29 + 24);
    // inline leaf 0x803FA8EC (2 guest instruction(s))
    MemoryInline::FlatWrite16((r3 + 16), static_cast<uint16_t>(r4));
    // end of inlined leaf 0x803FA8EC
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 96), 0, 32u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 96), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r29 + 104), static_cast<uint8_t>(r30));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -5048));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r29 + 100), f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r29 + 108), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r29 + 112), f2.d);
    }
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5040));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5136));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r29 + 116), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r13 + -21748));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r29 + 120), f0.d);
    r0 = 1024;
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r29 + 124), r0);
    MemoryInline::FlatWriteFloat32(r28, f2.d);
    MemoryInline::FlatWrite8((r28 + 12), static_cast<uint8_t>(r30));
    f0.d = MemoryInline::FlatReadFloat32((r13 + -21748));
    MemoryInline::FlatWriteFloat32((r28 + 4), f0.d);
    MemoryInline::FlatWrite32((r28 + 8), r0);
    MemoryInline::FlatWriteFloat32((r28 + 16), f2.d);
    MemoryInline::FlatWriteFloat32((r28 + 20), f2.d);
}

loc_803D17CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803D15BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803D15BC_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803D15BC func_803D15BC preserves=true fpr_mask=0x00000000
