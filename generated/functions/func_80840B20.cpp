#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80840B20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lhax_80840868_loc_0 = 0;
    uint32_t addr_lhax_80840878_loc_0 = 0;
    uint32_t addr_lhax_80840890_loc_0 = 0;
    uint32_t addr_lhax_80840898_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_38 = 0;
    uint32_t r0_rot_39 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_40 = 0;
    uint32_t r0_rot_41 = 0;
    uint32_t r0_rot_42 = 0;
    uint32_t r0_rot_43 = 0;
    uint32_t r0_rot_44 = 0;
    uint32_t r0_rot_45 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r10_addr_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_21 = 0;
    uint32_t r3_addr_22 = 0;
    uint32_t r3_addr_23 = 0;
    uint32_t r3_addr_24 = 0;
    uint32_t r3_addr_25 = 0;
    uint32_t r3_addr_26 = 0;
    uint32_t r3_addr_27 = 0;
    uint32_t r3_addr_28 = 0;
    uint32_t r3_addr_29 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_30 = 0;
    uint32_t r3_addr_31 = 0;
    uint32_t r3_addr_32 = 0;
    uint32_t r3_addr_33 = 0;
    uint32_t r3_addr_34 = 0;
    uint32_t r3_addr_35 = 0;
    uint32_t r3_addr_36 = 0;
    uint32_t r3_addr_37 = 0;
    uint32_t r3_addr_38 = 0;
    uint32_t r3_addr_39 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_40 = 0;
    uint32_t r3_addr_41 = 0;
    uint32_t r3_addr_42 = 0;
    uint32_t r3_addr_43 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80840B20u);
    goto loc_80840B20;

loc_80840B20:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    r31 = 0x80870000u;
    r31 = (r31 + -32112);
    r8 = (r31 + 16);
    r29 = r4;
    r28 = r3;
    r9 = MemoryInline::FlatRead32((r3 + 24));
    r10 = MemoryInline::FlatRead32((r31 + 116));
    r8_addr_0 = (r8 + r9);
    r8 = MemoryInline::FlatRead8(r8_addr_0);
    r8 = (static_cast<int32_t>(static_cast<int8_t>(r8)));
    r8 = (r8 * 100);
    r10_addr_0 = (r10 + r8);
    MemoryInline::FlatWrite32(r10_addr_0, r3);
    r30 = (r10 + r8);
    r3 = r30;
    MemoryInline::FlatWrite32((r30 + 4), r0);
    MemoryInline::FlatWrite32((r30 + 8), r4);
    MemoryInline::FlatWrite32((r30 + 12), r5);
    MemoryInline::FlatWrite32((r30 + 16), r6);
    MemoryInline::FlatWrite32((r30 + 20), r7);
    // inline leaf 0x80840840 (40 guest instruction(s))
}

loc_inl0_0x80840840:
{
    r4 = 0x80870000u;
    r6 = 0x80840000u;
    r0 = MemoryInline::FlatRead32((r4 + -32000));
    r6 = (r6 + 32032);
    r5 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_inl0_0x80840858:
{
    r4 = (127 - r5);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x808408A4;
    }
}

loc_inl0_0x80840860:
{
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r8 = (r8_rot_0 & -2);
    r5 = (r6 + 2448);
    addr_lhax_80840868_loc_0 = (r5 + r8);
    r0 = MemoryInline::FlatRead16(addr_lhax_80840868_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r7 = (r7_rot_0 & -2);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r4 = (r6 + 2704);
    addr_lhax_80840878_loc_0 = (r5 + r7);
    r0 = MemoryInline::FlatRead16(addr_lhax_80840878_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 28), r0);
    r0 = MemoryInline::FlatRead16((r6 + 2448));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r0 = MemoryInline::FlatRead16((r5 + 254));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 36), r0);
    addr_lhax_80840890_loc_0 = (r4 + r7);
    r0 = MemoryInline::FlatRead16(addr_lhax_80840890_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    addr_lhax_80840898_loc_0 = (r4 + r8);
    r0 = MemoryInline::FlatRead16(addr_lhax_80840898_loc_0);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 44), r0);
    goto loc_inl0_cont_80840840;
}

