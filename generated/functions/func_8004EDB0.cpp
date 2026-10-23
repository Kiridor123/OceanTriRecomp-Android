#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004F000(CpuContext* ctx);
extern "C" void func_8004F000_ra18_0_0_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8045FBD4(CpuContext* ctx);
extern "C" uint32_t func_8045FBD4_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8004F000_statefree(uint32_t, uint32_t);
extern "C" void func_8004F000_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_8004EDB0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
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

    goto loc_8004EDB0;

loc_8004EDB0:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x80457464 (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    // end of inlined leaf 0x80457464
    r28 = r3;
    // inline leaf 0x8004D184 (5 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead32((r3 + 2396));
    MemoryInline::FlatWrite32((r13 + -17824), r3);
    // end of inlined leaf 0x8004D184
    r29 = (r3 + 21420);
    r30 = 0;
    r27 = 0;
    r31 = (r29 + 4);
    r24 = r31;
    r23 = r29;
    r25 = r27;
    r26 = r27;
    goto loc_8004EEB0;
}

loc_8004EDF0:
{
    r18 = 0;
    r19 = 0;
    r21 = (r28 + 4);
    r22 = MemoryInline::FlatRead32(r28);
    goto loc_8004EE2C;
}

loc_8004EE04:
{
    r3 = (r21 + 20);
}

loc_8004EE0C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004EE24;
    }
}

loc_8004EE10:
{
    r4 = (r24 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8004EE1C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004EE24;
    }
}

loc_8004EE20:
{
    r18 = 1;
}

loc_8004EE24:
{
    r21 = (r21 + 36);
    r19 = (r19 + 1);
}

loc_8004EE2C:
{
}

loc_8004EE30:
{
    if ((static_cast<int32_t>(r19) >= static_cast<int32_t>(r22))) {
        goto loc_8004EE3C;
    }
}

loc_8004EE34:
{
}

loc_8004EE38:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_8004EE04;
    }
}

loc_8004EE3C:
{
}

loc_8004EE40:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(0))) {
        goto loc_8004EEA0;
    }
}

loc_8004EE44:
{
}

loc_8004EE48:
{
    if ((static_cast<int32_t>(r20) <= static_cast<int32_t>(0))) {
        goto loc_8004EEA0;
    }
}

loc_8004EE4C:
{
    MemoryInline::FlatWrite8((r23 + 4), static_cast<uint8_t>(r25));
    MemoryInline::FlatWrite8((r23 + 24), static_cast<uint8_t>(r26));
    r20 = r30;
    r22 = r27;
    r3 = (r29 + r27);
    r21 = (r3 + 4);
    goto loc_8004EE84;
}

loc_8004EE68:
{
    r3 = r21;
    r4 = (r22 + r29);
    r4 = (r4 + 56);
    // inline leaf 0x8004F05C (31 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r3 + 12), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r3 + 16), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 20u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r4 + 20));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r4 + 24));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 20), r5);
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 24), r0);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_1, 28u, (r4 + 28));
    MemoryInline::WriteResolved16(guest_range_2, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 30u, (r4 + 30));
    MemoryInline::WriteResolved8(guest_range_2, 30u, (r3 + 30), static_cast<uint8_t>(r0));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 31u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 31u, (r4 + 31));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 35u, (r4 + 35));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 31u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 31u, (r3 + 31), r5);
        MemoryInline::WriteResolved32(guest_range_2, 35u, (r3 + 35), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 39u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_1, 39u, (r4 + 39));
            r0 = MemoryInline::ReadResolved32(guest_range_1, 43u, (r4 + 43));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 39u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 39u, (r3 + 39), r5);
        MemoryInline::WriteResolved32(guest_range_2, 43u, (r3 + 43), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 47u, (r4 + 47));
    MemoryInline::WriteResolved32(guest_range_2, 47u, (r3 + 47), r0);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 51u, (r4 + 51));
    MemoryInline::WriteResolved8(guest_range_2, 51u, (r3 + 51), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004F05C
    r22 = (r22 + 52);
    r21 = (r21 + 52);
    r20 = (r20 + 1);
}

loc_8004EE84:
{
    r0 = (r20 + 1);
    r3 = MemoryInline::FlatRead32(r29);
}

loc_8004EE90:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_8004EE68;
    }
}

loc_8004EE94:
{
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_8004EEB0;
}

loc_8004EEA0:
{
    r24 = (r24 + 52);
    r23 = (r23 + 52);
    r30 = (r30 + 1);
    r27 = (r27 + 52);
}

loc_8004EEB0:
{
    r20 = MemoryInline::FlatRead32(r29);
}

loc_8004EEB8:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r20))) {
        goto loc_8004EDF0;
    }
}

loc_8004EEBC:
{
    r21 = 0;
    r30 = (r28 + 4);
    r25 = r30;
    goto loc_8004EF58;
}

loc_8004EECC:
{
    r18 = -1;
    r22 = 0;
    r26 = r31;
    r20 = MemoryInline::FlatRead32(r29);
    goto loc_8004EF00;
}

