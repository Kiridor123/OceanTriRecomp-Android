#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804AF790_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x804AF790u);
    goto loc_804AF790;

loc_804AF790:
{
}

loc_804AF794:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_804AF7B4;
    }
}

loc_804AF798:
{
}

loc_804AF79C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(2))) {
        goto loc_804AF7BC;
    }
}

loc_804AF7A0:
{
}

loc_804AF7A4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(3))) {
        goto loc_804AF7C8;
    }
}

loc_804AF7A8:
{
}

loc_804AF7AC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(4))) {
        goto loc_804AF7D4;
    }
}

loc_804AF7B0:
{
    goto loc_804AF7E0;
}

loc_804AF7B4:
{
    r5 = MemoryInline::FlatRead8(r3);
    goto loc_804AF7E8;
}

loc_804AF7BC:
{
    r0 = MemoryInline::FlatRead8(r3);
    r5 = (r0 & 31);
    goto loc_804AF7E8;
}

loc_804AF7C8:
{
    r0 = MemoryInline::FlatRead8(r3);
    r5 = (r0 & 15);
    goto loc_804AF7E8;
}

loc_804AF7D4:
{
    r0 = MemoryInline::FlatRead8(r3);
    r5 = (r0 & 7);
    goto loc_804AF7E8;
}

loc_804AF7E0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804AF7E8:
{
    r0 = (r4 + -1);
    r3 = (r3 + 1);
    ctr = r0;
}

loc_804AF7F8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(1))) {
        goto loc_804AF82C;
    }
}

loc_804AF7FC:
{
    // nop
}

loc_804AF800:
{
    r4 = MemoryInline::FlatRead8(r3);
    r0 = (r4 & 192);
}

loc_804AF80C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(128))) {
        goto loc_804AF818;
    }
}

loc_804AF810:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_804AF818:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(6));
    r5 = (r5_rot_2 & -64);
    r0 = (r4 & 63);
    r5 = (r5 + r0);
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_804AF800;
    }
}

loc_804AF82C:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804AF790(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804AF790_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804AF790 func_804AF790 preserves=true fpr_mask=0x00000000
