#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804F5DF0(CpuContext* ctx);
extern "C" uint32_t func_804F5DF0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804F62C0(CpuContext* ctx);
extern "C" uint32_t func_804F62C0_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_804F8730(CpuContext* ctx);
extern "C" uint32_t func_804F8730_ra38_0_8_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804F6C40_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
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
    uint32_t r29_rot_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r31_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;

    goto loc_804F6C40;

loc_804F6C40:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 8), r5);
    r7 = 0x80760000u;
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r8 = (r8_rot_0 & 1020);
    r26 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 1), 0, 5u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r7 = (r7 + -10352);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r27 = r4;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
    r7_addr_0 = (r7 + r8);
    r28 = MemoryInline::FlatRead32(r7_addr_0);
    r0 = (r0 & 40735);
}

loc_804F6C80:
{
    r30 = r5;
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r6 = MemoryInline::FlatRead32((r28 + 2232));
}

loc_804F6C90:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(1))) {
        goto loc_804F6CB4;
    }
}

loc_804F6C94:
{
    r0 = (r6 + -3);
}

loc_804F6C9C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804F6CB4;
    }
}

loc_804F6CA0:
{
    r0 = (r6 + -6);
}

loc_804F6CA8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_804F6CB4;
    }
}

loc_804F6CAC:
{
}

loc_804F6CB0:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(13))) {
        goto loc_804F6CC0;
    }
}

loc_804F6CB4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r5 + 41), static_cast<uint8_t>(r0));
    goto loc_804F6CC8;
}

loc_804F6CC0:
{
    r0 = -4;
    MemoryInline::FlatWrite8((r5 + 41), static_cast<uint8_t>(r0));
}

loc_804F6CC8:
{
    r0 = MemoryInline::FlatRead8((r28 + 2241));
    r31 = 0x80760000u;
    MemoryInline::FlatWrite8((r5 + 40), static_cast<uint8_t>(r0));
    r29_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r29 = (r29_rot_0 & 1020);
    r3 = 0x80760000u;
    r31 = (r31 + -10352);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r3 = (r3 + 3856);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite32((r28 + 2120), r0);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r4 + 3));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 1));
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r7 = (r7_rot_0 & -4);
    r31_addr_0 = (r31 + r29);
    r6 = MemoryInline::FlatRead32(r31_addr_0);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 3);
    r7 = (r7 & -4);
    r8 = MemoryInline::FlatRead16((r6 + 2164));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r0 = (r7 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r8);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r4 + 4));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    r8 = MemoryInline::FlatRead16((r6 + 2166));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_3 & 2);
    r7 = (r7 & -4);
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r7 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r8);
    MemoryInline::FlatWrite16((r5 + 4), static_cast<uint16_t>(r0));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r4 + 5));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 2));
    r4 = (r4 + 6);
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & -4);
    r8 = MemoryInline::FlatRead16((r6 + 2168));
    r8 = (r8 << 16);
    r8 = (static_cast<int32_t>(r8) >> 16);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 2);
    r6 = (r6 & -4);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r6 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r8);
    MemoryInline::FlatWrite16((r5 + 6), static_cast<uint16_t>(r0));
    r5 = 16;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r26;
    r4 = (r27 + 6);
    r5 = 16;
    r6 = 0;
    if constexpr (KnownRegArgsCpuCall<0x804F8730u>(&func_804F8730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        const auto regargs_result_804F8730_2043 = func_804F8730_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804F8730_2043;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x804F8730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
        r11 = ctx->gpr[11];
    }
    r0 = MemoryInline::FlatRead32((r28 + 2112));
}

loc_804F6DB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804F6FC8;
    }
}

loc_804F6DB8:
{
    r0 = MemoryInline::FlatRead8((r28 + 2241));
}

loc_804F6DC0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_804F6F4C;
    }
}

