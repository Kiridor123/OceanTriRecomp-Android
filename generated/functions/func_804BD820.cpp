#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804BD820_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804BD820;

loc_804BD820:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = 0;
    r30 = r5;
    r29 = r4;
    r28 = r3;
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
}

loc_804BD854:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_804BD9F4;
    }
}

loc_804BD858:
{
}

loc_804BD85C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804BD9F4;
    }
}

loc_804BD860:
{
    r0 = (r30 + -1);
    r0 = (r30 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BD9F4;
    }
}

loc_804BD86C:
{
}

loc_804BD870:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(32))) {
        goto loc_804BD878;
    }
}

loc_804BD874:
{
    r30 = 32;
}

loc_804BD878:
{
}

loc_804BD87C:
{
    r0 = (r29 + 31);
    r29 = (r0 & -32);
    if ((static_cast<uint32_t>(r28) > static_cast<uint32_t>(7))) {
        goto loc_804BD8A0;
    }
}

loc_804BD888:
{
    r4 = 0x80750000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r4 = (r4 + -26496);
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    r4 = r4_addr_1;
}

loc_804BD89C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BD8A8;
    }
}

loc_804BD8A0:
{
    r31 = 0;
    goto loc_804BD9F4;
}

loc_804BD8A8:
{
    r8 = MemoryInline::FlatRead32((r4 + 12));
    r6 = (r30 + -1);
    r5 = 0;
    goto loc_804BD90C;
}

loc_804BD8B8:
{
    r7 = MemoryInline::FlatRead32((r8 + 4));
    r0 = (r8 + 16);
    r0 = (r0 & r6);
}

loc_804BD8C8:
{
    r0 = (r30 - r0);
    r0 = (r6 & r0);
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(r29))) {
        goto loc_804BD8E4;
    }
}

loc_804BD8D4:
{
}

loc_804BD8D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BD8E4;
    }
}

loc_804BD8DC:
{
    r5 = r8;
    goto loc_804BD914;
}

loc_804BD8E4:
{
    r0 = (r29 + r0);
}

loc_804BD8EC:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(r0))) {
        goto loc_804BD908;
    }
}

loc_804BD8F0:
{
}

loc_804BD8F4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804BD904;
    }
}

loc_804BD8F8:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_804BD900:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r0))) {
        goto loc_804BD908;
    }
}

loc_804BD904:
{
    r5 = r8;
}

loc_804BD908:
{
    r8 = MemoryInline::FlatRead32((r8 + 12));
}

loc_804BD90C:
{
}

loc_804BD910:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_804BD8B8;
    }
}

loc_804BD914:
{
}

loc_804BD918:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_804BD9F4;
    }
}

loc_804BD91C:
{
    r7 = (r30 + -1);
    r0 = (r5 + 16);
    r0 = (r0 & r7);
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r30 - r0);
    r8 = (r7 & r0);
    r7 = (r29 + r8);
    r0 = (r7 + 16);
}

loc_804BD940:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r0))) {
        goto loc_804BD988;
    }
}

loc_804BD944:
{
    r6 = (r5 + r29);
    r0 = -1161953280;
    r9 = (r8 + r6);
    MemoryInline::FlatWrite32((r9 + 16), r0);
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 - r29);
    r6 = (r0 - r8);
    r0 = (r6 + -16);
    MemoryInline::FlatWrite32((r9 + 20), r0);
    r6 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32((r9 + 28), r6);
    r9 = (r9 + 16);
}

loc_804BD978:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804BD980;
    }
}

loc_804BD97C:
{
    MemoryInline::FlatWrite32((r6 + 8), r9);
}

loc_804BD980:
{
    MemoryInline::FlatWrite32((r5 + 12), r9);
    MemoryInline::FlatWrite32((r5 + 4), r7);
}

loc_804BD988:
{
    r6 = -1161953280;
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32(r5, r0);
    r6 = MemoryInline::FlatRead32((r5 + 8));
}

loc_804BD99C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804BD9AC;
    }
}

loc_804BD9A0:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32((r6 + 12), r0);
    goto loc_804BD9B4;
}

loc_804BD9AC:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_804BD9B4:
{
    r4 = MemoryInline::FlatRead32((r5 + 12));
}

loc_804BD9BC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804BD9C8;
    }
}

loc_804BD9C0:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r4 + 8), r0);
}

loc_804BD9C8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r5 + 12), r0);
    r31 = (r5 + r8);
}

loc_804BD9D8:
{
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r31 = (r31 + 16);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804BD9F4;
    }
}

loc_804BD9E4:
{
    r4 = -1161953280;
    r0 = (r4 + 2);
    MemoryInline::FlatWrite32((r31 + -16), r0);
    MemoryInline::FlatWrite32((r31 + -8), r5);
}

loc_804BD9F4:
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
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804BD820(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804BD820_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BD820 func_804BD820 preserves=true fpr_mask=0x00000000
