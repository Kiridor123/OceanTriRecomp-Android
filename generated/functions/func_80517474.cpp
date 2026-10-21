#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_80517474_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80517474u);
    goto loc_80517474;

loc_80517474:
{
    r0 = MemoryInline::FlatRead8(r3);
    r5 = (r3 + 1);
    r3 = 0;
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctr = r4;
}

loc_8051748C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_80517490:
{
}

loc_80517494:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(48))) {
        goto loc_805174A0;
    }
}

loc_80517498:
{
}

loc_8051749C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(57))) {
        goto loc_805174C8;
    }
}

loc_805174A0:
{
}

loc_805174A4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(65))) {
        goto loc_805174B0;
    }
}

loc_805174A8:
{
}

loc_805174AC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(90))) {
        goto loc_805174C8;
    }
}

loc_805174B0:
{
}

loc_805174B4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(97))) {
        goto loc_805174C0;
    }
}

loc_805174B8:
{
}

loc_805174BC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(122))) {
        goto loc_805174C8;
    }
}

loc_805174C0:
{
}

loc_805174C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(32))) {
        goto loc_805174D0;
    }
}

loc_805174C8:
{
    r3 = (r3 + 1);
    goto loc_805174D4;
}

loc_805174D0:
{
    r3 = (r3 + 3);
}

loc_805174D4:
{
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80517490;
    }
}

loc_805174E4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_80517474(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_80517474_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80517474 func_80517474 preserves=true fpr_mask=0x00000000
