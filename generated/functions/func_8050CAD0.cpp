#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8050CAD0_ra18_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;

    goto loc_8050CAD0;

loc_8050CAD0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80520CD8 (1 guest instruction(s))
    // end of inlined leaf 0x80520CD8
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r4 = (r4_rot_0 & 255);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r3 = (r3_rot_0 & 255);
}

loc_8050CAF0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(10))) {
        goto loc_8050CAFC;
    }
}

loc_8050CAF4:
{
    r3 = 1;
    goto loc_8050CB34;
}

loc_8050CAFC:
{
}

loc_8050CB00:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(172))) {
        goto loc_8050CB18;
    }
}

loc_8050CB04:
{
    r0 = (r3 + -16);
}

loc_8050CB0C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_8050CB18;
    }
}

loc_8050CB10:
{
    r3 = 1;
    goto loc_8050CB34;
}

loc_8050CB18:
{
}

loc_8050CB1C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(192))) {
        goto loc_8050CB30;
    }
}

loc_8050CB20:
{
}

loc_8050CB24:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(168))) {
        goto loc_8050CB30;
    }
}

loc_8050CB28:
{
    r3 = 1;
    goto loc_8050CB34;
}

loc_8050CB30:
{
    r3 = 0;
}

loc_8050CB34:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8050CAD0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8050CAD0_ra18_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8050CAD0 func_8050CAD0 preserves=true fpr_mask=0x00000000
