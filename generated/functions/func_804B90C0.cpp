#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804B90C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_10 = 0;
    uint32_t r24_rot_11 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r24_rot_4 = 0;
    uint32_t r24_rot_5 = 0;
    uint32_t r24_rot_6 = 0;
    uint32_t r24_rot_7 = 0;
    uint32_t r24_rot_8 = 0;
    uint32_t r24_rot_9 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r25_rot_4 = 0;
    uint32_t r25_rot_5 = 0;
    uint32_t r25_rot_6 = 0;
    uint32_t r27_rot_0 = 0;
    uint32_t r27_rot_1 = 0;
    uint32_t r27_rot_2 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x804B90C0u);
    goto loc_804B90C0;

loc_804B90C0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r29 = MemoryInline::FlatRead32((r2 + -2480));
    r0 = MemoryInline::FlatRead32((r29 + 1508));
}

loc_804B90E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_804B920C;
    }
}

loc_804B90E4:
{
    r0 = MemoryInline::FlatRead32((r29 + 596));
    r28 = 0;
    r23 = 1;
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(22));
    r3 = (r3_rot_1 & 15);
    r27_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r27 = (r27_rot_1 & 7);
    r26 = (r3 + 1);
    goto loc_804B9180;
}

loc_804B9100:
{
}

loc_804B9104:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_804B9124;
    }
}

loc_804B9108:
{
}

loc_804B910C:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(1))) {
        goto loc_804B9134;
    }
}

loc_804B9110:
{
}

loc_804B9114:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(2))) {
        goto loc_804B9144;
    }
}

loc_804B9118:
{
}

loc_804B911C:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(3))) {
        goto loc_804B9154;
    }
}

loc_804B9120:
{
    goto loc_804B9160;
}

loc_804B9124:
{
    r0 = MemoryInline::FlatRead32((r29 + 368));
    r25 = (r0 & 7);
    r24_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r24 = (r24_rot_5 & 7);
    goto loc_804B9160;
}

loc_804B9134:
{
    r0 = MemoryInline::FlatRead32((r29 + 368));
    r25_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r25 = (r25_rot_4 & 7);
    r24_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(23));
    r24 = (r24_rot_4 & 7);
    goto loc_804B9160;
}

loc_804B9144:
{
    r0 = MemoryInline::FlatRead32((r29 + 368));
    r25_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
    r25 = (r25_rot_3 & 7);
    r24_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r24 = (r24_rot_3 & 7);
    goto loc_804B9160;
}

loc_804B9154:
{
    r0 = MemoryInline::FlatRead32((r29 + 368));
    r25_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r25 = (r25_rot_2 & 7);
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r24 = (r24_rot_2 & 7);
}

loc_804B9160:
{
    r3 = MemoryInline::FlatRead32((r29 + 1508));
    r0 = PPC_Slw(static_cast<uint32_t>(r23), static_cast<uint32_t>(r24));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B917C;
    }
}

loc_804B9170:
{
    r3 = r25;
    r4 = r24;
    ctx->lr = 0x804B917Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9030u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_804B917C:
{
    r28 = (r28 + 1);
}

loc_804B9180:
{
}

loc_804B9184:
{
    if ((static_cast<uint32_t>(r28) < static_cast<uint32_t>(r27))) {
        goto loc_804B9100;
    }
}

loc_804B9188:
{
    r28 = MemoryInline::FlatRead32((r2 + -2480));
    r27 = 0;
    r23 = 1;
    r31 = r28;
    r30 = (r28 + 336);
    goto loc_804B9204;
}

loc_804B91A0:
{
    r0 = (r27 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_804B91A4:
{
    r0 = MemoryInline::FlatRead32((r31 + 1444));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -4);
    r25 = (r0 & -257);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804B91C0;
    }
}

loc_804B91B4:
{
    r30_addr_2 = (r30 + r3);
    r0 = MemoryInline::FlatRead32(r30_addr_2);
    r24_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(17));
    r24 = (r24_rot_8 & 7);
    goto loc_804B91C8;
}

loc_804B91C0:
{
    r30_addr_3 = (r30 + r3);
    r0 = MemoryInline::FlatRead32(r30_addr_3);
    r24_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r24 = (r24_rot_9 & 7);
}

loc_804B91C8:
{
}

loc_804B91CC:
{
    if ((static_cast<uint32_t>(r25) == static_cast<uint32_t>(255))) {
        goto loc_804B91FC;
    }
}

loc_804B91D0:
{
    r3 = MemoryInline::FlatRead32((r29 + 1508));
    r0 = PPC_Slw(static_cast<uint32_t>(r23), static_cast<uint32_t>(r24));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804B91FC;
    }
}

loc_804B91E0:
{
    r3 = MemoryInline::FlatRead32((r28 + 1512));
    r0 = PPC_Slw(static_cast<uint32_t>(r23), static_cast<uint32_t>(r27));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804B91FC;
    }
}

loc_804B91F0:
{
    r3 = r25;
    r4 = r24;
    ctx->lr = 0x804B91FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x804B9030u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_804B91FC:
{
    r31 = (r31 + 4);
    r27 = (r27 + 1);
}

loc_804B9204:
{
}

loc_804B9208:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(r26))) {
        goto loc_804B91A0;
    }
}

loc_804B920C:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C4 (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    // end of inlined leaf 0x804574C4
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x804B90C0 func_804B90C0 preserves=true fpr_mask=0x00000000
