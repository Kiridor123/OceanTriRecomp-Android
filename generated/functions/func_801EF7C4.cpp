#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004C820(CpuContext* ctx);
extern "C" uint64_t func_8004C820_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80219160(CpuContext* ctx);
extern "C" uint64_t func_80219160_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80219594(CpuContext* ctx);
extern "C" uint64_t func_80219594_ra58_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_802195F4(CpuContext* ctx);
extern "C" uint64_t func_802195F4_ra58_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_8027F018(CpuContext* ctx);
extern "C" uint32_t func_8027F018_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8027F018_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8027F018_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_801EF7C4_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801EF7C4;

loc_801EF7C4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r30 = MemoryInline::FlatRead32((r13 + -17824));
    r28 = MemoryInline::FlatRead16((r3 + 86));
    r28 = (r28 << 16);
    r28 = (static_cast<int32_t>(r28) >> 16);
    r27 = MemoryInline::FlatRead16((r3 + 84));
    r27 = (r27 << 16);
    r27 = (static_cast<int32_t>(r27) >> 16);
    // inline leaf 0x801EF7A0 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead16((r3 + 10));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r0 * 100);
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r3 = (r0 * 10);
    r0 = (r5 + r4);
    r0 = (r3 + r0);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    // end of inlined leaf 0x801EF7A0
    r29 = (r3 & 65535);
    r0 = (r29 * 12);
    r3 = (r30 + r0);
    r31 = (r3 + 3584);
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801EF804:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801EFCBC;
    }
}

loc_801EF808:
{
    r3 = MemoryInline::FlatRead16((r26 + 22));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r3 + -1);
}

loc_801EF814:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_801EFC34;
    }
}

loc_801EF818:
{
    r3 = (r1 + 44);
    r4 = 0;
    r5 = 36;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = MemoryInline::FlatRead8((r26 + 76));
    r0 = (r3 + -5);
}

loc_801EF834:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_801EF840;
    }
}

loc_801EF838:
{
}

loc_801EF83C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(10))) {
        goto loc_801EFAA4;
    }
}

loc_801EF840:
{
    r0 = MemoryInline::FlatRead16((r26 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801EF848:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_801EF864;
    }
}

loc_801EF84C:
{
    r3 = (r1 + 44);
    r0 = (r0 * 12);
    r4 = (r30 + r0);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWriteRam32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    goto loc_801EF874;
}

loc_801EF864:
{
    r0 = 11;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
}

loc_801EF874:
{
    r3 = (r1 + 44);
    // inline leaf 0x8027F128 (12 guest instruction(s))
}

loc_inl3_0x8027F128:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl3_0x8027F130:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_inl3_0x8027F13C;
    }
}

loc_inl3_0x8027F134:
{
    r3 = 0;
    goto loc_inl3_cont_8027F128;
}

loc_inl3_0x8027F13C:
{
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 + -17);
    r0 = (r3 ^ 2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
}

loc_inl3_cont_8027F128:
{
    // end of inlined leaf 0x8027F128
}

loc_801EF880:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801EF8F0;
    }
}

loc_801EF884:
{
    r0 = MemoryInline::FlatRead16((r26 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801EF88C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_801EF8A8;
    }
}

loc_801EF890:
{
    r3 = (r1 + 56);
    r0 = (r0 * 12);
    r4 = (r30 + r0);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWriteRam32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    goto loc_801EF8B8;
}

loc_801EF8A8:
{
    r0 = 12;
    MemoryInline::FlatWriteRam8((r1 + 56), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r0));
}

loc_801EF8B8:
{
    r0 = MemoryInline::FlatRead16((r26 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801EF8C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_801EF8DC;
    }
}

loc_801EF8C4:
{
    r3 = (r1 + 68);
    r0 = (r0 * 12);
    r4 = (r30 + r0);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWriteRam32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    goto loc_801EF90C;
}

loc_801EF8DC:
{
    r0 = 13;
    MemoryInline::FlatWriteRam8((r1 + 68), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 70), static_cast<uint16_t>(r0));
    goto loc_801EF90C;
}

