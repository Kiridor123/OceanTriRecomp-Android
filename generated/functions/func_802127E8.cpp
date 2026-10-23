#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802127E8_ra20_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];

    goto loc_802127E8;

loc_802127E8:
{
    r4 = 240;
}

loc_8021286C:
{
    r3 = 0;
    // inline leaf 0x80211E80 (19 guest instruction(s))
}

loc_inl0_0x80211E80:
{
    r0 = (r3 & 255);
}

loc_inl0_0x80211E88:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(5))) {
        goto loc_inl0_0x80211EA8;
    }
}

loc_inl0_0x80211E8C:
{
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r4 = (r4 & 65535);
    r3 = 0x805C0000u;
    r3 = (r3 + -25584);
    r3_addr_1 = (r3 + r5);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
}

loc_inl0_0x80211EA4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl0_0x80211EB8;
    }
}

loc_inl0_0x80211EA8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17204));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl0_cont_80211E80;
}

loc_inl0_0x80211EB8:
{
    r3 = MemoryInline::FlatRead32((r13 + -17204));
    r3_addr_2 = (r3 + r5);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
}

loc_inl0_cont_80211E80:
{
    // end of inlined leaf 0x80211E80
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802127E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802127E8_ra20_0_18_0(ctx, ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002020 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802127E8 func_802127E8 preserves=true fpr_mask=0x00000000
