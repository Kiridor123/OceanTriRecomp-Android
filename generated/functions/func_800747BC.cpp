#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80074948(CpuContext* ctx);
extern "C" uint64_t func_80074948_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800747BC_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t stackword10 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800747BCu);
    goto loc_800747BC;

loc_800747BC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r30 = r3;
    r27 = r6;
    r28 = r8;
    // inline leaf 0x80067F4C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80067F4C
}

loc_800747E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80074804;
    }
}

loc_800747E8:
{
    r3 = 0x80590000u;
    r3 = (r3 + -5136);
    r4 = 62;
    r5 = 0x80590000u;
    r5 = (r5 + -5080);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80074804u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80074804:
{
    r3 = r30;
    // inline leaf 0x80067F4C (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80067F4C
}

loc_80074810:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80074930;
    }
}

loc_80074814:
{
    // inline leaf 0x800402F0 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    r3 = (r3 + 60);
    // end of inlined leaf 0x800402F0
    r29 = r3;
    r3 = r30;
    ctx->lr = 0x80074824u;
    if constexpr (KnownRegArgsCpuCall<0x80074948u>(&func_80074948)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80074948_E0B = func_80074948_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80074948_E0B);
        r4 = static_cast<uint32_t>(regargs_result_80074948_E0B >> 32);
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
        InvokeDirectCpu<0x80074948u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r30 = r3;
    r0 = 33;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 112), 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 112), r0);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -31960));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 116), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 120), f1.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31956));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 124), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 128), f1.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31952));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 132), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 136), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 140), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r3 + 144), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 148), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 152), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 156), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 160), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r3 + 164), f1.d);
    r31 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 168), r31);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31948));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r3 + 172), f0.d);
    ctx->lr = 0x80074884u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80040300u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 176), 0, 92u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r30 + 176), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31944));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r30 + 180), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31940));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r30 + 184), f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r2 + -31960));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r30 + 188), f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r2 + -31936));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r30 + 192), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r30 + 196), f3.d);
    }
    r0 = (r28 & 65535);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -31928));
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 1127219200;
    stackword8 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword8), static_cast<uint32_t>(stackword7));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r30 + 200), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31932));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r30 + 204), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r30 + 208), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r30 + 212), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r30 + 216), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r30 + 220), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 48u, (r30 + 224), f3.d);
    }
    r0 = (r27 & 65535);
    stackword9 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword10 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword10), static_cast<uint32_t>(stackword9));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r30 + 228), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r30 + 232), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r30 + 236), f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31952));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r30 + 240), f0.d);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r30 + 244), r31);
    }
    MemoryInline::WriteResolved32(guest_range_1, 72u, (r30 + 248), r31);
    r0 = MemoryInline::FlatRead16(r29);
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r30 + 252), r0);
    r0 = MemoryInline::FlatRead16((r29 + 2));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r30 + 256), r0);
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r30 + 260), r31);
    }
    MemoryInline::WriteResolved32(guest_range_1, 88u, (r30 + 264), r31);
}

loc_80074930:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800747BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800747BC_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000017F gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800747BC func_800747BC preserves=true fpr_mask=0x00000000
