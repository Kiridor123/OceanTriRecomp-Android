#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027E0D0(CpuContext* ctx);
extern "C" uint32_t func_8027E0D0_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802D8478(CpuContext* ctx);
extern "C" uint64_t func_802D8478_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_802CD270_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_802CD270;

loc_802CD270:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 364));
    r3 = r31;
    r4 = 778;
    // inline leaf 0x80279118 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 984));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80279118
}

loc_802CD29C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CD2A8;
    }
}

loc_802CD2A0:
{
    r3 = 0;
    goto loc_802CD32C;
}

loc_802CD2A8:
{
    r3 = r31;
    r4 = 4;
    // inline leaf 0x80279118 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 984));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x80279118
}

loc_802CD2B8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CD2C4;
    }
}

loc_802CD2BC:
{
    r3 = 1;
    goto loc_802CD32C;
}

loc_802CD2C4:
{
    r3 = r31;
    r4 = 262144;
    // inline leaf 0x80279118 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 984));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x80279118
}

loc_802CD2D4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CD2F4;
    }
}

loc_802CD2D8:
{
    r3 = r30;
    ctx->lr = 0x802CD2E0u;
    if constexpr (KnownRegArgsCpuCall<0x802D8478u>(&func_802D8478)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802D8478_B43 = func_802D8478_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802D8478_B43);
        r4 = static_cast<uint32_t>(regargs_result_802D8478_B43 >> 32);
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
    r4 = (1 - r3);
    r0 = (r3 + -1);
    r0 = (r4 | r0);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    goto loc_802CD32C;
}

loc_802CD2F4:
{
    r3 = r31;
    r4 = 0;
    if constexpr (KnownRegArgsCpuCall<0x8027E0D0u>(&func_8027E0D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E0D0_EEC = func_8027E0D0_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8027E0D0_EEC;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027E0D0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
}

loc_802CD304:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_802CD310;
    }
}

loc_802CD308:
{
    r3 = 0;
    goto loc_802CD32C;
}

loc_802CD310:
{
    r3 = r31;
    r4 = 1;
    if constexpr (KnownRegArgsCpuCall<0x8027E0D0u>(&func_8027E0D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027E0D0_11D8 = func_8027E0D0_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8027E0D0_11D8;
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027E0D0u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
    }
    r4 = (r3 + -1);
    r0 = (1 - r3);
    r0 = (r4 | r0);
    r3 = (static_cast<int32_t>(r0) >> 31);
}

loc_802CD32C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802CD270(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802CD270_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802CD270 func_802CD270 preserves=true fpr_mask=0x00000000
