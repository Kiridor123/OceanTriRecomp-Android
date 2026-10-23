#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_802730A8_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    goto loc_802730A8;

loc_802730A8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
    r31 = r4;
    r3 = (r4 & 65535);
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl0_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl0_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl0_0x8029F758;
    }
}

loc_inl0_0x8029F754:
{
    r3 = 0;
}

loc_inl0_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl0_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r0 = MemoryInline::FlatRead8(r3);
}

loc_802730D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_80273120;
    }
}

loc_802730D8:
{
    r3 = r30;
    // inline leaf 0x8026FEA8 (9 guest instruction(s))
    r3 = MemoryInline::FlatRead8((r3 + 2));
    r4 = (r3 + -4);
    r3 = 2;
    r0 = (2 - r4);
    r3 = (r3 | ~r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r0 = (r3 - r0);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x8026FEA8
}

loc_802730E4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80273120;
    }
}

loc_802730E8:
{
    r5 = 0;
    r4 = r30;
    r3 = (r31 & 65535);
    r0 = 8;
    ctr = r0;
}

loc_802730FC:
{
    r0 = MemoryInline::FlatRead16((r4 + 736));
}

loc_80273104:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80273114;
    }
}

loc_80273108:
{
    r0 = (r5 | 128);
    r3 = (r0 & 65535);
    goto loc_80273200;
}

loc_80273114:
{
    r4 = (r4 + 4);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_802730FC;
    }
}

loc_80273120:
{
    r4 = 0;
    r3 = (r31 & 65535);
    r0 = 3;
    ctr = r0;
}

loc_80273130:
{
    r0 = MemoryInline::FlatRead16((r30 + 632));
}

loc_80273138:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80273144;
    }
}

loc_8027313C:
{
    r3 = (r4 & 65535);
    goto loc_80273200;
}

loc_80273144:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead16((r30 + 636));
}

loc_80273150:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8027315C;
    }
}

loc_80273154:
{
    r3 = (r4 & 65535);
    goto loc_80273200;
}

loc_8027315C:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead16((r30 + 640));
}

loc_80273168:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80273174;
    }
}

loc_8027316C:
{
    r3 = (r4 & 65535);
    goto loc_80273200;
}

loc_80273174:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead16((r30 + 644));
}

loc_80273180:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8027318C;
    }
}

loc_80273184:
{
    r3 = (r4 & 65535);
    goto loc_80273200;
}

loc_8027318C:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead16((r30 + 648));
}

loc_80273198:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802731A4;
    }
}

loc_8027319C:
{
    r3 = (r4 & 65535);
    goto loc_80273200;
}

loc_802731A4:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead16((r30 + 652));
}

loc_802731B0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802731BC;
    }
}

loc_802731B4:
{
    r3 = (r4 & 65535);
    goto loc_80273200;
}

loc_802731BC:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead16((r30 + 656));
}

loc_802731C8:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802731D4;
    }
}

loc_802731CC:
{
    r3 = (r4 & 65535);
    goto loc_80273200;
}

loc_802731D4:
{
    r4 = (r4 + 1);
    r0 = MemoryInline::FlatRead16((r30 + 660));
}

loc_802731E0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_802731EC;
    }
}

loc_802731E4:
{
    r3 = (r4 & 65535);
    goto loc_80273200;
}

loc_802731EC:
{
    r30 = (r30 + 32);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80273130;
    }
}

loc_802731F8:
{
    r3 = 65536;
    r3 = (r3 + -1);
}

loc_80273200:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->ctr = ctr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802730A8(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802730A8_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003B gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x802730A8 func_802730A8 preserves=true fpr_mask=0x00000000
