#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80828AE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
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
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80828AE0u);
    goto loc_80828AE0;

loc_80828AE0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x8045747C (9 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, false, true);
    // end of inlined leaf 0x8045747C
    r6 = MemoryInline::FlatRead16((r4 + 12));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    r30 = r3;
}

loc_80828B08:
{
    r31 = r4;
    MemoryInline::FlatWrite32((r3 + 20), r0);
    r24 = r5;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80828B98;
    }
}

loc_80828B18:
{
    r3 = 0x80870000u;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & 262140);
    r3 = MemoryInline::FlatRead32((r3 + -32224));
    ctx->lr = 0x80828B28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_80828B2C:
{
    MemoryInline::FlatWrite32((r30 + 20), r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80828B98;
    }
}

loc_80828B34:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r25 = 0;
    r26 = 0;
    r29 = 1953038336;
    r28 = (r3 + 20);
    r27 = r28;
    goto loc_80828B88;
}

loc_80828B50:
{
    r12 = MemoryInline::FlatRead32(r24);
    r3 = r24;
    r0 = MemoryInline::FlatRead32(r27);
    r4 = (r29 + 28007);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    r6 = 0;
    r5 = (r28 + r0);
    ctr = r12;
    ctx->lr = 0x80828B74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r27 = (r27 + 4);
    r25 = (r25 + 1);
    r4_addr_2 = (r4 + r26);
    MemoryInline::FlatWrite32(r4_addr_2, r3);
    r26 = (r26 + 4);
}

loc_80828B88:
{
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0 = MemoryInline::FlatRead16((r3 + 12));
}

loc_80828B94:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_80828B50;
    }
}

loc_80828B98:
{
    r0 = MemoryInline::FlatRead16((r31 + 14));
    r3 = 0x80870000u;
    r3 = MemoryInline::FlatRead32((r3 + -32224));
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_3 & -16);
    ctx->lr = 0x80828BACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x804C2B00u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    ctr = ctx->ctr;
}

loc_80828BB0:
{
    MemoryInline::FlatWrite32((r30 + 24), r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80828C10;
    }
}

loc_80828BB8:
{
    r0 = MemoryInline::FlatRead16((r31 + 14));
    r4 = 0;
    MemoryInline::FlatWrite16((r30 + 28), static_cast<uint16_t>(r0));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r5 = (r5_rot_1 & -16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r5 = 0;
    r4 = 0;
    goto loc_80828C00;
}

loc_80828BD8:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 1048560);
    r3 = (r3 + r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80828BFC;
    }
}

loc_80828BE8:
{
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r4);
    MemoryInline::FlatWrite8((r3 + 14), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r3 + 8), r4);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r4));
}

loc_80828BFC:
{
    r5 = (r5 + 1);
}

loc_80828C00:
{
    r0 = MemoryInline::FlatRead16((r31 + 14));
    r3 = (r5 & 65535);
}

loc_80828C0C:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80828BD8;
    }
}

loc_80828C10:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C8 (9 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -32), 0, 32u, true, false);
    // end of inlined leaf 0x804574C8
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80828AE0 func_80828AE0 preserves=true fpr_mask=0x00000000
