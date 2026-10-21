#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803CA8E4_rac8_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r6, uint32_t arg_r7)
{
    uint8_t* guest_range_0 = nullptr;

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
    ctx->gpr[6] = arg_r6;
    ctx->gpr[7] = arg_r7;

    MKW_GUEST_ENTER(0x803CA8E4u);
    goto loc_803CA8E4;

loc_803CA8E4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r3 = (r3 + 16);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 28);
    r4 = 0;
    r5 = 1024;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 1052);
    r4 = 0;
    r5 = 1024;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 2076);
    r4 = 0;
    r5 = 1024;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r29 + 3100);
    r4 = 0;
    r5 = 1024;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r30 = 0;
    MemoryInline::FlatWrite32((r29 + 4124), r30);
    MemoryInline::FlatWrite8((r29 + 4128), static_cast<uint8_t>(r30));
    r3 = (r29 + 4132);
    // inline leaf 0x803FA8E0 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x803FA8E0
    r3 = (r29 + 4156);
    // inline leaf 0x803FA8E0 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x803FA8E0
    r3 = (r29 + 4180);
    // inline leaf 0x803FA8E0 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x803FA8E0
    r3 = (r29 + 4204);
    // inline leaf 0x803FA8E0 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
    // end of inlined leaf 0x803FA8E0
    MemoryInline::FlatWrite8((r29 + 4236), static_cast<uint8_t>(r30));
    r3 = (r29 + 4240);
    r4 = 0;
    r5 = 8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    f1.d = MemoryInline::FlatReadFloat32((r2 + -5120));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5136));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 4248), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5124));
    MemoryInline::FlatWriteFloat32((r29 + 4252), f0.d);
    r31 = 1024;
    MemoryInline::FlatWrite32((r29 + 4256), r31);
    MemoryInline::FlatWrite32((r29 + 8620), r30);
    r3 = (r29 + 8492);
    r4 = 0;
    r5 = 128;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
    r4 = 0;
    // inline leaf 0x803CC094 (2 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 8624), r4);
    // end of inlined leaf 0x803CC094
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5124));
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 8636), 0, 148u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r29 + 8636), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r29 + 8644), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r29 + 8652), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r29 + 8656), static_cast<uint8_t>(r30));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5136));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r29 + 8660), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r29 + 8664), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r29 + 8668), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r29 + 8672), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r29 + 8676), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r29 + 8680), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r29 + 8684), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 52u, (r29 + 8688), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 56u, (r29 + 8692), f0.d);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r29 + 8712), r30);
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r29 + 8716), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r29 + 8720), r30);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r29 + 8724), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r29 + 8728), r30);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r29 + 8732), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r29 + 8736), r30);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r29 + 8740), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 108u, (r29 + 8744), r30);
    MemoryInline::WriteResolved8(guest_range_0, 129u, (r29 + 8765), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 130u, (r29 + 8766), static_cast<uint8_t>(r30));
    MemoryInline::WriteResolved8(guest_range_0, 131u, (r29 + 8767), static_cast<uint8_t>(r30));
    r0 = 512;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r29 + 8768), r0);
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r29 + 8772), r31);
    }
    MemoryInline::WriteResolved8(guest_range_0, 140u, (r29 + 8776), static_cast<uint8_t>(r30));
    r0 = 8;
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r29 + 8780), r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803CA8E4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803CA8E4_rac8_0_18_0(ctx, ctx->gpr[3], ctx->gpr[6], ctx->gpr[7]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803CA8E4 func_803CA8E4 preserves=true fpr_mask=0x00000000
