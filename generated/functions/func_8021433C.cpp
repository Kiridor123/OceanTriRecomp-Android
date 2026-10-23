#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80217E04(CpuContext* ctx);
extern "C" uint64_t func_80217E04_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80217E3C(CpuContext* ctx);
extern "C" uint64_t func_80217E3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80217EF8(CpuContext* ctx);
extern "C" uint64_t func_80217EF8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027E458(CpuContext* ctx);
extern "C" uint64_t func_8027E458_ra28_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027ECB4(CpuContext* ctx);
extern "C" uint64_t func_8027ECB4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027F018(CpuContext* ctx);
extern "C" uint32_t func_8027F018_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027FCD4(CpuContext* ctx);
extern "C" uint64_t func_8027FCD4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8027FF84(CpuContext* ctx);
extern "C" uint64_t func_8027FF84_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8027F018_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8027F018_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8021433C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t addr_lhax_8004D404_loc_0 = 0;
    uint32_t addr_lhax_8004D404_loc_1 = 0;
    uint32_t addr_lhax_8004D4F8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
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
    uint32_t xer = ctx->xer;

    goto loc_8021433C;

loc_8021433C:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r27 = r3;
    r22 = r4;
    r28 = r5;
    r29 = r6;
    r31 = MemoryInline::FlatRead32((r13 + -17824));
    r30 = 0;
    r23 = 0;
    r25 = r28;
    r24 = r29;
    r26 = 0;
}

loc_80214378:
{
    r3 = r25;
    r4 = 0;
    r5 = 12;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite32(r24, r26);
    r25 = (r25 + 12);
    r24 = (r24 + 4);
    r23 = (r23 + 1);
}

loc_8021439C:
{
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(4))) {
        goto loc_80214378;
    }
}

loc_802143A0:
{
    r3 = MemoryInline::FlatRead8(r27);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_10A7 = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_10A7);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
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
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_802143B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802143C8;
    }
}

loc_802143B4:
{
}

loc_802143B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80214464;
    }
}

loc_802143BC:
{
}

loc_802143C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802145E8;
    }
}

loc_802143C4:
{
    goto loc_802145EC;
}

loc_802143C8:
{
}

loc_802143CC:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(0))) {
        goto loc_802143D8;
    }
}

loc_802143D0:
{
    r30 = (r30 | 1);
    goto loc_802145EC;
}

loc_802143D8:
{
    r3 = r27;
    ctx->lr = 0x802143E0u;
    if constexpr (KnownRegArgsCpuCall<0x8027E458u>(&func_8027E458)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E458_16F2 = func_8027E458_ra28_0_18_0(ctx, r3, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027E458_16F2);
        r4 = static_cast<uint32_t>(regargs_result_8027E458_16F2 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027E458u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_802143E4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802143F0;
    }
}

loc_802143E8:
{
    r30 = (r30 | 1);
    goto loc_802145EC;
}

loc_802143F0:
{
    r3 = r27;
    ctx->lr = 0x802143F8u;
    if constexpr (KnownRegArgsCpuCall<0x8027FCD4u>(&func_8027FCD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        const auto regargs_result_8027FCD4_1B31 = func_8027FCD4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027FCD4_1B31);
        r4 = static_cast<uint32_t>(regargs_result_8027FCD4_1B31 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8027FCD4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        xer = ctx->xer;
    }
    r3 = (r3 & 255);
    guest_range_1 = MemoryInline::ResolveRangeHost(r27, 0, 12u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r27 + 1));
}

loc_80214404:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80214410;
    }
}

loc_80214408:
{
    r30 = (r30 | 64);
    goto loc_802145EC;
}

loc_80214410:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r27);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r27 + 2));
    MemoryInline::FlatWrite16((r28 + 2), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r27 + 1));
    r0 = (r3 + 1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r27 + 4));
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r27 + 6));
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r27 + 8));
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r27 + 10));
    MemoryInline::FlatWrite16((r28 + 10), static_cast<uint16_t>(r0));
    r3 = r28;
    r4 = 255;
    ctx->lr = 0x8021445Cu;
    if constexpr (KnownRegArgsCpuCall<0x80217E3Cu>(&func_80217E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80217E3C_2482 = func_80217E3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217E3C_2482);
        r4 = static_cast<uint32_t>(regargs_result_80217E3C_2482 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80217E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite32(r29, r3);
    goto loc_802145EC;
}

loc_80214464:
{
}

loc_80214468:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(1))) {
        goto loc_80214474;
    }
}

