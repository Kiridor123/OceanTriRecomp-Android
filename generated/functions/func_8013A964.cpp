#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8013A964_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    goto loc_8013A964;

loc_8013A964:
{
    r0 = MemoryInline::FlatRead8((r3 + 2396));
    r5 = MemoryInline::FlatRead8((r3 + 2472));
}

loc_8013A96C:
{
}

loc_8013A970:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8013A98C;
    }
}

loc_8013A974:
{
}

loc_8013A978:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8013A994;
    }
}

loc_8013A97C:
{
}

loc_8013A980:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_8013A9AC;
    }
}

loc_8013A984:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_8013A98C:
{
    r0 = MemoryInline::FlatRead8((r3 + 2460));
    goto loc_8013A96C;
}

loc_8013A994:
{
    r5 = (r5 + -1);
    r0 = (r5 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 2476));
    goto loc_8013A96C;
}

loc_8013A9AC:
{
    r0 = MemoryInline::FlatRead8((r3 + 2536));
    goto loc_8013A96C;
}

}

extern "C" void func_8013A964(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8013A964_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8013A964 func_8013A964 preserves=true fpr_mask=0x00000000
