#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_802A9E84_ra38_0_8_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t ctr = ctx->ctr;

    goto loc_802A9E84;

loc_802A9E84:
{
    r6 = MemoryInline::FlatRead32((r3 + 404));
    r7 = 0;
    r5 = (r4 & 65535);
    r0 = 3;
    ctr = r0;
}

loc_802A9E98:
{
    r0 = MemoryInline::FlatRead16(r6);
}

loc_802A9EA0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_802A9EAC;
    }
}

loc_802A9EA4:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_802A9EAC:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead16((r6 + 4));
}

loc_802A9EB8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_802A9EC4;
    }
}

loc_802A9EBC:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_802A9EC4:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead16((r6 + 8));
}

loc_802A9ED0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_802A9EDC;
    }
}

loc_802A9ED4:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_802A9EDC:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead16((r6 + 12));
}

loc_802A9EE8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_802A9EF4;
    }
}

loc_802A9EEC:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_802A9EF4:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead16((r6 + 16));
}

loc_802A9F00:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_802A9F0C;
    }
}

loc_802A9F04:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_802A9F0C:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead16((r6 + 20));
}

loc_802A9F18:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_802A9F24;
    }
}

loc_802A9F1C:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_802A9F24:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead16((r6 + 24));
}

loc_802A9F30:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_802A9F3C;
    }
}

loc_802A9F34:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_802A9F3C:
{
    r7 = (r7 + 1);
    r0 = MemoryInline::FlatRead16((r6 + 28));
}

loc_802A9F48:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_802A9F54;
    }
}

loc_802A9F4C:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_802A9F54:
{
    r7 = (r7 + 1);
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802A9E98;
    }
}

loc_802A9F60:
{
    r0 = MemoryInline::FlatRead8((r3 + 16));
}

loc_802A9F68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A9FA4;
    }
}

loc_802A9F6C:
{
    r5 = MemoryInline::FlatRead32((r3 + 408));
    r6 = 0;
    r3 = (r4 & 65535);
    r0 = 8;
    ctr = r0;
}

loc_802A9F80:
{
    r0 = MemoryInline::FlatRead16(r5);
}

loc_802A9F88:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_802A9F98;
    }
}

loc_802A9F8C:
{
    r0 = (r6 + 24);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

loc_802A9F98:
{
    r6 = (r6 + 1);
    r5 = (r5 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802A9F80;
    }
}

loc_802A9FA4:
{
    r3 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return r3;
}

}

extern "C" void func_802A9E84(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_802A9E84_ra38_0_8_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A9E84 func_802A9E84 preserves=true fpr_mask=0x00000000