loc_inl0_0x808408A4:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = (r6 + 1936);
    r5_addr_1 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_1);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_1 & -4);
    MemoryInline::FlatWrite32((r3 + 24), r0);
    r0 = 0;
    r5_addr_2 = (r5 + r4);
    r4 = MemoryInline::FlatRead32(r5_addr_2);
    MemoryInline::FlatWrite32((r3 + 28), r4);
    r4 = MemoryInline::FlatRead32((r6 + 1936));
    MemoryInline::FlatWrite32((r3 + 32), r4);
    r4 = MemoryInline::FlatRead32((r5 + 508));
    MemoryInline::FlatWrite32((r3 + 36), r4);
    MemoryInline::FlatWrite32((r3 + 40), r0);
    MemoryInline::FlatWrite32((r3 + 44), r0);
}

loc_inl0_cont_80840840:
{
    // end of inlined leaf 0x80840840
}

loc_80840B90:
{
    if ((static_cast<int32_t>(r29) > static_cast<int32_t>(-904))) {
        goto loc_80840B9C;
    }
}

loc_80840B94:
{
    r0 = 0;
    goto loc_80840BC4;
}

loc_80840B9C:
{
}

loc_80840BA0:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(60))) {
        goto loc_80840BB0;
    }
}

loc_80840BA4:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80840BC4;
}

loc_80840BB0:
{
    r0 = (r29 + 904);
    r3 = 0x80840000u;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r3 = (r3 + 32032);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_1);
}

loc_80840BC4:
{
    MemoryInline::FlatWrite16((r30 + 48), static_cast<uint16_t>(r0));
    r29 = 0;
    r0 = MemoryInline::FlatRead32((r31 + 112));
}

loc_80840BD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80840BEC;
    }
}

loc_80840BD8:
{
}

loc_80840BDC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80840DDC;
    }
}

loc_80840BE0:
{
}

loc_80840BE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80840FEC;
    }
}

loc_80840BE8:
{
    goto loc_808412A4;
}

loc_80840BEC:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = (r3 + r0);
}

loc_80840BFC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80840C08;
    }
}

loc_80840C00:
{
    r0 = 0;
    goto loc_80840C30;
}

loc_80840C08:
{
}

loc_80840C0C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80840C1C;
    }
}

loc_80840C10:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80840C30;
}

loc_80840C1C:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_33 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_33 & -2);
    r3 = (r3 + 32032);
    r3_addr_31 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_31);
}

loc_80840C30:
{
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 32));
    r3 = (r3 + r0);
}

loc_80840C44:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80840C50;
    }
}

loc_80840C48:
{
    r0 = 0;
    goto loc_80840C78;
}

loc_80840C50:
{
}

loc_80840C54:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80840C64;
    }
}

loc_80840C58:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80840C78;
}

loc_80840C64:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_35 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_35 & -2);
    r3 = (r3 + 32032);
    r3_addr_33 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_33);
}

loc_80840C78:
{
    MemoryInline::FlatWrite16((r30 + 56), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 36));
    r3 = (r3 + r0);
    r3 = (r3 + -30);
}

loc_80840C90:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80840C9C;
    }
}

loc_80840C94:
{
    r0 = 0;
    goto loc_80840CC4;
}

loc_80840C9C:
{
}

loc_80840CA0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80840CB0;
    }
}

loc_80840CA4:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80840CC4;
}

loc_80840CB0:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_37 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_37 & -2);
    r3 = (r3 + 32032);
    r3_addr_35 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_35);
}

loc_80840CC4:
{
    MemoryInline::FlatWrite16((r30 + 60), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_80840CE0:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80840CEC;
    }
}

loc_80840CE4:
{
    r0 = 0;
    goto loc_80840D14;
}

loc_80840CEC:
{
}

loc_80840CF0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80840D00;
    }
}

loc_80840CF4:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80840D14;
}

loc_80840D00:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_39 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_39 & -2);
    r3 = (r3 + 32032);
    r3_addr_37 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_37);
}

loc_80840D14:
{
    MemoryInline::FlatWrite16((r30 + 64), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 12));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_80840D30:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80840D3C;
    }
}

loc_80840D34:
{
    r0 = 0;
    goto loc_80840D64;
}

loc_80840D3C:
{
}

loc_80840D40:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80840D50;
    }
}

loc_80840D44:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80840D64;
}

loc_80840D50:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_41 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_41 & -2);
    r3 = (r3 + 32032);
    r3_addr_39 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_39);
}

loc_80840D64:
{
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r4 + r0);
    r3 = (r0 + r3);
    r3 = (r3 + -30);
}

loc_80840D84:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80840D90;
    }
}

loc_80840D88:
{
    r0 = 0;
    goto loc_80840DB8;
}

loc_80840D90:
{
}

loc_80840D94:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80840DA4;
    }
}