loc_801EF8F0:
{
    r0 = 12;
    MemoryInline::FlatWriteRam8((r1 + 56), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r1 + 46));
    MemoryInline::FlatWriteRam16((r1 + 58), static_cast<uint16_t>(r3));
    r0 = 13;
    MemoryInline::FlatWriteRam8((r1 + 68), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 70), static_cast<uint16_t>(r3));
}

loc_801EF90C:
{
    r3 = (r1 + 8);
    r4 = (r1 + 44);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r4);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_2, 2u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_2, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 6u, (r4 + 6));
    MemoryInline::WriteResolved32(guest_range_2, 6u, (r3 + 6), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 10u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r1 + 20);
    r4 = (r1 + 56);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::ReadResolved8(guest_range_1, 12u, r4);
    MemoryInline::WriteResolved8(guest_range_2, 12u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 13u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_2, 14u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_2, 16u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 18u, (r4 + 6));
    MemoryInline::WriteResolved32(guest_range_2, 18u, (r3 + 6), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 22u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r3 = (r1 + 32);
    r4 = (r1 + 68);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::ReadResolved8(guest_range_1, 24u, r4);
    MemoryInline::WriteResolved8(guest_range_2, 24u, r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r4 + 1));
    MemoryInline::WriteResolved8(guest_range_2, 25u, (r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_2, 26u, (r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 28u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_2, 28u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 30u, (r4 + 6));
    MemoryInline::WriteResolved32(guest_range_2, 30u, (r3 + 6), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 34u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_2, 34u, (r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    r0 = MemoryInline::FlatRead16((r26 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801EF938:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801EF950;
    }
}

loc_801EF93C:
{
}

loc_801EF940:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801EFA0C;
    }
}

loc_801EF944:
{
}

loc_801EF948:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801EFA4C;
    }
}

loc_801EF94C:
{
    goto loc_801EFA88;
}

loc_801EF950:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801EF958:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_801EF96C;
    }
}

loc_801EF95C:
{
    r3 = (r1 + 8);
    r4 = r31;
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWriteRam32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    goto loc_801EF98C;
}

loc_801EF96C:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 11;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
}

loc_801EF98C:
{
    r3 = (r1 + 8);
    // inline leaf 0x8027F128 (12 guest instruction(s))
}

loc_inl10_0x8027F128:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl10_0x8027F130:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_inl10_0x8027F13C;
    }
}

loc_inl10_0x8027F134:
{
    r3 = 0;
    goto loc_inl10_cont_8027F128;
}

loc_inl10_0x8027F13C:
{
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 + -17);
    r0 = (r3 ^ 2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
}

loc_inl10_cont_8027F128:
{
    // end of inlined leaf 0x8027F128
}

loc_801EF998:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801EF9CC;
    }
}

loc_801EF99C:
{
    r3 = (r1 + 20);
    r4 = 0;
    r5 = 24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 12;
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r1 + 10));
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r3));
    r0 = 13;
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 34), static_cast<uint16_t>(r3));
    goto loc_801EFA88;
}

loc_801EF9CC:
{
    r3 = (r1 + 44);
    // inline leaf 0x8027F128 (12 guest instruction(s))
}

loc_inl11_0x8027F128:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_inl11_0x8027F130:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(11))) {
        goto loc_inl11_0x8027F13C;
    }
}

loc_inl11_0x8027F134:
{
    r3 = 0;
    goto loc_inl11_cont_8027F128;
}

loc_inl11_0x8027F13C:
{
    r3 = MemoryInline::FlatRead16((r3 + 2));
    r3 = (r3 + -17);
    r0 = (r3 ^ 2);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
}

loc_inl11_cont_8027F128:
{
    // end of inlined leaf 0x8027F128
}

loc_801EF9D8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801EFA88;
    }
}

loc_801EF9DC:
{
    r3 = (r1 + 20);
    r4 = 0;
    r5 = 24;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 12;
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r3 = 0;
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r3));
    r0 = 13;
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 34), static_cast<uint16_t>(r3));
    goto loc_801EFA88;
}

loc_801EFA0C:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801EFA14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_801EFA28;
    }
}

