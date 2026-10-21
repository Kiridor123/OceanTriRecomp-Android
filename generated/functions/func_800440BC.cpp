#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80043D1C(CpuContext* ctx);
extern "C" uint64_t func_80043D1C_ra18_e_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_80043F10(CpuContext* ctx);
extern "C" uint32_t func_80043F10_ra8_e_8_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_80044BA0(CpuContext* ctx);
extern "C" uint64_t func_80044BA0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800440BC_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;

    MKW_GUEST_ENTER(0x800440BCu);
    goto loc_800440BC;

loc_800440BC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = 1;
    MemoryInline::FlatWrite8((r13 + -17899), static_cast<uint8_t>(r31));
    r0 = 300;
    MemoryInline::FlatWrite32((r13 + -17896), r0);
    r0 = MemoryInline::FlatRead8((r13 + -17880));
}

loc_800440E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800440F4;
    }
}

loc_800440E8:
{
}

loc_800440EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800441A8;
    }
}

loc_800440F0:
{
    goto loc_800441D0;
}

loc_800440F4:
{
    // inline leaf 0x80044214 (18 guest instruction(s))
    r0 = 0;
    guest_range_2 = MemoryInline::ResolveRangeHost((r13 + -17932), 0, 60u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r13 + -17932), r0);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r13 + -17928), r0);
    }
    r3 = 0x80660000u;
    r3 = (r3 + -19268);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -32656));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r13 + -17924), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r13 + -17920), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r13 + -17916), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r13 + -17912), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r13 + -17908), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r13 + -17904), f0.d);
    }
    // end of inlined leaf 0x80044214
    MemoryInline::WriteResolved8(guest_range_2, 52u, (r13 + -17880), static_cast<uint8_t>(r31));
    r0 = 16;
    MemoryInline::WriteResolved32(guest_range_2, 56u, (r13 + -17876), r0);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -32696));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r13 + -17908), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r13 + -17904), f0.d);
    }
    r3 = 0x80670000u;
    r4 = (r3 + -18184);
    r3 = 0x80670000u;
    r3 = (r3 + -18152);
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r4, static_cast<uint16_t>(r0));
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r3, static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r4 + 2), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r4 + 4), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r4 + 6), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r3 + 6), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r4 + 8), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r4 + 10), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r4 + 12), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r4 + 14), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r3 + 14), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r4 + 16), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r4 + 18), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r3 + 18), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r4 + 20), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r4 + 22), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r3 + 22), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r4 + 24), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r3 + 24), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r4 + 26), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r3 + 26), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r4 + 28), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 30u, (r4 + 30), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 30u, (r3 + 30), static_cast<uint16_t>(r0));
    goto loc_800441D0;
}

loc_800441A8:
{
    r3 = 0;
    ctx->lr = 0x800441B0u;
    if constexpr (KnownRegArgsCpuCall<0x80044BA0u>(&func_80044BA0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80044BA0_1E3E = func_80044BA0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80044BA0_1E3E);
        r4 = static_cast<uint32_t>(regargs_result_80044BA0_1E3E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80044BA0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead32((r13 + -17932));
}

loc_800441B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800441D0;
    }
}

loc_800441BC:
{
    r0 = MemoryInline::FlatRead8((r13 + -17856));
}

loc_800441C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800441D0;
    }
}

loc_800441C8:
{
    if constexpr (KnownRegArgsCpuCall<0x80043F10u>(&func_80043F10)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80043F10_22D9 = func_80043F10_ra8_e_8_0(ctx, r3, f1.d, f2.d, f3.d);
        r3 = regargs_result_80043F10_22D9;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80043F10u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
    ctx->lr = 0x800441D0u;
    if constexpr (KnownRegArgsCpuCall<0x80043D1Cu>(&func_80043D1C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        const auto regargs_result_80043D1C_26C7 = func_80043D1C_ra18_e_18_0(ctx, r3, r4, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80043D1C_26C7);
        r4 = static_cast<uint32_t>(regargs_result_80043D1C_26C7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        InvokeDirectCpu<0x80043D1Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
    }
}

loc_800441D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800440BC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800440BC_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800440BC func_800440BC preserves=true fpr_mask=0x00000000
