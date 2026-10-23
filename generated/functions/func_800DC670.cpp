#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800DA790(CpuContext* ctx);
extern "C" uint64_t func_800DA790_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800DC670_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_800DC670;

loc_800DC670:
{
    r5 = r3;
}

loc_800DC678:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800DC690;
    }
}

loc_800DC67C:
{
}

loc_800DC680:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_800DC698;
    }
}

loc_800DC684:
{
}

loc_800DC688:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_800DC6A0;
    }
}

loc_800DC68C:
{
    goto loc_800DC6A4;
}

loc_800DC690:
{
    r4 = 22;
    goto loc_800DC6A4;
}

loc_800DC698:
{
    r4 = 23;
    goto loc_800DC6A4;
}

loc_800DC6A0:
{
    r4 = 24;
}

loc_800DC6A4:
{
    r3 = 0;
    if constexpr (KnownRegArgsCpuCall<0x800DA790u>(&func_800DA790)) {
        const auto regargs_result_800DA790_512 = func_800DA790_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DA790_512);
        r4 = static_cast<uint32_t>(regargs_result_800DA790_512 >> 32);
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800DA790u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800DC670(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800DC670_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000083B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DC670 func_800DC670 preserves=true fpr_mask=0x00000000
