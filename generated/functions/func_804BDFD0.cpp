#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint32_t func_804BDFD0_ra38_0_10_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];

    goto loc_804BDFD0;

loc_804BDFD0:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_804BDFD8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BDFE8;
    }
}

loc_804BDFDC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_804BDFE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BE020;
    }
}

loc_804BDFE8:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r7 = 0;
    r6 = MemoryInline::FlatRead16((r3 + 1284));
}

loc_804BDFF8:
{
    MemoryInline::FlatWrite16((r3 + 1280), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + 1282), static_cast<uint16_t>(r6));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BE094;
    }
}

loc_804BE004:
{
    r0 = MemoryInline::FlatRead16((r3 + 1286));
}

loc_804BE00C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BE094;
    }
}

loc_804BE010:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_804BE094;
}

loc_804BE020:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_804BE028:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BE094;
    }
}

loc_804BE02C:
{
    r0 = MemoryInline::FlatRead16((r3 + 1280));
    r0 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 1280), static_cast<uint16_t>(r0));
    r6 = (r0 & 65535);
}

loc_804BE040:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(40000))) {
        goto loc_804BE050;
    }
}

loc_804BE044:
{
    r6 = (r6 + -65536);
    r0 = (r6 + 25536);
    MemoryInline::FlatWrite16((r3 + 1280), static_cast<uint16_t>(r0));
}

loc_804BE050:
{
    r8 = MemoryInline::FlatRead16((r3 + 1280));
    r7 = MemoryInline::FlatRead16((r3 + 1282));
}

loc_804BE05C:
{
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(r7))) {
        goto loc_804BE094;
    }
}

loc_804BE060:
{
    r6 = MemoryInline::FlatRead32(r3);
}

loc_804BE068:
{
    r0 = MemoryInline::FlatRead16((r3 + 1286));
    r6 = (r6 | -2147483648);
    MemoryInline::FlatWrite32(r3, r6);
    r0 = (r7 + r0);
    MemoryInline::FlatWrite16((r3 + 1282), static_cast<uint16_t>(r0));
    if ((static_cast<uint32_t>(r8) < static_cast<uint32_t>(20000))) {
        goto loc_804BE094;
    }
}

loc_804BE080:
{
    r6 = (r0 & 65535);
    r7 = (r8 + -20000);
    r0 = (r6 + -20000);
    MemoryInline::FlatWrite16((r3 + 1280), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite16((r3 + 1282), static_cast<uint16_t>(r0));
}

loc_804BE094:
{
}

loc_804BE098:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(2))) {
        goto loc_804BE0A8;
    }
}

loc_804BE09C:
{
    r0 = (r4 + -16);
}

loc_804BE0A4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_return;
    }
}

loc_804BE0A8:
{
    r0 = MemoryInline::FlatRead32((r3 + 100));
}

loc_804BE0B0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804BE0C0;
    }
}

loc_804BE0B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 104));
}

loc_804BE0BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804BE0F8;
    }
}

loc_804BE0C0:
{
    r0 = MemoryInline::FlatRead32((r3 + 100));
    r5 = 0;
    r4 = MemoryInline::FlatRead16((r3 + 1284));
}

loc_804BE0D0:
{
    MemoryInline::FlatWrite16((r3 + 1288), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 1290), static_cast<uint16_t>(r4));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_804BE0DC:
{
    r0 = MemoryInline::FlatRead16((r3 + 1286));
}

loc_804BE0E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_804BE0E8:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
    r0 = (r0 | -2147483648);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r4;
}

loc_804BE0F8:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
}

loc_804BE100:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_return;
    }
}

loc_804BE104:
{
    r0 = MemoryInline::FlatRead16((r3 + 1288));
    r0 = (r0 + r5);
    MemoryInline::FlatWrite16((r3 + 1288), static_cast<uint16_t>(r0));
    r4 = (r0 & 65535);
}

loc_804BE118:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(40000))) {
        goto loc_804BE128;
    }
}

loc_804BE11C:
{
    r4 = (r4 + -65536);
    r0 = (r4 + 25536);
    MemoryInline::FlatWrite16((r3 + 1288), static_cast<uint16_t>(r0));
}

loc_804BE128:
{
    r6 = MemoryInline::FlatRead16((r3 + 1288));
    r5 = MemoryInline::FlatRead16((r3 + 1290));
}

loc_804BE134:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r5))) {
        goto loc_return;
    }
}

loc_804BE138:
{
    r4 = MemoryInline::FlatRead32((r3 + 96));
}

loc_804BE140:
{
    r0 = MemoryInline::FlatRead16((r3 + 1286));
    r4 = (r4 | -2147483648);
    MemoryInline::FlatWrite32((r3 + 96), r4);
    r0 = (r5 + r0);
    MemoryInline::FlatWrite16((r3 + 1290), static_cast<uint16_t>(r0));
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(20000))) {
        goto loc_return;
    }
}

loc_804BE158:
{
    r4 = (r0 & 65535);
    r5 = (r6 + -20000);
    r0 = (r4 + -20000);
    MemoryInline::FlatWrite16((r3 + 1288), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 1290), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r4;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    return r4;
}

}

extern "C" void func_804BDFD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t result;
    [[clang::noinline]] result = func_804BDFD0_ra38_0_10_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[4] = result;
}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804BDFD0 func_804BDFD0 preserves=true fpr_mask=0x00000000
