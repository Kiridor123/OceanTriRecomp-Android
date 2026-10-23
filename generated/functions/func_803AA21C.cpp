#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_803AA21C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t xer = ctx->xer;

    goto loc_803AA21C;

loc_803AA21C:
{
}

loc_803AA220:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(4))) {
        goto loc_803AA2D0;
    }
}

loc_803AA224:
{
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r3 + 148));
}

loc_803AA230:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803AA23C;
    }
}

loc_803AA234:
{
    r5 = 1;
    goto loc_803AA258;
}

loc_803AA23C:
{
    r0 = (r4 & 8);
}

loc_803AA244:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA258;
    }
}

loc_803AA248:
{
    r0 = (r4 & 64);
}

loc_803AA250:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA258;
    }
}

loc_803AA254:
{
    r5 = 1;
}

loc_803AA258:
{
    r4 = MemoryInline::FlatRead32((r3 + 244));
}

loc_803AA260:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803AA26C;
    }
}

loc_803AA264:
{
    r5 = (r5 + 1);
    goto loc_803AA288;
}

loc_803AA26C:
{
    r0 = (r4 & 8);
}

loc_803AA274:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA288;
    }
}

loc_803AA278:
{
    r0 = (r4 & 64);
}

loc_803AA280:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA288;
    }
}

loc_803AA284:
{
    r5 = (r5 + 1);
}

loc_803AA288:
{
    r4 = MemoryInline::FlatRead32((r3 + 340));
}

loc_803AA290:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_803AA29C;
    }
}

loc_803AA294:
{
    r5 = (r5 + 1);
    goto loc_803AA2B8;
}

loc_803AA29C:
{
    r0 = (r4 & 8);
}

loc_803AA2A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA2B8;
    }
}

loc_803AA2A8:
{
    r0 = (r4 & 64);
}

loc_803AA2B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA2B8;
    }
}

loc_803AA2B4:
{
    r5 = (r5 + 1);
}

loc_803AA2B8:
{
    r0 = 3;
    r4 = (static_cast<int32_t>(r5) >> 31);
    r3 = 0;
    r0_subfc_sub_0 = r0;
    r0 = (r5 - r0_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0_subfc_sub_0) ? 1u : 0u) << 29);
    r3_adde_right_0 = r3;
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r4 + r3_adde_right_0);
    r3 = (r3 + r3_ca_0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803AA2D0:
{
    r0 = (r4 * 96);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 148));
    r0 = (r3 & 8);
}

loc_803AA2E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803AA2FC;
    }
}

loc_803AA2E8:
{
    r3 = (r3 & 64);
    r0 = (r3 + -64);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_803AA2FC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803AA21C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803AA21C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803AA21C func_803AA21C preserves=true fpr_mask=0x00000000
