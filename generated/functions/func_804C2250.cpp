#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804C2250_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r9_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x804C2250u);
    goto loc_804C2250;

loc_804C2250:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r8 = MemoryInline::FlatRead32((r4 + 8));
    r30 = (r6 + r5);
    r6 = MemoryInline::FlatRead16((r4 + 2));
    r29 = (r5 + -16);
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_804C227C:
{
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r9 = (r9_rot_0 & 127);
    r10 = MemoryInline::FlatRead32((r4 + 12));
    r6 = (r4 + r0);
    r27 = r5;
    r26 = r3;
    r28 = r7;
    r31 = r29;
    r5 = (r4 - r9);
    r6 = (r6 + 16);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804C22AC;
    }
}

loc_804C22A4:
{
    MemoryInline::FlatWrite32((r8 + 12), r10);
    goto loc_804C22B0;
}

loc_804C22AC:
{
    MemoryInline::FlatWrite32(r3, r10);
}

loc_804C22B0:
{
}

loc_804C22B4:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_804C22C0;
    }
}

loc_804C22B8:
{
    MemoryInline::FlatWrite32((r10 + 8), r8);
    goto loc_804C22C4;
}

loc_804C22C0:
{
    MemoryInline::FlatWrite32((r3 + 4), r8);
}

loc_804C22C4:
{
    r0 = (r29 - r5);
}

loc_804C22CC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(20))) {
        goto loc_804C22E4;
    }
}

loc_804C22D0:
{
}

loc_804C22D4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_804C22EC;
    }
}

loc_804C22D8:
{
    r0 = MemoryInline::FlatRead16((r3 + 18));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 1);
}

loc_804C22E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804C22EC;
    }
}

loc_804C22E4:
{
    r31 = r5;
    goto loc_804C2348;
}

loc_804C22EC:
{
    r0 = 18002;
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r4 = 0;
}

loc_804C22FC:
{
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r4));
    r0 = (r5 + 16);
    r0 = (r29 - r0);
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32((r5 + 12), r4);
    MemoryInline::FlatWrite32((r5 + 8), r8);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804C2324;
    }
}

loc_804C2318:
{
    r4 = MemoryInline::FlatRead32((r8 + 12));
    MemoryInline::FlatWrite32((r8 + 12), r5);
    goto loc_804C232C;
}

loc_804C2324:
{
    r4 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32(r3, r5);
}

loc_804C232C:
{
}

loc_804C2330:
{
    MemoryInline::FlatWrite32((r5 + 12), r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C2340;
    }
}

loc_804C2338:
{
    MemoryInline::FlatWrite32((r4 + 8), r5);
    goto loc_804C2344;
}

loc_804C2340:
{
    MemoryInline::FlatWrite32((r3 + 4), r5);
}

loc_804C2344:
{
    r8 = r5;
}

loc_804C2348:
{
    r0 = (r6 - r30);
}

loc_804C2350:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(20))) {
        goto loc_804C2368;
    }
}

loc_804C2354:
{
}

loc_804C2358:
{
    if ((static_cast<uint32_t>(r7) != static_cast<uint32_t>(1))) {
        goto loc_804C2370;
    }
}

loc_804C235C:
{
    r0 = MemoryInline::FlatRead16((r3 + 18));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_5 & 1);
}

loc_804C2364:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804C2370;
    }
}

loc_804C2368:
{
    r30 = r6;
    goto loc_804C23C8;
}

loc_804C2370:
{
    r0 = 18002;
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r0));
    r4 = 0;
}

loc_804C2380:
{
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r4));
    r0 = (r30 + 16);
    r0 = (r6 - r0);
    MemoryInline::FlatWrite32((r30 + 4), r0);
    MemoryInline::FlatWrite32((r30 + 12), r4);
    MemoryInline::FlatWrite32((r30 + 8), r8);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804C23A8;
    }
}

loc_804C239C:
{
    r4 = MemoryInline::FlatRead32((r8 + 12));
    MemoryInline::FlatWrite32((r8 + 12), r30);
    goto loc_804C23B0;
}

loc_804C23A8:
{
    r4 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32(r3, r30);
}

loc_804C23B0:
{
}

loc_804C23B4:
{
    MemoryInline::FlatWrite32((r30 + 12), r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C23C4;
    }
}

loc_804C23BC:
{
    MemoryInline::FlatWrite32((r4 + 8), r30);
    goto loc_804C23C8;
}

loc_804C23C4:
{
    MemoryInline::FlatWrite32((r3 + 4), r30);
}

loc_804C23C8:
{
    r0 = MemoryInline::FlatRead32((r3 + -4));
    r5 = (r30 - r31);
    r0 = (r0 & 1);
}

loc_804C23D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804C23E4;
    }
}

loc_804C23D8:
{
    r3 = r31;
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804C23E4:
{
    r5 = 0;
    r4 = (r29 + 16);
    r3 = r5;
    r6 = 21828;
    r4 = (r30 - r4);
    r0 = (r29 - r31);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(15));
    r3_mrot_0 = (r3_rot_0 & 32768);
    r3_mdest_0 = (r3 & -32769);
    r3 = (r3_mdest_0 | r3_mrot_0);
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r29, static_cast<uint16_t>(r6));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3_mrot_1 = (r3_rot_1 & 32512);
    r3_mdest_1 = (r3 & -32513);
    r3 = (r3_mdest_1 | r3_mrot_1);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r29 + 4), r4);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r29 + 8), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r29 + 12), r5);
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r29 + 2), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r26 + 16));
    r3_mrot_2 = (r0 & 255);
    r3_mdest_2 = (r3 & -256);
    r3 = (r3_mdest_2 | r3_mrot_2);
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r29 + 2), static_cast<uint16_t>(r3));
    r4 = MemoryInline::FlatRead32((r26 + 12));
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r29 + 8), r4);
}

loc_804C2430:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804C2440;
    }
}

loc_804C2434:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r4 + 12), r29);
    goto loc_804C2448;
}

loc_804C2440:
{
    r3 = MemoryInline::FlatRead32((r26 + 8));
    MemoryInline::FlatWrite32((r26 + 8), r29);
}

loc_804C2448:
{
}

loc_804C244C:
{
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r29 + 12), r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_804C245C;
    }
}

loc_804C2454:
{
    MemoryInline::FlatWrite32((r3 + 8), r29);
    goto loc_804C2460;
}

loc_804C245C:
{
    MemoryInline::FlatWrite32((r26 + 12), r29);
}

loc_804C2460:
{
    r11 = (r1 + 32);
    r3 = r27;
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804C2250(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804C2250_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000005FB gpr_write=0x00000F7B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804C2250 func_804C2250 preserves=true fpr_mask=0x00000000
