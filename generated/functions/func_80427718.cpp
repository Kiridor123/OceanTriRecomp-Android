#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80425B88(CpuContext* ctx);
extern "C" uint64_t func_80425B88_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80427718_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80427718u);
    goto loc_80427718;

loc_80427718:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = r7;
    if constexpr (KnownRegArgsCpuCall<0x80425B88u>(&func_80425B88)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_80425B88_702 = func_80425B88_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80425B88_702);
        r4 = static_cast<uint32_t>(regargs_result_80425B88_702 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x80425B88u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        ctr = ctx->ctr;
    }
    r7 = r3;
}

loc_8042774C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80427758;
    }
}

loc_80427750:
{
    r3 = 0;
    goto loc_80427868;
}

loc_80427758:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 1), 0, 31u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 1), static_cast<uint8_t>(r27));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 3u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 3u, (r3 + 4), r28);
        MemoryInline::WriteResolved32(guest_range_0, 7u, (r3 + 8), r29);
    }
    MemoryInline::WriteResolved32(guest_range_0, 11u, (r3 + 12), r30);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 15u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 15u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 19u, (r3 + 20), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 23u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 23u, (r3 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 27u, (r3 + 28), r0);
    }
}

loc_80427780:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80427864;
    }
}

loc_80427784:
{
}

loc_80427788:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80427864;
    }
}

loc_8042778C:
{
}

loc_80427790:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(4))) {
        goto loc_80427798;
    }
}

loc_80427794:
{
    r30 = 4;
}

loc_80427798:
{
    r8 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_804277A0:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_80427864;
    }
}

loc_804277A4:
{
    r5 = (r30 + -8);
}

loc_804277AC:
{
    if ((static_cast<int32_t>(r30) <= static_cast<int32_t>(8))) {
        goto loc_80427838;
    }
}

loc_804277B0:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_804277CC;
    }
}

loc_804277B8:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_804277C4:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r0))) {
        goto loc_804277CC;
    }
}

loc_804277C8:
{
    r6 = 1;
}

loc_804277CC:
{
}

loc_804277D0:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80427838;
    }
}

loc_804277D4:
{
    r0 = (r5 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_804277E4:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_80427838;
    }
}

loc_804277E8:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r31);
    guest_range_2 = MemoryInline::ResolveRangeHost((r7 + 16), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r7 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r31 + 4));
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r7 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r31 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r7 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r31 + 12));
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r7 + 28), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r31 + 16));
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r7 + 32), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r31 + 20));
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r7 + 36), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r31 + 24));
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r7 + 40), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r31 + 28));
    r31 = (r31 + 32);
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r7 + 44), r0);
    r7 = (r7 + 32);
    r8 = (r8 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804277E8;
    }
}

loc_80427838:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + r0);
    r0 = (r30 - r8);
    ctr = r0;
}

loc_8042784C:
{
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(r30))) {
        goto loc_80427864;
    }
}

loc_80427850:
{
    r0 = MemoryInline::FlatRead32(r31);
    r31 = (r31 + 4);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r3 = (r3 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80427850;
    }
}

loc_80427864:
{
    r3 = 1;
}

loc_80427868:
{
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80427718(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80427718_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80427718 func_80427718 preserves=true fpr_mask=0x00000000
