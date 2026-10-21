#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_805268F0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x805268F0u);
    goto loc_805268F0;

loc_805268F0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = 0;
    r29 = r4;
    r28 = r3;
    r0 = MemoryInline::FlatRead32((r13 + -13392));
}

loc_80526920:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8052692C;
    }
}

loc_80526924:
{
    r3 = -1;
    goto loc_80526A10;
}

loc_8052692C:
{
}

loc_80526930:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80526950;
    }
}

loc_80526934:
{
}

loc_80526938:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_80526950;
    }
}

loc_8052693C:
{
    r31 = 0x80790000u;
    r31 = (r31 + 9112);
    r0 = MemoryInline::FlatRead32((r31 + 24));
}

loc_8052694C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_80526958;
    }
}

loc_80526950:
{
    r3 = -1;
    goto loc_80526A10;
}

loc_80526958:
{
    // inline leaf 0x80523ED0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -13544));
    // end of inlined leaf 0x80523ED0
}

loc_80526960:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(7))) {
        goto loc_8052696C;
    }
}

loc_80526964:
{
    r3 = 0;
    goto loc_80526A10;
}

loc_8052696C:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x804D12F0
    r5 = MemoryInline::FlatRead32((r31 + 24));
    r0 = MemoryInline::FlatRead32((r31 + 28));
    r6 = MemoryInline::FlatRead32((r31 + 32));
    r0 = (r5 - r0);
    r7 = MemoryInline::FlatRead32((r31 + 44));
}

loc_80526988:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(r0))) {
        goto loc_80526990;
    }
}

loc_8052698C:
{
    r30 = 1;
}

loc_80526990:
{
    ctr = r29;
}

loc_80526998:
{
    if ((static_cast<int32_t>(r29) <= static_cast<int32_t>(0))) {
        goto loc_805269C4;
    }
}

loc_8052699C:
{
    // nop
}

loc_805269A0:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r6 = (r6 + 1);
    r4 = MemoryInline::FlatRead16(r28);
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
}

loc_805269B0:
{
    r7_addr_2 = (r7 + r0);
    MemoryInline::FlatWrite16(r7_addr_2, static_cast<uint16_t>(r4));
    r28 = (r28 + 2);
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r5))) {
        goto loc_805269C0;
    }
}

loc_805269BC:
{
    r6 = 0;
}

loc_805269C0:
{
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805269A0;
    }
}

loc_805269C4:
{
}

loc_805269C8:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_805269F0;
    }
}

loc_805269CC:
{
    r4 = 0x80790000u;
    r0 = 1;
    r4 = (r4 + 9112);
    MemoryInline::FlatWriteRam32((r4 + 28), r5);
    MemoryInline::FlatWriteRam32((r4 + 32), r6);
    MemoryInline::FlatWriteRam32((r4 + 36), r6);
    MemoryInline::FlatWriteRam32((r4 + 48), r0);
    MemoryInline::FlatWriteRam32((r4 + 56), r0);
    goto loc_80526A08;
}

loc_805269F0:
{
    r4 = 0x80790000u;
    r4 = (r4 + 9112);
    r0 = MemoryInline::FlatRead32((r4 + 28));
    MemoryInline::FlatWriteRam32((r4 + 32), r6);
    r0 = (r0 + r29);
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
}

loc_80526A08:
{
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
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_2 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r3 = r29;
}

loc_80526A10:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_805268F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_805268F0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805268F0 func_805268F0 preserves=true fpr_mask=0x00000000
