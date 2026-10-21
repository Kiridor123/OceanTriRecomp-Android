#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8021813C(CpuContext* ctx);
extern "C" uint32_t func_8021813C_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8027F21C(CpuContext* ctx);
extern "C" uint32_t func_8027F21C_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8030A234(CpuContext* ctx);
extern "C" uint64_t func_8030A234_ra98_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8030A240(CpuContext* ctx);
extern "C" uint64_t func_8030A240_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8021819C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_10 = nullptr;
    uint8_t* guest_range_11 = nullptr;
    uint8_t* guest_range_12 = nullptr;
    uint8_t* guest_range_13 = nullptr;
    uint8_t* guest_range_14 = nullptr;
    uint8_t* guest_range_15 = nullptr;
    uint8_t* guest_range_16 = nullptr;
    uint8_t* guest_range_17 = nullptr;
    uint8_t* guest_range_18 = nullptr;
    uint8_t* guest_range_19 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_20 = nullptr;
    uint8_t* guest_range_21 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;
    uint8_t* guest_range_7 = nullptr;
    uint8_t* guest_range_8 = nullptr;
    uint8_t* guest_range_9 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;
    const uint32_t r30_entry = r30;
    const uint32_t r31_entry = r31;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x8021819Cu);
    goto loc_8021819C;

loc_8021819C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r28 = r3;
    r30 = 0;
    r31 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 3), 0, 36u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 19), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r3 + 29), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r3 + 20), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 27u, (r3 + 30), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 21), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 31), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r3 + 22), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r3 + 32), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 20u, (r3 + 23), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r3 + 33), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 21u, (r3 + 24), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r3 + 34), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 22u, (r3 + 25), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r3 + 35), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 23u, (r3 + 26), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r3 + 36), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 24u, (r3 + 27), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 34u, (r3 + 37), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 25u, (r3 + 28), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 35u, (r3 + 38), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 3), static_cast<uint8_t>(r31));
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80218218:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(10))) {
        goto loc_802190C8;
    }
}

loc_8021821C:
{
    r4 = 0x805C0000u;
    r4 = (r4 + -23184);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x802190C8u:
        goto loc_802190C8;
        break;
    case 0x802182D4u:
        goto loc_802182D4;
        break;
    case 0x80218C20u:
        goto loc_80218C20;
        break;
    case 0x80218234u:
        goto loc_80218234;
        break;
    case 0x8021823Cu:
        goto loc_8021823C;
        break;
    case 0x80218840u:
        goto loc_80218840;
        break;
    case 0x80218C18u:
        goto loc_80218C18;
        break;
    case 0x80218274u:
        goto loc_80218274;
        break;
    case 0x80218250u:
        goto loc_80218250;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->ctr = ctr;
        InvokeIndirectJump(ctr, ctx);
        return (static_cast<uint64_t>(ctx->gpr[4]) << 32) | ctx->gpr[3];
    }
}

loc_80218234:
{
    r30 = 1;
    goto loc_802190C8;
}

loc_8021823C:
{
    r3 = MemoryInline::FlatRead32((r3 + 52));
    r4 = (r28 + 92);
    ctx->lr = 0x80218248u;
    if constexpr (KnownRegArgsCpuCall<0x8030A234u>(&func_8030A234)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8030A234_1A32 = func_8030A234_ra98_0_18_0(ctx, r3, r4, r7);
        r3 = static_cast<uint32_t>(regargs_result_8030A234_1A32);
        r4 = static_cast<uint32_t>(regargs_result_8030A234_1A32 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030A234u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    goto loc_802190C8;
}

loc_80218250:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 3), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 52));
    r4 = (r28 + 92);
    r5 = (r28 + 104);
    r6 = (r28 + 116);
    ctx->lr = 0x8021826Cu;
    if constexpr (KnownRegArgsCpuCall<0x8030A240u>(&func_8030A240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        const auto regargs_result_8030A240_1FE4 = func_8030A240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8030A240_1FE4);
        r4 = static_cast<uint32_t>(regargs_result_8030A240_1FE4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8030A240u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r11 = ctx->gpr[11];
        ctr = ctx->ctr;
    }
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    goto loc_802190C8;
}

loc_80218274:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2));
}

loc_80218288:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_80218298;
    }
}

loc_8021828C:
{
}

loc_80218290:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802182BC;
    }
}

loc_80218294:
{
    goto loc_802190C8;
}

