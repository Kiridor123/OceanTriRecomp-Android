#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8031FFB8(CpuContext* ctx);
extern "C" uint64_t func_8031FFB8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80320000_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r9_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80320000;

loc_80320000:
{
}

loc_80320004:
{
    if ((static_cast<int32_t>(r11) <= static_cast<int32_t>(8))) {
        goto loc_80320124;
    }
}

loc_80320008:
{
    r24 = 0;
    r27 = 0;
    r28 = 0;
    r11 = 0;
}

loc_8032001C:
{
    if ((static_cast<int32_t>(r25) > static_cast<int32_t>(r12))) {
        goto loc_8032002C;
    }
}

loc_80320020:
{
}

loc_80320024:
{
    if ((static_cast<int32_t>(r12) > static_cast<int32_t>(32766))) {
        goto loc_8032002C;
    }
}

loc_80320028:
{
    r11 = 1;
}

loc_8032002C:
{
}

loc_80320030:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_80320044;
    }
}

loc_80320034:
{
    r11 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
}

loc_8032003C:
{
    if ((static_cast<int32_t>(r11) > static_cast<int32_t>(32766))) {
        goto loc_80320044;
    }
}

loc_80320040:
{
    r28 = 1;
}

loc_80320044:
{
}

loc_80320048:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8032005C;
    }
}

loc_8032004C:
{
    r11 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
}

loc_80320054:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(-32768))) {
        goto loc_8032005C;
    }
}

loc_80320058:
{
    r27 = 1;
}

loc_8032005C:
{
}

loc_80320060:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_803200AC;
    }
}

loc_80320064:
{
    r25 = 1;
    r11 = (r30 & 65535);
    r11 = (static_cast<int32_t>(static_cast<int16_t>(r11)));
    r11 = (r11 & -32768);
    r12 = (static_cast<int32_t>(static_cast<int16_t>(r11)));
    r11 = (0 - r8);
    r11 = (r11 & -32768);
    r11 = (static_cast<int32_t>(static_cast<int16_t>(r11)));
}

loc_80320088:
{
    if ((static_cast<int32_t>(r12) != static_cast<int32_t>(r11))) {
        goto loc_803200A0;
    }
}

loc_8032008C:
{
    r6 = (r6 & -32768);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
}

loc_80320098:
{
    if ((static_cast<int32_t>(r12) == static_cast<int32_t>(r6))) {
        goto loc_803200A0;
    }
}

loc_8032009C:
{
    r25 = 0;
}

loc_803200A0:
{
}

loc_803200A4:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_803200AC;
    }
}

loc_803200A8:
{
    r24 = 1;
}

loc_803200AC:
{
}

loc_803200B0:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80320124;
    }
}

loc_803200B4:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
    r6 = (r6_rot_1 & -2);
    r12 = (r1 + 88);
    r12 = (r12 + r6);
    r11 = r12;
    goto loc_80320118;
}

loc_803200CC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r12 + 2), 0, 16u, true, false);
    r6 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r12 + 2));
    guest_range_2 = MemoryInline::ResolveRangeHost(r11, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_2, 0u, r11, static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r12 + 4));
    MemoryInline::WriteResolved16(guest_range_2, 2u, (r11 + 2), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r12 + 6));
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r11 + 4), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r12 + 8));
    MemoryInline::WriteResolved16(guest_range_2, 6u, (r11 + 6), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r12 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 8u, (r11 + 8), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r12 + 12));
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r11 + 10), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r12 + 14));
    MemoryInline::WriteResolved16(guest_range_2, 12u, (r11 + 12), static_cast<uint16_t>(r6));
    r6 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r12 + 16));
    MemoryInline::WriteResolved16(guest_range_2, 14u, (r11 + 14), static_cast<uint16_t>(r6));
    r12 = (r12 + 16);
    r11 = (r11 + 16);
    r8 = (r8 + 8);
}

loc_80320118:
{
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
}

loc_80320120:
{
    if ((static_cast<int32_t>(r6) < static_cast<int32_t>(r4))) {
        goto loc_803200CC;
    }
}

loc_80320124:
{
    r11 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r11), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & -2);
    r24 = (r1 + 88);
    r24 = (r24 + r4);
    r12 = r24;
    r6 = (r30 & 65535);
    r4 = (r6 - r11);
    ctr = r4;
}

