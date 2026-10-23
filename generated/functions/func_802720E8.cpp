#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80271C38(CpuContext* ctx);
extern "C" uint64_t func_80271C38_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_802720E8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802720E8;

loc_802720E8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r30 = r3;
    r4 = (r4 & 255);
    ctx->lr = 0x8027210Cu;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271C38_41B = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_41B);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_41B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80272118:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027225C;
    }
}

loc_8027211C:
{
    r29 = 1;
    r3 = (r30 + 48);
    r4 = 1;
    ctx->lr = 0x8027212Cu;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271C38_84A = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_84A);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_84A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80272134:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027213C;
    }
}

loc_80272138:
{
    r29 = 2;
}

loc_8027213C:
{
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x80272148u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271C38_C7A = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_C7A);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_C7A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80272150:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027215C;
    }
}

loc_80272154:
{
    r0 = (r29 + 1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8027215C:
{
    r3 = (r30 + 12);
    r4 = 1;
    ctx->lr = 0x80272168u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271C38_10F4 = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_10F4);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_10F4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80272170:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027217C;
    }
}

loc_80272174:
{
    r0 = (r29 + 1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8027217C:
{
    r3 = (r30 + 24);
    r4 = 1;
    ctx->lr = 0x80272188u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271C38_1571 = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_1571);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_1571 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80272190:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8027219C;
    }
}

loc_80272194:
{
    r0 = (r29 + 1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8027219C:
{
    r3 = (r30 + 36);
    r4 = 1;
    ctx->lr = 0x802721A8u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271C38_19EE = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_19EE);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_19EE >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802721B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802721BC;
    }
}

loc_802721B4:
{
    r0 = (r29 + 1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802721BC:
{
    r3 = (r30 + 60);
    r4 = 1;
    ctx->lr = 0x802721C8u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271C38_1E6B = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_1E6B);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_1E6B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802721D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802721DC;
    }
}

loc_802721D4:
{
    r0 = (r29 + 1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802721DC:
{
    r3 = (r30 + 72);
    r4 = 1;
    ctx->lr = 0x802721E8u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271C38_22E8 = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_22E8);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_22E8 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_802721F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802721FC;
    }
}

loc_802721F4:
{
    r0 = (r29 + 1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802721FC:
{
    r0 = MemoryInline::FlatRead8((r30 + 84));
}

loc_80272204:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(12))) {
        goto loc_80272228;
    }
}

loc_80272208:
{
    r3 = (r30 + 84);
    r4 = 1;
    ctx->lr = 0x80272214u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271C38_282A = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_282A);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_282A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_8027221C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80272228;
    }
}

loc_80272220:
{
    r0 = (r29 + 1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80272228:
{
    r0 = MemoryInline::FlatRead8((r30 + 96));
}

loc_80272230:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_80272254;
    }
}

loc_80272234:
{
    r3 = (r30 + 96);
    r4 = 1;
    ctx->lr = 0x80272240u;
    if constexpr (KnownRegArgsCpuCall<0x80271C38u>(&func_80271C38)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80271C38_2D6C = func_80271C38_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80271C38_2D6C);
        r4 = static_cast<uint32_t>(regargs_result_80271C38_2D6C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80271C38u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80272248:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80272254;
    }
}

loc_8027224C:
{
    r0 = (r29 + 1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80272254:
{
    r0 = (r31 * r29);
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8027225C:
{
    r3 = r31;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802720E8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802720E8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802720E8 func_802720E8 preserves=true fpr_mask=0x00000000
