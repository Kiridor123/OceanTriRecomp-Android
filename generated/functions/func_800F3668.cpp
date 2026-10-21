#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F3550(CpuContext* ctx);
extern "C" void func_800F3550_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800F35B8(CpuContext* ctx);
extern "C" uint32_t func_800F35B8_ra18_0_10_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8012D090(CpuContext* ctx);
extern "C" uint64_t func_8012D090_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8012D118(CpuContext* ctx);
extern "C" uint64_t func_8012D118_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);
extern "C" void func_80144644(CpuContext* ctx);
extern "C" uint64_t func_80144644_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803AD958(CpuContext* ctx);
extern "C" uint32_t func_803AD958_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_800F3668_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
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

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    MKW_GUEST_ENTER(0x800F3668u);
    goto loc_800F3668;

loc_800F3668:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457470 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    // end of inlined leaf 0x80457470
    r24 = r3;
    r5 = 0;
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 473), 0, 21u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + 473), static_cast<uint8_t>(r5));
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::WriteResolved16(guest_range_1, 3u, (r3 + 476), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 9u, (r3 + 482), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 12u, (r3 + 485), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r3 + 488), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r3 + 491), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r3 + 474), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_1, 5u, (r3 + 478), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 10u, (r3 + 483), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 13u, (r3 + 486), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r3 + 489), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r3 + 492), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r3 + 475), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved16(guest_range_1, 7u, (r3 + 480), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 11u, (r3 + 484), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 14u, (r3 + 487), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r3 + 490), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r3 + 493), static_cast<uint8_t>(r5));
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
}

loc_800F36E0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F3970;
    }
}

loc_800F36E4:
{
    r25 = (r3 + 8820);
    r3 = 2;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl2_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl2_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl2_0x800CFB10;
    }
}

loc_inl2_0x800CFB08:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl2_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl2_0x800CFB24;
    }
}

loc_inl2_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl2_cont_800CFAF4;
}

loc_inl2_0x800CFB24:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl2_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    r29 = r3;
}

loc_800F36F8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800F3970;
    }
}

loc_800F36FC:
{
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_800F3708:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800F3724;
    }
}

loc_800F370C:
{
    // inline leaf 0x800CF3E8 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 39));
    // end of inlined leaf 0x800CF3E8
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r0 * 2848);
    r29 = (r29 + r0);
    r28 = 0;
    goto loc_800F3728;
}

loc_800F3724:
{
    r28 = (r29 + 2848);
}

loc_800F3728:
{
    ctx->lr = 0x800F372Cu;
    if constexpr (KnownRegArgsCpuCall<0x803AD958u>(&func_803AD958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803AD958_1CDD = func_803AD958_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AD958_1CDD;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AD958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_800F3734:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_800F3748;
    }
}

loc_800F3738:
{
    r3 = r24;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x800F3550u>(&func_800F3550)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        func_800F3550_ra18_0_0_0(ctx, r3, r4);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800F3550u>(ctx);
        r0 = ctx->gpr[0];
    }
    goto loc_800F3970;
}

loc_800F3748:
{
    ctx->lr = 0x800F374Cu;
    if constexpr (KnownRegArgsCpuCall<0x803AD958u>(&func_803AD958)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803AD958_21D0 = func_803AD958_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803AD958_21D0;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803AD958u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_800F3754:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_800F3768;
    }
}

loc_800F3758:
{
    r3 = r24;
    r4 = r29;
    if constexpr (KnownRegArgsCpuCall<0x800F35B8u>(&func_800F35B8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800F35B8_24E0 = func_800F35B8_ra18_0_10_0(ctx, r3, r4);
        r4 = regargs_result_800F35B8_24E0;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800F35B8u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    }
    goto loc_800F3970;
}

loc_800F3768:
{
    r26 = 0;
    r27 = 0;
    r31 = r24;
    r23 = 0;
    r22 = 1;
}

loc_800F377C:
{
}

loc_800F3780:
{
    if ((static_cast<int32_t>(r26) >= static_cast<int32_t>(3))) {
        goto loc_800F3970;
    }
}

loc_800F3784:
{
    r0 = MemoryInline::FlatRead16((r25 + 6));
}

loc_800F378C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3960;
    }
}

loc_800F3790:
{
    r0 = MemoryInline::FlatRead16((r25 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_800F3798:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3960;
    }
}

loc_800F379C:
{
    r0 = MemoryInline::FlatRead32(r25);
    r3 = (r0 & 65535);
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->lr = 0x800F37B0u;
    if constexpr (KnownRegArgsCpuCall<0x80144644u>(&func_80144644)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80144644_2A09 = func_80144644_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80144644_2A09);
        r4 = static_cast<uint32_t>(regargs_result_80144644_2A09 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80144644u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 255);
}

loc_800F37B8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F3960;
    }
}

loc_800F37BC:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_800F37C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3960;
    }
}

loc_800F37CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 456));
    r0 = (r0 & 1);
}

loc_800F37D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F3960;
    }
}

loc_800F37DC:
{
    ctx->lr = 0x800F37E0u;
    if constexpr (KnownRegArgsCpuCall<0x8012D090u>(&func_8012D090)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D090_2F5B = func_8012D090_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8012D090_2F5B);
        r4 = static_cast<uint32_t>(regargs_result_8012D090_2F5B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8012D090u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_800F37E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F3960;
    }
}

loc_800F37E8:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead16((r3 + 26));
    MemoryInline::FlatWrite16((r31 + 476), static_cast<uint16_t>(r0));
    r30 = (r24 + r26);
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::FlatWrite8((r30 + 482), static_cast<uint8_t>(r0));
    // inline leaf 0x800CF27C (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 37));
    // end of inlined leaf 0x800CF27C
    r0 = (r3 & 255);
}