loc_80840D98:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80840DB8;
}

loc_80840DA4:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_43 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_43 & -2);
    r3 = (r3 + 32032);
    r3_addr_41 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_41);
}

loc_80840DB8:
{
    MemoryInline::FlatWrite16((r30 + 72), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 76), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 80), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 84), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 88), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 92), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r0));
    goto loc_808412A4;
}

loc_80840DDC:
{
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_80840DF4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80840E00;
    }
}

loc_80840DF8:
{
    r0 = 0;
    goto loc_80840E28;
}

loc_80840E00:
{
}

loc_80840E04:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80840E14;
    }
}

loc_80840E08:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80840E28;
}

loc_80840E14:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_21 & -2);
    r3 = (r3 + 32032);
    r3_addr_19 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_19);
}

loc_80840E28:
{
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_80840E44:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80840E50;
    }
}

loc_80840E48:
{
    r0 = 0;
    goto loc_80840E78;
}

loc_80840E50:
{
}

loc_80840E54:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80840E64;
    }
}

loc_80840E58:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80840E78;
}

loc_80840E64:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_23 & -2);
    r3 = (r3 + 32032);
    r3_addr_21 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_21);
}

loc_80840E78:
{
    MemoryInline::FlatWrite16((r30 + 56), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 36));
    r3 = (r3 + r0);
    r3 = (r3 + -30);
}

loc_80840E90:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80840E9C;
    }
}

loc_80840E94:
{
    r0 = 0;
    goto loc_80840EC4;
}

loc_80840E9C:
{
}

loc_80840EA0:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80840EB0;
    }
}

loc_80840EA4:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80840EC4;
}

loc_80840EB0:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_25 & -2);
    r3 = (r3 + 32032);
    r3_addr_23 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_23);
}

loc_80840EC4:
{
    MemoryInline::FlatWrite16((r30 + 60), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_80840EE8:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80840EF4;
    }
}

loc_80840EEC:
{
    r0 = 0;
    goto loc_80840F1C;
}

loc_80840EF4:
{
}

loc_80840EF8:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80840F08;
    }
}

loc_80840EFC:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80840F1C;
}

loc_80840F08:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_27 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_27 & -2);
    r3 = (r3 + 32032);
    r3_addr_25 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_25);
}

loc_80840F1C:
{
    MemoryInline::FlatWrite16((r30 + 64), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_80840F40:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80840F4C;
    }
}

loc_80840F44:
{
    r0 = 0;
    goto loc_80840F74;
}

loc_80840F4C:
{
}

loc_80840F50:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80840F60;
    }
}

loc_80840F54:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80840F74;
}

loc_80840F60:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_29 & -2);
    r3 = (r3 + 32032);
    r3_addr_27 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_27);
}

loc_80840F74:
{
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r4 + r0);
    r3 = (r0 + r3);
    r3 = (r3 + -30);
}

loc_80840F94:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80840FA0;
    }
}

loc_80840F98:
{
    r0 = 0;
    goto loc_80840FC8;
}

loc_80840FA0:
{
}

loc_80840FA4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80840FB4;
    }
}

loc_80840FA8:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80840FC8;
}

loc_80840FB4:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_31 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_31 & -2);
    r3 = (r3 + 32032);
    r3_addr_29 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_29);
}

loc_80840FC8:
{
    MemoryInline::FlatWrite16((r30 + 72), static_cast<uint16_t>(r0));
    r0 = 0;
    MemoryInline::FlatWrite16((r30 + 76), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 80), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 84), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 88), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 92), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r0));
    goto loc_808412A4;
}

loc_80840FEC:
{
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_80841004:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80841010;
    }
}

loc_80841008:
{
    r0 = 0;
    goto loc_80841038;
}

loc_80841010:
{
}

loc_80841014:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80841024;
    }
}

loc_80841018:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80841038;
}

loc_80841024:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & -2);
    r3 = (r3 + 32032);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_3);
}

loc_80841038:
{
    MemoryInline::FlatWrite16((r30 + 52), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_80841054:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80841060;
    }
}

loc_80841058:
{
    r0 = 0;
    goto loc_80841088;
}

loc_80841060:
{
}

loc_80841064:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80841074;
    }
}

loc_80841068:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80841088;
}

loc_80841074:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r3 = (r3 + 32032);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_5);
}

loc_80841088:
{
    MemoryInline::FlatWrite16((r30 + 56), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 36));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_808410A4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_808410B0;
    }
}

