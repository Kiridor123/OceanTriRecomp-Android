#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802BF74C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    goto loc_802BF74C;

loc_802BF74C:
{
    r6 = 0;
    r5 = r3;
    r4 = (r4 & 65535);
    r0 = 2;
    ctr = r0;
}

loc_802BF760:
{
    r0 = MemoryInline::FlatRead8((r5 + 4));
}

loc_802BF768:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BF788;
    }
}

loc_802BF76C:
{
    r0 = MemoryInline::FlatRead16((r5 + 6));
}

loc_802BF774:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802BF788;
    }
}

loc_802BF778:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r0 = (r0_rot_0 & -32);
    r3 = (r3 + r0);
    r3 = (r3 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802BF788:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8((r5 + 36));
}

loc_802BF794:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BF7B4;
    }
}

loc_802BF798:
{
    r0 = MemoryInline::FlatRead16((r5 + 38));
}

loc_802BF7A0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802BF7B4;
    }
}

loc_802BF7A4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r0 = (r0_rot_1 & -32);
    r3 = (r3 + r0);
    r3 = (r3 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802BF7B4:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8((r5 + 68));
}

loc_802BF7C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BF7E0;
    }
}

loc_802BF7C4:
{
    r0 = MemoryInline::FlatRead16((r5 + 70));
}

loc_802BF7CC:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802BF7E0;
    }
}

loc_802BF7D0:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & -32);
    r3 = (r3 + r0);
    r3 = (r3 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802BF7E0:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8((r5 + 100));
}

loc_802BF7EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BF80C;
    }
}

loc_802BF7F0:
{
    r0 = MemoryInline::FlatRead16((r5 + 102));
}

loc_802BF7F8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802BF80C;
    }
}

loc_802BF7FC:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r0 = (r0_rot_3 & -32);
    r3 = (r3 + r0);
    r3 = (r3 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802BF80C:
{
    r6 = (r6 + 1);
    r0 = MemoryInline::FlatRead8((r5 + 132));
}

loc_802BF818:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802BF838;
    }
}

loc_802BF81C:
{
    r0 = MemoryInline::FlatRead16((r5 + 134));
}

loc_802BF824:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802BF838;
    }
}

loc_802BF828:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & -32);
    r3 = (r3 + r0);
    r3 = (r3 + 4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802BF838:
{
    r5 = (r5 + 160);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802BF760;
    }
}

loc_802BF844:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802BF74C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802BF74C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802BF74C func_802BF74C preserves=true fpr_mask=0x00000000
