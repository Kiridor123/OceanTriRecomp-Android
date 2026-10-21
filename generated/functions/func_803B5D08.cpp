#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CF2E4(CpuContext* ctx);
extern "C" uint32_t func_800CF2E4_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803B5D08_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x803B5D08u);
    goto loc_803B5D08;

loc_803B5D08:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r13 + -16864));
    ctx->lr = 0x803B5D28u;
    if constexpr (KnownRegArgsCpuCall<0x800CF2E4u>(&func_800CF2E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CF2E4_459 = func_800CF2E4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CF2E4_459;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CF2E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803B5D2C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803B5D38;
    }
}

loc_803B5D30:
{
    r3 = 0;
    goto loc_803B5DDC;
}

loc_803B5D38:
{
}

loc_803B5D3C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_803B5D48;
    }
}

loc_803B5D40:
{
    r3 = 0;
    goto loc_803B5DDC;
}

loc_803B5D48:
{
    r5 = (r31 + 148);
    r0 = 3;
    ctr = r0;
}

loc_803B5D54:
{
    r4 = MemoryInline::FlatRead32(r5);
    r0 = (r4 & 16404);
}

loc_803B5D5C:
{
}

loc_803B5D60:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(16404))) {
        goto loc_803B5D80;
    }
}

loc_803B5D64:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r3 = (r0 & 255);
    r0 = (r30 & 255);
}

loc_803B5D74:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803B5D80;
    }
}

loc_803B5D78:
{
    r3 = 16404;
    goto loc_803B5DDC;
}

loc_803B5D80:
{
    r0 = (r4 & 1044);
}

loc_803B5D84:
{
}

loc_803B5D88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1044))) {
        goto loc_803B5DA8;
    }
}

loc_803B5D8C:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r3 = (r0 & 255);
    r0 = (r30 & 255);
}

loc_803B5D9C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803B5DA8;
    }
}

loc_803B5DA0:
{
    r3 = 1044;
    goto loc_803B5DDC;
}

loc_803B5DA8:
{
    r0 = (r4 & 1028);
}

loc_803B5DAC:
{
}

loc_803B5DB0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1028))) {
        goto loc_803B5DD0;
    }
}

loc_803B5DB4:
{
    r0 = MemoryInline::FlatRead16((r5 + 4));
    r3 = (r0 & 255);
    r0 = (r30 & 255);
}

loc_803B5DC4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_803B5DD0;
    }
}

loc_803B5DC8:
{
    r3 = 1028;
    goto loc_803B5DDC;
}

loc_803B5DD0:
{
    r5 = (r5 + 96);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_803B5D54;
    }
}

loc_803B5DD8:
{
    r3 = 0;
}

loc_803B5DDC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803B5D08(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803B5D08_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000203B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803B5D08 func_803B5D08 preserves=true fpr_mask=0x00000000
