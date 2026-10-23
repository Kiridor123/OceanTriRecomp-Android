#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800E0A50(CpuContext* ctx);
extern "C" uint64_t func_800E0A50_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_800E05C4_ra8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_800E05C4;

loc_800E05C4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 53u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r3, static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 1), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 2), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r3 + 3), static_cast<uint8_t>(r31));
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 52u, (r3 + 52), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30312));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 4), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f0.d);
    // inline leaf 0x800E0A3C (5 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30312));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r3 + 16), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f0.d);
    // end of inlined leaf 0x800E0A3C
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 40), 0, 316u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r30 + 40), r31);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r30 + 44), r31);
    }
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r30 + 48), r31);
    MemoryInline::WriteResolved32(guest_range_1, 312u, (r30 + 352), r31);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 240u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 240u, (r30 + 280), r31);
        MemoryInline::WriteResolved32(guest_range_1, 244u, (r30 + 284), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 248u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 248u, (r30 + 288), r31);
        MemoryInline::WriteResolved32(guest_range_1, 252u, (r30 + 292), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 256u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 256u, (r30 + 296), r31);
        MemoryInline::WriteResolved32(guest_range_1, 260u, (r30 + 300), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 264u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 264u, (r30 + 304), r31);
        MemoryInline::WriteResolved32(guest_range_1, 268u, (r30 + 308), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 272u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 272u, (r30 + 312), r31);
        MemoryInline::WriteResolved32(guest_range_1, 276u, (r30 + 316), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 280u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 280u, (r30 + 320), r31);
        MemoryInline::WriteResolved32(guest_range_1, 284u, (r30 + 324), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 288u, (r30 + 328), r31);
        MemoryInline::WriteResolved32(guest_range_1, 292u, (r30 + 332), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 296u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 296u, (r30 + 336), r31);
        MemoryInline::WriteResolved32(guest_range_1, 300u, (r30 + 340), r31);
    }
    MemoryInline::WriteResolved32(guest_range_1, 304u, (r30 + 344), r31);
    MemoryInline::WriteResolved32(guest_range_1, 228u, (r30 + 268), r31);
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r30 + 54), static_cast<uint16_t>(r31));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30312));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r30 + 68), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r30 + 72), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r30 + 76), r31);
    MemoryInline::WriteResolved8(guest_range_1, 200u, (r30 + 240), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_1, 196u, (r30 + 236), r31);
    MemoryInline::WriteResolved8(guest_range_1, 201u, (r30 + 241), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_1, 202u, (r30 + 242), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved32(guest_range_1, 308u, (r30 + 348), r31);
    MemoryInline::WriteResolved16(guest_range_1, 40u, (r30 + 80), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r30 + 92), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r30 + 116), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 100u, (r30 + 140), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 124u, (r30 + 164), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 148u, (r30 + 188), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 172u, (r30 + 212), f0.d);
    MemoryInline::WriteResolved32(guest_range_1, 204u, (r30 + 244), r31);
    MemoryInline::WriteResolved16(guest_range_1, 42u, (r30 + 82), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 56u, (r30 + 96), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r30 + 120), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 104u, (r30 + 144), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 128u, (r30 + 168), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 152u, (r30 + 192), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 176u, (r30 + 216), f0.d);
    MemoryInline::WriteResolved32(guest_range_1, 208u, (r30 + 248), r31);
    MemoryInline::WriteResolved16(guest_range_1, 44u, (r30 + 84), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 60u, (r30 + 100), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r30 + 124), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 108u, (r30 + 148), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 132u, (r30 + 172), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 156u, (r30 + 196), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 180u, (r30 + 220), f0.d);
    MemoryInline::WriteResolved32(guest_range_1, 212u, (r30 + 252), r31);
    MemoryInline::WriteResolved16(guest_range_1, 46u, (r30 + 86), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 64u, (r30 + 104), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r30 + 128), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 112u, (r30 + 152), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 136u, (r30 + 176), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 160u, (r30 + 200), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 184u, (r30 + 224), f0.d);
    MemoryInline::WriteResolved32(guest_range_1, 216u, (r30 + 256), r31);
    MemoryInline::WriteResolved16(guest_range_1, 48u, (r30 + 88), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r30 + 108), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 92u, (r30 + 132), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 116u, (r30 + 156), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 140u, (r30 + 180), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 164u, (r30 + 204), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 188u, (r30 + 228), f0.d);
    MemoryInline::WriteResolved32(guest_range_1, 220u, (r30 + 260), r31);
    MemoryInline::WriteResolved16(guest_range_1, 50u, (r30 + 90), static_cast<uint16_t>(r31));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 72u, (r30 + 112), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 96u, (r30 + 136), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 120u, (r30 + 160), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 144u, (r30 + 184), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 168u, (r30 + 208), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 192u, (r30 + 232), f0.d);
    MemoryInline::WriteResolved32(guest_range_1, 224u, (r30 + 264), r31);
    r3 = r30;
    r4 = 0;
    // inline leaf 0x800E0C4C (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 56), r4);
    // end of inlined leaf 0x800E0C4C
    r3 = r30;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30308));
    ctx->lr = 0x800E0764u;
    if constexpr (KnownRegArgsCpuCall<0x800E0A50u>(&func_800E0A50)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800E0A50_2C1C = func_800E0A50_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800E0A50_2C1C);
        r4 = static_cast<uint32_t>(regargs_result_800E0A50_2C1C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800E0A50u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
    r0 = (r13 + -17568);
    MemoryInline::FlatWrite32((r30 + 64), r0);
    MemoryInline::FlatWrite8((r30 + 53), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite32((r30 + 60), r31);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800E05C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800E05C4_ra8_0_18_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000200E gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800E05C4 func_800E05C4 preserves=true fpr_mask=0x00000000
