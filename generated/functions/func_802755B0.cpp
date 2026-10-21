#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80043BAC(CpuContext* ctx);
extern "C" uint32_t func_80043BAC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802755B0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802755B0u);
    goto loc_802755B0;

loc_802755B0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r27 = r3;
    r28 = r4;
    r3 = 1;
    // inline leaf 0x800CEF20 (23 guest instruction(s))
}

loc_inl1_0x800CEF20:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r6 = (r4 + r0);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_inl1_0x800CEF38:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CEF40;
    }
}

loc_inl1_0x800CEF3C:
{
    r0 = 1;
}

loc_inl1_0x800CEF40:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_0 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
    MemoryInline::FlatWriteRam16((r6 + 24), static_cast<uint16_t>(r3));
}

loc_inl1_cont_800CEF20:
{
    // end of inlined leaf 0x800CEF20
    r4 = (r3 & 65535);
    r3 = 1717960704;
    r0 = (r3 + 26215);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 5);
    r0 = (r4 - r0);
    r29 = (r0 & 65535);
    r30 = 0;
    r3 = 0x805C0000u;
    r31 = (r3 + 26728);
    r3 = 0x80660000u;
    r26 = (r3 + -18480);
}

loc_80275610:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x80043BACu>(&func_80043BAC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_80043BAC_D82 = func_80043BAC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80043BAC_D82;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80043BACu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_80275620:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80275630;
    }
}

loc_80275624:
{
}

loc_80275628:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8027569C;
    }
}

loc_8027562C:
{
    goto loc_80275704;
}

loc_80275630:
{
    r3 = MemoryInline::FlatRead16((r31 + 4));
}

loc_80275638:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(4))) {
        goto loc_80275654;
    }
}

loc_8027563C:
{
    r0 = MemoryInline::FlatRead16((r26 + 260));
    r0 = (r0 & r3);
}

loc_80275648:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80275704;
    }
}

loc_8027564C:
{
    r29 = (r30 & 65535);
    goto loc_80275704;
}

loc_80275654:
{
}

loc_80275658:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(8))) {
        goto loc_80275684;
    }
}

loc_8027565C:
{
    r0 = MemoryInline::FlatRead16((r26 + 260));
    r0 = (r0 & r3);
}

loc_80275668:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80275704;
    }
}

loc_8027566C:
{
    r0 = MemoryInline::FlatRead16((r26 + 252));
    r0 = (r0 & 4);
}

loc_80275678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80275704;
    }
}

loc_8027567C:
{
    r29 = (r30 & 65535);
    goto loc_80275704;
}

loc_80275684:
{
    r0 = MemoryInline::FlatRead16((r26 + 252));
    r0 = (r0 & r3);
}

loc_80275690:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80275704;
    }
}

loc_80275694:
{
    r29 = (r30 & 65535);
    goto loc_80275704;
}

loc_8027569C:
{
    r3 = MemoryInline::FlatRead16((r31 + 6));
}

loc_802756A4:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(4))) {
        goto loc_802756C0;
    }
}

loc_802756A8:
{
    r0 = MemoryInline::FlatRead16((r26 + 222));
    r0 = (r0 & r3);
}

loc_802756B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80275704;
    }
}

loc_802756B8:
{
    r29 = (r30 & 65535);
    goto loc_80275704;
}

loc_802756C0:
{
}

loc_802756C4:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(8))) {
        goto loc_802756F0;
    }
}

loc_802756C8:
{
    r0 = MemoryInline::FlatRead16((r26 + 222));
    r0 = (r0 & r3);
}

loc_802756D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80275704;
    }
}

loc_802756D8:
{
    r0 = MemoryInline::FlatRead16((r26 + 214));
    r0 = (r0 & 136);
}

loc_802756E0:
{
}

loc_802756E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80275704;
    }
}

loc_802756E8:
{
    r29 = (r30 & 65535);
    goto loc_80275704;
}

loc_802756F0:
{
    r0 = MemoryInline::FlatRead16((r26 + 214));
    r0 = (r0 & r3);
}

loc_802756FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80275704;
    }
}

loc_80275700:
{
    r29 = (r30 & 65535);
}

loc_80275704:
{
    r31 = (r31 + 8);
    r30 = (r30 + 1);
}

loc_80275710:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(11))) {
        goto loc_80275610;
    }
}

loc_80275714:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = 0x805C0000u;
    r3 = (r3 + 26728);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_0);
    MemoryInline::FlatWrite16(r27, static_cast<uint16_t>(r0));
    r0 = (r4 + 1);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_1);
    MemoryInline::FlatWrite16(r28, static_cast<uint16_t>(r0));
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802755B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802755B0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802755B0 func_802755B0 preserves=true fpr_mask=0x00000000
