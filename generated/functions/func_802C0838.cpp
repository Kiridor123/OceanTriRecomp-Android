#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802C0838_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    goto loc_802C0838;

loc_802C0838:
{
    r5 = 0;
    r0 = 2;
    ctr = r0;
}

loc_802C0844:
{
    r0 = (r5 & 255);
    r0 = (r0 * 368);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 330));
}

loc_802C0858:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802C0864;
    }
}

loc_802C085C:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802C0864:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 368);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 330));
}

loc_802C087C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802C0888;
    }
}

loc_802C0880:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802C0888:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 368);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 330));
}

loc_802C08A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802C08AC;
    }
}

loc_802C08A4:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802C08AC:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 368);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 330));
}

loc_802C08C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802C08D0;
    }
}

loc_802C08C8:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802C08D0:
{
    r5 = (r5 + 1);
    r0 = (r5 & 255);
    r0 = (r0 * 368);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 330));
}

loc_802C08E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802C08F4;
    }
}

loc_802C08EC:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802C08F4:
{
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802C0844;
    }
}

loc_802C08FC:
{
    r3 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C0838(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C0838_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C0838 func_802C0838 preserves=true fpr_mask=0x00000000
