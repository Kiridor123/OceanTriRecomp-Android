#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804BD6F0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804BD6F0u);
    goto loc_804BD6F0;

loc_804BD6F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = -4;
    r30 = r4;
    r29 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r0 = (r29 & 31);
}

loc_804BD71C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BD7FC;
    }
}

loc_804BD720:
{
    r4 = 0x80750000u;
    r4 = (r4 + -26496);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 116u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r31 = 0;
}

loc_804BD730:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BD7A8;
    }
}

loc_804BD734:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
    r31 = 1;
}

loc_804BD740:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BD7A8;
    }
}

loc_804BD744:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
    r31 = 2;
}

loc_804BD750:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BD7A8;
    }
}

loc_804BD754:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r4 + 48));
    r31 = 3;
}

loc_804BD760:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BD7A8;
    }
}

loc_804BD764:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r4 + 64));
    r31 = 4;
}

loc_804BD770:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BD7A8;
    }
}

loc_804BD774:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 80u, (r4 + 80));
    r31 = 5;
}

loc_804BD780:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BD7A8;
    }
}

loc_804BD784:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 96u, (r4 + 96));
    r31 = 6;
}

loc_804BD790:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BD7A8;
    }
}

loc_804BD794:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r4 + 112));
    r31 = 7;
}

loc_804BD7A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BD7A8;
    }
}

loc_804BD7A4:
{
    r31 = 8;
}

loc_804BD7A8:
{
}

loc_804BD7AC:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(8))) {
        goto loc_804BD7B8;
    }
}

loc_804BD7B0:
{
    r31 = -5;
    goto loc_804BD7FC;
}

loc_804BD7B8:
{
    r5 = 0x80750000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r5 = (r5 + -26496);
    r4 = -1161953280;
    r6 = (r5 + r0);
    r0 = 0;
    MemoryInline::FlatWrite32(r6, r29);
    r5 = (r30 + -16);
    MemoryInline::FlatWrite32((r6 + 8), r30);
    MemoryInline::FlatWrite32((r6 + 12), r29);
    MemoryInline::FlatWrite32(r29, r4);
    r4 = MemoryInline::FlatRead32((r6 + 12));
    MemoryInline::FlatWrite32((r4 + 4), r5);
    r4 = MemoryInline::FlatRead32((r6 + 12));
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r4 = MemoryInline::FlatRead32((r6 + 12));
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_804BD7FC:
{
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl1_0x804D1330:
{
}

loc_inl1_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x804D1344;
    }
}

loc_inl1_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl1_0x804D1348;
}

loc_inl1_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl1_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl1_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BD6F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BD6F0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BD6F0 func_804BD6F0 preserves=true fpr_mask=0x00000000
