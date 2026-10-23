#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800854DC(CpuContext* ctx);
extern "C" uint32_t func_800854DC_ra8_0_10_0(CpuContext*, uint32_t);
extern "C" void func_80088740(CpuContext* ctx);
extern "C" void func_80088740_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_8008874C(CpuContext* ctx);
extern "C" void func_8008874C_ra8_0_0_0(CpuContext*, uint32_t);
extern "C" void func_80088760(CpuContext* ctx);
extern "C" void func_80088760_ra8_0_0_0(CpuContext*, uint32_t);

extern "C" void func_800854DC_statefree(uint32_t);
extern "C" void func_80088740_statefree(uint32_t);
extern "C" void func_8008874C_statefree(uint32_t);
extern "C" void func_80088760_statefree(uint32_t);

extern "C" void func_800885F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_800885F4;

loc_800885F4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r0 = (r3 & 1);
}

loc_80088610:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008862C;
    }
}

loc_80088614:
{
    r3 = 0x80680000u;
    r3 = (r3 + 21376);
    // inline leaf 0x8008880C (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam8((r3 + 256), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8008880C
    r3 = 0x80680000u;
    r3 = (r3 + 21260);
    // inline leaf 0x80088800 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x80088800
}

loc_8008862C:
{
    r0 = (r31 & 2);
}

loc_80088634:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80088644;
    }
}

loc_80088638:
{
    r3 = 0x80680000u;
    r3 = (r3 + 21664);
    // inline leaf 0x800887F4 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam16((r3 + 96), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800887F4
}

loc_80088644:
{
    r0 = (r31 & 4);
}

loc_8008864C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80088664;
    }
}

loc_80088650:
{
    r3 = 0x80680000u;
    r3 = (r3 + 21260);
    // inline leaf 0x80088800 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x80088800
    r3 = (r13 + -17700);
    // inline leaf 0x800887E8 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x800887E8
}

loc_80088664:
{
    r0 = (r31 & 8);
}

loc_8008866C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008867C;
    }
}

loc_80088670:
{
    r3 = 0x80680000u;
    r3 = (r3 + 21248);
    // inline leaf 0x800887C0 (10 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r4 = 0;
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r4));
    r0 = 2;
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r4);
    // end of inlined leaf 0x800887C0
}

loc_8008867C:
{
    r0 = (r31 & 16);
}

loc_80088684:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80088694;
    }
}

loc_80088688:
{
    r3 = 0x80680000u;
    r3 = (r3 + 21764);
    // inline leaf 0x800887A8 (6 guest instruction(s))
}

loc_inl6_0x800887A8:
{
}

loc_inl6_0x800887AC:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32(r3, r0);
}

loc_inl6_cont_800887A8:
{
    // end of inlined leaf 0x800887A8
}

loc_80088694:
{
    r0 = (r31 & 32);
}

loc_8008869C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800886A8;
    }
}

loc_800886A0:
{
    r3 = (r13 + -17708);
    // inline leaf 0x80087CE4 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80087CE4
}

loc_800886A8:
{
    r0 = (r31 & 64);
}

loc_800886B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800886C8;
    }
}

loc_800886B4:
{
    r3 = 0x80680000u;
    r3 = (r3 + 21776);
    // inline leaf 0x80088780 (10 guest instruction(s))
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 24), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r0);
    }
    // end of inlined leaf 0x80088780
    r3 = (r13 + -17704);
    // inline leaf 0x80088774 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    // end of inlined leaf 0x80088774
}

loc_800886C8:
{
    r0 = (r31 & 128);
}

loc_800886D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800886DC;
    }
}

loc_800886D4:
{
    r3 = (r13 + -17688);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80088760u) && KnownTranslatedCpuCall<0x80088760u>::kAvailable && !KnownTranslatedCpuCall<0x80088760u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80088760u>()) {
        func_80088760_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80088760u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
    }
}

loc_800886DC:
{
    r0 = (r31 & 256);
}

loc_800886E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800886F4;
    }
}

loc_800886E8:
{
    r3 = 0x80680000u;
    r3 = (r3 + 23904);
    // inline leaf 0x80088190 (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    // end of inlined leaf 0x80088190
}

loc_800886F4:
{
    r0 = (r31 & 512);
}

loc_800886FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008870C;
    }
}

loc_80088700:
{
    r3 = 0x80680000u;
    r3 = (r3 + 25448);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x800854DCu) && KnownTranslatedCpuCall<0x800854DCu>::kAvailable && !KnownTranslatedCpuCall<0x800854DCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x800854DCu>()) {
        func_800854DC_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800854DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
    }
}

loc_8008870C:
{
    r0 = (r31 & 1024);
}

loc_80088714:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80088724;
    }
}

loc_80088718:
{
    r3 = 0x80680000u;
    r3 = (r3 + 21808);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8008874Cu) && KnownTranslatedCpuCall<0x8008874Cu>::kAvailable && !KnownTranslatedCpuCall<0x8008874Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8008874Cu>()) {
        func_8008874C_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8008874Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
    }
}

loc_80088724:
{
    r3 = (r13 + -17712);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80088740u) && KnownTranslatedCpuCall<0x80088740u>::kAvailable && !KnownTranslatedCpuCall<0x80088740u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80088740u>()) {
        func_80088740_statefree(r3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80088740u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r13 = ctx->gpr[13];
    }
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000201B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800885F4 func_800885F4 preserves=true fpr_mask=0x00000000
