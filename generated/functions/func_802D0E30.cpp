#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802D33FC(CpuContext* ctx);
extern "C" uint64_t func_802D33FC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint32_t func_802D0E30_ra68_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r5, uint32_t arg_r6)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = arg_r5;
    ctx->gpr[6] = arg_r6;

    MKW_GUEST_ENTER(0x802D0E30u);
    goto loc_802D0E30;

loc_802D0E30:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 368), 0, 689u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 688u, (r3 + 1056));
}

loc_802D0E38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802D0E90;
    }
}

loc_802D0E3C:
{
}

loc_802D0E40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_802D0EBC;
    }
}

loc_802D0E44:
{
}

loc_802D0E48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_802D0EE8;
    }
}

loc_802D0E4C:
{
}

loc_802D0E50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802D0F14;
    }
}

loc_802D0E54:
{
}

loc_802D0E58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_802D0F40;
    }
}

loc_802D0E5C:
{
}

loc_802D0E60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_802D0F6C;
    }
}

loc_802D0E64:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 368));
}

loc_802D0E6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D0E80;
    }
}

loc_802D0E70:
{
    r4 = 0x805D0000u;
    r4 = (r4 + 18704);
    r4 = MemoryInline::FlatRead32((r4 + 60));
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802D33FC_7F1 = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_7F1);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_7F1 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802D0E80:
{
    r4 = 0x805D0000u;
    r4 = (r4 + 18704);
    r4 = MemoryInline::FlatRead32((r4 + 56));
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802D33FC_B37 = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_B37);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_B37 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802D0E90:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 368));
}

loc_802D0E98:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D0EAC;
    }
}

loc_802D0E9C:
{
    r4 = 0x805D0000u;
    r4 = (r4 + 18704);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802D33FC_F4C = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_F4C);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_F4C >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802D0EAC:
{
    r4 = 0x805D0000u;
    r4 = (r4 + 18704);
    r4 = MemoryInline::FlatRead32((r4 + 8));
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802D33FC_1291 = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_1291);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_1291 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802D0EBC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 368));
}

loc_802D0EC4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D0ED8;
    }
}

loc_802D0EC8:
{
    r4 = 0x805D0000u;
    r4 = (r4 + 18704);
    r4 = MemoryInline::FlatRead32((r4 + 20));
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802D33FC_16A9 = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_16A9);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_16A9 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802D0ED8:
{
    r4 = 0x805D0000u;
    r4 = (r4 + 18704);
    r4 = MemoryInline::FlatRead32((r4 + 16));
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802D33FC_19F2 = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_19F2);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_19F2 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802D0EE8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 368));
}

loc_802D0EF0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D0F04;
    }
}

loc_802D0EF4:
{
    r4 = 0x805D0000u;
    r4 = (r4 + 18704);
    r4 = MemoryInline::FlatRead32((r4 + 28));
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802D33FC_1E0A = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_1E0A);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_1E0A >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802D0F04:
{
    r4 = 0x805D0000u;
    r4 = (r4 + 18704);
    r4 = MemoryInline::FlatRead32((r4 + 24));
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802D33FC_2153 = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_2153);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_2153 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802D0F14:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 368));
}

loc_802D0F1C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D0F30;
    }
}

loc_802D0F20:
{
    r4 = 0x805D0000u;
    r4 = (r4 + 18704);
    r4 = MemoryInline::FlatRead32((r4 + 36));
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802D33FC_256B = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_256B);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_256B >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802D0F30:
{
    r4 = 0x805D0000u;
    r4 = (r4 + 18704);
    r4 = MemoryInline::FlatRead32((r4 + 32));
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802D33FC_28B4 = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_28B4);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_28B4 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802D0F40:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 368));
}

loc_802D0F48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D0F5C;
    }
}

loc_802D0F4C:
{
    r4 = 0x805D0000u;
    r4 = (r4 + 18704);
    r4 = MemoryInline::FlatRead32((r4 + 44));
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802D33FC_2CCC = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_2CCC);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_2CCC >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802D0F5C:
{
    r4 = 0x805D0000u;
    r4 = (r4 + 18704);
    r4 = MemoryInline::FlatRead32((r4 + 40));
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802D33FC_3015 = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_3015);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_3015 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802D0F6C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 368));
}

loc_802D0F74:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802D0F88;
    }
}

loc_802D0F78:
{
    r4 = 0x805D0000u;
    r4 = (r4 + 18704);
    r4 = MemoryInline::FlatRead32((r4 + 52));
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802D33FC_342D = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_342D);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_342D >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

loc_802D0F88:
{
    r4 = 0x805D0000u;
    r4 = (r4 + 18704);
    r4 = MemoryInline::FlatRead32((r4 + 48));
    if constexpr (KnownRegArgsCpuCall<0x802D33FCu>(&func_802D33FC)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_802D33FC_3776 = func_802D33FC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_802D33FC_3776);
        r4 = static_cast<uint32_t>(regargs_result_802D33FC_3776 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x802D33FCu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    return r3;
}

}

extern "C" void func_802D0E30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802D0E30_ra68_0_8_0(ctx, ctx->gpr[3], ctx->gpr[5], ctx->gpr[6]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000006B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802D0E30 func_802D0E30 preserves=true fpr_mask=0x00000000