loc_8021446C:
{
    r30 = (r30 | 4);
    goto loc_802145EC;
}

loc_80214474:
{
    r0 = MemoryInline::FlatRead8(r27);
}

loc_8021447C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_802144F4;
    }
}

loc_80214480:
{
    r3 = r27;
    ctx->lr = 0x80214488u;
    if constexpr (KnownRegArgsCpuCall<0x8027FF84u>(&func_8027FF84)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027FF84_29F3 = func_8027FF84_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027FF84_29F3);
        r4 = static_cast<uint32_t>(regargs_result_8027FF84_29F3 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027FF84u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        xer = ctx->xer;
    }
    r3 = (r3 & 255);
    guest_range_2 = MemoryInline::ResolveRangeHost(r27, 0, 12u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r27 + 1));
}

loc_80214494:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_802144A0;
    }
}

loc_80214498:
{
    r30 = (r30 | 64);
    goto loc_802145EC;
}

loc_802144A0:
{
    r0 = MemoryInline::ReadResolved8(guest_range_2, 0u, r27);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r27 + 2));
    MemoryInline::FlatWrite16((r28 + 2), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_2, 1u, (r27 + 1));
    r0 = (r3 + 1);
    r0 = (r0 & 255);
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r27 + 4));
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r27 + 6));
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r27 + 8));
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r27 + 10));
    MemoryInline::FlatWrite16((r28 + 10), static_cast<uint16_t>(r0));
    r3 = r28;
    r4 = 255;
    ctx->lr = 0x802144ECu;
    if constexpr (KnownRegArgsCpuCall<0x80217EF8u>(&func_80217EF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80217EF8_3281 = func_80217EF8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80217EF8_3281);
        r4 = static_cast<uint32_t>(regargs_result_80217EF8_3281 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80217EF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    MemoryInline::FlatWrite32(r29, r3);
    goto loc_802145EC;
}

loc_802144F4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = 0x806C0000u;
    r3 = (r3 + 6272);
    r3_addr_1 = (r3 + r0);
    r25 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead16((r27 + 2));
    r0 = (r0 * 24);
    r25 = (r25 + r0);
    r23 = 0;
    r24 = 0;
    r26 = 0;
}

loc_8021451C:
{
    r22 = MemoryInline::FlatRead16((r25 + 12));
}

loc_80214524:
{
    if ((static_cast<int32_t>(r22) == static_cast<int32_t>(0))) {
        goto loc_802145C4;
    }
}

loc_80214528:
{
    r3 = MemoryInline::FlatRead8(r27);
    r4 = r22;
    ctx->lr = 0x80214534u;
    if constexpr (KnownRegArgsCpuCall<0x8027ECB4u>(&func_8027ECB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027ECB4_382B = func_8027ECB4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_8027ECB4_382B);
        r4 = static_cast<uint32_t>(regargs_result_8027ECB4_382B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027ECB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r4 = r3;
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r4 + 20));
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    ctx->lr = 0x80214548u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    InvokeDirectCpu<0x80213548u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    xer = ctx->xer;
}

loc_8021454C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802145C4;
    }
}

loc_80214550:
{
    r23 = (r23 + 1);
    r0 = MemoryInline::FlatRead8(r27);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r28 + 2), static_cast<uint16_t>(r22));
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r26));
    MemoryInline::FlatWrite16((r28 + 4), static_cast<uint16_t>(r26));
    MemoryInline::FlatWrite16((r28 + 6), static_cast<uint16_t>(r26));
    MemoryInline::FlatWrite16((r28 + 8), static_cast<uint16_t>(r26));
    MemoryInline::FlatWrite16((r28 + 10), static_cast<uint16_t>(r26));
    r3 = MemoryInline::FlatRead8(r27);
    r4 = r22;
    ctx->lr = 0x80214580u;
    if constexpr (KnownRegArgsCpuCall<0x80217E04u>(&func_80217E04)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80217E04_4043 = func_80217E04_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217E04_4043);
        r4 = static_cast<uint32_t>(regargs_result_80217E04_4043 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80217E04u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
    MemoryInline::FlatWrite32(r29, r3);
    r28 = (r28 + 12);
    r29 = (r29 + 4);
    r3 = MemoryInline::FlatRead8(r27);
    r4 = r22;
    r5 = 1;
    // inline leaf 0x8004D4C0 (24 guest instruction(s))
}

