#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802DCB60_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x802DCB60u);
    goto loc_802DCB60;

loc_802DCB60:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r28 = r3;
    r29 = r4;
    r31 = 0;
    r30 = 0;
    r3 = (r1 + 8);
    // inline leaf 0x80040354 (7 guest instruction(s))
    r4 = 0x80660000u;
    r4 = (r4 + -19268);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 4), f0.d);
    // end of inlined leaf 0x80040354
    r0 = (r29 & 65535);
    r0 = (r0 & 15360);
}

loc_802DCBA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DCBBC;
    }
}

loc_802DCBA4:
{
    r3 = MemoryInline::FlatRead16((r28 + 54));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802DCBAC:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(8))) {
        goto loc_802DCBC4;
    }
}

loc_802DCBB0:
{
    r0 = (r3 + 2);
    MemoryInline::FlatWrite16((r28 + 54), static_cast<uint16_t>(r0));
    goto loc_802DCBC4;
}

loc_802DCBBC:
{
    r0 = -16;
    MemoryInline::FlatWrite16((r28 + 54), static_cast<uint16_t>(r0));
}

loc_802DCBC4:
{
    r4 = 4;
    r3 = MemoryInline::FlatRead16((r28 + 54));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_802DCBD0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_802DCBDC;
    }
}

loc_802DCBD4:
{
    r0 = (r3 + 4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802DCBDC:
{
    r0 = (r29 & 65535);
    r0 = (r0 & 8192);
}

loc_802DCBE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DCBF4;
    }
}

loc_802DCBEC:
{
    r0 = (0 - r4);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802DCBF4:
{
    r0 = (r29 & 65535);
    r0 = (r0 & 4096);
}

loc_802DCC00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DCC0C;
    }
}

loc_802DCC04:
{
    r0 = (r30 + r4);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802DCC0C:
{
    r0 = (r29 & 65535);
    r0 = (r0 & 2048);
}

loc_802DCC18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DCC24;
    }
}

loc_802DCC1C:
{
    r0 = (0 - r4);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802DCC24:
{
    r0 = (r29 & 65535);
    r0 = (r0 & 1024);
}

loc_802DCC30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DCC3C;
    }
}

loc_802DCC34:
{
    r0 = (r31 + r4);
    r31 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802DCC3C:
{
    r0 = MemoryInline::FlatRead8((r28 + 1));
}

loc_802DCC44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DCD30;
    }
}

loc_802DCC48:
{
    r0 = MemoryInline::FlatRead16((r28 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 + r31);
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r28 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 + r30);
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_802DCC68:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_802DCC74;
    }
}

loc_802DCC6C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r0));
}

loc_802DCC74:
{
    r0 = MemoryInline::FlatRead16((r28 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802DCC7C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_802DCC88;
    }
}

loc_802DCC80:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r0));
}

loc_802DCC88:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead16((r28 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802DCCA4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_802DCCB4;
    }
}

loc_802DCCA8:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r0));
}

loc_802DCCB4:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = MemoryInline::FlatRead16((r28 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802DCCD0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_802DCCE0;
    }
}

loc_802DCCD4:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r0));
}

loc_802DCCE0:
{
    r0 = MemoryInline::FlatRead8((r28 + 35));
}

loc_802DCCE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802DCD9C;
    }
}

loc_802DCCEC:
{
    r0 = MemoryInline::FlatRead16((r28 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r28 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 18));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r28 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r28 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r28 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r28 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r28 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r28 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite16((r28 + 10), static_cast<uint16_t>(r0));
    goto loc_802DCD9C;
}

loc_802DCD30:
{
    r0 = 1;
    guest_range_1 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 52u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 31u, (r28 + 35), static_cast<uint8_t>(r0));
    r0 = -16;
    MemoryInline::WriteResolved16(guest_range_1, 50u, (r28 + 54), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -12840));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword2;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::WriteResolved16(guest_range_1, 0u, (r28 + 4), static_cast<uint16_t>(r3));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword3;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 2u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 2u, (r28 + 6), r0);
        MemoryInline::WriteResolved16(guest_range_1, 4u, (r28 + 8), r3);
    }
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r28 + 12), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r28 + 16), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r28 + 20), static_cast<uint16_t>(r3));
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r28 + 10), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r28 + 14), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r28 + 18), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r28 + 22), static_cast<uint16_t>(r0));
}

loc_802DCD9C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802DCB60(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802DCB60_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802DCB60 func_802DCB60 preserves=true fpr_mask=0x00000000
