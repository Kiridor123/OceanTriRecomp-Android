#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802C0904_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x802C0904u);
    goto loc_802C0904;

loc_802C0904:
{
    r6 = 0;
    r4 = (r4 & 65535);
    r0 = 2;
    ctr = r0;
}

loc_802C0914:
{
    r0 = (r6 & 255);
    r0 = (r0 * 368);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 330));
}

loc_802C0928:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802C0940;
    }
}

loc_802C092C:
{
    r0 = MemoryInline::FlatRead16((r5 + 332));
}

loc_802C0934:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802C0940;
    }
}

loc_802C0938:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802C0940:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 368);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 330));
}

loc_802C0958:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802C0970;
    }
}

loc_802C095C:
{
    r0 = MemoryInline::FlatRead16((r5 + 332));
}

loc_802C0964:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802C0970;
    }
}

loc_802C0968:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802C0970:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 368);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 330));
}

loc_802C0988:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802C09A0;
    }
}

loc_802C098C:
{
    r0 = MemoryInline::FlatRead16((r5 + 332));
}

loc_802C0994:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802C09A0;
    }
}

loc_802C0998:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802C09A0:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 368);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 330));
}

loc_802C09B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802C09D0;
    }
}

loc_802C09BC:
{
    r0 = MemoryInline::FlatRead16((r5 + 332));
}

loc_802C09C4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802C09D0;
    }
}

loc_802C09C8:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802C09D0:
{
    r6 = (r6 + 1);
    r0 = (r6 & 255);
    r0 = (r0 * 368);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 330));
}

loc_802C09E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802C0A00;
    }
}

loc_802C09EC:
{
    r0 = MemoryInline::FlatRead16((r5 + 332));
}

loc_802C09F4:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_802C0A00;
    }
}

loc_802C09F8:
{
    r3 = r6;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802C0A00:
{
    r6 = (r6 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802C0914;
    }
}

loc_802C0A08:
{
    r3 = 255;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802C0904(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802C0904_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802C0904 func_802C0904 preserves=true fpr_mask=0x00000000