loc_808410A8:
{
    r0 = 0;
    goto loc_808410D8;
}

loc_808410B0:
{
}

loc_808410B4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_808410C4;
    }
}

loc_808410B8:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_808410D8;
}

loc_808410C4:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r3 = (r3 + 32032);
    r3_addr_7 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_7);
}

loc_808410D8:
{
    MemoryInline::FlatWrite16((r30 + 60), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r30 + 36));
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r3 = MemoryInline::FlatRead32((r30 + 44));
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_808410F4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80841100;
    }
}

loc_808410F8:
{
    r0 = 0;
    goto loc_80841128;
}

loc_80841100:
{
}

loc_80841104:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80841114;
    }
}

loc_80841108:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80841128;
}

loc_80841114:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_11 & -2);
    r3 = (r3 + 32032);
    r3_addr_9 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_9);
}

loc_80841128:
{
    MemoryInline::FlatWrite16((r30 + 88), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 24));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_8084114C:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80841158;
    }
}

loc_80841150:
{
    r0 = 0;
    goto loc_80841180;
}

loc_80841158:
{
}

loc_8084115C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8084116C;
    }
}

loc_80841160:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80841180;
}

loc_8084116C:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_13 & -2);
    r3 = (r3 + 32032);
    r3_addr_11 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_11);
}

loc_80841180:
{
    MemoryInline::FlatWrite16((r30 + 64), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 32));
    r3 = MemoryInline::FlatRead32((r30 + 28));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_808411A4:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_808411B0;
    }
}

loc_808411A8:
{
    r0 = 0;
    goto loc_808411D8;
}

loc_808411B0:
{
}

loc_808411B4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_808411C4;
    }
}

loc_808411B8:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_808411D8;
}

loc_808411C4:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_15 & -2);
    r3 = (r3 + 32032);
    r3_addr_13 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_13);
}

loc_808411D8:
{
    MemoryInline::FlatWrite16((r30 + 68), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 36));
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_808411FC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80841208;
    }
}

loc_80841200:
{
    r0 = 0;
    goto loc_80841230;
}

loc_80841208:
{
}

loc_8084120C:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_8084121C;
    }
}

loc_80841210:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80841230;
}

loc_8084121C:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_17 & -2);
    r3 = (r3 + 32032);
    r3_addr_15 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_15);
}

loc_80841230:
{
    MemoryInline::FlatWrite16((r30 + 72), static_cast<uint16_t>(r0));
    r5 = MemoryInline::FlatRead32((r30 + 36));
    r3 = MemoryInline::FlatRead32((r30 + 44));
    r4 = MemoryInline::FlatRead32((r30 + 20));
    r0 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r3 = (r3 + r0);
}

loc_80841254:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(-904))) {
        goto loc_80841260;
    }
}

loc_80841258:
{
    r0 = 0;
    goto loc_80841288;
}

loc_80841260:
{
}

loc_80841264:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(60))) {
        goto loc_80841274;
    }
}

loc_80841268:
{
    r3 = 65536;
    r0 = (r3 + -156);
    goto loc_80841288;
}

loc_80841274:
{
    r0 = (r3 + 904);
    r3 = 0x80840000u;
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_19 & -2);
    r3 = (r3 + 32032);
    r3_addr_17 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_17);
}

loc_80841288:
{
    MemoryInline::FlatWrite16((r30 + 92), static_cast<uint16_t>(r0));
    r0 = 0;
    r29 = (r29 | -2147483648);
    MemoryInline::FlatWrite16((r30 + 76), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 80), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 84), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r30 + 96), static_cast<uint16_t>(r0));
}

loc_808412A4:
{
    // inline leaf 0x804D12F0 (5 guest instruction(s))
    r3 = ctx->msr;
    r4 = (r3 & -32769);
    ctx->msr = r4;
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(17));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x804D12F0
    r4 = MemoryInline::FlatRead16((r30 + 48));
    r0 = 0;
    r31 = r3;
    MemoryInline::FlatWrite16((r28 + 146), static_cast<uint16_t>(r4));
    r3 = (r28 + 62);
    MemoryInline::FlatWrite16((r28 + 148), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 52));
    MemoryInline::FlatWrite16((r28 + 60), static_cast<uint16_t>(r0));
}

loc_808412CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808412D4;
    }
}

loc_808412D0:
{
    r29 = (r29 | 1);
}

loc_808412D4:
{
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 46u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r3, static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 56));
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 2), static_cast<uint16_t>(r0));
}

