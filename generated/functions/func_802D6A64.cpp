#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D7804(CpuContext* ctx);
extern "C" uint32_t func_802D7804_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802D6A64_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802D6A64;

loc_802D6A64:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r29 = r3;
    r30 = 0;
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 1044), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead8((r3 + 1014));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r0 = (r4 + r5);
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r1 + 8), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r3 + 1015));
    r0 = (r3 + r5);
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r1 + 10), static_cast<uint16_t>(r0));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r0 = (r3 + r5);
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r1 + 12), static_cast<uint16_t>(r0));
    r0 = (r4 + r5);
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r1 + 14), static_cast<uint16_t>(r0));
    r31 = 0;
    r25 = (r1 + 8);
    r3 = 0x805D0000u;
    r26 = (r3 + 18768);
    r3 = 0x805D0000u;
    r27 = (r3 + 18784);
    r3 = 0x805D0000u;
    r28 = (r3 + 18800);
}

loc_802D6AE8:
{
    r0 = (r31 & 255);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & -2);
    r25_addr_2 = (r25 + r3);
    r4 = MemoryInline::FlatRead16(r25_addr_2);
    r5 = (r29 + r0);
    r26_addr_2 = (r26 + r4);
    r0 = MemoryInline::FlatRead8(r26_addr_2);
    MemoryInline::FlatWrite8((r5 + 1016), static_cast<uint8_t>(r0));
    r27_addr_2 = (r27 + r4);
    r0 = MemoryInline::FlatRead8(r27_addr_2);
    MemoryInline::FlatWrite8((r5 + 1020), static_cast<uint8_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r28_addr_2 = (r28 + r0);
    r0 = MemoryInline::FlatRead16(r28_addr_2);
    r3 = (r29 + r3);
    MemoryInline::FlatWrite16((r3 + 1024), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead8((r5 + 1020));
    if constexpr (KnownRegArgsCpuCall<0x802D7804u>(&func_802D7804)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D7804_FFF = func_802D7804_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802D7804_FFF;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x802D7804u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r4 = (r3 & 255);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_802D6B30:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(r0))) {
        goto loc_802D6B38;
    }
}

loc_802D6B34:
{
    r30 = r4;
}

loc_802D6B38:
{
    r31 = (r31 + 1);
}

loc_802D6B40:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(4))) {
        goto loc_802D6AE8;
    }
}

loc_802D6B44:
{
    r3 = (r30 & 255);
    // inline leaf 0x802D7840 (10 guest instruction(s))
}

loc_inl1_0x802D7840:
{
    r0 = (r3 & 255);
}

loc_inl1_0x802D7848:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_inl1_0x802D7860;
    }
}

loc_inl1_0x802D784C:
{
}

loc_inl1_0x802D7850:
{
    r3 = 30;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x802D7858:
{
    r3 = 70;
    goto loc_inl1_cont_802D7840;
}

loc_inl1_0x802D7860:
{
    r3 = 50;
    goto loc_inl1_cont_802D7840;
}

loc_inl1_return:
{
}

loc_inl1_cont_802D7840:
{
    // end of inlined leaf 0x802D7840
    MemoryInline::FlatWrite16((r29 + 1044), static_cast<uint16_t>(r3));
    r3 = MemoryInline::FlatRead16((r29 + 1024));
    r0 = MemoryInline::FlatRead16((r29 + 1026));
    r0 = (r3 | r0);
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r29 + 1028));
    r0 = (r3 | r0);
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead16((r29 + 1030));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite16((r29 + 1012), static_cast<uint16_t>(r0));
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D6A64(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D6A64_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D6A64 func_802D6A64 preserves=true fpr_mask=0x00000000