loc_80218298:
{
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 17), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 15u, (r3 + 18), static_cast<uint8_t>(r0));
    r30 = 1;
    r0 = 14;
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryInline::WriteResolved8(guest_range_0, 26u, (r3 + 29), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_802182BC:
{
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_0, 14u, (r3 + 17), static_cast<uint8_t>(r0));
    r30 = 1;
    r0 = 14;
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 19), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_802182D4:
{
    r3 = MemoryInline::FlatRead8((r3 + 92));
    if constexpr (KnownRegArgsCpuCall<0x8021813Cu>(&func_8021813C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021813C_2979 = func_8021813C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8021813C_2979;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8021813Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 255);
}

loc_802182E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80218304;
    }
}

loc_802182E8:
{
}

loc_802182EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80218480;
    }
}

loc_802182F0:
{
}

loc_802182F4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8021862C;
    }
}

loc_802182F8:
{
}

loc_802182FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_8021876C;
    }
}

loc_80218300:
{
    goto loc_802190C8;
}

loc_80218304:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 17), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 18), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80218318:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80218350;
    }
}

loc_8021831C:
{
}

loc_80218320:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8021837C;
    }
}

loc_80218324:
{
}

loc_80218328:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_802183A8;
    }
}

loc_8021832C:
{
}

loc_80218330:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(9))) {
        goto loc_802183E4;
    }
}

loc_80218334:
{
}

loc_80218338:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_80218420;
    }
}

loc_8021833C:
{
}

loc_80218340:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_8021843C;
    }
}

loc_80218344:
{
}

loc_80218348:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(8))) {
        goto loc_8021843C;
    }
}

loc_8021834C:
{
    goto loc_802190C8;
}

loc_80218350:
{
    r30 = 2;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 19), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 29), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::FlatWrite8((r28 + 20), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::FlatWrite8((r28 + 30), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_8021837C:
{
    r30 = 2;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 19), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryInline::FlatWrite8((r28 + 29), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 20), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::FlatWrite8((r28 + 30), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_802183A8:
{
    r30 = 3;
    guest_range_1 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_1, 15u, (r28 + 19), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryInline::WriteResolved8(guest_range_1, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_1, 26u, (r28 + 30), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_1, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_802183E4:
{
    r30 = 3;
    guest_range_2 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 15u, (r28 + 19), static_cast<uint8_t>(r0));
    r0 = 16;
    MemoryInline::WriteResolved8(guest_range_2, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_2, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_2, 26u, (r28 + 30), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_2, 17u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_2, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_80218420:
{
    r30 = 1;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 19), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 29), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_8021843C:
{
    r30 = 3;
    r0 = 7;
    guest_range_3 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r28 + 5), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_3, 15u, (r28 + 19), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_3, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_3, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_3, 26u, (r28 + 30), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_3, 17u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_3, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_80218480:
{
    r3 = 3;
    MemoryInline::FlatWrite8((r28 + 17), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r28 + 18), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80218494:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802184CC;
    }
}

loc_80218498:
{
}

loc_8021849C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80218508;
    }
}

loc_802184A0:
{
}

loc_802184A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80218548;
    }
}

loc_802184A8:
{
}

loc_802184AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_80218588;
    }
}

loc_802184B0:
{
}

loc_802184B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802185C8;
    }
}

loc_802184B8:
{
}

loc_802184BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802185E8;
    }
}

loc_802184C0:
{
}

loc_802184C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_802185E8;
    }
}

loc_802184C8:
{
    goto loc_802190C8;
}

