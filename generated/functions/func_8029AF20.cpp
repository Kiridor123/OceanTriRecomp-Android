#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8029AF20_ra18_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;

    goto loc_8029AF20;

loc_8029AF20:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14076));
    r0 = MemoryInline::FlatRead8((r3 + 6));
}

loc_8029AF40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8029AF58;
    }
}

loc_8029AF44:
{
}

loc_8029AF48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8029AF7C;
    }
}

loc_8029AF4C:
{
}

loc_8029AF50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8029AF88;
    }
}

loc_8029AF54:
{
    goto loc_8029AFA8;
}

loc_8029AF58:
{
    r4 = 32;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029AF64:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029AF74;
    }
}

loc_8029AF68:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 956));
    goto loc_8029AFA8;
}

loc_8029AF74:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14076));
    goto loc_8029AFA8;
}

loc_8029AF7C:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1972));
    goto loc_8029AFA8;
}

loc_8029AF88:
{
    r4 = 32;
    // inline leaf 0x8029F5C8 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (r0 & r4);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8029F5C8
}

loc_8029AF94:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_8029AFA4;
    }
}

loc_8029AF98:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 516));
    goto loc_8029AFA8;
}

loc_8029AFA4:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -14076));
}

loc_8029AFA8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8029AF20(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8029AF20_ra18_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000001F gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000002 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8029AF20 func_8029AF20 preserves=true fpr_mask=0x00000000