loc_801EFA18:
{
    r3 = (r1 + 20);
    r4 = r31;
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWriteRam32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    goto loc_801EFA88;
}

loc_801EFA28:
{
    r3 = (r1 + 20);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 12;
    MemoryInline::FlatWriteRam8((r1 + 20), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 22), static_cast<uint16_t>(r0));
    goto loc_801EFA88;
}

loc_801EFA4C:
{
    r0 = MemoryInline::FlatRead8(r31);
}

loc_801EFA54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_801EFA68;
    }
}

loc_801EFA58:
{
    r3 = (r1 + 32);
    r4 = r31;
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWriteRam32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    goto loc_801EFA88;
}

loc_801EFA68:
{
    r3 = (r1 + 32);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = 13;
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 34), static_cast<uint16_t>(r0));
}

loc_801EFA88:
{
    r3 = (r26 + 76);
    r4 = (r1 + 44);
    r5 = (r1 + 56);
    r6 = (r1 + 8);
    r7 = (r1 + 20);
    ctx->lr = 0x801EFAA0u;
    if constexpr (KnownRegArgsCpuCall<0x80219160u>(&func_80219160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80219160_557E = func_80219160_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80219160_557E);
        r4 = static_cast<uint32_t>(regargs_result_80219160_557E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80219160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_801EFC24;
}

loc_801EFAA4:
{
    r3 = MemoryInline::FlatRead8(r31);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_5C25 = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_5C25);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_801EFAB8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_801EFBA8;
    }
}

loc_801EFABC:
{
    r0 = MemoryInline::FlatRead16((r26 + 22));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801EFAC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801EFADC;
    }
}

loc_801EFAC8:
{
}

loc_801EFACC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801EFB14;
    }
}

loc_801EFAD0:
{
}

loc_801EFAD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_801EFB4C;
    }
}

loc_801EFAD8:
{
    goto loc_801EFB80;
}

loc_801EFADC:
{
    r0 = MemoryInline::FlatRead16((r26 + 24));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801EFAE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_801EFB00;
    }
}

loc_801EFAE8:
{
    r3 = (r1 + 44);
    r0 = (r0 * 12);
    r4 = (r30 + r0);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWriteRam32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    goto loc_801EFB80;
}

loc_801EFB00:
{
    r0 = 11;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
    goto loc_801EFB80;
}

loc_801EFB14:
{
    r0 = MemoryInline::FlatRead16((r26 + 26));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801EFB1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_801EFB38;
    }
}

loc_801EFB20:
{
    r3 = (r1 + 44);
    r0 = (r0 * 12);
    r4 = (r30 + r0);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWriteRam32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    goto loc_801EFB80;
}

loc_801EFB38:
{
    r0 = 12;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
    goto loc_801EFB80;
}

loc_801EFB4C:
{
    r0 = MemoryInline::FlatRead16((r26 + 28));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801EFB54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(-1))) {
        goto loc_801EFB70;
    }
}

loc_801EFB58:
{
    r3 = (r1 + 44);
    r0 = (r0 * 12);
    r4 = (r30 + r0);
    r4 = (r4 + 3584);
    // inline leaf 0x8004A270 (13 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 2));
    MemoryInline::FlatWriteRam16((r3 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r4 + 6));
    MemoryInline::FlatWriteRam32((r3 + 6), r0);
    r0 = MemoryInline::FlatRead16((r4 + 10));
    MemoryInline::FlatWriteRam16((r3 + 10), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8004A270
    goto loc_801EFB80;
}

loc_801EFB70:
{
    r0 = 13;
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
}

loc_801EFB80:
{
    r3 = (r26 + 76);
    r4 = (r1 + 44);
    r5 = 0;
    r6 = 0;
    r7 = 0;
    ctx->lr = 0x801EFB98u;
    if constexpr (KnownRegArgsCpuCall<0x80219160u>(&func_80219160)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80219160_7476 = func_80219160_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80219160_7476);
        r4 = static_cast<uint32_t>(regargs_result_80219160_7476 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80219160u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r26 + 76);
    r4 = r31;
    ctx->lr = 0x801EFBA4u;
    if constexpr (KnownRegArgsCpuCall<0x802195F4u>(&func_802195F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802195F4_7AF6 = func_802195F4_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802195F4_7AF6);
        r4 = static_cast<uint32_t>(regargs_result_802195F4_7AF6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802195F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_801EFC24;
}

loc_801EFBA8:
{
    r3 = (r26 + 76);
    r4 = r31;
    ctx->lr = 0x801EFBB4u;
    if constexpr (KnownRegArgsCpuCall<0x80219594u>(&func_80219594)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80219594_81A5 = func_80219594_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80219594_81A5);
        r4 = static_cast<uint32_t>(regargs_result_80219594_81A5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80219594u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r26 + 76));
}

loc_801EFBBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_801EFBC8;
    }
}

