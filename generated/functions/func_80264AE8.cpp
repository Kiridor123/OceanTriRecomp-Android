#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802649C0(CpuContext* ctx);
extern "C" uint64_t func_802649C0_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_80264AE8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    goto loc_80264AE8;

loc_80264AE8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    ctx->lr = 0x80264B00u;
    if constexpr (KnownRegArgsCpuCall<0x802649C0u>(&func_802649C0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_802649C0_3B7 = func_802649C0_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_802649C0_3B7);
        r4 = static_cast<uint32_t>(regargs_result_802649C0_3B7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x802649C0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r5 = 0;
    r4 = MemoryInline::FlatRead8((r31 + 2));
    r0 = (r4 + -4);
}

loc_80264B10:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80264B54;
    }
}

loc_80264B14:
{
}

loc_80264B18:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80264B30;
    }
}

loc_80264B1C:
{
}

loc_80264B20:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_80264B54;
    }
}

loc_80264B24:
{
}

loc_80264B28:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_80264B78;
    }
}

loc_80264B2C:
{
    goto loc_80264B98;
}

loc_80264B30:
{
    r0 = (r3 & 255);
}

loc_80264B38:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(40))) {
        goto loc_80264B44;
    }
}

loc_80264B3C:
{
    r5 = 2;
    goto loc_80264B98;
}

loc_80264B44:
{
}

loc_80264B48:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(15))) {
        goto loc_80264B98;
    }
}

loc_80264B4C:
{
    r5 = 1;
    goto loc_80264B98;
}

loc_80264B54:
{
    r0 = (r3 & 255);
}

loc_80264B5C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(21))) {
        goto loc_80264B68;
    }
}

loc_80264B60:
{
    r5 = 2;
    goto loc_80264B98;
}

loc_80264B68:
{
}

loc_80264B6C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(15))) {
        goto loc_80264B98;
    }
}

loc_80264B70:
{
    r5 = 1;
    goto loc_80264B98;
}

loc_80264B78:
{
    r0 = (r3 & 255);
}

loc_80264B80:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(50))) {
        goto loc_80264B8C;
    }
}

loc_80264B84:
{
    r5 = 2;
    goto loc_80264B98;
}

loc_80264B8C:
{
}

loc_80264B90:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(40))) {
        goto loc_80264B98;
    }
}

loc_80264B94:
{
    r5 = 1;
}

loc_80264B98:
{
    r3 = r5;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80264AE8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80264AE8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80264AE8 func_80264AE8 preserves=true fpr_mask=0x00000000
