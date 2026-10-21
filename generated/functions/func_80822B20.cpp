#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80822B20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x80822B20u);
    goto loc_80822B20;

loc_80822B20:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r6 = (r4 * 24);
    r5 = 0x80840000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & -16);
    r5 = (r5 + 24568);
    r30 = r3;
    r31 = r4;
    r29 = (r5 + r0);
    r28 = (r3 + r6);
    r27 = 0;
}

loc_80822B58:
{
    r0 = MemoryInline::FlatRead8((r28 + 448));
}

loc_80822B60:
{
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(r0))) {
        goto loc_80822B98;
    }
}

loc_80822B64:
{
    r3 = MemoryInline::FlatRead32((r30 + 568));
    r5 = 1;
    r4 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80822B84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
    goto loc_80822BC4;
}

loc_80822B98:
{
    r3 = MemoryInline::FlatRead32((r30 + 568));
    r5 = 1;
    r4 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 60));
    ctr = r12;
    ctx->lr = 0x80822BB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead8((r3 + 207));
    r0 = (r0 & 254);
    MemoryInline::FlatWrite8((r3 + 207), static_cast<uint8_t>(r0));
}

loc_80822BC4:
{
    r27 = (r27 + 1);
    r29 = (r29 + 4);
}

loc_80822BD0:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(4))) {
        goto loc_80822B58;
    }
}

loc_80822BD4:
{
    r0 = MemoryInline::FlatRead8((r28 + 448));
}

loc_80822BDC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_80822C64;
    }
}

loc_80822BE0:
{
    r5 = 0x80840000u;
    r0 = 37;
    r5 = (r5 + 17760);
    r3 = (r31 + 31);
    r4 = 0;
    ctr = r0;
}

loc_80822BF8:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80822C00:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80822C14;
    }
}

loc_80822C04:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80822C0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(21))) {
        goto loc_80822C14;
    }
}

loc_80822C10:
{
    goto loc_80822C44;
}

loc_80822C14:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_80822C20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80822C34;
    }
}

loc_80822C24:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80822C2C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(21))) {
        goto loc_80822C34;
    }
}

loc_80822C30:
{
    goto loc_80822C44;
}

loc_80822C34:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80822BF8;
    }
}

loc_80822C40:
{
    r4 = -1;
}

loc_80822C44:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl1_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl1_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl1_0x8081AA24;
    }
}

loc_inl1_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl1_0x8081AA28;
}

loc_inl1_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl1_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl1_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
    goto loc_80822CE8;
}

loc_80822C64:
{
    r5 = 0x80840000u;
    r0 = 37;
    r5 = (r5 + 17760);
    r3 = (r31 + 31);
    r4 = 0;
    ctr = r0;
    // nop
}

loc_80822C80:
{
    r0 = MemoryInline::FlatRead32(r5);
}

loc_80822C88:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80822C9C;
    }
}

loc_80822C8C:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
}

loc_80822C94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_80822C9C;
    }
}

loc_80822C98:
{
    goto loc_80822CCC;
}

loc_80822C9C:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r4 + 1);
}

loc_80822CA8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80822CBC;
    }
}

loc_80822CAC:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80822CB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(17))) {
        goto loc_80822CBC;
    }
}

loc_80822CB8:
{
    goto loc_80822CCC;
}

loc_80822CBC:
{
    r5 = (r5 + 16);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80822C80;
    }
}

loc_80822CC8:
{
    r4 = -1;
}

loc_80822CCC:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r30 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 752));
    r3 = r29;
    // inline leaf 0x8081AA10 (8 guest instruction(s))
}

loc_inl2_0x8081AA10:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
}

loc_inl2_0x8081AA18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl2_0x8081AA24;
    }
}

loc_inl2_0x8081AA1C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl2_0x8081AA28;
}

loc_inl2_0x8081AA24:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl2_0x8081AA28:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl2_cont_8081AA10:
{
    // end of inlined leaf 0x8081AA10
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 20), r0);
}

loc_80822CE8:
{
    r0 = MemoryInline::FlatRead32((r30 + 124));
}

loc_80822CF0:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(100))) {
        goto loc_80822CFC;
    }
}

loc_80822CF4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 124), r0);
}

loc_80822CFC:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3 = (r30 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 684));
    // inline leaf 0x8081D280 (8 guest instruction(s))
}

loc_inl3_0x8081D280:
{
    r4 = MemoryInline::FlatRead32(r3);
}

loc_inl3_0x8081D288:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(4))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8081D28C:
{
    r3 = 0x80870000u;
    r0 = 0;
    r3 = (r3 + -32744);
    r3_addr_0 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_0, static_cast<uint8_t>(r0));
    goto loc_inl3_cont_8081D280;
}

loc_inl3_return:
{
}

loc_inl3_cont_8081D280:
{
    // end of inlined leaf 0x8081D280
    r11 = (r1 + 32);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80822B20 func_80822B20 preserves=true fpr_mask=0x00000000