loc_801EFBC0:
{
}

loc_801EFBC4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_801EFC18;
    }
}

loc_801EFBC8:
{
    r3 = MemoryInline::FlatRead8(r31);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_8976 = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_8976);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_801EFBD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EFC18;
    }
}

loc_801EFBDC:
{
    r3 = r30;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8004C820u>(&func_8004C820)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004C820_8EA3 = func_8004C820_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004C820_8EA3);
        r4 = static_cast<uint32_t>(regargs_result_8004C820_8EA3 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004C820u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_801EFBEC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801EFC18;
    }
}

loc_801EFBF0:
{
    r3 = (r1 + 44);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8(r31);
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    r3 = (r26 + 76);
    r4 = (r1 + 44);
    ctx->lr = 0x801EFC14u;
    if constexpr (KnownRegArgsCpuCall<0x802195F4u>(&func_802195F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802195F4_93E5 = func_802195F4_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802195F4_93E5);
        r4 = static_cast<uint32_t>(regargs_result_802195F4_93E5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802195F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_801EFC24;
}

loc_801EFC18:
{
    r3 = (r26 + 76);
    r4 = r31;
    ctx->lr = 0x801EFC24u;
    if constexpr (KnownRegArgsCpuCall<0x802195F4u>(&func_802195F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802195F4_9A94 = func_802195F4_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802195F4_9A94);
        r4 = static_cast<uint32_t>(regargs_result_802195F4_9A94 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802195F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_801EFC24:
{
    r3 = (r26 + 76);
    r4 = MemoryInline::FlatRead8(r31);
    // inline leaf 0x80219158 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80219158
    goto loc_801EFCBC;
}

loc_801EFC34:
{
    r3 = (r26 + 76);
    r4 = r31;
    ctx->lr = 0x801EFC40u;
    if constexpr (KnownRegArgsCpuCall<0x80219594u>(&func_80219594)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_80219594_A23A = func_80219594_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_80219594_A23A);
        r4 = static_cast<uint32_t>(regargs_result_80219594_A23A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80219594u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = MemoryInline::FlatRead8((r26 + 76));
}

loc_801EFC48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_801EFC54;
    }
}

loc_801EFC4C:
{
}

loc_801EFC50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_801EFCA4;
    }
}

loc_801EFC54:
{
    r3 = MemoryInline::FlatRead8(r31);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_AA0B = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_AA0B);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8027F018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_801EFC64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801EFCA4;
    }
}

loc_801EFC68:
{
    r3 = r30;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x8004C820u>(&func_8004C820)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004C820_AF38 = func_8004C820_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8004C820_AF38);
        r4 = static_cast<uint32_t>(regargs_result_8004C820_AF38 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004C820u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_801EFC78:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_801EFCA4;
    }
}

