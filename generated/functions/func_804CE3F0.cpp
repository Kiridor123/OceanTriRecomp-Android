#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804CE3F0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r25_addic_src_0 = 0;
    uint32_t r25_addic_src_1 = 0;
    uint32_t r25_addic_src_2 = 0;
    uint32_t r25_addic_src_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_804CE3F0;

loc_804CE3F0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r4;
    r29 = r5;
    r30 = r3;
    r4 = 0;
    r5 = 8192;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804CE420:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_804CE430;
    }
}

loc_804CE424:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 8), r0);
    goto loc_804CE554;
}

loc_804CE430:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r31 = r25;
    r26 = (r30 + 8192);
    r28 = (r29 + r0);
    goto loc_804CE46C;
}

loc_804CE444:
{
    r27 = MemoryInline::FlatRead32(r28);
    r3 = r27;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80456C40_C03 = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_C03);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_C03 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 + 1);
    r4 = r27;
    r26 = (r26 - r0);
    r3 = r26;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        const auto regargs_result_8045FBD4_F71 = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_F71;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
        ctr = ctx->ctr;
        xer = ctx->xer;
    }
    r0 = (r26 - r30);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_804CE46C:
{
    r25_addic_src_2 = r25;
    r25 = (r25_addic_src_2 + -1);
}

loc_804CE470:
{
    r28 = (r28 + -4);
    if ((static_cast<int32_t>(r25) >= static_cast<int32_t>(0))) {
        goto loc_804CE444;
    }
}

loc_804CE478:
{
    r3 = (r31 + 1);
}

loc_804CE47C:
{
    r0 = (r26 - r30);
    r4 = (r0 & -4);
    r7 = 0;
    r6 = (r30 + r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r6 = (r6 - r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804CE544;
    }
}

loc_804CE498:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
}

loc_804CE49C:
{
    r3 = (r31 + -7);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_804CE510;
    }
}

loc_804CE4A4:
{
    r0 = (r3 + 7);
    r4 = r29;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
    r5 = r6;
    ctr = r0;
}

loc_804CE4BC:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_804CE510;
    }
}

loc_804CE4C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r7 = (r7 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r5, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, r5, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r5 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r5 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r5 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r5 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r5 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r5 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    r4 = (r4 + 32);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r5 + 28), r0);
    r5 = (r5 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804CE4C0;
    }
}

loc_804CE510:
{
    r3 = (r31 + 1);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    r0 = (r3 - r7);
    r4 = (r29 + r5);
    r5 = (r6 + r5);
    ctr = r0;
}

loc_804CE52C:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(r3))) {
        goto loc_804CE544;
    }
}

loc_804CE530:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = (r4 + 4);
    MemoryInline::FlatWrite32(r5, r0);
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804CE530;
    }
}

loc_804CE544:
{
    MemoryInline::FlatWrite32((r6 + -4), r31);
    r0 = (r6 + -4);
    r0 = (r0 - r30);
    MemoryInline::FlatWrite32((r30 + 8), r0);
}

loc_804CE554:
{
    r11 = (r1 + 48);
    r3 = 1;
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804CE3F0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804CE3F0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804CE3F0 func_804CE3F0 preserves=true fpr_mask=0x00000000
