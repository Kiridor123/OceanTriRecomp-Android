#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B6C70(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r7_mdest_0 = 0;
    uint32_t r7_mdest_1 = 0;
    uint32_t r7_mdest_2 = 0;
    uint32_t r7_mrot_0 = 0;
    uint32_t r7_mrot_1 = 0;
    uint32_t r7_mrot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r7_rot_4 = 0;
    uint32_t r7_rot_5 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
    uint32_t r8_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_804B6C70;

loc_804B6C70:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = MemoryInline::FlatRead32((r2 + -2480));
    r30 = MemoryInline::FlatRead32((r31 + 1532));
    r0 = (r30 & 1);
}

loc_804B6C90:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6C98;
    }
}

loc_804B6C94:
{
    ctx->lr = 0x804B6C98u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x804B90C0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
}

loc_804B6C98:
{
    r0 = (r30 & 2);
}

loc_804B6C9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6CA4;
    }
}

loc_804B6CA0:
{
    ctx->lr = 0x804B6CA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x804B9970u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
}

loc_804B6CA4:
{
    r0 = (r30 & 4);
}

loc_804B6CA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6CCC;
    }
}

loc_804B6CAC:
{
    r4 = -872349696;
    r0 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r2 + -2480));
    r3 = MemoryInline::FlatRead32((r5 + 596));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r3));
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
}

loc_804B6CCC:
{
    r0 = (r30 & 8);
}

loc_804B6CD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6CD8;
    }
}

loc_804B6CD4:
{
    ctx->lr = 0x804B6CD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x804B5730u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
}

loc_804B6CD8:
{
    r0 = (r30 & 16);
}

loc_804B6CDC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6CE4;
    }
}

loc_804B6CE0:
{
    ctx->lr = 0x804B6CE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x804B5E80u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
}

loc_804B6CE4:
{
    r0 = (r30 & 24);
}

loc_804B6CE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6CF0;
    }
}

loc_804B6CEC:
{
    ctx->lr = 0x804B6CF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x804B57E0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
}

loc_804B6CF0:
{
    r30 = (r30 & -256);
}

loc_804B6CF4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_804B6ED0;
    }
}

loc_804B6CF8:
{
    r4 = (r30 & 3840);
}

loc_804B6CFC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804B6D90;
    }
}

loc_804B6D00:
{
    r0 = (r4 & 256);
}

loc_804B6D04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6D24;
    }
}

loc_804B6D08:
{
    r3 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 4106;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 168));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804B6D24:
{
    r0 = (r4 & 512);
}

loc_804B6D28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6D48;
    }
}

loc_804B6D2C:
{
    r3 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 4107;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 172));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804B6D48:
{
    r0 = (r4 & 1024);
}

loc_804B6D4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6D6C;
    }
}

loc_804B6D50:
{
    r3 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 4108;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 176));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804B6D6C:
{
    r0 = (r4 & 2048);
}

loc_804B6D70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6D90;
    }
}

loc_804B6D74:
{
    r3 = -872349696;
    r0 = 16;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r0));
    r0 = 4109;
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 180));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804B6D90:
{
    r7 = (r30 & 16777216);
    r7_mrot_1 = (r30 & 61440);
    r7_mdest_1 = (r7 & -61441);
    r7 = (r7_mdest_1 | r7_mrot_1);
}

loc_804B6D98:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_804B6E0C;
    }
}

loc_804B6D9C:
{
    r0 = (r7 & 16777216);
}

loc_804B6DA0:
{
    r6 = 4110;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6DC8;
    }
}

loc_804B6DA8:
{
    r5 = MemoryInline::FlatRead32((r31 + 596));
    r3 = -872349696;
    r4 = 16;
    r0 = 4105;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(28));
    r4 = (r4_rot_1 & 7);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
}

loc_804B6DC8:
{
    r5 = r31;
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(20));
    r7 = (r7_rot_1 & 15);
    r4 = 16;
    r3 = -872349696;
    goto loc_804B6E04;
}

loc_804B6DE0:
{
    r0 = (r7 & 1);
}

loc_804B6DE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6DF8;
    }
}

loc_804B6DE8:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    r0 = MemoryInline::FlatRead32((r5 + 184));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804B6DF8:
{
    r7_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r7 = (r7_rot_3 & 2147483647);
    r5 = (r5 + 4);
    r6 = (r6 + 1);
}

loc_804B6E04:
{
}

loc_804B6E08:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_804B6DE0;
    }
}

loc_804B6E0C:
{
    r8 = (r30 & 50266112);
}

loc_804B6E10:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_804B6E98;
    }
}

loc_804B6E14:
{
    r0 = (r8 & 33554432);
}

loc_804B6E18:
{
    r6 = 4160;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6E40;
    }
}

loc_804B6E20:
{
    r5 = MemoryInline::FlatRead32((r31 + 596));
    r3 = -872349696;
    r4 = 16;
    r0 = 4159;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    r4 = (r5 & 15);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r4));
}

loc_804B6E40:
{
    r7 = r31;
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(16));
    r8 = (r8_rot_1 & 255);
    r4 = 16;
    r3 = -872349696;
    goto loc_804B6E90;
}

loc_804B6E58:
{
    r0 = (r8 & 1);
}

loc_804B6E5C:
{
    r5 = (r6 + 16);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6E84;
    }
}

loc_804B6E64:
{
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r6));
    r0 = MemoryInline::FlatRead32((r7 + 200));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r4));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r5));
    r0 = MemoryInline::FlatRead32((r7 + 232));
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
}

loc_804B6E84:
{
    r8_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(31));
    r8 = (r8_rot_3 & 2147483647);
    r6 = (r6 + 1);
    r7 = (r7 + 4);
}

loc_804B6E90:
{
}

loc_804B6E94:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_804B6E58;
    }
}

loc_804B6E98:
{
    r0 = (r30 & 67108864);
}

loc_804B6E9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6EB0;
    }
}

loc_804B6EA0:
{
    r3 = 0;
    ctx->lr = 0x804B6EA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x804BAFE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r3 = 5;
    ctx->lr = 0x804B6EB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x804BAFE0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
}

loc_804B6EB0:
{
    r0 = (r30 & 268435456);
}

loc_804B6EB4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6EBC;
    }
}

loc_804B6EB8:
{
    ctx->lr = 0x804B6EBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x804BAD90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
}

loc_804B6EBC:
{
    r0 = (r30 & 134217728);
}

loc_804B6EC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B6EC8;
    }
}

loc_804B6EC4:
{
    ctx->lr = 0x804B6EC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x804BAA40u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
}

loc_804B6EC8:
{
    r0 = 1;
    MemoryInline::FlatWrite16((r31 + 2), static_cast<uint16_t>(r0));
}

loc_804B6ED0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 1532), r0);
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
    ctx->gpr[8] = r8;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B6C70 func_804B6C70 preserves=true fpr_mask=0x00000000
