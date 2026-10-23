#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804D5C30_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    goto loc_804D5C30;

loc_804D5C30:
{
}

loc_804D5C34:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(255))) {
        goto loc_804D5C40;
    }
}

loc_804D5C38:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804D5C40:
{
}

loc_804D5C44:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(128))) {
        goto loc_804D5C50;
    }
}

loc_804D5C48:
{
}

loc_804D5C4C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(159))) {
        goto loc_804D5C58;
    }
}

loc_804D5C50:
{
    r3 = (r3 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804D5C58:
{
}

loc_804D5C5C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(338))) {
        goto loc_804D5CA4;
    }
}

loc_804D5C60:
{
}

loc_804D5C64:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(8482))) {
        goto loc_804D5CA4;
    }
}

loc_804D5C68:
{
    r4 = 0x80620000u;
    r0 = 32;
    r4 = (r4 + -8296);
    r5 = 0;
    ctr = r0;
    // nop
}

loc_804D5C80:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_804D5C88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_804D5C98;
    }
}

loc_804D5C8C:
{
    r0 = (r5 + 128);
    r3 = (r0 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804D5C98:
{
    r4 = (r4 + 2);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804D5C80;
    }
}

loc_804D5CA4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804D5C30(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804D5C30_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804D5C30 func_804D5C30 preserves=true fpr_mask=0x00000000
