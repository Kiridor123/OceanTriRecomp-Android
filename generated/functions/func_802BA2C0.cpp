#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802B5990(CpuContext* ctx);
extern "C" uint64_t func_802B5990_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802BE158(CpuContext* ctx);
extern "C" uint64_t func_802BE158_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);

extern "C" uint64_t func_802BA2C0_ra28_10_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, double arg_f4)
{
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4; f4.d = arg_f4;

    goto loc_802BA2C0;

loc_802BA2C0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = (r3 + 840);
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -13564));
    f3.d = MemoryInline::FlatReadFloat32((r2 + -13568));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 8);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r31 + 12);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    MemoryInline::FlatWriteFloat32((r31 + 48), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13568));
    MemoryInline::FlatWriteFloat32((r31 + 52), f0.d);
    r3 = 4;
    r4 = 2;
    ctx->lr = 0x802BA330u;
    if constexpr (KnownRegArgsCpuCall<0x802B5990u>(&func_802B5990)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802B5990_A92 = func_802B5990_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802B5990_A92);
        r4 = static_cast<uint32_t>(regargs_result_802B5990_A92 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802B5990u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = 4;
    r4 = r31;
    r5 = (r31 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 52));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 48));
    ctx->lr = 0x802BA348u;
    if constexpr (KnownRegArgsCpuCall<0x802BE158u>(&func_802BE158)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802BE158_E6E = func_802BE158_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802BE158_E6E);
        r4 = static_cast<uint32_t>(regargs_result_802BE158_E6E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
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
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x802BE158u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 64), 0, 116u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r31 + 64), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r31 + 65), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r31 + 67), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r31 + 66), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair16(guest_range_0, 4u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_0, 6u, (r31 + 70), r0);
        MemoryInline::WriteResolved16(guest_range_0, 4u, (r31 + 68), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r31 + 76), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r31 + 80), r0);
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13560));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r31 + 96), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13728));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r31 + 100), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -13556));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r31 + 104), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r31 + 108), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r31 + 112), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r31 + 116), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r31 + 120), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 60u, (r31 + 124), f1.d);
    MemoryInline::WriteResolved8(guest_range_0, 64u, (r31 + 128), static_cast<uint8_t>(r0));
    r3 = (r31 + 132);
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 68u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 76u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r31 + 144);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 80u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 80u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 84u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 88u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r31 + 156);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 92u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 96u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 100u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r31 + 168);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -13768));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 104u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 104u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 108u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 112u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BA2C0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BA2C0_ra28_10_18_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000202E gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0xF0000010 fpr_write=0xF000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BA2C0 func_802BA2C0 preserves=true fpr_mask=0x00000000
