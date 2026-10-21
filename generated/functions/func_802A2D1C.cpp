#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802A2D1C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x802A2D1Cu);
    goto loc_802A2D1C;

loc_802A2D1C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r3 = (r3 + 108);
    r4 = 0;
    r5 = 120;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 5;
    MemoryInline::FlatWrite8((r31 + 23), static_cast<uint8_t>(r3));
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 110), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 134), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 158), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 182), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 206), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 27));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A2D6C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r3))) {
        goto loc_802A2D78;
    }
}

loc_802A2D70:
{
    r0 = 4;
    MemoryInline::FlatWrite8((r31 + 27), static_cast<uint8_t>(r0));
}

loc_802A2D78:
{
    r3 = 17;
    // inline leaf 0x8029F828 (7 guest instruction(s))
    r4 = 0x806B0000u;
    r4 = (r4 + -3160);
    r0 = (r3 & 65535);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1644));
    // end of inlined leaf 0x8029F828
    r5 = 0;
    r4 = (r31 + 108);
    goto loc_802A2DA8;
}

loc_802A2D8C:
{
}

loc_802A2D90:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802A2DA0;
    }
}

loc_802A2D94:
{
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    r3 = (r3 + 4);
}

loc_802A2DA0:
{
    r4 = (r4 + 24);
    r5 = (r5 + 1);
}

loc_802A2DA8:
{
    r0 = MemoryInline::FlatRead8((r31 + 23));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_802A2DB4:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(r0))) {
        goto loc_802A2D8C;
    }
}

loc_802A2DB8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802A2D1C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802A2D1C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802A2D1C func_802A2D1C preserves=true fpr_mask=0x00000000
