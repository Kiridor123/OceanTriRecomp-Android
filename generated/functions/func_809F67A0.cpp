#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_809F67A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_psqx_809F6850_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_809F67A0;

loc_809F67A0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 32), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r29 = r3;
    r30 = r4;
    r31 = r5;
    f31.d = f1.d;
}

loc_809F67D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809F684C;
    }
}

loc_809F67D8:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    r4 = 1;
    r5 = 4;
    // inline leaf 0x802AB3F8 (4 guest instruction(s))
    r0 = (r4 | r5);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r3 + 10), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x802AB3F8
    guest_range_0 = MemoryInline::ResolveRangeHost((r29 + 2), 0, 88u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r29 + 2), static_cast<uint8_t>(r31));
    r31 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 18u, (r29 + 20), r31);
    r3 = r29;
    r4 = r30;
    r5 = 0;
    // inline leaf 0x802AB270 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 12), r4);
    MemoryInline::FlatWrite8((r3 + 9), static_cast<uint8_t>(r5));
    // end of inlined leaf 0x802AB270
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r29 + 7), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead8((r30 + 22));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r29 + 8), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 182));
    MemoryInline::WriteResolved16(guest_range_0, 86u, (r29 + 88), static_cast<uint16_t>(r0));
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6324));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 22u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 22u, (r29 + 24), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 26u, (r29 + 28), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 30u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 30u, (r29 + 32), f0.d);
        MemoryInline::WriteResolved32(guest_range_0, 34u, (r29 + 36), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 38u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 38u, (r29 + 40), r31);
        MemoryInline::WriteResolved32(guest_range_0, 42u, (r29 + 44), r31);
    }
    r3 = MemoryInline::FlatRead32((r29 + 256));
    MemoryInline::FlatWriteFloat32((r3 + 28), f31.d);
    r3 = r29;
    // inline leaf 0x809FA0D8 (12 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 256));
    r0 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 56), 0, 24u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r3 + 56), r0);
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r3 + 76), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r3 + 60), r0);
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r3 + 77), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r3 + 64), r0);
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r3 + 78), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r3 + 68), r0);
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r3 + 79), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r3 + 72), r0);
    // end of inlined leaf 0x809FA0D8
}

loc_809F684C:
{
    r0 = 40;
    addr_psqx_809F6850_loc_0 = (r1 + r0);
    PpcSetPairedFprInline(f31, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, addr_psqx_809F6850_loc_0));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[31] = f31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x80000003 fpr_write=0x80000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x809F67A0 func_809F67A0 preserves=true fpr_mask=0x00000000