loc_804F6DC4:
{
    r31_addr_1 = (r31 + r29);
    r3 = MemoryInline::FlatRead32(r31_addr_1);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 6), 0, 6u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, (r27 + 6));
    MemoryInline::FlatWrite8((r4 + 48), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r27 + 7));
    MemoryInline::FlatWrite8((r4 + 49), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r27 + 8));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r27 + 11));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r7 = MemoryInline::FlatRead16((r3 + 2190));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6 = (r4 & -4);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(30));
    r0 = (r0_rot_6 & 3);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r6 | r0);
    r5 = (static_cast<int32_t>(r5) >> 2);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r7);
    MemoryInline::FlatWrite16((r4 + 42), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r27 + 9));
    r5 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r27 + 11));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r7 = MemoryInline::FlatRead16((r3 + 2192));
    r7 = (r7 << 16);
    r7 = (static_cast<int32_t>(r7) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6 = (r4 & -4);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r0 = (r0_rot_8 & 3);
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r6 | r0);
    r5 = (static_cast<int32_t>(r5) >> 4);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r7);
    MemoryInline::FlatWrite16((r4 + 44), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r27 + 10));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r27 + 11));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    r6 = MemoryInline::FlatRead16((r3 + 2194));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    r0 = (static_cast<int32_t>(r0) >> 6);
    r5 = (r4 & -4);
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r5 | r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r0 - r6);
    MemoryInline::FlatWrite16((r4 + 46), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r27 + 11));
    r4 = MemoryInline::FlatRead16(r5);
    r0 = ~(r0 | r0);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(13));
    r0 = (r0_rot_9 & 24576);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2321));
}

loc_804F6EAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F6ED8;
    }
}

loc_804F6EB0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 2321), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8((r4 + 48));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r3 + 2178), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8((r4 + 49));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::FlatWrite16((r3 + 2184), static_cast<uint16_t>(r0));
}

loc_804F6ED8:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead16((r3 + 2178));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead8((r5 + 48));
    r4 = (r4 & 255);
    r0 = (r0 - r4);
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_804F6EF4:
{
    r0 = r4;
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(-128))) {
        goto loc_804F6F00;
    }
}

loc_804F6EFC:
{
    r0 = -128;
}

loc_804F6F00:
{
}

loc_804F6F04:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(127))) {
        goto loc_804F6F0C;
    }
}

loc_804F6F08:
{
    r0 = 127;
}

loc_804F6F0C:
{
    MemoryInline::FlatWrite8((r5 + 48), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = MemoryInline::FlatRead16((r3 + 2184));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead8((r4 + 49));
    r3 = (r3 & 255);
    r0 = (r0 - r3);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_804F6F2C:
{
    r0 = r3;
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(-128))) {
        goto loc_804F6F38;
    }
}

loc_804F6F34:
{
    r0 = -128;
}

loc_804F6F38:
{
}

loc_804F6F3C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(127))) {
        goto loc_804F6F44;
    }
}

loc_804F6F40:
{
    r0 = 127;
}

loc_804F6F44:
{
    MemoryInline::FlatWrite8((r4 + 49), static_cast<uint8_t>(r0));
    goto loc_804F6F94;
}

loc_804F6F4C:
{
}

loc_804F6F50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_804F6F70;
    }
}

loc_804F6F54:
{
    r5 = MemoryInline::FlatRead8((r28 + 2242));
    r3 = r26;
    r4 = (r1 + 8);
    r6 = (r27 + 6);
    r7 = 16;
    if constexpr (KnownRegArgsCpuCall<0x804F5DF0u>(&func_804F5DF0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        const auto regargs_result_804F5DF0_3D93 = func_804F5DF0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804F5DF0_3D93;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[8] = r8;
        InvokeDirectCpu<0x804F5DF0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r8 = ctx->gpr[8];
    }
    goto loc_804F6F94;
}

loc_804F6F70:
{
}

loc_804F6F74:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_804F6F94;
    }
}

loc_804F6F78:
{
    r0 = MemoryInline::FlatRead32((r28 + 2232));
    r3 = r26;
    r4 = (r1 + 8);
    r6 = (r27 + 6);
    r5 = (r0 & 255);
    r7 = 16;
    if constexpr (KnownRegArgsCpuCall<0x804F62C0u>(&func_804F62C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_804F62C0_4264 = func_804F62C0_ra38_0_8_0(ctx, r3, r4, r5);
        r3 = regargs_result_804F62C0_4264;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x804F62C0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r5 = ctx->gpr[5];
        r7 = ctx->gpr[7];
    }
}

loc_804F6F94:
{
    r3 = 0x80760000u;
    r4 = 0x80570000u;
    r3 = (r3 + 3856);
    r5 = 16;
    r4 = (r4 + 17544);
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        const auto regargs_result_8045BD3C_45DE = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_45DE);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_45DE >> 32);
        r0 = ctx->gpr[0];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
    }
}

loc_804F6FB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_804F6FC8;
    }
}

loc_804F6FB4:
{
    r0 = MemoryInline::FlatRead8((r30 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804F6FC8;
    }
}

loc_804F6FC0:
{
    r0 = -7;
    MemoryInline::FlatWrite8((r30 + 41), static_cast<uint8_t>(r0));
}

loc_804F6FC8:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804F6C40(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804F6C40_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804F6C40 func_804F6C40 preserves=true fpr_mask=0x00000000
