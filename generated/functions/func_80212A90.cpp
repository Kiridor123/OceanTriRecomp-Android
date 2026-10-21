#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8027F158(CpuContext* ctx);
extern "C" uint64_t func_8027F158_ra8_0_18_0(CpuContext*, uint32_t);

extern "C" uint64_t func_80212A90_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    MKW_GUEST_ENTER(0x80212A90u);
    goto loc_80212A90;

loc_80212A90:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r3 & 255);
}

loc_80212AA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80212AC4;
    }
}

loc_80212AA8:
{
}

loc_80212AAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_80212ACC;
    }
}

loc_80212AB0:
{
}

loc_80212AB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_80212AE8;
    }
}

loc_80212AB8:
{
}

loc_80212ABC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(13))) {
        goto loc_80212B04;
    }
}

loc_80212AC0:
{
    goto loc_80212B20;
}

loc_80212AC4:
{
    r3 = 1;
    goto loc_80212B24;
}

loc_80212ACC:
{
    r3 = (r4 & 65535);
    ctx->lr = 0x80212AD4u;
    if constexpr (KnownRegArgsCpuCall<0x8027F158u>(&func_8027F158)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027F158_602 = func_8027F158_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027F158_602);
        r4 = static_cast<uint32_t>(regargs_result_8027F158_602 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027F158u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_80212ADC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80212B20;
    }
}

loc_80212AE0:
{
    r3 = 1;
    goto loc_80212B24;
}

loc_80212AE8:
{
    r3 = (r4 & 65535);
    ctx->lr = 0x80212AF0u;
    if constexpr (KnownRegArgsCpuCall<0x8027F158u>(&func_8027F158)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027F158_9A1 = func_8027F158_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027F158_9A1);
        r4 = static_cast<uint32_t>(regargs_result_8027F158_9A1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027F158u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_80212AF8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_80212B20;
    }
}

loc_80212AFC:
{
    r3 = 1;
    goto loc_80212B24;
}

loc_80212B04:
{
    r3 = (r4 & 65535);
    ctx->lr = 0x80212B0Cu;
    if constexpr (KnownRegArgsCpuCall<0x8027F158u>(&func_8027F158)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027F158_D40 = func_8027F158_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_8027F158_D40);
        r4 = static_cast<uint32_t>(regargs_result_8027F158_D40 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8027F158u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r0 = (r3 & 255);
}

loc_80212B14:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_80212B20;
    }
}

loc_80212B18:
{
    r3 = 1;
    goto loc_80212B24;
}

loc_80212B20:
{
    r3 = 0;
}

loc_80212B24:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80212A90(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80212A90_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80212A90 func_80212A90 preserves=true fpr_mask=0x00000000
