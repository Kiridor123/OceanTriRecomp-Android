#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80220BE8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_80220BE8;

loc_80220BE8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r31 = r3;
    r29 = r4;
    r4 = MemoryInline::FlatRead32((r13 + -17824));
    r30 = (r4 + 18004);
    r3 = (r3 + 96);
    r4 = 0;
    r5 = 128;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
}

loc_80220C28:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(-1))) {
        goto loc_80220C78;
    }
}

loc_80220C2C:
{
    r0 = MemoryInline::FlatRead16((r31 + 78));
}

loc_80220C34:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(245))) {
        goto loc_80220C78;
    }
}

loc_80220C38:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = 0x805C0000u;
    r4 = (r4 + -20568);
    r4_addr_0 = (r4 + r0);
    r5 = MemoryInline::FlatRead32(r4_addr_0);
    goto loc_80220C68;
}

loc_80220C4C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80220C54:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(64))) {
        goto loc_80220D1C;
    }
}

loc_80220C58:
{
    MemoryInline::FlatWrite16((r31 + 96), static_cast<uint16_t>(r4));
    r31 = (r31 + 2);
    r3 = (r3 + 1);
    r5 = (r5 + 4);
}

loc_80220C68:
{
    r4 = MemoryInline::FlatRead16(r5);
}

loc_80220C70:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80220C4C;
    }
}

loc_80220C74:
{
    goto loc_80220D1C;
}

loc_80220C78:
{
    r7 = 0;
    r4 = 0x805C0000u;
    r4 = (r4 + -20568);
    r0 = 2;
    ctr = r0;
}

loc_80220C8C:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r30_addr_2 = (r30 + r0);
    r0 = MemoryInline::FlatRead8(r30_addr_2);
}

loc_80220C98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80220CCC;
    }
}

loc_80220C9C:
{
    r6 = MemoryInline::FlatRead32(r4);
    goto loc_80220CC0;
}

loc_80220CA4:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80220CAC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(64))) {
        goto loc_80220CCC;
    }
}

loc_80220CB0:
{
    MemoryInline::FlatWrite16((r31 + 96), static_cast<uint16_t>(r5));
    r31 = (r31 + 2);
    r3 = (r3 + 1);
    r6 = (r6 + 4);
}

loc_80220CC0:
{
    r5 = MemoryInline::FlatRead16(r6);
}

loc_80220CC8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80220CA4;
    }
}

loc_80220CCC:
{
    r7 = (r7 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r30_addr_3 = (r30 + r0);
    r0 = MemoryInline::FlatRead8(r30_addr_3);
}

loc_80220CDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80220D10;
    }
}

loc_80220CE0:
{
    r6 = MemoryInline::FlatRead32((r4 + 4));
    goto loc_80220D04;
}

loc_80220CE8:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_80220CF0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(64))) {
        goto loc_80220D10;
    }
}

loc_80220CF4:
{
    MemoryInline::FlatWrite16((r31 + 96), static_cast<uint16_t>(r5));
    r31 = (r31 + 2);
    r3 = (r3 + 1);
    r6 = (r6 + 4);
}

loc_80220D04:
{
    r5 = MemoryInline::FlatRead16(r6);
}

loc_80220D0C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80220CE8;
    }
}

loc_80220D10:
{
    r4 = (r4 + 8);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80220C8C;
    }
}

loc_80220D1C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80220BE8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80220BE8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80220BE8 func_80220BE8 preserves=true fpr_mask=0x00000000