loc_802184CC:
{
    r30 = 3;
    r0 = 1;
    guest_range_4 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 15u, (r28 + 19), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_4, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_4, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_4, 26u, (r28 + 30), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_4, 17u, (r28 + 21), static_cast<uint8_t>(r3));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_4, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_80218508:
{
    r30 = 3;
    r0 = 1;
    guest_range_5 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_5, 15u, (r28 + 19), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryInline::WriteResolved8(guest_range_5, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_5, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_5, 26u, (r28 + 30), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_5, 17u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_5, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_80218548:
{
    r30 = 3;
    r0 = 1;
    guest_range_6 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_6, 0u, (r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_6, 1u, (r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_6, 15u, (r28 + 19), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryInline::WriteResolved8(guest_range_6, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_6, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_6, 26u, (r28 + 30), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_6, 17u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_6, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_80218588:
{
    r30 = 3;
    r0 = 1;
    guest_range_7 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_7, 0u, (r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_7, 1u, (r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_7, 15u, (r28 + 19), static_cast<uint8_t>(r0));
    r0 = 16;
    MemoryInline::WriteResolved8(guest_range_7, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_7, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_7, 26u, (r28 + 30), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_7, 17u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_7, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_802185C8:
{
    r30 = 1;
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 19), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 29), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_802185E8:
{
    r30 = 3;
    r0 = 7;
    guest_range_8 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_8, 0u, (r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_8, 1u, (r28 + 5), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_8, 15u, (r28 + 19), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_8, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_8, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_8, 26u, (r28 + 30), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_8, 17u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_8, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_8021862C:
{
    r3 = 2;
    MemoryInline::FlatWrite8((r28 + 17), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r28 + 18), static_cast<uint8_t>(r3));
    r4 = MemoryInline::FlatRead8((r28 + 2));
    r0 = (r4 + -1);
}

loc_80218644:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8021866C;
    }
}

loc_80218648:
{
}

loc_8021864C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(9))) {
        goto loc_802186A4;
    }
}

loc_80218650:
{
}

loc_80218654:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_802186DC;
    }
}

loc_80218658:
{
}

loc_8021865C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_802186F8;
    }
}

loc_80218660:
{
}

loc_80218664:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(8))) {
        goto loc_802186F8;
    }
}

loc_80218668:
{
    goto loc_802190C8;
}

loc_8021866C:
{
    r30 = 3;
    r0 = 1;
    guest_range_9 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_9, 0u, (r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_9, 1u, (r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_9, 15u, (r28 + 19), static_cast<uint8_t>(r0));
    r0 = 15;
    MemoryInline::WriteResolved8(guest_range_9, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 10;
    MemoryInline::WriteResolved8(guest_range_9, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_9, 26u, (r28 + 30), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_9, 17u, (r28 + 21), static_cast<uint8_t>(r3));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_9, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_802186A4:
{
    r30 = 3;
    r0 = 1;
    guest_range_10 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_10, 0u, (r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_10, 1u, (r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_10, 15u, (r28 + 19), static_cast<uint8_t>(r0));
    r0 = 16;
    MemoryInline::WriteResolved8(guest_range_10, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 10;
    MemoryInline::WriteResolved8(guest_range_10, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_10, 26u, (r28 + 30), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_10, 17u, (r28 + 21), static_cast<uint8_t>(r3));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_10, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_802186DC:
{
    r30 = 1;
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 19), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 29), static_cast<uint8_t>(r3));
    goto loc_802190C8;
}

loc_802186F8:
{
    r30 = 4;
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -12348));
}

loc_80218708:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_8021871C;
    }
}

loc_8021870C:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    goto loc_80218728;
}

loc_8021871C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
}

loc_80218728:
{
    r0 = 1;
    guest_range_11 = MemoryInline::ResolveRangeHost((r28 + 19), 0, 14u, false, true);
    MemoryInline::WriteResolved8(guest_range_11, 0u, (r28 + 19), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_11, 10u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 10;
    MemoryInline::WriteResolved8(guest_range_11, 1u, (r28 + 20), static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_11, 11u, (r28 + 30), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_11, 2u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_11, 12u, (r28 + 31), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_11, 3u, (r28 + 22), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_11, 13u, (r28 + 32), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_8021876C:
{
    r3 = 4;
    MemoryInline::FlatWrite8((r28 + 17), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r28 + 18), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80218780:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802187A0;
    }
}

loc_80218784:
{
}

loc_80218788:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_802187A0;
    }
}

loc_8021878C:
{
}

loc_80218790:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_802187E4;
    }
}

loc_80218794:
{
}

loc_80218798:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80218820;
    }
}

loc_8021879C:
{
    goto loc_802190C8;
}

loc_802187A0:
{
    r30 = 3;
    r0 = 7;
    guest_range_12 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_12, 0u, (r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_12, 1u, (r28 + 5), static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_12, 15u, (r28 + 19), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_12, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_12, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_12, 26u, (r28 + 30), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_12, 17u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_12, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_802187E4:
{
    r30 = 3;
    r0 = 1;
    guest_range_13 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_13, 0u, (r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_13, 1u, (r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_13, 15u, (r28 + 19), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_13, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_13, 16u, (r28 + 20), static_cast<uint8_t>(r3));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_13, 26u, (r28 + 30), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_13, 17u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_13, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_80218820:
{
    r30 = 1;
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 19), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 29), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_80218840:
{
    r29 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 3), static_cast<uint8_t>(r29));
    r3 = MemoryInline::FlatRead8((r3 + 92));
    if constexpr (KnownRegArgsCpuCall<0x8021813Cu>(&func_8021813C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021813C_799A = func_8021813C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8021813C_799A;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8021813Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r0 = (r3 & 255);
}

loc_80218858:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80218878;
    }
}

loc_8021885C:
{
}

loc_80218860:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80218938;
    }
}

