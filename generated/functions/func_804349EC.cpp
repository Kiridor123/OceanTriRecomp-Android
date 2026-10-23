#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_804349EC_ra10_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = arg_r4;
    uint32_t r5 = ctx->gpr[5];

    goto loc_804349EC;

loc_804349EC:
{
    r3 = 0x806D0000u;
    r4 = (r3 + 27520);
    r0 = MemoryInline::FlatRead32((r4 + 176));
}

loc_804349FC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80434A44;
    }
}

loc_80434A00:
{
    r3 = MemoryInline::FlatRead32((r4 + 100));
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r5 = (r0 * 10);
    r3 = MemoryInline::FlatRead32((r4 + 160));
    r0 = MemoryInline::FlatRead32((r4 + 164));
    r3 = (r3 * r0);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r5 = (r5 + r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r3 = (r3_rot_0 & 1073741823);
    r0 = (r3 + 31);
    r0 = (r0 & -32);
    r5 = (r5 + r0);
    r5 = (r5 + r0);
    r3 = (r5 + 4096);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80434A44:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804349EC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804349EC_ra10_0_18_0(ctx, ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000010 gpr_write=0x00000039 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804349EC func_804349EC preserves=true fpr_mask=0x00000000
