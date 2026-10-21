#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802AB59C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802AB59Cu);
    goto loc_802AB59C;

loc_802AB59C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = 0;
    r31 = (r4 & 255);
    r30 = (r3 & 255);
}

loc_802AB5C0:
{
    r3 = (r29 & 255);
    // inline leaf 0x802AB518 (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -1256);
    r0 = (r3 & 255);
    r0 = (r0 * 12);
    r3 = (r4 + r0);
    r3 = (r3 + 40);
    // end of inlined leaf 0x802AB518
    r0 = MemoryInline::FlatRead8((r3 + 7));
}

loc_802AB5D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802AB5F0;
    }
}

loc_802AB5D4:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_802AB5DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r30))) {
        goto loc_802AB5F0;
    }
}

loc_802AB5E0:
{
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_802AB5E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r31))) {
        goto loc_802AB5F0;
    }
}

loc_802AB5EC:
{
    goto loc_802AB600;
}

loc_802AB5F0:
{
    r29 = (r29 + 1);
}

loc_802AB5F8:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(64))) {
        goto loc_802AB5C0;
    }
}

loc_802AB5FC:
{
    r3 = 0;
}

loc_802AB600:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802AB59C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802AB59C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802AB59C func_802AB59C preserves=true fpr_mask=0x00000000