loc_800F3810:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800F3844;
    }
}

loc_800F3814:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4 = r29;
    ctx->lr = 0x800F3820u;
    if constexpr (KnownRegArgsCpuCall<0x8012D118u>(&func_8012D118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D118_35DC = func_8012D118_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D118_35DC);
        r4 = static_cast<uint32_t>(regargs_result_8012D118_35DC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012D118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_800F3824:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800F383C;
    }
}

loc_800F3828:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead8((r29 + 8));
    // inline leaf 0x80131974 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead8((r3 + 911));
    r3 = 1;
    r0 = (r4 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80131974
    r21 = r3;
    goto loc_800F38C4;
}

loc_800F383C:
{
    r21 = 0;
    goto loc_800F38C4;
}

loc_800F3844:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4 = r29;
    ctx->lr = 0x800F3850u;
    if constexpr (KnownRegArgsCpuCall<0x8012D118u>(&func_8012D118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D118_3C18 = func_8012D118_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D118_3C18);
        r4 = static_cast<uint32_t>(regargs_result_8012D118_3C18 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012D118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_800F3854:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800F3898;
    }
}

loc_800F3858:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead8((r29 + 8));
    // inline leaf 0x80131974 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead8((r3 + 911));
    r3 = 1;
    r0 = (r4 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x80131974
    r21 = r3;
}

loc_800F386C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_800F38C4;
    }
}

loc_800F3870:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4 = r28;
    ctx->lr = 0x800F387Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012D118u>(&func_8012D118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D118_427B = func_8012D118_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D118_427B);
        r4 = static_cast<uint32_t>(regargs_result_8012D118_427B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012D118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_800F3880:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800F38C4;
    }
}

loc_800F3884:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead8((r28 + 8));
    // inline leaf 0x80131974 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead8((r3 + 911));
    r3 = 1;
    r0 = (r4 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x80131974
    r21 = r3;
    goto loc_800F38C4;
}

loc_800F3898:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4 = r28;
    ctx->lr = 0x800F38A4u;
    if constexpr (KnownRegArgsCpuCall<0x8012D118u>(&func_8012D118)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8012D118_4880 = func_8012D118_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_8012D118_4880);
        r4 = static_cast<uint32_t>(regargs_result_8012D118_4880 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x8012D118u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
    }
}

loc_800F38A8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_800F38BC;
    }
}

loc_800F38AC:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r4 = MemoryInline::FlatRead8((r28 + 8));
    // inline leaf 0x80131974 (9 guest instruction(s))
    r5 = MemoryInline::FlatRead8((r3 + 911));
    r3 = 1;
    r0 = (r4 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r5 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_5 & 1);
    // end of inlined leaf 0x80131974
    goto loc_800F38C0;
}

loc_800F38BC:
{
    r3 = 0;
}

loc_800F38C0:
{
    r21 = r3;
}

loc_800F38C4:
{
}

loc_800F38C8:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(0))) {
        goto loc_800F38D4;
    }
}

loc_800F38CC:
{
    MemoryInline::FlatWrite8((r30 + 485), static_cast<uint8_t>(r23));
    goto loc_800F38D8;
}

loc_800F38D4:
{
    MemoryInline::FlatWrite8((r30 + 485), static_cast<uint8_t>(r22));
}

loc_800F38D8:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 3));
}

loc_800F38E4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20))) {
        goto loc_800F3920;
    }
}

loc_800F38E8:
{
    r0 = MemoryInline::FlatRead8((r3 + 1085));
}

loc_800F38F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_800F390C;
    }
}

loc_800F38F4:
{
}

loc_800F38F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_800F390C;
    }
}

loc_800F38FC:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r0 = (r3 & 255);
}

loc_800F3908:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_800F3914;
    }
}

loc_800F390C:
{
    MemoryInline::FlatWrite8((r30 + 491), static_cast<uint8_t>(r22));
    goto loc_800F3918;
}

loc_800F3914:
{
    MemoryInline::FlatWrite8((r30 + 491), static_cast<uint8_t>(r23));
}

loc_800F3918:
{
    MemoryInline::FlatWrite8((r30 + 488), static_cast<uint8_t>(r23));
    goto loc_800F3954;
}

loc_800F3920:
{
    r0 = MemoryInline::FlatRead8((r3 + 1085));
}

loc_800F3928:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_800F3934;
    }
}

loc_800F392C:
{
    MemoryInline::FlatWrite8((r30 + 491), static_cast<uint8_t>(r22));
    goto loc_800F3938;
}

loc_800F3934:
{
    MemoryInline::FlatWrite8((r30 + 491), static_cast<uint8_t>(r23));
}

loc_800F3938:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 1085));
}

loc_800F3944:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_800F3950;
    }
}

loc_800F3948:
{
    MemoryInline::FlatWrite8((r30 + 488), static_cast<uint8_t>(r22));
    goto loc_800F3954;
}

loc_800F3950:
{
    MemoryInline::FlatWrite8((r30 + 488), static_cast<uint8_t>(r23));
}

loc_800F3954:
{
    MemoryInline::FlatWrite8((r30 + 473), static_cast<uint8_t>(r22));
    r31 = (r31 + 2);
    r26 = (r26 + 1);
}

loc_800F3960:
{
    r27 = (r27 + 1);
    r25 = (r25 + 16);
}

loc_800F396C:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(6))) {
        goto loc_800F377C;
    }
}

loc_800F3970:
{
    r11 = (r1 + 64);
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800F3668(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800F3668_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800F3668 func_800F3668 preserves=true fpr_mask=0x00000000