loc_801EFC7C:
{
    r3 = (r1 + 44);
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8(r31);
    MemoryInline::FlatWriteRam8((r1 + 44), static_cast<uint8_t>(r0));
    r3 = (r26 + 76);
    r4 = (r1 + 44);
    ctx->lr = 0x801EFCA0u;
    if constexpr (KnownRegArgsCpuCall<0x802195F4u>(&func_802195F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802195F4_B47A = func_802195F4_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802195F4_B47A);
        r4 = static_cast<uint32_t>(regargs_result_802195F4_B47A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802195F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    goto loc_801EFCB0;
}

loc_801EFCA4:
{
    r3 = (r26 + 76);
    r4 = r31;
    ctx->lr = 0x801EFCB0u;
    if constexpr (KnownRegArgsCpuCall<0x802195F4u>(&func_802195F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_802195F4_BB29 = func_802195F4_ra58_1e_18_0(ctx, r3, r4, r6, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_802195F4_BB29);
        r4 = static_cast<uint32_t>(regargs_result_802195F4_BB29 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->cr = cr;
        InvokeDirectCpu<0x802195F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_801EFCB0:
{
    r3 = (r26 + 76);
    r4 = MemoryInline::FlatRead8(r31);
    // inline leaf 0x80219158 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x80219158
}

loc_801EFCBC:
{
    r0 = MemoryInline::FlatRead8((r26 + 76));
}

loc_801EFCC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801EFCD4;
    }
}

loc_801EFCC8:
{
}

loc_801EFCCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801EFD40;
    }
}

loc_801EFCD0:
{
    goto loc_801EFDA8;
}

loc_801EFCD4:
{
    r0 = MemoryInline::FlatRead16((r26 + 86));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_801EFCDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801EFD04;
    }
}

loc_801EFCE0:
{
}

loc_801EFCE4:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_801EFCF4;
    }
}

loc_801EFCE8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 84), static_cast<uint16_t>(r0));
    goto loc_801EFDA8;
}

loc_801EFCF4:
{
    r0 = (r27 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r26 + 84), static_cast<uint16_t>(r0));
    goto loc_801EFDA8;
}

loc_801EFD04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EFDA8;
    }
}

loc_801EFD08:
{
}

loc_801EFD0C:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_801EFD1C;
    }
}

loc_801EFD10:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 84), static_cast<uint16_t>(r0));
    goto loc_801EFDA8;
}

loc_801EFD1C:
{
}

loc_801EFD20:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(3))) {
        goto loc_801EFD34;
    }
}

loc_801EFD24:
{
    r0 = (r27 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r26 + 84), static_cast<uint16_t>(r0));
    goto loc_801EFDA8;
}

loc_801EFD34:
{
    r0 = 3;
    MemoryInline::FlatWrite16((r26 + 84), static_cast<uint16_t>(r0));
    goto loc_801EFDA8;
}

loc_801EFD40:
{
    r0 = MemoryInline::FlatRead16((r26 + 86));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r28));
}

loc_801EFD48:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801EFD70;
    }
}

loc_801EFD4C:
{
}

loc_801EFD50:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_801EFD60;
    }
}

loc_801EFD54:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 84), static_cast<uint16_t>(r0));
    goto loc_801EFDA8;
}

loc_801EFD60:
{
    r0 = (r27 + 3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r26 + 84), static_cast<uint16_t>(r0));
    goto loc_801EFDA8;
}

loc_801EFD70:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801EFDA8;
    }
}

loc_801EFD74:
{
}

loc_801EFD78:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_801EFD88;
    }
}

loc_801EFD7C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 84), static_cast<uint16_t>(r0));
    goto loc_801EFDA8;
}

loc_801EFD88:
{
}

loc_801EFD8C:
{
    if ((static_cast<int32_t>(r27) > static_cast<int32_t>(3))) {
        goto loc_801EFD9C;
    }
}

loc_801EFD90:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 84), static_cast<uint16_t>(r0));
    goto loc_801EFDA8;
}

loc_801EFD9C:
{
    r0 = (r27 + -3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r26 + 84), static_cast<uint16_t>(r0));
}

loc_801EFDA8:
{
    r3 = MemoryInline::FlatRead16((r26 + 84));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r0 = MemoryInline::FlatRead16((r26 + 86));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_801EFDB4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r0))) {
        goto loc_801EFDC0;
    }
}

loc_801EFDB8:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r26 + 84), static_cast<uint16_t>(r0));
}

loc_801EFDC0:
{
    r11 = (r1 + 112);
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801EF7C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801EF7C4_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001E fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801EF7C4 func_801EF7C4 preserves=true fpr_mask=0x00000000