loc_80218864:
{
}

loc_80218868:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802189F8;
    }
}

loc_8021886C:
{
}

loc_80218870:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80218B9C;
    }
}

loc_80218874:
{
    goto loc_802190C8;
}

loc_80218878:
{
    MemoryInline::FlatWrite8((r28 + 17), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r28 + 18), static_cast<uint8_t>(r29));
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80218888:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802188A0;
    }
}

loc_8021888C:
{
}

loc_80218890:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802188DC;
    }
}

loc_80218894:
{
}

loc_80218898:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802188F8;
    }
}

loc_8021889C:
{
    goto loc_802190C8;
}

loc_802188A0:
{
    r30 = 3;
    guest_range_14 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_14, 0u, (r28 + 4), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_14, 1u, (r28 + 5), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_14, 15u, (r28 + 19), static_cast<uint8_t>(r29));
    r0 = 15;
    MemoryInline::WriteResolved8(guest_range_14, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_14, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_14, 26u, (r28 + 30), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_14, 17u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_14, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_802188DC:
{
    r30 = 1;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r28 + 19), static_cast<uint8_t>(r29));
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 29), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_802188F8:
{
    r30 = 3;
    r0 = 7;
    guest_range_15 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_15, 0u, (r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_15, 1u, (r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_15, 15u, (r28 + 19), static_cast<uint8_t>(r29));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_15, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_15, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_15, 26u, (r28 + 30), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_15, 17u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_15, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_80218938:
{
    r3 = 3;
    MemoryInline::FlatWrite8((r28 + 17), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r28 + 18), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_8021894C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80218964;
    }
}

loc_80218950:
{
}

loc_80218954:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802189A0;
    }
}

loc_80218958:
{
}

loc_8021895C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802189BC;
    }
}

loc_80218960:
{
    goto loc_802190C8;
}

loc_80218964:
{
    r30 = 3;
    guest_range_16 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_16, 0u, (r28 + 4), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_16, 1u, (r28 + 5), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_16, 15u, (r28 + 19), static_cast<uint8_t>(r29));
    r0 = 15;
    MemoryInline::WriteResolved8(guest_range_16, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_16, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_16, 26u, (r28 + 30), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_16, 17u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_16, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_802189A0:
{
    r30 = 1;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r28 + 19), static_cast<uint8_t>(r29));
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 29), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_802189BC:
{
    r30 = 3;
    r0 = 7;
    guest_range_17 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_17, 0u, (r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_17, 1u, (r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_17, 15u, (r28 + 19), static_cast<uint8_t>(r29));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_17, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_17, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_17, 26u, (r28 + 30), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_17, 17u, (r28 + 21), static_cast<uint8_t>(r3));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_17, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_802189F8:
{
    r3 = 2;
    MemoryInline::FlatWrite8((r28 + 17), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r28 + 18), static_cast<uint8_t>(r3));
    r4 = MemoryInline::FlatRead8((r28 + 2));
    r0 = (r4 + -1);
}

loc_80218A10:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80218A94;
    }
}

loc_80218A14:
{
    r0 = (r4 + -6);
}

loc_80218A1C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80218AEC;
    }
}

loc_80218A20:
{
}

loc_80218A24:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80218A3C;
    }
}

loc_80218A28:
{
}

loc_80218A2C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_80218AEC;
    }
}

loc_80218A30:
{
}

loc_80218A34:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_80218B84;
    }
}

loc_80218A38:
{
    goto loc_802190C8;
}

loc_80218A3C:
{
    r30 = 6;
    guest_range_18 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 31u, false, true);
    MemoryInline::WriteResolved8(guest_range_18, 0u, (r28 + 4), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_18, 1u, (r28 + 5), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_18, 15u, (r28 + 19), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_18, 25u, (r28 + 29), static_cast<uint8_t>(r3));
    r0 = 10;
    MemoryInline::WriteResolved8(guest_range_18, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_18, 26u, (r28 + 30), static_cast<uint8_t>(r31));
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_18, 17u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_18, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    r0 = 11;
    MemoryInline::WriteResolved8(guest_range_18, 18u, (r28 + 22), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_18, 28u, (r28 + 32), static_cast<uint8_t>(r31));
    r0 = 12;
    MemoryInline::WriteResolved8(guest_range_18, 19u, (r28 + 23), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_18, 29u, (r28 + 33), static_cast<uint8_t>(r31));
    r0 = 13;
    MemoryInline::WriteResolved8(guest_range_18, 20u, (r28 + 24), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_18, 30u, (r28 + 34), static_cast<uint8_t>(r31));
    goto loc_802190C8;
}

