#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808429F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x808429F0u);
    goto loc_808429F0;

loc_808429F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8(r4);
    r5 = MemoryInline::FlatRead8((r4 + 1));
    r6 = (static_cast<int32_t>(r0) >> 4);
    r7 = (r0 & 15);
}

loc_80842A14:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(8))) {
        goto loc_80842A38;
    }
}

loc_80842A18:
{
    r0 = (r6 & 255);
}

loc_80842A20:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_80842A64;
    }
}

loc_80842A24:
{
}

loc_80842A28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_80842A74;
    }
}

loc_80842A2C:
{
}

loc_80842A30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(12))) {
        goto loc_80842AE0;
    }
}

loc_80842A34:
{
    goto loc_80842AF8;
}

loc_80842A38:
{
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(9));
    r4 = (r4_rot_2 & 130560);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r3 = (r3 + r4);
    r31 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r31 + 1032));
}

loc_80842A50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80842AF8;
    }
}

loc_80842A54:
{
    // inline leaf 0x808439F0 (3 guest instruction(s))
    r0 = 3;
    MemoryInline::FlatWrite32((r3 + 48), r0);
    // end of inlined leaf 0x808439F0
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 1032), r0);
    goto loc_80842AF8;
}

loc_80842A64:
{
    r6 = MemoryInline::FlatRead8((r4 + 2));
    r4 = r7;
    ctx->lr = 0x80842A70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x808427C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    goto loc_80842AF8;
}

loc_80842A74:
{
}

loc_80842A78:
{
    r6 = MemoryInline::FlatRead8((r4 + 2));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(7))) {
        goto loc_80842A94;
    }
}

loc_80842A80:
{
}

loc_80842A84:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(10))) {
        goto loc_80842AB4;
    }
}

loc_80842A88:
{
}

loc_80842A8C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(91))) {
        goto loc_80842AC0;
    }
}

loc_80842A90:
{
    goto loc_80842AF8;
}

loc_80842A94:
{
    r4 = 0x80850000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 1020);
    r4 = (r4 + -30032);
    r3 = (r3 + r0);
    r4_addr_2 = (r4 + r5);
    r0 = MemoryInline::FlatRead32(r4_addr_2);
    MemoryInline::FlatWrite32((r3 + 108), r0);
    goto loc_80842AF8;
}

loc_80842AB4:
{
    r3 = (r3 + r7);
    MemoryInline::FlatWrite8((r3 + 236), static_cast<uint8_t>(r6));
    goto loc_80842AF8;
}

loc_80842AC0:
{
    r4 = 0x80850000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & 1020);
    r4 = (r4 + -30032);
    r3 = (r3 + r0);
    r4_addr_1 = (r4 + r5);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    MemoryInline::FlatWrite32((r3 + 172), r0);
    goto loc_80842AF8;
}

loc_80842AE0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r6 = MemoryInline::FlatRead32((r3 + 8));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r4 = (r4_rot_1 & 65280);
    r3 = (r3 + r0);
    r0 = (r6 + r4);
    MemoryInline::FlatWrite32((r3 + 40), r0);
}

loc_80842AF8:
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

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x808429F0 func_808429F0 preserves=true fpr_mask=0x00000000