loc_808412E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808412F0;
    }
}

loc_808412EC:
{
    r29 = (r29 | 2);
}

loc_808412F0:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 4u, (r3 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 64));
    MemoryInline::WriteResolved16(guest_range_0, 6u, (r3 + 6), static_cast<uint16_t>(r0));
}

loc_80841304:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084130C;
    }
}

loc_80841308:
{
    r29 = (r29 | 65536);
}

loc_8084130C:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 8u, (r3 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 68));
    MemoryInline::WriteResolved16(guest_range_0, 10u, (r3 + 10), static_cast<uint16_t>(r0));
}

loc_80841320:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80841328;
    }
}

loc_80841324:
{
    r29 = (r29 | 131072);
}

loc_80841328:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 12u, (r3 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 76));
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 14), static_cast<uint16_t>(r0));
}

loc_8084133C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80841344;
    }
}

loc_80841340:
{
    r29 = (r29 | 2097152);
}

loc_80841344:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 80));
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r3 + 18), static_cast<uint16_t>(r0));
}

loc_80841358:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80841360;
    }
}

loc_8084135C:
{
    r29 = (r29 | 4194304);
}

loc_80841360:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 88));
    MemoryInline::WriteResolved16(guest_range_0, 22u, (r3 + 22), static_cast<uint16_t>(r0));
}

loc_80841374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8084137C;
    }
}

loc_80841378:
{
    r29 = (r29 | 67108864);
}

loc_8084137C:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 24u, (r3 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 92));
    MemoryInline::WriteResolved16(guest_range_0, 26u, (r3 + 26), static_cast<uint16_t>(r0));
}

loc_80841390:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80841398;
    }
}

loc_80841394:
{
    r29 = (r29 | 134217728);
}

loc_80841398:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 28u, (r3 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 60));
    MemoryInline::WriteResolved16(guest_range_0, 30u, (r3 + 30), static_cast<uint16_t>(r0));
}

loc_808413AC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808413B4;
    }
}

loc_808413B0:
{
    r29 = (r29 | 8);
}

loc_808413B4:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 32u, (r3 + 32), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 72));
    MemoryInline::WriteResolved16(guest_range_0, 34u, (r3 + 34), static_cast<uint16_t>(r0));
}

loc_808413C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808413D0;
    }
}

loc_808413CC:
{
    r29 = (r29 | 524288);
}

loc_808413D0:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 36u, (r3 + 36), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 84));
    MemoryInline::WriteResolved16(guest_range_0, 38u, (r3 + 38), static_cast<uint16_t>(r0));
}

loc_808413E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808413EC;
    }
}

loc_808413E8:
{
    r29 = (r29 | 16777216);
}

loc_808413EC:
{
    r0 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 40u, (r3 + 40), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 96));
    MemoryInline::WriteResolved16(guest_range_0, 42u, (r3 + 42), static_cast<uint16_t>(r0));
}

loc_80841400:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80841408;
    }
}

loc_80841404:
{
    r29 = (r29 | 536870912);
}

loc_80841408:
{
    r0 = MemoryInline::FlatRead32((r28 + 28));
    r30 = 0;
    MemoryInline::WriteResolved16(guest_range_0, 44u, (r3 + 44), static_cast<uint16_t>(r30));
    r3 = (r28 + 258);
    r0 = (r0 | 274);
    r4 = 0;
    MemoryInline::FlatWrite32((r28 + 52), r29);
    r5 = 32;
    MemoryInline::FlatWrite32((r28 + 28), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r28 + 28));
    r3 = r31;
    MemoryInline::FlatWrite16((r28 + 256), static_cast<uint16_t>(r30));
    r0 = (r0 | 50331648);
    MemoryInline::FlatWrite32((r28 + 28), r0);
    // inline leaf 0x804D1330 (9 guest instruction(s))
}

loc_inl2_0x804D1330:
{
}

loc_inl2_0x804D1334:
{
    r4 = ctx->msr;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x804D1344;
    }
}

loc_inl2_0x804D133C:
{
    r5 = (r4 | 32768);
    goto loc_inl2_0x804D1348;
}

loc_inl2_0x804D1344:
{
    r5 = (r4 & -32769);
}

loc_inl2_0x804D1348:
{
    ctx->msr = r5;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(17));
    r3 = (r3_rot_1 & 1);
}

loc_inl2_cont_804D1330:
{
    // end of inlined leaf 0x804D1330
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80840B20 func_80840B20 preserves=true fpr_mask=0x00000000
