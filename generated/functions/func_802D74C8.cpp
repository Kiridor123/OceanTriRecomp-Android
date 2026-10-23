#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D76A4(CpuContext* ctx);
extern "C" uint64_t func_802D76A4_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802D74C8_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802D74C8;

loc_802D74C8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = 100;
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 1073), static_cast<uint8_t>(r0));
    r0 = 100;
    MemoryInline::FlatWrite32((r3 + 1076), r0);
    MemoryInline::FlatWrite32((r3 + 1080), r0);
    r4 = 0x80660000u;
    r4 = (r4 + -19148);
    r0 = MemoryInline::FlatRead8((r4 + 38));
    MemoryInline::FlatWrite8((r3 + 1070), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 39));
    MemoryInline::FlatWrite8((r3 + 1071), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 40));
    MemoryInline::FlatWrite8((r3 + 1072), static_cast<uint8_t>(r0));
    r4 = 2;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_61A = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_61A);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_61A >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D7524:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802D75B4;
    }
}

loc_802D7528:
{
    r3 = r30;
    r4 = 3;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_945 = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_945);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_945 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D7538:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802D75B4;
    }
}

loc_802D753C:
{
    r3 = r30;
    r4 = 4;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_C70 = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_C70);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_C70 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D754C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802D75B4;
    }
}

loc_802D7550:
{
    r3 = r30;
    r4 = 5;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_F9B = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_F9B);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_F9B >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D7560:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802D75B4;
    }
}

loc_802D7564:
{
    r3 = r30;
    r4 = 6;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_12C6 = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_12C6);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_12C6 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D7574:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802D75B4;
    }
}

loc_802D7578:
{
    r3 = r30;
    r4 = 8;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_15F4 = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_15F4);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_15F4 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D7588:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802D75B4;
    }
}

loc_802D758C:
{
    r3 = r30;
    r4 = 9;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_1922 = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_1922);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_1922 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D759C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(1))) {
        goto loc_802D75B4;
    }
}

loc_802D75A0:
{
    r3 = r30;
    r4 = 10;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_1C51 = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_1C51);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_1C51 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D75B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D75BC;
    }
}

loc_802D75B4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 1073), static_cast<uint8_t>(r0));
}

loc_802D75BC:
{
    r3 = r30;
    r4 = 14;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_1FEB = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_1FEB);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_1FEB >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D75CC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D75DC;
    }
}

loc_802D75D0:
{
    r3 = MemoryInline::FlatRead32((r30 + 1076));
    r0 = (r3 + 20);
    MemoryInline::FlatWrite32((r30 + 1076), r0);
}

loc_802D75DC:
{
    r3 = r30;
    r4 = 15;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_23AA = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_23AA);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_23AA >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D75EC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D75FC;
    }
}

loc_802D75F0:
{
    r3 = MemoryInline::FlatRead32((r30 + 1080));
    r0 = (r3 + 20);
    MemoryInline::FlatWrite32((r30 + 1080), r0);
}

loc_802D75FC:
{
    r3 = r30;
    r4 = 19;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_2769 = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_2769);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_2769 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D760C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D762C;
    }
}

loc_802D7610:
{
    r3 = MemoryInline::FlatRead32((r30 + 1076));
    r0 = (r3 + 20);
    MemoryInline::FlatWrite32((r30 + 1076), r0);
    r3 = MemoryInline::FlatRead32((r30 + 1080));
    r0 = (r3 + 20);
    MemoryInline::FlatWrite32((r30 + 1080), r0);
    r31 = 120;
}

loc_802D762C:
{
    r3 = r30;
    r4 = 22;
    if constexpr (KnownRegArgsCpuCall<0x802D76A4u>(&func_802D76A4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D76A4_2BB1 = func_802D76A4_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D76A4_2BB1);
        r4 = static_cast<uint32_t>(regargs_result_802D76A4_2BB1 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D76A4u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_802D763C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802D765C;
    }
}

loc_802D7640:
{
    r3 = MemoryInline::FlatRead32((r30 + 1076));
    r0 = (r3 + 50);
    MemoryInline::FlatWrite32((r30 + 1076), r0);
    r3 = MemoryInline::FlatRead32((r30 + 1080));
    r0 = (r3 + 50);
    MemoryInline::FlatWrite32((r30 + 1080), r0);
    r31 = (r31 + 50);
}

loc_802D765C:
{
    r0 = MemoryInline::FlatRead16((r30 + 980));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 * r31);
    r3 = 1374420992;
    r3 = (r3 + -31457);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r3)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r0 + r3);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    MemoryInline::FlatWrite16((r30 + 980), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 982), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 984), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802D74C8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802D74C8_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802D74C8 func_802D74C8 preserves=true fpr_mask=0x00000000