loc_80320148:
{
    if ((static_cast<int32_t>(r11) >= static_cast<int32_t>(r6))) {
        goto loc_80320164;
    }
}

loc_8032014C:
{
    r4 = MemoryInline::FlatRead16((r24 + 2));
    MemoryInline::FlatWrite16(r12, static_cast<uint16_t>(r4));
    r24 = (r24 + 2);
    r12 = (r12 + 2);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8032014C;
    }
}

loc_80320164:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r8)));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & -2);
    r9_addr_0 = (r9 + r4);
    MemoryInline::FlatWrite16(r9_addr_0, static_cast<uint16_t>(r10));
    r30 = (r30 + -1);
}

loc_80320184:
{
    r5 = (r5 + 2);
    r7 = (r7 + 1);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
}

loc_80320194:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8031FFB8;
    }
}

loc_80320198:
{
    r9 = r29;
    r5 = 0;
    r4 = (r26 & 65535);
    goto loc_803201E0;
}

loc_803201A8:
{
    r8 = 0;
    r7 = (r1 + 28);
    ctr = r4;
}

loc_803201B8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_803201DC;
    }
}

loc_803201BC:
{
    r6 = MemoryInline::FlatRead16(r9);
    r0 = MemoryInline::FlatRead16(r7);
}

loc_803201C8:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_803201D0;
    }
}

loc_803201CC:
{
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r5));
}

loc_803201D0:
{
    r7 = (r7 + 2);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803201BC;
    }
}

loc_803201DC:
{
    r9 = (r9 + 2);
}

loc_803201E0:
{
    r0 = MemoryInline::FlatRead16(r9);
}

loc_803201E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803201A8;
    }
}

loc_803201EC:
{
    r27 = 0;
    r5 = 0;
    r4 = (r1 + 28);
}

loc_803201F8:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_80320200:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80320354;
    }
}

loc_80320204:
{
    r6 = r5;
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_80320210:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(29))) {
        goto loc_80320358;
    }
}

loc_80320214:
{
    r10 = (29 - r5);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r10)));
}

loc_80320220:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_80320314;
    }
}

loc_80320224:
{
    r8 = 0;
    r9 = 0;
    r0 = 0;
}

loc_80320234:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(30))) {
        goto loc_8032023C;
    }
}

loc_80320238:
{
    r0 = 1;
}

loc_8032023C:
{
}

loc_80320240:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80320254;
    }
}

loc_80320244:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_8032024C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-32768))) {
        goto loc_80320254;
    }
}

loc_80320250:
{
    r9 = 1;
}

loc_80320254:
{
}

loc_80320258:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_80320294;
    }
}

loc_8032025C:
{
    r7 = 1;
    r0 = (0 - r5);
    r0 = (r0 & -32768);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80320270:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80320288;
    }
}

loc_80320274:
{
    r0 = (r10 & -32768);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80320280:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80320288;
    }
}

loc_80320284:
{
    r7 = 0;
}

loc_80320288:
{
}

loc_8032028C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_80320294;
    }
}

loc_80320290:
{
    r8 = 1;
}

loc_80320294:
{
}

loc_80320298:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80320314;
    }
}

loc_8032029C:
{
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r9 = (r1 + 28);
    r9 = (r9 + r0);
    r8 = r9;
    r0 = (28 - r7);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_3 & 536870911);
    ctr = r0;
}

loc_803202C0:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(21))) {
        goto loc_80320314;
    }
}

