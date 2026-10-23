#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF2E4(CpuContext* ctx);
extern "C" uint32_t func_800CF2E4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint32_t func_803B5DF4_ra8_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803B5DF4;

loc_803B5DF4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead32((r13 + -16864));
    ctx->lr = 0x803B5E0Cu;
    if constexpr (KnownRegArgsCpuCall<0x800CF2E4u>(&func_800CF2E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800CF2E4_399 = func_800CF2E4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CF2E4_399;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800CF2E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
}

loc_803B5E10:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B5E1C;
    }
}

loc_803B5E14:
{
    r3 = 0;
    goto loc_803B5E7C;
}

loc_803B5E1C:
{
}

loc_803B5E20:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_803B5E2C;
    }
}

loc_803B5E24:
{
    r3 = 0;
    goto loc_803B5E7C;
}

loc_803B5E2C:
{
    r0 = MemoryInline::FlatRead32((r31 + 148));
    r0 = (r0 & 1028);
}

loc_803B5E34:
{
}

loc_803B5E38:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1028))) {
        goto loc_803B5E44;
    }
}

loc_803B5E3C:
{
    r3 = 1;
    goto loc_803B5E7C;
}

loc_803B5E44:
{
    r3 = (r31 + 244);
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 1028);
}

loc_803B5E50:
{
}

loc_803B5E54:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1028))) {
        goto loc_803B5E60;
    }
}

loc_803B5E58:
{
    r3 = 1;
    goto loc_803B5E7C;
}

loc_803B5E60:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
    r0 = (r0 & 1028);
}

loc_803B5E68:
{
}

loc_803B5E6C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1028))) {
        goto loc_803B5E78;
    }
}

loc_803B5E70:
{
    r3 = 1;
    goto loc_803B5E7C;
}

loc_803B5E78:
{
    r3 = 0;
}

loc_803B5E7C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_803B5DF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_803B5DF4_ra8_0_8_0(ctx, ctx->gpr[3]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000200B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B5DF4 func_803B5DF4 preserves=true fpr_mask=0x00000000
