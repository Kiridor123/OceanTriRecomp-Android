#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_800DFC70_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t ctr = ctx->ctr;

    goto loc_800DFC70;

loc_800DFC70:
{
    r5 = 0;
    r4 = MemoryInline::FlatRead32((r13 + -17576));
    r0 = 4;
    ctr = r0;
}

loc_800DFC80:
{
    r3 = (r4 + 196608);
    r0 = MemoryInline::FlatRead32((r3 + -27932));
}

loc_800DFC8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DFC98;
    }
}

loc_800DFC90:
{
    r3 = (r5 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800DFC98:
{
    r4 = (r4 + 4);
    r5 = (r5 + 1);
    r3 = (r4 + 196608);
    r0 = MemoryInline::FlatRead32((r3 + -27932));
}

loc_800DFCAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DFCB8;
    }
}

loc_800DFCB0:
{
    r3 = (r5 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800DFCB8:
{
    r4 = (r4 + 4);
    r5 = (r5 + 1);
    r3 = (r4 + 196608);
    r0 = MemoryInline::FlatRead32((r3 + -27932));
}

loc_800DFCCC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DFCD8;
    }
}

loc_800DFCD0:
{
    r3 = (r5 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800DFCD8:
{
    r4 = (r4 + 4);
    r5 = (r5 + 1);
    r3 = (r4 + 196608);
    r0 = MemoryInline::FlatRead32((r3 + -27932));
}

loc_800DFCEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DFCF8;
    }
}

loc_800DFCF0:
{
    r3 = (r5 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800DFCF8:
{
    r4 = (r4 + 4);
    r5 = (r5 + 1);
    r3 = (r4 + 196608);
    r0 = MemoryInline::FlatRead32((r3 + -27932));
}

loc_800DFD0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DFD18;
    }
}

loc_800DFD10:
{
    r3 = (r5 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800DFD18:
{
    r4 = (r4 + 4);
    r5 = (r5 + 1);
    r3 = (r4 + 196608);
    r0 = MemoryInline::FlatRead32((r3 + -27932));
}

loc_800DFD2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DFD38;
    }
}

loc_800DFD30:
{
    r3 = (r5 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800DFD38:
{
    r4 = (r4 + 4);
    r5 = (r5 + 1);
    r3 = (r4 + 196608);
    r0 = MemoryInline::FlatRead32((r3 + -27932));
}

loc_800DFD4C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DFD58;
    }
}

loc_800DFD50:
{
    r3 = (r5 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800DFD58:
{
    r4 = (r4 + 4);
    r5 = (r5 + 1);
    r3 = (r4 + 196608);
    r0 = MemoryInline::FlatRead32((r3 + -27932));
}

loc_800DFD6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800DFD78;
    }
}

loc_800DFD70:
{
    r3 = (r5 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_800DFD78:
{
    r4 = (r4 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800DFC80;
    }
}

loc_800DFD84:
{
    r3 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800DFC70(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800DFC70_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800DFC70 func_800DFC70 preserves=true fpr_mask=0x00000000
