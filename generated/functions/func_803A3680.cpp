#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80273218(CpuContext* ctx);
extern "C" uint64_t func_80273218_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8027BD44(CpuContext* ctx);
extern "C" uint64_t func_8027BD44_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803A3680_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803A3680;

loc_803A3680:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    if constexpr (KnownRegArgsCpuCall<0x8027BD44u>(&func_8027BD44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8027BD44_453 = func_8027BD44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8027BD44_453);
        r4 = static_cast<uint32_t>(regargs_result_8027BD44_453 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027BD44u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r0 = (r3 & 65535);
}

loc_803A36A4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_803A36B0;
    }
}

loc_803A36A8:
{
    r3 = 0;
    goto loc_803A3700;
}

loc_803A36B0:
{
    r3 = 0x805F0000u;
    r31 = (r3 + 9952);
    goto loc_803A36F0;
}

loc_803A36BC:
{
    r3 = r30;
    ctx->lr = 0x803A36C4u;
    if constexpr (KnownRegArgsCpuCall<0x80273218u>(&func_80273218)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80273218_898 = func_80273218_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80273218_898);
        r4 = static_cast<uint32_t>(regargs_result_80273218_898 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80273218u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_803A36C8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(1))) {
        goto loc_803A36EC;
    }
}

loc_803A36CC:
{
    r0 = MemoryInline::FlatRead16(r31);
    MemoryInline::FlatWrite16((r30 + 1644), static_cast<uint16_t>(r0));
    r0 = -1;
    MemoryInline::FlatWrite16((r30 + 1646), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 2));
    MemoryInline::FlatWrite16((r30 + 1648), static_cast<uint16_t>(r0));
    r3 = 1;
    goto loc_803A3700;
}

loc_803A36EC:
{
    r31 = (r31 + 4);
}

loc_803A36F0:
{
    r4 = MemoryInline::FlatRead16(r31);
}

loc_803A36F8:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(65535))) {
        goto loc_803A36BC;
    }
}

loc_803A36FC:
{
    r3 = 0;
}

loc_803A3700:
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

extern "C" void func_803A3680(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803A3680_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007B gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803A3680 func_803A3680 preserves=true fpr_mask=0x00000000