loc_80218A94:
{
    r30 = 6;
    guest_range_19 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 31u, false, true);
    MemoryInline::WriteResolved8(guest_range_19, 0u, (r28 + 4), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_19, 1u, (r28 + 5), static_cast<uint8_t>(r29));
    MemoryInline::WriteResolved8(guest_range_19, 15u, (r28 + 19), static_cast<uint8_t>(r29));
    r0 = 15;
    MemoryInline::WriteResolved8(guest_range_19, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 10;
    MemoryInline::WriteResolved8(guest_range_19, 16u, (r28 + 20), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_19, 26u, (r28 + 30), static_cast<uint8_t>(r31));
    MemoryInline::WriteResolved8(guest_range_19, 17u, (r28 + 21), static_cast<uint8_t>(r3));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_19, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    r0 = 11;
    MemoryInline::WriteResolved8(guest_range_19, 18u, (r28 + 22), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_19, 28u, (r28 + 32), static_cast<uint8_t>(r31));
    r0 = 12;
    MemoryInline::WriteResolved8(guest_range_19, 19u, (r28 + 23), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_19, 29u, (r28 + 33), static_cast<uint8_t>(r31));
    r0 = 13;
    MemoryInline::WriteResolved8(guest_range_19, 20u, (r28 + 24), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_19, 30u, (r28 + 34), static_cast<uint8_t>(r31));
    goto loc_802190C8;
}

loc_80218AEC:
{
    r30 = 7;
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -12348));
}

loc_80218AFC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_80218B10;
    }
}

loc_80218B00:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    goto loc_80218B1C;
}

loc_80218B10:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
}

loc_80218B1C:
{
    r0 = 1;
    guest_range_20 = MemoryInline::ResolveRangeHost((r28 + 19), 0, 17u, false, true);
    MemoryInline::WriteResolved8(guest_range_20, 0u, (r28 + 19), static_cast<uint8_t>(r0));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_20, 10u, (r28 + 29), static_cast<uint8_t>(r0));
    r0 = 10;
    MemoryInline::WriteResolved8(guest_range_20, 1u, (r28 + 20), static_cast<uint8_t>(r0));
    r3 = 0;
    MemoryInline::WriteResolved8(guest_range_20, 11u, (r28 + 30), static_cast<uint8_t>(r3));
    r0 = 4;
    MemoryInline::WriteResolved8(guest_range_20, 2u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_20, 12u, (r28 + 31), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_20, 3u, (r28 + 22), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_20, 13u, (r28 + 32), static_cast<uint8_t>(r0));
    r0 = 11;
    MemoryInline::WriteResolved8(guest_range_20, 4u, (r28 + 23), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_20, 14u, (r28 + 33), static_cast<uint8_t>(r3));
    r0 = 12;
    MemoryInline::WriteResolved8(guest_range_20, 5u, (r28 + 24), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_20, 15u, (r28 + 34), static_cast<uint8_t>(r3));
    r0 = 13;
    MemoryInline::WriteResolved8(guest_range_20, 6u, (r28 + 25), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_20, 16u, (r28 + 35), static_cast<uint8_t>(r3));
    goto loc_802190C8;
}

loc_80218B84:
{
    r30 = 1;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r28 + 19), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r28 + 29), static_cast<uint8_t>(r3));
    goto loc_802190C8;
}

loc_80218B9C:
{
    r3 = 4;
    MemoryInline::FlatWrite8((r28 + 17), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r28 + 18), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80218BB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80218BC0;
    }
}

loc_80218BB4:
{
}

loc_80218BB8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80218BFC;
    }
}

loc_80218BBC:
{
    goto loc_802190C8;
}

