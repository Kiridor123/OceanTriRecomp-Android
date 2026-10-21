#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FFA44(CpuContext* ctx);
extern "C" uint64_t func_801FFA44_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_801FD1D8_rac8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    MKW_GUEST_ENTER(0x801FD1D8u);
    goto loc_801FD1D8;

loc_801FD1D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r30));
    r31 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r3 + 4), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 8), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r30);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -16928));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f0.d);
    r3 = (r3 + 28);
    r4 = (r29 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    guest_range_2 = MemoryInline::ResolveRangeHost((r29 + 40), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r29 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r29 + 44), r30);
    }
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r29 + 48), r30);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -16928));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r29 + 52), f1.d);
    r3 = (r29 + 56);
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 20u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 24u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r29 + 68);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -16928));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, r3, f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r3 + 4), f2.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    MemoryInline::WriteResolved32(guest_range_2, 40u, (r29 + 80), r30);
    r3 = (r29 + 84);
    r4 = r29;
    ctx->lr = 0x801FD288u;
    if constexpr (KnownRegArgsCpuCall<0x801FFA44u>(&func_801FFA44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_801FFA44_1341 = func_801FFA44_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_801FFA44_1341);
        r4 = static_cast<uint32_t>(regargs_result_801FFA44_1341 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x801FFA44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r3 = 65536;
    r0 = (r3 + -1);
    guest_range_1 = MemoryInline::ResolveRangeHost((r29 + 460), 0, 102u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r29 + 460), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r29 + 462), static_cast<uint8_t>(r30));
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r29 + 464), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r29 + 468), r30);
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r29 + 472), static_cast<uint16_t>(r30));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -16924));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r29 + 476), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r29 + 480), static_cast<uint8_t>(r30));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 22u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_1, 22u, (r29 + 482), r30);
        MemoryInline::WriteResolved16(guest_range_1, 24u, (r29 + 484), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r29 + 488), r30);
    r3 = (r29 + 492);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -16928));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    r3 = (r29 + 504);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -16928));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r29 + 516), r30);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 60u, ((static_cast<uint32_t>(static_cast<uint16_t>(r30)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_1, 60u, (r29 + 520), r30);
        MemoryInline::WriteResolved16(guest_range_1, 62u, (r29 + 522), r30);
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -16928));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r29 + 524), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 68u, (r29 + 528), static_cast<uint8_t>(r31));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r29 + 532), r30);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r29 + 536), r30);
    }
    MemoryInline::WriteResolved16(guest_range_1, 80u, (r29 + 540), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 86u, (r29 + 546), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved16(guest_range_1, 82u, (r29 + 542), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 87u, (r29 + 547), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved16(guest_range_1, 84u, (r29 + 544), static_cast<uint16_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 88u, (r29 + 548), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 89u, (r29 + 549), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 90u, (r29 + 550), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 91u, (r29 + 551), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 92u, (r29 + 552), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 93u, (r29 + 553), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 94u, (r29 + 554), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 95u, (r29 + 555), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 96u, (r29 + 556), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 97u, (r29 + 557), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_1, 98u, (r29 + 558), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved16(guest_range_1, 100u, (r29 + 560), static_cast<uint16_t>(r30));
    r3 = (r29 + 564);
    r4 = 0;
    r5 = 32;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite8((r29 + 596), static_cast<uint8_t>(r30));
    MemoryInline::FlatWrite8((r29 + 597), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r29 + 598), static_cast<uint8_t>(r30));
    r3 = (r29 + 600);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -16928));
    f2.d = f1.d;
    f3.d = f1.d;
    // inline leaf 0x8005000C (4 guest instruction(s))
    MemoryInline::FlatWriteFloat32(r3, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x8005000C
    MemoryInline::FlatWrite8((r29 + 612), static_cast<uint8_t>(r30));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

extern "C" void func_801FD1D8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801FD1D8_rac8_0_18_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801FD1D8 func_801FD1D8 preserves=true fpr_mask=0x00000000
