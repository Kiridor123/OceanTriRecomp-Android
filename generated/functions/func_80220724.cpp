#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80220724_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];

    goto loc_80220724;

loc_80220724:
{
    r5 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = 0x805C0000u;
    r4 = (r4 + -20552);
    r0 = (r3 & 65535);
    r3 = MemoryInline::FlatRead8((r5 + 18004));
}

loc_8022073C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80220768;
    }
}

loc_80220740:
{
    r6 = MemoryInline::FlatRead32(r4);
    goto loc_8022075C;
}

loc_80220748:
{
}

loc_8022074C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80220758;
    }
}

loc_80220750:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80220758:
{
    r6 = (r6 + 2);
}

loc_8022075C:
{
    r3 = MemoryInline::FlatRead16(r6);
}

loc_80220764:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80220748;
    }
}

loc_80220768:
{
    r3 = MemoryInline::FlatRead8((r5 + 18005));
}

loc_80220770:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8022079C;
    }
}

loc_80220774:
{
    r6 = MemoryInline::FlatRead32((r4 + 4));
    goto loc_80220790;
}

loc_8022077C:
{
}

loc_80220780:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8022078C;
    }
}

loc_80220784:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8022078C:
{
    r6 = (r6 + 2);
}

loc_80220790:
{
    r3 = MemoryInline::FlatRead16(r6);
}

loc_80220798:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8022077C;
    }
}

loc_8022079C:
{
    r3 = MemoryInline::FlatRead8((r5 + 18006));
}

loc_802207A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802207D0;
    }
}

loc_802207A8:
{
    r6 = MemoryInline::FlatRead32((r4 + 8));
    goto loc_802207C4;
}

loc_802207B0:
{
}

loc_802207B4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802207C0;
    }
}

loc_802207B8:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802207C0:
{
    r6 = (r6 + 2);
}

loc_802207C4:
{
    r3 = MemoryInline::FlatRead16(r6);
}

loc_802207CC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802207B0;
    }
}

loc_802207D0:
{
    r3 = MemoryInline::FlatRead8((r5 + 18007));
}

loc_802207D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80220804;
    }
}

loc_802207DC:
{
    r6 = MemoryInline::FlatRead32((r4 + 12));
    goto loc_802207F8;
}

loc_802207E4:
{
}

loc_802207E8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802207F4;
    }
}

loc_802207EC:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802207F4:
{
    r6 = (r6 + 2);
}

loc_802207F8:
{
    r3 = MemoryInline::FlatRead16(r6);
}

loc_80220800:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802207E4;
    }
}

loc_80220804:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80220724(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80220724_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00002079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80220724 func_80220724 preserves=true fpr_mask=0x00000000
