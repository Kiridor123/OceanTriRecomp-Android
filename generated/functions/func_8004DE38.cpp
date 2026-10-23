#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8004DE38_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];

    goto loc_8004DE38;

loc_8004DE38:
{
    r5 = (r3 & 65535);
}

loc_8004DE40:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8004DE4C;
    }
}

loc_8004DE44:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004DE4C:
{
}

loc_8004DE50:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(999))) {
        goto loc_8004DE60;
    }
}

loc_8004DE54:
{
    r3 = 10027008;
    r3 = (r3 + -27008);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004DE60:
{
    r3 = 0x80580000u;
    r4 = (r3 + 6792);
    r6 = MemoryInline::FlatRead32((r4 + 196));
    r3 = 0x80580000u;
    r7 = (r3 + 7592);
    r3 = 10027008;
    r3 = (r3 + -27008);
}

loc_8004DE80:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(50))) {
        goto loc_8004DE94;
    }
}

loc_8004DE84:
{
    r0 = (r5 + -1);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4_addr_0 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004DE94:
{
    r4 = 50;
    goto loc_8004DED0;
}

loc_8004DE9C:
{
}

loc_8004DEA0:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r0))) {
        goto loc_8004DEBC;
    }
}

loc_8004DEA4:
{
    r3 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r4 & 65535);
    r0 = (r5 - r0);
    r0 = (r3 * r0);
    r3 = (r6 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8004DEBC:
{
    r0 = MemoryInline::FlatRead32((r7 + 4));
    r0 = (r0 * 50);
    r6 = (r6 + r0);
    r4 = (r4 + 50);
    r7 = (r7 + 8);
}

loc_8004DED0:
{
    r0 = MemoryInline::FlatRead32(r7);
}

loc_8004DED8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8004DE9C;
    }
}

loc_8004DEDC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8004DE38(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8004DE38_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8004DE38 func_8004DE38 preserves=true fpr_mask=0x00000000
