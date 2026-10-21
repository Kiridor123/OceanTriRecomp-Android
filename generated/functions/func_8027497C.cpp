#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8027497C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;

    MKW_GUEST_ENTER(0x8027497Cu);
    goto loc_8027497C;

loc_8027497C:
{
}

loc_80274980:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80274998;
    }
}

loc_80274984:
{
    r4 = (r5 * 10);
    r3 = 0x805C0000u;
    r0 = (r3 + 26352);
    r3 = (r0 + r4);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_80274998:
{
    r0 = MemoryInline::FlatRead16((r3 + 1464));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802749A0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(160))) {
        goto loc_802749B8;
    }
}

loc_802749A4:
{
    r4 = (r5 * 10);
    r3 = 0x805C0000u;
    r0 = (r3 + 26352);
    r3 = (r0 + r4);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802749B8:
{
    r0 = MemoryInline::FlatRead16((r3 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_802749C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802749D8;
    }
}

loc_802749C4:
{
    r4 = (r5 * 10);
    r3 = 0x805C0000u;
    r0 = (r3 + 26384);
    r3 = (r0 + r4);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

loc_802749D8:
{
    r4 = (r5 * 10);
    r3 = 0x805C0000u;
    r0 = (r3 + 26416);
    r3 = (r0 + r4);
    ctx->gpr[0] = r0;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8027497C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8027497C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8027497C func_8027497C preserves=true fpr_mask=0x00000000
