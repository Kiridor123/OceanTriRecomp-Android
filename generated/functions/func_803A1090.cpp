#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012D860(CpuContext* ctx);
extern "C" uint32_t func_8012D860_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80137834(CpuContext* ctx);
extern "C" uint64_t func_80137834_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802D8478(CpuContext* ctx);
extern "C" uint64_t func_802D8478_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_803A1090_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_803A1090;

loc_803A1090:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r4 & 255);
}

loc_803A10A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A10BC;
    }
}

loc_803A10A8:
{
}

loc_803A10AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803A10D0;
    }
}

loc_803A10B0:
{
}

loc_803A10B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803A1144;
    }
}

loc_803A10B8:
{
    goto loc_803A1158;
}

loc_803A10BC:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
}

loc_803A10C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A1158;
    }
}

loc_803A10C8:
{
    r3 = 1;
    goto loc_803A115C;
}

loc_803A10D0:
{
    r4 = MemoryInline::FlatRead8((r3 + 898));
}

loc_803A10D8:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_803A1158;
    }
}

loc_803A10DC:
{
    r0 = MemoryInline::FlatRead8((r3 + 896));
}

loc_803A10E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_803A10F4;
    }
}

loc_803A10E8:
{
}

loc_803A10EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_803A111C;
    }
}

loc_803A10F0:
{
    goto loc_803A1158;
}

loc_803A10F4:
{
    r3 = MemoryInline::FlatRead8((r3 + 897));
    ctx->lr = 0x803A10FCu;
    if constexpr (KnownRegArgsCpuCall<0x80137834u>(&func_80137834)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80137834_9FC = func_80137834_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80137834_9FC);
        r4 = static_cast<uint32_t>(regargs_result_80137834_9FC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80137834u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = MemoryInline::FlatRead8(r3);
}

loc_803A1104:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A1158;
    }
}

loc_803A1108:
{
    ctx->lr = 0x803A110Cu;
    if constexpr (KnownRegArgsCpuCall<0x8012D860u>(&func_8012D860)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_8012D860_DF2 = func_8012D860_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_8012D860_DF2;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8012D860u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A1110:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803A1158;
    }
}

loc_803A1114:
{
    r3 = 1;
    goto loc_803A115C;
}

loc_803A111C:
{
    r4 = 0x806C0000u;
    r3 = (r4 + -2080);
    r0 = MemoryInline::FlatRead8((r4 + -2080));
}

loc_803A112C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A1158;
    }
}

loc_803A1130:
{
    ctx->lr = 0x803A1134u;
    if constexpr (KnownRegArgsCpuCall<0x802D8478u>(&func_802D8478)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D8478_1238 = func_802D8478_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D8478_1238);
        r4 = static_cast<uint32_t>(regargs_result_802D8478_1238 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802D8478u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803A1138:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803A1158;
    }
}

loc_803A113C:
{
    r3 = 1;
    goto loc_803A115C;
}

loc_803A1144:
{
    r0 = MemoryInline::FlatRead8((r3 + 809));
}

loc_803A114C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803A1158;
    }
}

loc_803A1150:
{
    r3 = 1;
    goto loc_803A115C;
}

loc_803A1158:
{
    r3 = 0;
}

loc_803A115C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803A1090(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A1090_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A1090 func_803A1090 preserves=true fpr_mask=0x00000000
