#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_803A41D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];

    goto loc_803A41D4;

loc_803A41D4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r3;
    r4 = 0;
    r5 = 4;
    // inline leaf 0x80385B4C (12 guest instruction(s))
}

loc_inl0_0x80385B4C:
{
    r6 = MemoryInline::FlatRead8((r3 + 413));
    r0 = (r4 & 255);
}

loc_inl0_0x80385B58:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x80385B74;
    }
}

loc_inl0_0x80385B5C:
{
    r3 = MemoryInline::FlatRead8((r3 + 415));
    r0 = (r5 & 255);
}

loc_inl0_0x80385B68:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x80385B74;
    }
}

loc_inl0_0x80385B6C:
{
    r3 = 1;
    goto loc_inl0_cont_80385B4C;
}

loc_inl0_0x80385B74:
{
    r3 = 0;
}

loc_inl0_cont_80385B4C:
{
    // end of inlined leaf 0x80385B4C
}

loc_803A41F8:
{
    r4 = 4004;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803A4204;
    }
}

loc_803A4200:
{
    r4 = 1820;
}

loc_803A4204:
{
    r6 = MemoryInline::FlatRead32((r31 + 396));
    r5 = MemoryInline::FlatRead32((r31 + 424));
    r0 = (r6 & 65535);
    r0 = (r5 - r0);
    r7 = (r0 & 65535);
    r0 = (r7 + r4);
    r3 = (r0 & 65535);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
}

loc_803A4228:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_803A4234;
    }
}

loc_803A422C:
{
    MemoryInline::FlatWrite32((r31 + 396), r5);
    goto loc_803A4258;
}

loc_803A4234:
{
}

loc_803A4238:
{
    if ((static_cast<uint32_t>(r7) >= static_cast<uint32_t>(32768))) {
        goto loc_803A424C;
    }
}

loc_803A423C:
{
    r0 = (r6 + r4);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r31 + 396), r0);
    goto loc_803A4258;
}

loc_803A424C:
{
    r0 = (r6 - r4);
    r0 = (r0 & 65535);
    MemoryInline::FlatWrite32((r31 + 396), r0);
}

loc_803A4258:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x803A41D4 func_803A41D4 preserves=true fpr_mask=0x00000000