loc_80218BC0:
{
    r30 = 3;
    r0 = 7;
    guest_range_21 = MemoryInline::ResolveRangeHost((r28 + 4), 0, 28u, false, true);
    MemoryInline::WriteResolved8(guest_range_21, 0u, (r28 + 4), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_21, 1u, (r28 + 5), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_21, 15u, (r28 + 19), static_cast<uint8_t>(r29));
    r0 = 2;
    MemoryInline::WriteResolved8(guest_range_21, 25u, (r28 + 29), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_21, 16u, (r28 + 20), static_cast<uint8_t>(r3));
    r0 = 5;
    MemoryInline::WriteResolved8(guest_range_21, 26u, (r28 + 30), static_cast<uint8_t>(r0));
    r0 = 3;
    MemoryInline::WriteResolved8(guest_range_21, 17u, (r28 + 21), static_cast<uint8_t>(r0));
    r0 = 6;
    MemoryInline::WriteResolved8(guest_range_21, 27u, (r28 + 31), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_80218BFC:
{
    r30 = 1;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r29));
    MemoryInline::FlatWrite8((r28 + 19), static_cast<uint8_t>(r29));
    r0 = 2;
    MemoryInline::FlatWrite8((r28 + 29), static_cast<uint8_t>(r0));
    goto loc_802190C8;
}

loc_80218C18:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 3), static_cast<uint8_t>(r0));
}

loc_80218C20:
{
    r3 = MemoryInline::FlatRead8((r3 + 56));
    if constexpr (KnownRegArgsCpuCall<0x8021813Cu>(&func_8021813C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021813C_B517 = func_8021813C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8021813C_B517;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8021813Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    MemoryInline::FlatWrite8((r28 + 17), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r28 + 92));
    if constexpr (KnownRegArgsCpuCall<0x8021813Cu>(&func_8021813C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8021813C_B75C = func_8021813C_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8021813C_B75C;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x8021813Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    MemoryInline::FlatWrite8((r28 + 18), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80218C40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80218C84;
    }
}

loc_80218C44:
{
}

loc_80218C48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_80218C9C;
    }
}

loc_80218C4C:
{
}

loc_80218C50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80218CB4;
    }
}

loc_80218C54:
{
}

loc_80218C58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80218CEC;
    }
}

loc_80218C5C:
{
}

loc_80218C60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_80218D60;
    }
}

loc_80218C64:
{
}

loc_80218C68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_80218D94;
    }
}

loc_80218C6C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    r0 = 13;
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    r29 = 1;
    goto loc_80218DC4;
}

loc_80218C84:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    r0 = 73;
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    r29 = 1;
    goto loc_80218DC4;
}

loc_80218C9C:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    r0 = 79;
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    r29 = 0;
    goto loc_80218DC4;
}

loc_80218CB4:
{
    r0 = MemoryInline::FlatRead8((r28 + 3));
}

loc_80218CBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80218CD4;
    }
}

loc_80218CC0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    r0 = 73;
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    goto loc_80218CE4;
}

loc_80218CD4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    r0 = 73;
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
}

loc_80218CE4:
{
    r29 = 1;
    goto loc_80218DC4;
}

loc_80218CEC:
{
    r3 = 0x806B0000u;
    r0 = MemoryInline::FlatRead8((r3 + -12348));
}

loc_80218CF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(6))) {
        goto loc_80218D2C;
    }
}

loc_80218CFC:
{
    r0 = MemoryInline::FlatRead8((r28 + 16));
    r0 = (r0 & 1);
}

loc_80218D08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80218D18;
    }
}

loc_80218D0C:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    goto loc_80218D20;
}

loc_80218D18:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
}

loc_80218D20:
{
    r0 = 15;
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    goto loc_80218D58;
}

loc_80218D2C:
{
    r0 = MemoryInline::FlatRead8((r28 + 16));
    r0 = (r0 & 1);
}

loc_80218D38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80218D48;
    }
}

loc_80218D3C:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    goto loc_80218D50;
}

loc_80218D48:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
}

loc_80218D50:
{
    r0 = 13;
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
}

loc_80218D58:
{
    r29 = 0;
    goto loc_80218DC4;
}

loc_80218D60:
{
    r0 = MemoryInline::FlatRead8((r28 + 16));
    r0 = (r0 & 1);
}

loc_80218D6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80218D7C;
    }
}

loc_80218D70:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    goto loc_80218D84;
}

loc_80218D7C:
{
    r0 = 6;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
}

loc_80218D84:
{
    r0 = 15;
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    r29 = 0;
    goto loc_80218DC4;
}

loc_80218D94:
{
    r0 = MemoryInline::FlatRead8((r28 + 16));
    r0 = (r0 & 1);
}

loc_80218DA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80218DB0;
    }
}

loc_80218DA4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
    goto loc_80218DB8;
}

loc_80218DB0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r0));
}