loc_803202C4:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r9 + 2), 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_3, 0u, (r9 + 2));
    guest_range_4 = MemoryInline::ResolveRangeHost(r8, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_4, 0u, r8, static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 2u, (r9 + 4));
    MemoryInline::WriteResolved16(guest_range_4, 2u, (r8 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 4u, (r9 + 6));
    MemoryInline::WriteResolved16(guest_range_4, 4u, (r8 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 6u, (r9 + 8));
    MemoryInline::WriteResolved16(guest_range_4, 6u, (r8 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 8u, (r9 + 10));
    MemoryInline::WriteResolved16(guest_range_4, 8u, (r8 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 10u, (r9 + 12));
    MemoryInline::WriteResolved16(guest_range_4, 10u, (r8 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 12u, (r9 + 14));
    MemoryInline::WriteResolved16(guest_range_4, 12u, (r8 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_3, 14u, (r9 + 16));
    MemoryInline::WriteResolved16(guest_range_4, 14u, (r8 + 14), static_cast<uint16_t>(r0));
    r9 = (r9 + 16);
    r8 = (r8 + 16);
    r6 = (r6 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803202C4;
    }
}

loc_80320314:
{
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r9 = (r1 + 28);
    r9 = (r9 + r0);
    r8 = r9;
    r0 = (29 - r7);
    ctr = r0;
}

loc_80320334:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(29))) {
        goto loc_80320358;
    }
}

loc_80320338:
{
    r0 = MemoryInline::FlatRead16((r9 + 2));
    MemoryInline::FlatWrite16(r8, static_cast<uint16_t>(r0));
    r9 = (r9 + 2);
    r8 = (r8 + 2);
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80320338;
    }
}

loc_80320350:
{
    goto loc_80320358;
}

loc_80320354:
{
    r27 = (r27 + 1);
}

loc_80320358:
{
    r4 = (r4 + 2);
    r5 = (r5 + 1);
}

loc_80320364:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(29))) {
        goto loc_803201F8;
    }
}

loc_80320368:
{
    r3 = (r3 & 65535);
    // inline leaf 0x800CEF7C (18 guest instruction(s))
}

loc_inl0_0x800CEF7C:
{
    r0 = (r3 & 65535);
}

loc_inl0_0x800CEF84:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800CEF8C;
    }
}

loc_inl0_0x800CEF88:
{
    r0 = 1;
}

loc_inl0_0x800CEF8C:
{
    r5 = (r0 * 176);
    r3 = 11337728;
    r0 = (r3 + 30009);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_7 & 2147483647);
    r0 = (r0 + r3);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r4 = (r4_rot_2 & 131071);
    r3 = 65536;
    r0 = (r3 + -173);
    r0 = (r4 * r0);
    r0 = (r5 - r0);
    r3 = (r0 & 65535);
}

loc_inl0_cont_800CEF7C:
{
    // end of inlined leaf 0x800CEF7C
    r4 = (r3 & 65535);
    r3 = (r27 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r3 = (r1 + 28);
    r3_addr_0 = (r3 + r0);
    r5 = MemoryInline::FlatRead16(r3_addr_0);
    r3 = (r30 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r3 = (r1 + 88);
    r3_addr_1 = (r3 + r0);
    r6 = MemoryInline::FlatRead16(r3_addr_1);
    r4 = 0;
    r3 = r29;
    r0 = (r31 & 65535);
    ctr = r0;
}

loc_803203C0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_803203EC;
    }
}

loc_803203C4:
{
    r0 = MemoryInline::FlatRead16(r3);
}

loc_803203CC:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_803203E0;
    }
}

loc_803203D0:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r29_addr_1 = (r29 + r0);
    MemoryInline::FlatWrite16(r29_addr_1, static_cast<uint16_t>(r5));
    goto loc_803203EC;
}

loc_803203E0:
{
    r3 = (r3 + 2);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803203C4;
    }
}

loc_803203EC:
{
    r11 = (r1 + 192);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r11 + -4));
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8031FFB8:
{
    if constexpr (KnownRegArgsCpuCall<0x8031FFB8u>(&func_8031FFB8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        const auto regargs_result_8031FFB8_4EA6 = func_8031FFB8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8031FFB8_4EA6);
        r4 = static_cast<uint32_t>(regargs_result_8031FFB8_4EA6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[9] = r9;
        ctx->gpr[10] = r10;
        ctx->gpr[11] = r11;
        ctx->gpr[12] = r12;
        ctx->gpr[23] = r23;
        ctx->gpr[24] = r24;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8031FFB8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r9 = ctx->gpr[9];
        r10 = ctx->gpr[10];
        r11 = ctx->gpr[11];
        r12 = ctx->gpr[12];
        r23 = ctx->gpr[23];
        r24 = ctx->gpr[24];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        ctr = ctx->ctr;
    }
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80320000(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80320000_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0xFF001FFB gpr_write=0xFF801FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80320000 func_80320000 preserves=true fpr_mask=0x00000000
