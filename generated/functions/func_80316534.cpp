#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80315A30(CpuContext* ctx);
extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_80316534(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
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

    goto loc_80316534;

loc_80316534:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8045746C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, false, true);
    // end of inlined leaf 0x8045746C
    r20 = r5;
    r21 = r6;
    r22 = r7;
    r31 = MemoryInline::FlatRead32((r4 + 12));
    r30 = MemoryInline::FlatRead32(r4);
    r29 = 0;
    r28 = 0;
    r27 = 0;
    r26 = 0;
    r25 = 0;
    r24 = 0;
    r0 = 0;
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16(r7, static_cast<uint16_t>(r0));
    r23 = 0;
    r4 = (r5 & 255);
    r0 = (r4 & 2);
}

loc_80316590:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803165B4;
    }
}

loc_80316594:
{
    r0 = (r4 & 4);
}

loc_8031659C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803165B4;
    }
}

loc_803165A0:
{
    r4 = 201;
    ctx->lr = 0x803165A8u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803165AC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_803165B4;
    }
}

loc_803165B0:
{
    r23 = 1;
}

loc_803165B4:
{
    r3 = (r20 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80315A30u>(&func_80315A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80315A30_BA9 = func_80315A30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80315A30_BA9;
        r0 = ctx->gpr[0];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->cr = cr;
        InvokeDirectCpu<0x80315A30u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r3 = (r3 & 255);
    r0 = (r3 + -1);
}

loc_803165C8:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_803165DC;
    }
}

loc_803165CC:
{
    r0 = (r3 + -5);
}

loc_803165D4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_803166BC;
    }
}

loc_803165D8:
{
    goto loc_80316724;
}

loc_803165DC:
{
    r3 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + 245);
    r0 = (r0 & 255);
}

loc_803165EC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_803165FC;
    }
}

loc_803165F0:
{
    r25 = 0;
    r24 = 0;
    goto loc_80316654;
}

loc_803165FC:
{
    r3 = r31;
    ctx->lr = 0x80316604u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x8027ED10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80316608:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80316654;
    }
}

loc_8031660C:
{
    r4 = MemoryInline::FlatRead8((r3 + 16));
}

loc_80316614:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80316654;
    }
}

loc_80316618:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80316624:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80316638;
    }
}

loc_80316628:
{
    r0 = (r4 + 11);
    r25 = (r0 & 255);
    r24 = r3;
    goto loc_80316654;
}

loc_80316638:
{
}

loc_8031663C:
{
    if ((static_cast<uint32_t>(r23) != static_cast<uint32_t>(1))) {
        goto loc_80316654;
    }
}

loc_80316640:
{
    r0 = (r4 + 11);
    r25 = (r0 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r0 = (r3 - r0);
    r24 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_80316654:
{
    r3 = r30;
    ctx->lr = 0x8031665Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x8027ED10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80316660:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8031672C;
    }
}

loc_80316664:
{
    r4 = MemoryInline::FlatRead8((r3 + 16));
}

loc_8031666C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8031672C;
    }
}

loc_80316670:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_8031667C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80316694;
    }
}

loc_80316680:
{
    r0 = (r4 + 11);
    r27 = (r0 & 255);
    r26 = r3;
    r29 = (r29 | 1);
    goto loc_8031672C;
}

loc_80316694:
{
}

loc_80316698:
{
    if ((static_cast<uint32_t>(r23) != static_cast<uint32_t>(1))) {
        goto loc_8031672C;
    }
}

loc_8031669C:
{
    r0 = (r4 + 11);
    r27 = (r0 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r0 = (r3 - r0);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r28 = 1;
    r29 = (r29 | 1);
    goto loc_8031672C;
}

loc_803166BC:
{
    r3 = r30;
    ctx->lr = 0x803166C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    InvokeDirectCpu<0x8027ED10u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_803166C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8031672C;
    }
}

loc_803166CC:
{
    r4 = MemoryInline::FlatRead8((r3 + 16));
}

loc_803166D4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8031672C;
    }
}

loc_803166D8:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803166E4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_803166FC;
    }
}

loc_803166E8:
{
    r0 = (r4 + 11);
    r27 = (r0 & 255);
    r26 = r3;
    r29 = (r29 | 1);
    goto loc_8031672C;
}

loc_803166FC:
{
}

loc_80316700:
{
    if ((static_cast<uint32_t>(r23) != static_cast<uint32_t>(1))) {
        goto loc_8031672C;
    }
}

loc_80316704:
{
    r0 = (r4 + 11);
    r27 = (r0 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r0 = (r3 - r0);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r28 = 1;
    r29 = (r29 | 1);
    goto loc_8031672C;
}

loc_80316724:
{
    r3 = 0;
    goto loc_803167CC;
}

loc_8031672C:
{
    r0 = (r24 * 10);
    r24 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r26 * 10);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r29 & 255);
    r0 = (r0 & 1);
}

loc_80316748:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803167C8;
    }
}

loc_8031674C:
{
    r3 = (r20 & 255);
    r0 = (r3 & 8);
}

loc_80316758:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80316790;
    }
}

loc_8031675C:
{
    r0 = (r3 & 1);
}

loc_80316764:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80316790;
    }
}

loc_80316768:
{
}

loc_8031676C:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_80316790;
    }
}

loc_80316770:
{
}

loc_80316774:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(r27))) {
        goto loc_80316790;
    }
}

loc_80316778:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r26));
}

loc_8031677C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80316790;
    }
}

loc_80316780:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8031678C;
    }
}

loc_80316788:
{
    r0 = 2;
}

loc_8031678C:
{
    r29 = (r29 | r0);
}

loc_80316790:
{
    r0 = (r20 & 255);
    r0 = (r0 & 4);
}

loc_8031679C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803167C0;
    }
}

loc_803167A0:
{
}

loc_803167A4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(1))) {
        goto loc_803167B4;
    }
}

loc_803167A8:
{
}

loc_803167AC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(2))) {
        goto loc_803167BC;
    }
}

loc_803167B0:
{
    goto loc_803167C0;
}

loc_803167B4:
{
    r29 = (r29 | 8);
    goto loc_803167C0;
}

loc_803167BC:
{
    r29 = (r29 | 16);
}

loc_803167C0:
{
    MemoryInline::FlatWrite8(r21, static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite16(r22, static_cast<uint16_t>(r26));
}

loc_803167C8:
{
    r3 = r29;
}

loc_803167CC:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574B8 (13 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -48), 0, 48u, true, false);
    // end of inlined leaf 0x804574B8
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
// RECOMP_REGISTRATION base 0x80316534 func_80316534 preserves=true fpr_mask=0x00000000
