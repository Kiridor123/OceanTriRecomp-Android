#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8052A270_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];

    goto loc_8052A270;

loc_8052A270:
{
}

loc_8052A274:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(18))) {
        goto loc_8052A284;
    }
}

loc_8052A278:
{
    r3 = 65536;
    r3 = (r3 + -1);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8052A284:
{
    r0 = (r5 * 28);
    r5 = MemoryInline::FlatRead32((r13 + -13336));
    r5 = (r5 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 2732), 0, 16u, true, false);
    r7 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r5 + 2732));
}

loc_8052A298:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8052A2A4;
    }
}

loc_8052A29C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8052A2A4:
{
}

loc_8052A2A8:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(4))) {
        goto loc_8052A2B8;
    }
}

loc_8052A2AC:
{
    r3 = 65536;
    r3 = (r3 + -1);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8052A2B8:
{
    r6 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r5 + 2747));
    r0 = (r6 + 4);
}

loc_8052A2C4:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_8052A2D8;
    }
}

loc_8052A2C8:
{
    r0 = (r3 + -4);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r5 + 2736));
    r0 = (r0 & 255);
    goto loc_8052A300;
}

loc_8052A2D8:
{
}

loc_8052A2DC:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(224))) {
        goto loc_8052A2F8;
    }
}

loc_8052A2E0:
{
}

loc_8052A2E4:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(231))) {
        goto loc_8052A2F8;
    }
}

loc_8052A2E8:
{
    r0 = (r3 + -224);
    r3 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r5 + 2740));
    r0 = (r0 & 255);
    goto loc_8052A300;
}

loc_8052A2F8:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8052A300:
{
    r0 = (r0 * r7);
    r6_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r6 = (r6_rot_0 & -2);
    r3_addr_0 = (r3 + r6);
    r11 = MemoryInline::FlatRead16(r3_addr_0);
    r9 = (r11 & 49152);
    r6 = (r9 + 0);
}

loc_8052A318:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(49152))) {
        goto loc_8052A328;
    }
}

loc_8052A31C:
{
    r7 = 1;
    r6 = 0;
    goto loc_8052A4D4;
}

loc_8052A328:
{
    r6 = (r4 & 32);
}

loc_8052A32C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8052A33C;
    }
}

loc_8052A330:
{
    r6 = (r4 & 5);
}

loc_8052A334:
{
}

loc_8052A338:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(5))) {
        goto loc_8052A348;
    }
}

loc_8052A33C:
{
    r7 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r5 + 2746));
    r8 = 64;
    goto loc_8052A378;
}

loc_8052A348:
{
    r6 = (r4 & 64);
}

loc_8052A34C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8052A35C;
    }
}

loc_8052A350:
{
    r7 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r5 + 2744));
    r8 = 4;
    goto loc_8052A378;
}

loc_8052A35C:
{
    r6 = (r4 & 128);
}

loc_8052A360:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8052A370;
    }
}

loc_8052A364:
{
    r7 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r5 + 2745));
    r8 = 16;
    goto loc_8052A378;
}

loc_8052A370:
{
    r7 = 1;
    r8 = 1;
}

loc_8052A378:
{
    r6 = (r4 & 2048);
}

loc_8052A37C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8052A390;
    }
}

loc_8052A380:
{
    r6 = (r4 & 29);
}

loc_8052A384:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8052A390;
    }
}

loc_8052A388:
{
    r6 = 0;
    goto loc_8052A40C;
}

loc_8052A390:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r6 = (r6_rot_1 & 1);
}

loc_8052A398:
{
    r8 = PPC_Slw(static_cast<uint32_t>(r8), static_cast<uint32_t>(r6));
    r10 = (r8 & 65535);
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8052A3B8;
    }
}

loc_8052A3A4:
{
    r8 = (r11 & r10);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8052A3B8;
    }
}

loc_8052A3AC:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(23));
    r4 = (r4_rot_1 & 1);
    r6 = (r6 ^ r4);
    goto loc_8052A40C;
}

loc_8052A3B8:
{
    r8 = (r9 + 0);
}

loc_8052A3C0:
{
    if ((static_cast<uint32_t>(r8) != static_cast<uint32_t>(32768))) {
        goto loc_8052A3F0;
    }
}

loc_8052A3C4:
{
    r8 = (r11 & r10);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8052A3F0;
    }
}

loc_8052A3CC:
{
    r4 = (r4 & 256);
    r8 = 0;
}

loc_8052A3D8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(256))) {
        goto loc_8052A3E8;
    }
}

loc_8052A3DC:
{
}

loc_8052A3E0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8052A3E8;
    }
}

loc_8052A3E4:
{
    r8 = 1;
}

loc_8052A3E8:
{
    r6 = r8;
    goto loc_8052A40C;
}

loc_8052A3F0:
{
}

loc_8052A3F4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(16384))) {
        goto loc_8052A40C;
    }
}

loc_8052A3F8:
{
}

loc_8052A3FC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(1))) {
        goto loc_8052A40C;
    }
}

loc_8052A400:
{
    r4 = (r4 & 512);
}

loc_8052A404:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8052A40C;
    }
}

loc_8052A408:
{
    r7 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r5 + 2744));
}

loc_8052A40C:
{
}

loc_8052A410:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8052A474;
    }
}

loc_8052A414:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r5 + 2746));
}

loc_8052A41C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r4))) {
        goto loc_8052A434;
    }
}

loc_8052A420:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r5 + 2733));
    r4 = (r4 & 16);
}

loc_8052A428:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8052A434;
    }
}

loc_8052A42C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8052A434:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r5 + 2744));
}

loc_8052A43C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r4))) {
        goto loc_8052A454;
    }
}

loc_8052A440:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r5 + 2733));
    r4 = (r4 & 1);
}

loc_8052A448:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8052A454;
    }
}

loc_8052A44C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8052A454:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r5 + 2745));
}

loc_8052A45C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r4))) {
        goto loc_8052A4D4;
    }
}

loc_8052A460:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r5 + 2733));
    r4 = (r4 & 4);
}

loc_8052A468:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8052A4D4;
    }
}

loc_8052A46C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8052A474:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r5 + 2746));
}

loc_8052A47C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r4))) {
        goto loc_8052A494;
    }
}

loc_8052A480:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r5 + 2733));
    r4 = (r4 & 32);
}

loc_8052A488:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8052A494;
    }
}

loc_8052A48C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8052A494:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r5 + 2744));
}

loc_8052A49C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r4))) {
        goto loc_8052A4B4;
    }
}

loc_8052A4A0:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r5 + 2733));
    r4 = (r4 & 2);
}

loc_8052A4A8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8052A4B4;
    }
}

loc_8052A4AC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8052A4B4:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r5 + 2745));
}

loc_8052A4BC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r4))) {
        goto loc_8052A4D4;
    }
}

loc_8052A4C0:
{
    r4 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r5 + 2733));
    r4 = (r4 & 8);
}

loc_8052A4C8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8052A4D4;
    }
}

loc_8052A4CC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8052A4D4:
{
    r4 = (r6 + r7);
    r0 = (r0 + r4);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead16(r3_addr_1);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8052A270(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8052A270_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002FF9 gpr_write=0x00000FF9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052A270 func_8052A270 preserves=true fpr_mask=0x00000000
