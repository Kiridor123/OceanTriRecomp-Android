#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802C0568_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t ctr = ctx->ctr;

    goto loc_802C0568;

loc_802C0568:
{
    r3 = 0;
    r4 = 0x806C0000u;
    r9 = (r4 + -6272);
    r6 = 0;
    r0 = 8;
}

loc_802C057C:
{
    r8 = 1;
    r7 = 0;
    ctr = r0;
}

loc_802C0588:
{
    r5 = (r3 & 255);
    r4 = (r7 & 255);
    r4 = (r9 + r4);
    r4 = MemoryInline::FlatRead8((r4 + 4096));
}

loc_802C059C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r4))) {
        goto loc_802C05A8;
    }
}

loc_802C05A0:
{
    r3 = (r3 + 1);
    r8 = 0;
}

loc_802C05A8:
{
    r7 = (r7 + 1);
    r4 = (r7 & 255);
    r5 = (r3 & 255);
    r4 = (r9 + r4);
    r4 = MemoryInline::FlatRead8((r4 + 4096));
}

loc_802C05C0:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r4))) {
        goto loc_802C05CC;
    }
}

loc_802C05C4:
{
    r3 = (r3 + 1);
    r8 = 0;
}

loc_802C05CC:
{
    r7 = (r7 + 1);
    r4 = (r7 & 255);
    r5 = (r3 & 255);
    r4 = (r9 + r4);
    r4 = MemoryInline::FlatRead8((r4 + 4096));
}

loc_802C05E4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r4))) {
        goto loc_802C05F0;
    }
}

loc_802C05E8:
{
    r3 = (r3 + 1);
    r8 = 0;
}

loc_802C05F0:
{
    r7 = (r7 + 1);
    r4 = (r7 & 255);
    r5 = (r3 & 255);
    r4 = (r9 + r4);
    r4 = MemoryInline::FlatRead8((r4 + 4096));
}

loc_802C0608:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r4))) {
        goto loc_802C0614;
    }
}

loc_802C060C:
{
    r3 = (r3 + 1);
    r8 = 0;
}

loc_802C0614:
{
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802C0588;
    }
}

loc_802C061C:
{
}

loc_802C0620:
{
    if ((static_cast<uint32_t>(r8) == static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_802C0624:
{
    r6 = (r6 + 1);
}

loc_802C062C:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(3))) {
        goto loc_802C057C;
    }
}

loc_802C0630:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C0568(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C0568_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C0568 func_802C0568 preserves=true fpr_mask=0x00000000