loc_8004EEE0:
{
    r3 = (r25 + 20);
    r4 = (r26 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8004EEF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004EEF8;
    }
}

loc_8004EEF4:
{
    r18 = r22;
}

loc_8004EEF8:
{
    r26 = (r26 + 52);
    r22 = (r22 + 1);
}

loc_8004EF00:
{
}

loc_8004EF04:
{
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(r20))) {
        goto loc_8004EEE0;
    }
}

loc_8004EF08:
{
}

loc_8004EF0C:
{
    if ((static_cast<int32_t>(r18) != static_cast<int32_t>(-1))) {
        goto loc_8004EF50;
    }
}

loc_8004EF10:
{
}

loc_8004EF14:
{
    if ((static_cast<int32_t>(r20) >= static_cast<int32_t>(50))) {
        goto loc_8004EF50;
    }
}

loc_8004EF18:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r29, r0);
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r3 + -1);
    r0 = (r0 * 52);
    r3 = (r29 + r0);
    r18 = (r3 + 4);
    r3 = r18;
    r4 = r25;
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FBD4_2A5C = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_2A5C;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r18 + 20);
    r4 = (r25 + 20);
    if constexpr (KnownRegArgsCpuCall<0x8045FBD4u>(&func_8045FBD4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045FBD4_2CDF = func_8045FBD4_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8045FBD4_2CDF;
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045FBD4u>(ctx);
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8004EF50:
{
    r25 = (r25 + 36);
    r21 = (r21 + 1);
}

loc_8004EF58:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_8004EF60:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r0))) {
        goto loc_8004EECC;
    }
}

loc_8004EF64:
{
    r20 = 0;
    r25 = r30;
    goto loc_8004EFDC;
}

loc_8004EF70:
{
    r21 = 0;
    r26 = r30;
    goto loc_8004EFC4;
}

loc_8004EF7C:
{
    r3 = (r26 + 20);
    r4 = (r31 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_8004EF8C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8004EFBC;
    }
}

loc_8004EF90:
{
}

loc_8004EF94:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(r20))) {
        goto loc_8004EFBC;
    }
}

loc_8004EF98:
{
    r3 = (r1 + 8);
    r4 = r25;
    // inline leaf 0x8004F000 (23 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost(r4, 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 0u, r4);
            r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r4 + 4));
        }
    }
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_4, 4u, (r3 + 4), r0);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r4 + 8));
            r0 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r4 + 12));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 8u, (r3 + 8), r5);
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r3 + 12), r0);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r4 + 16));
    MemoryInline::WriteResolved32(guest_range_4, 16u, (r3 + 16), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 20u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r4 + 20));
            r0 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r4 + 24));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r3 + 20), r5);
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r3 + 24), r0);
    }
    r0 = MemoryInline::ReadResolved16(guest_range_3, 28u, (r4 + 28));
    MemoryInline::WriteResolved16(guest_range_4, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 30u, (r4 + 30));
    MemoryInline::WriteResolved8(guest_range_4, 30u, (r3 + 30), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 31u, (r4 + 31));
    MemoryInline::WriteResolved8(guest_range_4, 31u, (r3 + 31), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r4 + 32));
    MemoryInline::WriteResolved32(guest_range_4, 32u, (r3 + 32), r0);
    // end of inlined leaf 0x8004F000
    r3 = r25;
    r4 = r26;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004F000u) && KnownTranslatedCpuCall<0x8004F000u>::kAvailable && !KnownTranslatedCpuCall<0x8004F000u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004F000u>()) {
        func_8004F000_statefree_v0(r3, r4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8004F000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
    }
    r3 = r26;
    r4 = (r1 + 8);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004F000u) && KnownTranslatedCpuCall<0x8004F000u>::kAvailable && !KnownTranslatedCpuCall<0x8004F000u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004F000u>()) {
        const auto state_free_result_8004F000_42BA = func_8004F000_statefree(r3, r4);
        r0 = static_cast<uint32_t>(state_free_result_8004F000_42BA[0]);
        r5 = static_cast<uint32_t>(state_free_result_8004F000_42BA[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8004F000u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
    }
}

loc_8004EFBC:
{
    r26 = (r26 + 36);
    r21 = (r21 + 1);
}

loc_8004EFC4:
{
    r0 = MemoryInline::FlatRead32(r28);
}

loc_8004EFCC:
{
    if ((static_cast<int32_t>(r21) < static_cast<int32_t>(r0))) {
        goto loc_8004EF7C;
    }
}

loc_8004EFD0:
{
    r31 = (r31 + 52);
    r25 = (r25 + 36);
    r20 = (r20 + 1);
}

loc_8004EFDC:
{
    r0 = MemoryInline::FlatRead32(r29);
}

loc_8004EFE4:
{
    if ((static_cast<int32_t>(r20) < static_cast<int32_t>(r0))) {
        goto loc_8004EF70;
    }
}

loc_8004EFE8:
{
    r11 = (r1 + 112);
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004EDB0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004EDB0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004EDB0 func_8004EDB0 preserves=true fpr_mask=0x00000000
