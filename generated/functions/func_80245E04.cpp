#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80245E04_ra18_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_80245E04;

loc_80245E04:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8026FE38u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80245E28:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80245E44;
    }
}

loc_80245E2C:
{
    r0 = (r31 & 255);
}

loc_80245E34:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80245E44;
    }
}

loc_80245E38:
{
    r0 = MemoryInline::FlatRead32((r30 + 984));
    r0 = (r0 & -769);
    MemoryInline::FlatWrite32((r30 + 984), r0);
}

loc_80245E44:
{
    r0 = (r31 & 255);
}

loc_80245E4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80245E60;
    }
}

loc_80245E50:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 1048), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 1054), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r30 + 1092), static_cast<uint8_t>(r0));
}

loc_80245E60:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 1046), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 1052), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return r3;
}

}

extern "C" void func_80245E04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80245E04_ra18_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80245E04 func_80245E04 preserves=true fpr_mask=0x00000000
