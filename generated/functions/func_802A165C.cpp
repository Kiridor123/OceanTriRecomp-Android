#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802A165C_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_802A165C;

loc_802A165C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r3 + 15));
}

loc_802A1670:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802A16A4;
    }
}

loc_802A1674:
{
    r0 = (r4 & 65535);
    r0 = (r0 & 16384);
}

loc_802A1680:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802A16A4;
    }
}

loc_802A1684:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
    r4 = (r0 * 404);
    r3 = 0x806C0000u;
    r0 = (r3 + 328);
    r3 = (r0 + r4);
    // inline leaf 0x802E8E98 (10 guest instruction(s))
}

loc_inl0_0x802E8E98:
{
    r0 = MemoryInline::FlatRead8((r3 + 206));
}

loc_inl0_0x802E8EA0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x802E8EB0;
    }
}

loc_inl0_0x802E8EA4:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 206), static_cast<uint8_t>(r0));
    goto loc_inl0_0x802E8EB8;
}

loc_inl0_0x802E8EB0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 206), static_cast<uint8_t>(r0));
}

loc_inl0_0x802E8EB8:
{
    r3 = MemoryInline::FlatRead8((r3 + 206));
}

loc_inl0_cont_802E8E98:
{
    // end of inlined leaf 0x802E8E98
    r3 = 4;
    goto loc_802A16A8;
}

loc_802A16A4:
{
    r3 = 0;
}

loc_802A16A8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802A165C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A165C_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A165C func_802A165C preserves=true fpr_mask=0x00000000
