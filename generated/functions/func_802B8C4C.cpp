#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800513DC(CpuContext* ctx);
extern "C" uint64_t func_800513DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802B8C4C_ra18_1a_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3; f3.d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x802B8C4Cu);
    goto loc_802B8C4C;

loc_802B8C4C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r1 + 44);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r3 = MemoryInline::FlatRead32((r31 + 88));
    r3 = (r3 + 65536);
    r0 = (r3 + -32768);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r30 + 112), r0);
    MemoryInline::FlatWrite32((r30 + 104), r0);
    r0 = MemoryInline::FlatRead8((r31 + 9));
}

loc_802B8C9C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_802B8D00;
    }
}

loc_802B8CA0:
{
    r0 = MemoryInline::FlatRead8((r30 + 124));
    r4 = (r0 * 28);
    r3 = 0x805D0000u;
    r0 = (r3 + 1160);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r30 + 128), r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 132), static_cast<uint8_t>(r0));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13620));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_802B8CCC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_802B8CF0;
    }
}

loc_802B8CD0:
{
    r0 = MemoryInline::FlatRead8((r31 + 116));
}

loc_802B8CD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802B8CF0;
    }
}

loc_802B8CDC:
{
    r3 = 65536;
    r0 = (r3 + -4096);
    MemoryInline::FlatWrite32((r30 + 108), r0);
    MemoryInline::FlatWrite32((r30 + 100), r0);
    goto loc_802B8D40;
}

loc_802B8CF0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 108), r0);
    MemoryInline::FlatWrite32((r30 + 100), r0);
    goto loc_802B8D40;
}

loc_802B8D00:
{
}

loc_802B8D04:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802B8D28;
    }
}

loc_802B8D08:
{
    r0 = MemoryInline::FlatRead8((r30 + 124));
}

loc_802B8D10:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802B8D28;
    }
}

loc_802B8D14:
{
    r3 = 0x805D0000u;
    r3 = (r3 + 936);
    r0 = (r3 + 140);
    MemoryInline::FlatWrite32((r30 + 128), r0);
    goto loc_802B8D40;
}

loc_802B8D28:
{
    r0 = MemoryInline::FlatRead8((r30 + 124));
    r4 = (r0 * 28);
    r3 = 0x805D0000u;
    r0 = (r3 + 936);
    r0 = (r0 + r4);
    MemoryInline::FlatWrite32((r30 + 128), r0);
}

loc_802B8D40:
{
    r3 = MemoryInline::FlatRead32((r30 + 128));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r3 = (r1 + 44);
    r4 = MemoryInline::FlatRead32((r30 + 104));
    ctx->lr = 0x802B8D60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r3 = (r1 + 32);
    r4 = (r31 + 60);
    r5 = (r1 + 44);
    ctx->lr = 0x802B8D70u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_1243 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_1243);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_1243 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r30 + 76);
    r4 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4 = r3;
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead32((r30 + 128));
    r4 = (r4 + 12);
    // inline leaf 0x801431D8 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x801431D8
    r5 = r3;
    r3 = (r1 + 20);
    r4 = (r31 + 60);
    ctx->lr = 0x802B8DA8u;
    if constexpr (KnownRegArgsCpuCall<0x800513DCu>(&func_800513DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800513DC_1955 = func_800513DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800513DC_1955);
        r4 = static_cast<uint32_t>(regargs_result_800513DC_1955 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800513DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = (r30 + 88);
    r4 = (r1 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r4 = r3;
    r3 = (r30 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r30 + 184);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + -118), 0, 190u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 118u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 118u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 122u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 126u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 196);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 130u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 130u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 134u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 138u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 208);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 142u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 142u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 146u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 150u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 220);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 154u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 154u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 158u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 162u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 232);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 166u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 166u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 170u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 174u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r30 + 244);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 178u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 178u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 182u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 186u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r30 + 66), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 80u, (r30 + 146), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802B8C4C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802B8C4C_ra18_1a_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802B8C4C func_802B8C4C preserves=true fpr_mask=0x00000000