loc_80218DB8:
{
    r0 = 13;
    MemoryInline::FlatWrite8((r28 + 5), static_cast<uint8_t>(r0));
    r29 = 0;
}

loc_80218DC4:
{
    r3 = MemoryInline::FlatRead8((r28 + 17));
    r0 = (r3 + -3);
}

loc_80218DD0:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80218DE8;
    }
}

loc_80218DD4:
{
}

loc_80218DD8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1))) {
        goto loc_802190C8;
    }
}

loc_80218DDC:
{
}

loc_80218DE0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(2))) {
        goto loc_80218EF0;
    }
}

loc_80218DE4:
{
    goto loc_802190C8;
}

loc_80218DE8:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 29), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 19), static_cast<uint8_t>(r0));
    r0 = 4;
    MemoryInline::FlatWrite8((r28 + 30), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 20), static_cast<uint8_t>(r0));
    r27 = 2;
    r0 = MemoryInline::FlatRead8((r28 + 56));
}

loc_80218E0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80218E18;
    }
}

loc_80218E10:
{
    r30 = 0;
    goto loc_80218E24;
}

loc_80218E18:
{
    r3 = (r28 + 56);
    ctx->lr = 0x80218E20u;
    if constexpr (KnownRegArgsCpuCall<0x8027F21Cu>(&func_8027F21C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        const auto regargs_result_8027F21C_CFAE = func_8027F21C_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027F21C_CFAE;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8027F21Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r30 = r3;
}

loc_80218E24:
{
    r0 = MemoryInline::FlatRead8((r28 + 92));
}

loc_80218E2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80218E38;
    }
}

loc_80218E30:
{
    r3 = 0;
    goto loc_80218E40;
}

loc_80218E38:
{
    r3 = (r28 + 92);
    ctx->lr = 0x80218E40u;
    if constexpr (KnownRegArgsCpuCall<0x8027F21Cu>(&func_8027F21C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        const auto regargs_result_8027F21C_D40D = func_8027F21C_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027F21C_D40D;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8027F21Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
}

loc_80218E40:
{
}

loc_80218E44:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80218E5C;
    }
}

loc_80218E48:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r28 + 31), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 21), static_cast<uint8_t>(r0));
    r27 = 3;
    goto loc_80218EBC;
}

loc_80218E5C:
{
    r0 = (r30 + r3);
}

loc_80218E64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80218EBC;
    }
}

loc_80218E68:
{
}

loc_80218E6C:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80218E7C;
    }
}

loc_80218E70:
{
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80218E78:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80218E88;
    }
}

loc_80218E7C:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r28 + 21), static_cast<uint8_t>(r0));
    goto loc_80218E90;
}

loc_80218E88:
{
    r0 = 17;
    MemoryInline::FlatWrite8((r28 + 21), static_cast<uint8_t>(r0));
}

loc_80218E90:
{
}

loc_80218E94:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80218EA4;
    }
}

loc_80218E98:
{
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80218EA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80218EB0;
    }
}

loc_80218EA4:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r28 + 31), static_cast<uint8_t>(r0));
    goto loc_80218EB8;
}

loc_80218EB0:
{
    r0 = 17;
    MemoryInline::FlatWrite8((r28 + 31), static_cast<uint8_t>(r0));
}

loc_80218EB8:
{
    r27 = 3;
}

loc_80218EBC:
{
    r0 = 2;
    r3 = (r28 + r27);
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
    r27 = (r27 + 1);
    r4 = 6;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r27)));
    r3 = (r28 + r0);
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r4));
    r0 = (r27 + 1);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_802190C8;
}

loc_80218EF0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r28 + 29), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 19), static_cast<uint8_t>(r0));
    r31 = 1;
}

loc_80218F04:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(2))) {
        goto loc_80218F14;
    }
}

loc_80218F08:
{
    r0 = MemoryInline::FlatRead8((r28 + 18));
}

loc_80218F10:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80218FA4;
    }
}

loc_80218F14:
{
}

loc_80218F18:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_80218F40;
    }
}

loc_80218F1C:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r28 + 20), static_cast<uint8_t>(r0));
    r3 = 2;
    r0 = 8;
    MemoryInline::FlatWrite8((r28 + 21), static_cast<uint8_t>(r0));
    r4 = 3;
    r0 = 9;
    MemoryInline::FlatWrite8((r28 + 22), static_cast<uint8_t>(r0));
    goto loc_80218F58;
}

