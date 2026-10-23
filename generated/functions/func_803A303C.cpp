#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803A303C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803A303C;

loc_803A303C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r0 = (r0 + r5);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r7 + 4);
    r8 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 40));
    r5 = MemoryInline::FlatRead8((r5 + 2));
    r0 = (r5 + -20);
}

loc_803A3080:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_803A30A0;
    }
}

loc_803A3084:
{
}

loc_803A3088:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(23))) {
        goto loc_803A3094;
    }
}

loc_803A308C:
{
}

loc_803A3090:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(73))) {
        goto loc_803A30A8;
    }
}

loc_803A3094:
{
    r0 = MemoryInline::FlatRead32((r13 + -17180));
    MemoryInline::FlatWrite32((r3 + 32), r0);
    goto loc_803A30A8;
}

loc_803A30A0:
{
    r0 = MemoryInline::FlatRead32((r13 + -17184));
    MemoryInline::FlatWrite32((r3 + 32), r0);
}

loc_803A30A8:
{
    r9 = 0;
    r6 = 0;
    goto loc_803A30EC;
}

loc_803A30B4:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
}

loc_803A30BC:
{
    if ((static_cast<int32_t>(r7) > static_cast<int32_t>(r0))) {
        goto loc_803A30E4;
    }
}

loc_803A30C0:
{
}

loc_803A30C4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r8))) {
        goto loc_803A30E4;
    }
}

loc_803A30C8:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r5 = (r3 + r0);
    MemoryInline::FlatWrite16((r5 + 16), static_cast<uint16_t>(r9));
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r0));
}

loc_803A30E4:
{
    r6 = (r6 + 4);
    r9 = (r9 + 1);
}

loc_803A30EC:
{
    r5 = MemoryInline::FlatRead32((r3 + 32));
    r5_addr_2 = (r5 + r6);
    r0 = MemoryInline::FlatRead32(r5_addr_2);
}

loc_803A30F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803A30B4;
    }
}

loc_803A30FC:
{
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_803A3108:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r5))) {
        goto loc_803A3118;
    }
}

loc_803A310C:
{
    r0 = (r5 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
}

loc_803A3118:
{
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r9));
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r4));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r9)));
    r4 = 5;
    // inline leaf 0x802A8F78 (15 guest instruction(s))
}

loc_inl0_0x802A8F78:
{
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_inl0_0x802A8F80:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x802A8F8C;
    }
}

loc_inl0_0x802A8F84:
{
    r3 = 1;
    goto loc_inl0_cont_802A8F78;
}

loc_inl0_0x802A8F8C:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r5));
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 * r5);
    r0 = (r4 - r0);
}

loc_inl0_0x802A8FA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x802A8FA8:
{
    r0 = (r3 + 1);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_inl0_cont_802A8F78;
}

loc_inl0_return:
{
}

loc_inl0_cont_802A8F78:
{
    // end of inlined leaf 0x802A8F78
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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

extern "C" void func_803A303C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A303C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000023FB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A303C func_803A303C preserves=true fpr_mask=0x00000000
