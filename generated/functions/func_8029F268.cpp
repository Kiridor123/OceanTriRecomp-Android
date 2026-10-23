#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8029F268(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];

    goto loc_8029F268;

loc_8029F268:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r31 = r4;
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r0));
    // inline leaf 0x8029F0B8 (12 guest instruction(s))
}

loc_inl0_0x8029F0B8:
{
    r3 = 0x806B0000u;
    r4 = (r3 + -4824);
    r3 = MemoryInline::FlatRead16((r4 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam16((r4 + 12), static_cast<uint16_t>(r0));
    r0 = (r0 & 65535);
}

loc_inl0_0x8029F0D4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(60000))) {
        goto loc_inl0_0x8029F0E0;
    }
}

loc_inl0_0x8029F0D8:
{
    r0 = 0;
    MemoryInline::FlatWriteRam16((r4 + 12), static_cast<uint16_t>(r0));
}

loc_inl0_0x8029F0E0:
{
    r3 = MemoryInline::FlatRead16((r4 + 12));
}

loc_inl0_cont_8029F0B8:
{
    // end of inlined leaf 0x8029F0B8
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 12), 0, 80u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r30 + 12), static_cast<uint16_t>(r3));
    r0 = 255;
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r30 + 14), static_cast<uint8_t>(r0));
    r3 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 37u, (r30 + 49), static_cast<uint8_t>(r3));
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 4), 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r31 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_0, 52u, (r30 + 64), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r31 + 6));
    MemoryInline::WriteResolved8(guest_range_0, 54u, (r30 + 66), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r31 + 7));
    MemoryInline::WriteResolved8(guest_range_0, 55u, (r30 + 67), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r31 + 8));
    MemoryInline::WriteResolved8(guest_range_0, 56u, (r30 + 68), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r31 + 9));
    MemoryInline::WriteResolved8(guest_range_0, 57u, (r30 + 69), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r31 + 10));
    MemoryInline::WriteResolved16(guest_range_0, 58u, (r30 + 70), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r31 + 12));
    MemoryInline::WriteResolved16(guest_range_0, 60u, (r30 + 72), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 10u, (r31 + 14));
    MemoryInline::WriteResolved8(guest_range_0, 62u, (r30 + 74), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r31 + 16));
    MemoryInline::WriteResolved8(guest_range_0, 64u, (r30 + 76), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r31 + 17));
    MemoryInline::WriteResolved8(guest_range_0, 65u, (r30 + 77), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r31 + 18));
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r30 + 78), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8029F304:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_8029F30C;
    }
}

loc_8029F308:
{
    MemoryInline::WriteResolved8(guest_range_0, 66u, (r30 + 78), static_cast<uint8_t>(r3));
}

loc_8029F30C:
{
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 39u, (r30 + 51), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 18u, (r31 + 22));
    MemoryInline::WriteResolved8(guest_range_0, 77u, (r30 + 89), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 19u, (r31 + 23));
    MemoryInline::WriteResolved8(guest_range_0, 78u, (r30 + 90), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14076));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r30 + 36), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r31 + 19));
}

loc_8029F334:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(255))) {
        goto loc_8029F34C;
    }
}

loc_8029F338:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14080));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r30 + 80), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14084));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r30 + 84), f0.d);
    goto loc_8029F394;
}

loc_8029F34C:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -14040));
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r30 + 80), f0.d);
    r3 = MemoryInline::ReadResolved8(guest_range_1, 16u, (r31 + 20));
}

loc_8029F370:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(255))) {
        goto loc_8029F380;
    }
}

loc_8029F374:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -14080));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r30 + 84), f0.d);
    goto loc_8029F394;
}

loc_8029F380:
{
    stackword6 = r3;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 72u, (r30 + 84), f0.d);
}

loc_8029F394:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 17u, (r31 + 21));
    MemoryInline::WriteResolved8(guest_range_0, 76u, (r30 + 88), static_cast<uint8_t>(r0));
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r30 + 40), r0);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r30 + 44), r0);
    }
    MemoryInline::WriteResolved8(guest_range_0, 36u, (r30 + 48), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 79u, (r30 + 91), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_8029F3B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029F3D8;
    }
}

loc_8029F3BC:
{
}

loc_8029F3C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8029F3E8;
    }
}

loc_8029F3C4:
{
}

loc_8029F3C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8029F3F8;
    }
}

loc_8029F3CC:
{
}

loc_8029F3D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8029F408;
    }
}

loc_8029F3D4:
{
    goto loc_8029F414;
}

loc_8029F3D8:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 22));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 15), static_cast<uint8_t>(r0));
    goto loc_8029F414;
}

loc_8029F3E8:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 481));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 15), static_cast<uint8_t>(r0));
    goto loc_8029F414;
}

loc_8029F3F8:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 8));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 15), static_cast<uint8_t>(r0));
    goto loc_8029F414;
}

loc_8029F408:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r0 = MemoryInline::FlatRead8((r3 + 420));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r30 + 15), static_cast<uint8_t>(r0));
}

loc_8029F414:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8029F268 func_8029F268 preserves=true fpr_mask=0x00000000