loc_inl1_0x8004D4C0:
{
    r7 = (r3 & 255);
}

loc_inl1_0x8004D4C8:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x8004D4D4;
    }
}

loc_inl1_0x8004D4CC:
{
}

loc_inl1_0x8004D4D0:
{
    if ((static_cast<uint32_t>(r7) < static_cast<uint32_t>(16))) {
        goto loc_inl1_0x8004D4DC;
    }
}

loc_inl1_0x8004D4D4:
{
    r3 = 0;
    goto loc_inl1_cont_8004D4C0;
}

loc_inl1_0x8004D4DC:
{
    r3 = 1;
    r0 = (r5 & 65535);
    r6 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r5 = MemoryInline::FlatRead32((r13 + -17824));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = 0x80580000u;
    r3 = (r3 + 7560);
    addr_lhax_8004D4F8_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_8004D4F8_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = (r5 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 19280));
    r3 = (r6 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
}

loc_inl1_cont_8004D4C0:
{
    // end of inlined leaf 0x8004D4C0
}

loc_802145A0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802145C4;
    }
}

loc_802145A4:
{
    r3 = MemoryInline::FlatRead8(r27);
    r4 = r22;
    r5 = 1;
    // inline leaf 0x8004D3DC (22 guest instruction(s))
}

loc_inl2_0x8004D3DC:
{
    r0 = (r3 & 255);
}

loc_inl2_0x8004D3E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8004D3E8:
{
}

loc_inl2_0x8004D3EC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(16))) {
        goto loc_inl2_0x8004D3F4;
    }
}

loc_inl2_0x8004D3F0:
{
    goto loc_inl2_cont_8004D3DC;
}

loc_inl2_0x8004D3F4:
{
    r6 = MemoryInline::FlatRead32((r13 + -17824));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r3 = 0x80580000u;
    r3 = (r3 + 7560);
    addr_lhax_8004D404_loc_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_8004D404_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6 = (r6 + r0);
    r4 = MemoryInline::FlatRead8((r6 + 19280));
    r3 = 1;
    r0 = (r5 & 65535);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite8((r6 + 19280), static_cast<uint8_t>(r0));
    goto loc_inl2_cont_8004D3DC;
}

loc_inl2_return:
{
}

loc_inl2_cont_8004D3DC:
{
    // end of inlined leaf 0x8004D3DC
    r3 = MemoryInline::FlatRead8(r27);
    r4 = r22;
    r5 = 2;
    // inline leaf 0x8004D3DC (22 guest instruction(s))
}

loc_inl3_0x8004D3DC:
{
    r0 = (r3 & 255);
}

loc_inl3_0x8004D3E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8004D3E8:
{
}

loc_inl3_0x8004D3EC:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(16))) {
        goto loc_inl3_0x8004D3F4;
    }
}

loc_inl3_0x8004D3F0:
{
    goto loc_inl3_cont_8004D3DC;
}

loc_inl3_0x8004D3F4:
{
    r6 = MemoryInline::FlatRead32((r13 + -17824));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = 0x80580000u;
    r3 = (r3 + 7560);
    addr_lhax_8004D404_loc_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(addr_lhax_8004D404_loc_1);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r4 + r0);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6 = (r6 + r0);
    r4 = MemoryInline::FlatRead8((r6 + 19280));
    r3 = 1;
    r0 = (r5 & 65535);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r0 & 255);
    r0 = (r4 | r0);
    MemoryInline::FlatWrite8((r6 + 19280), static_cast<uint8_t>(r0));
    goto loc_inl3_cont_8004D3DC;
}

loc_inl3_return:
{
}

loc_inl3_cont_8004D3DC:
{
    // end of inlined leaf 0x8004D3DC
}

loc_802145C4:
{
    r25 = (r25 + 2);
    r24 = (r24 + 1);
}

loc_802145D0:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(4))) {
        goto loc_8021451C;
    }
}

loc_802145D4:
{
    r0 = (r23 & 65535);
}

loc_802145DC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802145EC;
    }
}

loc_802145E0:
{
    r30 = (r30 | 8);
    goto loc_802145EC;
}

loc_802145E8:
{
    r30 = (r30 | 2);
}

loc_802145EC:
{
    r3 = r30;
    r11 = (r1 + 48);
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021433C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021433C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021433C func_8021433C preserves=true fpr_mask=0x00000000
