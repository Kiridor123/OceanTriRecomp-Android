#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801478F8(CpuContext* ctx);
extern "C" uint64_t func_801478F8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AFF64(CpuContext* ctx);
extern "C" uint32_t func_802AFF64_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803AEC24_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803AEC24u);
    goto loc_803AEC24;

loc_803AEC24:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = 0;
    r4 = 0;
    r0 = 2;
    ctr = r0;
}

loc_803AEC50:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r13 + -16864), 0, 4u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27048), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27052), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27056), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27060), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27064), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27068), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27072), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27076), r4);
    r5 = (r5 + 32);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27048), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27052), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27056), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27060), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27064), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27068), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27072), r4);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = (r0 + r5);
    MemoryInline::FlatWrite32((r3 + 27076), r4);
    r5 = (r5 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803AEC50;
    }
}

loc_803AED1C:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r4 = MemoryInline::FlatRead32((r3 + 60));
    r0 = MemoryInline::FlatRead16((r4 + 900));
}

loc_803AED2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AED4C;
    }
}

loc_803AED30:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 27180), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite16((r3 + 27182), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite16((r3 + 27184), static_cast<uint16_t>(r0));
    goto loc_803AED68;
}

loc_803AED4C:
{
    MemoryInline::FlatWrite16((r3 + 27180), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 902));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite16((r3 + 27182), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 904));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite16((r3 + 27184), static_cast<uint16_t>(r0));
}

loc_803AED68:
{
    r0 = MemoryInline::FlatRead16((r4 + 906));
}

loc_803AED70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803AED94;
    }
}

loc_803AED74:
{
    r0 = 0;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite16((r3 + 27186), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite16((r3 + 27188), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite16((r3 + 27190), static_cast<uint16_t>(r0));
    goto loc_803AEDB4;
}

loc_803AED94:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite16((r3 + 27186), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 908));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite16((r3 + 27188), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r4 + 910));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite16((r3 + 27190), static_cast<uint16_t>(r0));
}

loc_803AEDB4:
{
    r0 = 0;
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 27176), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 27177), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 27178), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r4 + 892));
}

loc_803AEDD8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803AEDEC;
    }
}

loc_803AEDDC:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r0 = MemoryInline::FlatRead32((r3 + 60));
    r29 = (r4 + r0);
    goto loc_803AEDF0;
}

loc_803AEDEC:
{
    r29 = 0;
}

loc_803AEDF0:
{
    r3 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r13 + -16864));
    r3 = MemoryInline::FlatRead32((r3 + 60));
    r3 = MemoryInline::FlatRead8((r3 + 139));
    ctx->lr = 0x803AEE00u;
    if constexpr (KnownRegArgsCpuCall<0x802AFF64u>(&func_802AFF64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_802AFF64_1C86 = func_802AFF64_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802AFF64_1C86;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802AFF64u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r28 = (r3 & 255);
}

loc_803AEE08:
{
    if ((static_cast<int32_t>(r28) <= static_cast<int32_t>(32))) {
        goto loc_803AEE10;
    }
}

loc_803AEE0C:
{
    r28 = 32;
}

loc_803AEE10:
{
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite8((r3 + 27045), static_cast<uint8_t>(r28));
}

loc_803AEE1C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_803AEE58;
    }
}

loc_803AEE20:
{
    r30 = 0;
    r31 = 0;
    goto loc_803AEE50;
}

loc_803AEE2C:
{
    r3 = r29;
    r4 = 0;
    r5 = (r30 & 255);
    ctx->lr = 0x803AEE3Cu;
    if constexpr (KnownRegArgsCpuCall<0x801478F8u>(&func_801478F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->ctr = ctr;
        const auto regargs_result_801478F8_2146 = func_801478F8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801478F8_2146);
        r4 = static_cast<uint32_t>(regargs_result_801478F8_2146 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->ctr = ctr;
        InvokeDirectCpu<0x801478F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        ctr = ctx->ctr;
    }
    r0 = MemoryInline::FlatRead32((r13 + -16864));
    r4 = (r0 + r31);
    MemoryInline::FlatWrite32((r4 + 27048), r3);
    r31 = (r31 + 4);
    r30 = (r30 + 1);
}

loc_803AEE50:
{
}

loc_803AEE54:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r28))) {
        goto loc_803AEE2C;
    }
}

loc_803AEE58:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r13 + -16864));
    MemoryInline::FlatWrite32((r3 + 26460), r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803AEC24(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AEC24_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803AEC24 func_803AEC24 preserves=true fpr_mask=0x00000000
