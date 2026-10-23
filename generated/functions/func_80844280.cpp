#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80842600_statefree(uint32_t, uint32_t);

extern "C" void func_80844280(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80844280;

loc_80844280:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r0 = (r4 + -1);
    r30 = r3;
}

loc_808442A0:
{
    r31 = r4;
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_808442BC;
    }
}

loc_808442A8:
{
}

loc_808442AC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80844364;
    }
}

loc_808442B0:
{
}

loc_808442B4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(3))) {
        goto loc_80844364;
    }
}

loc_808442B8:
{
    goto loc_808443A8;
}

loc_808442BC:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_808442C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80844358;
    }
}

loc_808442C8:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x804D12F0
    r7 = (r30 + 9244);
    r9 = 0;
    r0 = 1;
    goto loc_80844344;
}

loc_808442E0:
{
    r5 = MemoryInline::FlatRead32((r7 + 4));
    MemoryInline::FlatWrite32((r7 + 12), r5);
    r4 = MemoryInline::FlatRead32((r7 + 24));
    MemoryInline::FlatWrite32((r7 + 28), r4);
    r8 = MemoryInline::FlatRead8(r5);
    r6 = (r8 & 127);
    goto loc_8084431C;
}

loc_80844300:
{
    r4 = MemoryInline::FlatRead32((r7 + 12));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(7));
    r5 = (r5_rot_3 & -128);
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r7 + 12), r4);
    r8 = MemoryInline::FlatRead8(r4);
    r4 = (r8 & 127);
    r6 = (r5 + r4);
}

loc_8084431C:
{
    r4 = (r8 & 128);
}

loc_80844320:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80844300;
    }
}

loc_80844324:
{
    r5 = MemoryInline::FlatRead32((r7 + 12));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r4 = (r4_rot_2 & -65536);
    r9 = (r9 + 1);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r7 + 12), r5);
    MemoryInline::FlatWrite32((r7 + 32), r4);
    MemoryInline::FlatWrite32((r7 + 36), r0);
    r7 = (r7 + 40);
}

loc_80844344:
{
    r4 = MemoryInline::FlatRead16((r30 + 8));
}

loc_8084434C:
{
    if ((static_cast<int32_t>(r9) < static_cast<int32_t>(r4))) {
        goto loc_808442E0;
    }
}

loc_80844350:
{
    MemoryInline::FlatWrite32((r30 + 12), r4);
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
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_5 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
}

loc_80844358:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 16), r0);
    goto loc_808443A8;
}

loc_80844364:
{
    r27 = 0;
    r28 = 123;
    r29 = 0;
}

loc_80844370:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = (r27 | 176);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r26 = r3;
    r3 = (r30 + 20);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r28));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r29));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80842600u) && KnownTranslatedCpuCall<0x80842600u>::kAvailable && !KnownTranslatedCpuCall<0x80842600u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80842600u>()) {
        const auto state_free_result_80842600_175D = func_80842600_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_80842600_175D);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80842600u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r11 = ctx->gpr[11];
    }
    r3 = r26;
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl4_0x804D1330:
{
}

loc_inl4_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x804D1344;
    }
}

loc_inl4_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl4_0x804D1348;
}

loc_inl4_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl4_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_3 & 1);
}

loc_inl4_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r27 = (r27 + 1);
}

loc_808443A4:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(16))) {
        goto loc_80844370;
    }
}

loc_808443A8:
{
    MemoryInline::FlatWrite32((r30 + 4), r31);
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x00000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80844280 func_80844280 preserves=true fpr_mask=0x00000000