loc_80218F40:
{
    r0 = 17;
    MemoryInline::FlatWrite8((r28 + 20), static_cast<uint8_t>(r0));
    r3 = 2;
    MemoryInline::FlatWrite8((r28 + 21), static_cast<uint8_t>(r0));
    r4 = 3;
    MemoryInline::FlatWrite8((r28 + 22), static_cast<uint8_t>(r0));
}

loc_80218F58:
{
    r0 = MemoryInline::FlatRead8((r28 + 18));
}

loc_80218F60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80218F88;
    }
}

loc_80218F64:
{
    r0 = 7;
    MemoryInline::FlatWrite8((r28 + 30), static_cast<uint8_t>(r0));
    r0 = 8;
    r3 = (r28 + r3);
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r0));
    r0 = 9;
    r3 = (r28 + r4);
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r0));
    goto loc_80218FA0;
}

loc_80218F88:
{
    r0 = 17;
    MemoryInline::FlatWrite8((r28 + 30), static_cast<uint8_t>(r0));
    r3 = (r28 + r3);
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r0));
    r3 = (r28 + r4);
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r0));
}

loc_80218FA0:
{
    r31 = 4;
}

loc_80218FA4:
{
    r0 = MemoryInline::FlatRead8((r28 + 56));
}

loc_80218FAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80218FB8;
    }
}

loc_80218FB0:
{
    r3 = 0;
    goto loc_80218FC0;
}

loc_80218FB8:
{
    r3 = (r28 + 56);
    ctx->lr = 0x80218FC0u;
    if constexpr (KnownRegArgsCpuCall<0x8027F21Cu>(&func_8027F21C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        const auto regargs_result_8027F21C_E895 = func_8027F21C_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027F21C_E895;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8027F21Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
}

loc_80218FC0:
{
    r27 = r3;
    r0 = MemoryInline::FlatRead8((r28 + 92));
}

loc_80218FCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80218FD4;
    }
}

loc_80218FD0:
{
    r27 = 0;
}

loc_80218FD4:
{
    r0 = MemoryInline::FlatRead8((r28 + 92));
}

loc_80218FDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80218FEC;
    }
}

loc_80218FE0:
{
    r3 = (r28 + 92);
    ctx->lr = 0x80218FE8u;
    if constexpr (KnownRegArgsCpuCall<0x8027F21Cu>(&func_8027F21C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->ctr = ctr;
        const auto regargs_result_8027F21C_ED94 = func_8027F21C_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_8027F21C_ED94;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x8027F21Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r30 = r3;
}

loc_80218FEC:
{
}

loc_80218FF0:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80219024;
    }
}

loc_80218FF4:
{
    r0 = 4;
    r3 = (r28 + r31);
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
    r31 = (r31 + 1);
    r4 = 5;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r3 = (r28 + r0);
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r4));
    r31 = (r31 + 1);
    goto loc_80219094;
}

loc_80219024:
{
    r0 = (r27 + r30);
}

loc_8021902C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80219094;
    }
}

loc_80219030:
{
}

loc_80219034:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_80219044;
    }
}

loc_80219038:
{
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80219040:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80219054;
    }
}

loc_80219044:
{
    r0 = 5;
    r3 = (r28 + r31);
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
    goto loc_80219060;
}

loc_80219054:
{
    r0 = 17;
    r3 = (r28 + r31);
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r0));
}

loc_80219060:
{
}

loc_80219064:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_80219074;
    }
}

loc_80219068:
{
    r0 = MemoryInline::FlatRead8((r28 + 2));
}

loc_80219070:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(4))) {
        goto loc_80219084;
    }
}

loc_80219074:
{
    r0 = 5;
    r3 = (r28 + r31);
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r0));
    goto loc_80219090;
}

loc_80219084:
{
    r0 = 17;
    r3 = (r28 + r31);
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r0));
}

loc_80219090:
{
    r31 = (r31 + 1);
}

loc_80219094:
{
    r4 = 2;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r3 = (r28 + r0);
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r4));
    r31 = (r31 + 1);
    r4 = 6;
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r31)));
    r3 = (r28 + r0);
    MemoryInline::FlatWrite8((r3 + 29), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 19), static_cast<uint8_t>(r4));
    r0 = (r31 + 1);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_802190C8:
{
    MemoryInline::FlatWrite16((r28 + 10), static_cast<uint16_t>(r30));
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
    ctx->gpr[11] = r11;
    ctx->ctr = ctr;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    ctx->gpr[30] = r30_entry;
    ctx->gpr[31] = r31_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8021819C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8021819C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000017FB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8021819C func_8021819C preserves=true fpr_mask=0x00000000
