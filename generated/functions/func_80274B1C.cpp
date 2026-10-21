#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802749EC(CpuContext* ctx);
extern "C" uint32_t func_802749EC_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80274B1C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x80274B1Cu);
    goto loc_80274B1C;

loc_80274B1C:
{
    r4 = MemoryInline::FlatRead8((r3 + 2));
    r0 = (r4 + -4);
}

loc_80274B28:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80274B44;
    }
}

loc_80274B2C:
{
}

loc_80274B30:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(1))) {
        goto loc_80274B3C;
    }
}

loc_80274B34:
{
}

loc_80274B38:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_80274B48;
    }
}

loc_80274B3C:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80274B44:
{
    if constexpr (KnownRegArgsCpuCall<0x802749ECu>(&func_802749EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[4] = r4;
        const auto regargs_result_802749EC_4D2 = func_802749EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_802749EC_4D2;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802749ECu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80274B48:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80274B1C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80274B1C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80274B1C func_80274B1C preserves=true fpr_mask=0x00000000
