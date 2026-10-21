#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803AB08C(CpuContext* ctx);
extern "C" uint32_t func_803AB08C_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_802D8B20_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802D8B20u);
    goto loc_802D8B20;

loc_802D8B20:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r31 = 0;
    r3 = 0x806C0000u;
    r30 = (r3 + -2080);
    ctx->lr = 0x802D8B54u;
    if constexpr (KnownRegArgsCpuCall<0x803AB08Cu>(&func_803AB08C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803AB08C_76E = func_803AB08C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AB08C_76E;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AB08Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D8B58:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802D8B64;
    }
}

loc_802D8B5C:
{
    r3 = 0;
    goto loc_802D8D0C;
}

loc_802D8B64:
{
    r3 = r30;
    // inline leaf 0x802D94F0 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 1155));
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_1 & 134217727);
    // end of inlined leaf 0x802D94F0
}

loc_802D8B70:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D8B7C;
    }
}

loc_802D8B74:
{
    r3 = 0;
    goto loc_802D8D0C;
}

loc_802D8B7C:
{
    r6 = 0;
    r3 = 0x805D0000u;
    r0 = (r3 + 19544);
    r3 = 5;
    ctr = r3;
}

loc_802D8B90:
{
    r3 = (r6 & 255);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r7 = (r7_rot_2 & -2);
    r4 = (r28 + r7);
    r3 = (r0 + r7);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 16u, true, false);
    r8 = MemoryInline::ReadResolved16(guest_range_0, 0u, r3);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 16u, true, false);
    r5 = MemoryInline::ReadResolved16(guest_range_1, 0u, r4);
    r5 = (r8 * r5);
    r5 = (r5 & 65535);
    r31 = (r31 + r5);
    r5 = (r29 + r7);
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 16u, true, false);
    r7 = MemoryInline::ReadResolved16(guest_range_2, 0u, r5);
    r7 = (r8 * r7);
    r7 = (r7 & 65535);
    r31 = (r31 + r7);
    r8 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r3 + 2));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r4 + 2));
    r7 = (r8 * r7);
    r7 = (r7 & 65535);
    r31 = (r31 + r7);
    r7 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r5 + 2));
    r7 = (r8 * r7);
    r7 = (r7 & 65535);
    r31 = (r31 + r7);
    r8 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r3 + 4));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r4 + 4));
    r7 = (r8 * r7);
    r7 = (r7 & 65535);
    r31 = (r31 + r7);
    r7 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r5 + 4));
    r7 = (r8 * r7);
    r7 = (r7 & 65535);
    r31 = (r31 + r7);
    r8 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r3 + 6));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r4 + 6));
    r7 = (r8 * r7);
    r7 = (r7 & 65535);
    r31 = (r31 + r7);
    r7 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r5 + 6));
    r7 = (r8 * r7);
    r7 = (r7 & 65535);
    r31 = (r31 + r7);
    r8 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r3 + 8));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r4 + 8));
    r7 = (r8 * r7);
    r7 = (r7 & 65535);
    r31 = (r31 + r7);
    r7 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r5 + 8));
    r7 = (r8 * r7);
    r7 = (r7 & 65535);
    r31 = (r31 + r7);
    r8 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r3 + 10));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    r7 = (r8 * r7);
    r7 = (r7 & 65535);
    r31 = (r31 + r7);
    r7 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r5 + 10));
    r7 = (r8 * r7);
    r7 = (r7 & 65535);
    r31 = (r31 + r7);
    r8 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r3 + 12));
    r7 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r4 + 12));
    r7 = (r8 * r7);
    r7 = (r7 & 65535);
    r31 = (r31 + r7);
    r7 = MemoryInline::ReadResolved16(guest_range_2, 12u, (r5 + 12));
    r7 = (r8 * r7);
    r7 = (r7 & 65535);
    r31 = (r31 + r7);
    r7 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r3 + 14));
    r3 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r4 + 14));
    r3 = (r7 * r3);
    r3 = (r3 & 65535);
    r31 = (r31 + r3);
    r3 = MemoryInline::ReadResolved16(guest_range_2, 14u, (r5 + 14));
    r3 = (r7 * r3);
    r3 = (r3 & 65535);
    r31 = (r31 + r3);
    r6 = (r6 + 8);
    r3 = (r6 & 255);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802D8B90;
    }
}

loc_802D8CD0:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r3 = 0x805D0000u;
    r3 = (r3 + 19544);
    r3_addr_1 = (r3 + r4);
    r3 = MemoryInline::FlatRead16(r3_addr_1);
    r28_addr_1 = (r28 + r4);
    r0 = MemoryInline::FlatRead16(r28_addr_1);
    r0 = (r3 * r0);
    r0 = (r0 & 65535);
    r31 = (r31 + r0);
    r29_addr_1 = (r29 + r4);
    r0 = MemoryInline::FlatRead16(r29_addr_1);
    r0 = (r3 * r0);
    r0 = (r0 & 65535);
    r31 = (r31 + r0);
    r0 = MemoryInline::FlatRead16((r30 + 836));
    r31 = (r31 + r0);
    r3 = r31;
}

loc_802D8D0C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D8B20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D8B20_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D8B20 func_802D8B20 preserves=true fpr_mask=0x00000000
