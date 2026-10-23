#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8045BD3C(CpuContext* ctx);
extern "C" uint64_t func_8045BD3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80486D5C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80486D5C;

loc_80486D5C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0x80740000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r5 + -17608);
    r31 = 0;
    r30 = (r5 + 52);
    r29 = r4;
    r28 = r3;
}

loc_80486D90:
{
    r0 = MemoryInline::FlatRead8((r30 + 281));
}

loc_80486D98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80486DB4;
    }
}

loc_80486D9C:
{
    r4 = r28;
    r3 = (r30 + 8);
    r5 = 6;
    if constexpr (KnownRegArgsCpuCall<0x8045BD3Cu>(&func_8045BD3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8045BD3C_579 = func_8045BD3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8045BD3C_579);
        r4 = static_cast<uint32_t>(regargs_result_8045BD3C_579 >> 32);
        r0 = ctx->gpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8045BD3Cu>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_80486DB0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80486DC4;
    }
}

loc_80486DB4:
{
    r31 = (r31 + 1);
    r30 = (r30 + 284);
}

loc_80486DC0:
{
    if ((static_cast<uint32_t>(r31) < static_cast<uint32_t>(4))) {
        goto loc_80486D90;
    }
}

loc_80486DC4:
{
    r0 = (r31 & 255);
}

loc_80486DCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_80486DD8;
    }
}

loc_80486DD0:
{
    r3 = 7;
    goto loc_80486DF4;
}

loc_80486DD8:
{
    r0 = (r0 * 34);
    r4 = 0x80740000u;
    r3 = 0;
    r4 = (r4 + -17608);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 1260));
    MemoryInline::FlatWrite8(r29, static_cast<uint8_t>(r0));
}

loc_80486DF4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80486D5C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80486D5C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80486D5C func_80486D5C preserves=true fpr_mask=0x00000000
