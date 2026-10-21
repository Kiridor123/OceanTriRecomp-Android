#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CD8A0(CpuContext* ctx);
extern "C" uint32_t func_804CD8A0_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_804D45F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804D45F0u);
    goto loc_804D45F0;

loc_804D45F0:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
}

loc_804D4608:
{
    r31 = r3;
    r26 = r5;
    r27 = r6;
    r28 = r7;
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(0))) {
        goto loc_804D4624;
    }
}

loc_804D461C:
{
}

loc_804D4620:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(31))) {
        goto loc_804D462C;
    }
}

loc_804D4624:
{
    r3 = 0;
    goto loc_804D4844;
}

loc_804D462C:
{
    r7 = 1;
    r0 = (r9 & 1);
    r30 = 0;
    r29 = -1;
    r6 = (r6 & -8);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 712), 0, 52u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, (r3 + 712), static_cast<uint16_t>(r7));
    r5 = (r6 + -8);
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 714), static_cast<uint16_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 724), r8);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 720), r8);
    }
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 716), r7);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 728), r29);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 752), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 748), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 744), r30);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r3 + 760), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 756), r30);
    }
    MemoryInline::FlatWrite32((r6 + -8), r30);
    MemoryInline::FlatWrite32((r6 + -4), r30);
    if constexpr (KnownRegArgsCpuCall<0x804CD8A0u>(&func_804CD8A0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        const auto regargs_result_804CD8A0_EC0 = func_804CD8A0_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_804CD8A0_EC0;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804CD8A0u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r3 = 0x804D0000u;
    r4 = (r27 - r28);
    r3 = (r3 + 18528);
    MemoryInline::FlatWrite32((r31 + 132), r3);
    r3 = -559022080;
    MemoryInline::FlatWrite32((r31 + 12), r26);
    r0 = (r3 + -17730);
    MemoryInline::FlatWrite32((r31 + 772), r27);
    MemoryInline::FlatWrite32((r31 + 776), r4);
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite32((r31 + 780), r30);
    MemoryInline::FlatWrite32((r31 + 784), r30);
    MemoryInline::FlatWrite32((r31 + 788), r30);
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = 0x80750000u;
    r4 = (r4 + -2128);
    r0 = MemoryInline::FlatRead32((r4 + 64));
}

loc_804D46C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804D480C;
    }
}

loc_804D46C8:
{
    r5 = MemoryInline::FlatRead32((r31 + 412));
    r0 = 2;
    r4 = MemoryInline::FlatRead16((r31 + 418));
    r6 = (r31 + 144);
    r5 = (r5 | 2304);
    MemoryInline::FlatWrite32((r31 + 412), r5);
    r4 = (r4 | 1);
    MemoryInline::FlatWrite16((r31 + 418), static_cast<uint16_t>(r4));
    r5 = (r31 + 456);
    r4 = MemoryInline::FlatRead32((r13 + -20104));
    r4 = (r4 & 248);
    r4 = (r4 | 4);
    MemoryInline::FlatWrite32((r31 + 404), r4);
    ctr = r0;
}

loc_804D4700:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r6 + 4), r29);
        MemoryInline::WriteResolved32(guest_range_1, 0u, r6, r29);
    }
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 128u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r5 + 4), r29);
        MemoryInline::WriteResolved32(guest_range_2, 0u, r5, r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r6 + 12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r6 + 8), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r5 + 12), r29);
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r5 + 8), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r6 + 20), r29);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r6 + 16), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r5 + 20), r29);
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r5 + 16), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r6 + 28), r29);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r6 + 24), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r5 + 28), r29);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r5 + 24), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r6 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r6 + 32), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r5 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r5 + 32), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r6 + 44), r29);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r6 + 40), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r5 + 44), r29);
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r5 + 40), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r6 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r6 + 48), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r5 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_2, 48u, (r5 + 48), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r6 + 60), r29);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r6 + 56), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 60u, (r5 + 60), r29);
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r5 + 56), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r6 + 68), r29);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r6 + 64), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 68u, (r5 + 68), r29);
        MemoryInline::WriteResolved32(guest_range_2, 64u, (r5 + 64), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r6 + 76), r29);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r6 + 72), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 76u, (r5 + 76), r29);
        MemoryInline::WriteResolved32(guest_range_2, 72u, (r5 + 72), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r6 + 84), r29);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r6 + 80), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 84u, (r5 + 84), r29);
        MemoryInline::WriteResolved32(guest_range_2, 80u, (r5 + 80), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r6 + 92), r29);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r6 + 88), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 92u, (r5 + 92), r29);
        MemoryInline::WriteResolved32(guest_range_2, 88u, (r5 + 88), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r6 + 100), r29);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r6 + 96), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r5 + 100), r29);
        MemoryInline::WriteResolved32(guest_range_2, 96u, (r5 + 96), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r6 + 108), r29);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r6 + 104), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 108u, (r5 + 108), r29);
        MemoryInline::WriteResolved32(guest_range_2, 104u, (r5 + 104), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r6 + 116), r29);
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r6 + 112), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 116u, (r5 + 116), r29);
        MemoryInline::WriteResolved32(guest_range_2, 112u, (r5 + 112), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r6 + 124), r29);
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r6 + 120), r29);
    }
    r6 = (r6 + 128);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 124u, (r5 + 124), r29);
        MemoryInline::WriteResolved32(guest_range_2, 120u, (r5 + 120), r29);
    }
    r5 = (r5 + 128);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804D4700;
    }
}

loc_804D480C:
{
    r4 = 0x80000000u;
    r5 = MemoryInline::FlatRead32((r4 + 224));
}

loc_804D4818:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_804D4824;
    }
}

loc_804D481C:
{
    MemoryInline::FlatWriteRam32((r4 + 220), r31);
    goto loc_804D4828;
}

loc_804D4824:
{
    MemoryInline::FlatWrite32((r5 + 764), r31);
}

loc_804D4828:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 768), r5);
    r4 = 0x80000000u;
    MemoryInline::FlatWrite32((r31 + 764), r0);
    MemoryInline::FlatWriteRam32((r4 + 224), r31);
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = 1;
}

loc_804D4844:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000023FF gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D45F0 func_804D45F0 preserves=true fpr_mask=0x00000000
