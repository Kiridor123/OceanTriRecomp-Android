#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DA790(CpuContext* ctx);
extern "C" uint64_t func_800DA790_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800DB590_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x800DB590u);
    goto loc_800DB590;

loc_800DB590:
{
    r0 = (r4 & 255);
}

loc_800DB598:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800DB5C8;
    }
}

loc_800DB59C:
{
}

loc_800DB5A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800DB5DC;
    }
}

loc_800DB5A4:
{
}

loc_800DB5A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800DB5F8;
    }
}

loc_800DB5AC:
{
}

loc_800DB5B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800DB614;
    }
}

loc_800DB5B4:
{
}

loc_800DB5B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_800DB630;
    }
}

loc_800DB5BC:
{
}

loc_800DB5C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_800DB64C;
    }
}

loc_800DB5C4:
{
    goto loc_800DB660;
}

loc_800DB5C8:
{
    r0 = (r3 & 255);
}

loc_800DB5D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_800DB5D4:
{
    r4 = 75;
    goto loc_800DB660;
}

loc_800DB5DC:
{
    r0 = (r3 & 255);
}

loc_800DB5E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DB5F0;
    }
}

loc_800DB5E8:
{
    r4 = 68;
    goto loc_800DB660;
}

loc_800DB5F0:
{
    r4 = 160;
    goto loc_800DB660;
}

loc_800DB5F8:
{
    r0 = (r3 & 255);
}

loc_800DB600:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DB60C;
    }
}

loc_800DB604:
{
    r4 = 69;
    goto loc_800DB660;
}

loc_800DB60C:
{
    r4 = 161;
    goto loc_800DB660;
}

loc_800DB614:
{
    r0 = (r3 & 255);
}

loc_800DB61C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DB628;
    }
}

loc_800DB620:
{
    r4 = 76;
    goto loc_800DB660;
}

loc_800DB628:
{
    r4 = 176;
    goto loc_800DB660;
}

loc_800DB630:
{
    r0 = (r3 & 255);
}

loc_800DB638:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DB644;
    }
}

loc_800DB63C:
{
    r4 = 77;
    goto loc_800DB660;
}

loc_800DB644:
{
    r4 = 177;
    goto loc_800DB660;
}

loc_800DB64C:
{
    r0 = (r3 & 255);
}

loc_800DB654:
{
    r4 = 156;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DB660;
    }
}

loc_800DB65C:
{
    r4 = 56;
}

loc_800DB660:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800DA790u>(&func_800DA790)) {
        ctx->gpr[0] = r0;
        const auto regargs_result_800DA790_BFF = func_800DA790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DA790_BFF);
        r4 = static_cast<uint32_t>(regargs_result_800DA790_BFF >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800DA790u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800DB590(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800DB590_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000081B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DB590 func_800DB590 preserves=true fpr_mask=0x00000000
