#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8026FAD0(CpuContext* ctx);
extern "C" uint64_t func_8026FAD0_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8026FB84_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8026FB84;

loc_8026FB84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1024));
}

loc_8026FB88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8026FBF4;
    }
}

loc_8026FB8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8026FBC0;
    }
}

loc_8026FB90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(16));
}

loc_8026FB94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8026FC80;
    }
}

loc_8026FB98:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8026FBB4;
    }
}

loc_8026FB9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(8));
}

loc_8026FBA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8026FC68;
    }
}

loc_8026FBA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8026FC9C;
    }
}

loc_8026FBA8:
{
}

loc_8026FBAC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_8026FC50;
    }
}

loc_8026FBB0:
{
    goto loc_8026FC9C;
}

loc_8026FBB4:
{
}

loc_8026FBB8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(32))) {
        goto loc_8026FC40;
    }
}

loc_8026FBBC:
{
    goto loc_8026FC9C;
}

loc_8026FBC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4096));
}

loc_8026FBC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8026FC24;
    }
}

loc_8026FBC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8026FBD8;
    }
}

loc_8026FBCC:
{
}

loc_8026FBD0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2048))) {
        goto loc_8026FC0C;
    }
}

loc_8026FBD4:
{
    goto loc_8026FC9C;
}

loc_8026FBD8:
{
}

loc_8026FBDC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(8192))) {
        goto loc_8026FBE4;
    }
}

loc_8026FBE0:
{
    goto loc_8026FC9C;
}

loc_8026FBE4:
{
    r4 = 0;
    r5 = 8192;
    r6 = 24576;
    if constexpr (KnownRegArgsCpuCall<0x8026FAD0u>(&func_8026FAD0)) {
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FAD0_ADC = func_8026FAD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FAD0_ADC);
        r4 = static_cast<uint32_t>(regargs_result_8026FAD0_ADC >> 32);
        cr = ctx->cr;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FAD0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8026FBF4:
{
    r4 = 0;
    r5 = 65536;
    r5 = (r5 + -8192);
    r5 = (r5 & 65535);
    r6 = 8192;
    if constexpr (KnownRegArgsCpuCall<0x8026FAD0u>(&func_8026FAD0)) {
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FAD0_E4F = func_8026FAD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FAD0_E4F);
        r4 = static_cast<uint32_t>(regargs_result_8026FAD0_E4F >> 32);
        cr = ctx->cr;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FAD0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8026FC0C:
{
    r4 = 0;
    r5 = 24576;
    r6 = 65536;
    r6 = (r6 + -24576);
    r6 = (r6 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8026FAD0u>(&func_8026FAD0)) {
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FAD0_11C4 = func_8026FAD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FAD0_11C4);
        r4 = static_cast<uint32_t>(regargs_result_8026FAD0_11C4 >> 32);
        cr = ctx->cr;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FAD0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8026FC24:
{
    r4 = 0;
    r6 = 65536;
    r5 = (r6 + -24576);
    r5 = (r5 & 65535);
    r6 = (r6 + -8192);
    r6 = (r6 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8026FAD0u>(&func_8026FAD0)) {
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FAD0_155B = func_8026FAD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FAD0_155B);
        r4 = static_cast<uint32_t>(regargs_result_8026FAD0_155B >> 32);
        cr = ctx->cr;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FAD0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8026FC40:
{
    r4 = 1;
    r5 = 8192;
    r6 = 24576;
    if constexpr (KnownRegArgsCpuCall<0x8026FAD0u>(&func_8026FAD0)) {
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FAD0_18A1 = func_8026FAD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FAD0_18A1);
        r4 = static_cast<uint32_t>(regargs_result_8026FAD0_18A1 >> 32);
        cr = ctx->cr;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FAD0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8026FC50:
{
    r4 = 1;
    r5 = 65536;
    r5 = (r5 + -8192);
    r5 = (r5 & 65535);
    r6 = 8192;
    if constexpr (KnownRegArgsCpuCall<0x8026FAD0u>(&func_8026FAD0)) {
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FAD0_1C17 = func_8026FAD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FAD0_1C17);
        r4 = static_cast<uint32_t>(regargs_result_8026FAD0_1C17 >> 32);
        cr = ctx->cr;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FAD0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8026FC68:
{
    r4 = 1;
    r5 = 24576;
    r6 = 65536;
    r6 = (r6 + -24576);
    r6 = (r6 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8026FAD0u>(&func_8026FAD0)) {
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FAD0_1F8F = func_8026FAD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FAD0_1F8F);
        r4 = static_cast<uint32_t>(regargs_result_8026FAD0_1F8F >> 32);
        cr = ctx->cr;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FAD0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8026FC80:
{
    r4 = 1;
    r6 = 65536;
    r5 = (r6 + -24576);
    r5 = (r5 & 65535);
    r6 = (r6 + -8192);
    r6 = (r6 & 65535);
    if constexpr (KnownRegArgsCpuCall<0x8026FAD0u>(&func_8026FAD0)) {
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_8026FAD0_2326 = func_8026FAD0_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8026FAD0_2326);
        r4 = static_cast<uint32_t>(regargs_result_8026FAD0_2326 >> 32);
        cr = ctx->cr;
    } else {
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x8026FAD0u>(ctx);
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8026FC9C:
{
    r3 = 0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8026FB84(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8026FB84_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8026FB84 func_8026FB84 preserves=true fpr_mask=0x00000000
