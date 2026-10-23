#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80315A30(CpuContext* ctx);
extern "C" uint32_t func_80315A30_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" void func_80316290(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
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

    goto loc_80316290;

loc_80316290:
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

loc_803162EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80316310;
    }
}

loc_803162F0:
{
    r0 = (r4 & 4);
}

loc_803162F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80316310;
    }
}

loc_803162FC:
{
    r4 = 201;
    ctx->lr = 0x80316304u;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80271374u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80316308:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(1))) {
        goto loc_80316310;
    }
}

loc_8031630C:
{
    r23 = 1;
}

loc_80316310:
{
    r3 = (r20 & 255);
    if constexpr (KnownRegArgsCpuCall<0x80315A30u>(&func_80315A30)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80315A30_B8D = func_80315A30_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_80315A30_B8D;
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

loc_80316324:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80316338;
    }
}

loc_80316328:
{
    r0 = (r3 + -5);
}

loc_80316330:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80316418;
    }
}

loc_80316334:
{
    goto loc_8031647C;
}

loc_80316338:
{
    r3 = MemoryInline::FlatRead8(r31);
    r0 = (r3 + 245);
    r0 = (r0 & 255);
}

loc_80316348:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80316358;
    }
}

loc_8031634C:
{
    r25 = 0;
    r24 = 0;
    goto loc_803163B0;
}

loc_80316358:
{
    r3 = r31;
    ctx->lr = 0x80316360u;
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

loc_80316364:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803163B0;
    }
}

loc_80316368:
{
    r4 = MemoryInline::FlatRead8((r3 + 14));
}

loc_80316370:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_803163B0;
    }
}

loc_80316374:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80316380:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80316394;
    }
}

loc_80316384:
{
    r0 = (r4 + 6);
    r25 = (r0 & 255);
    r24 = r3;
    goto loc_803163B0;
}

loc_80316394:
{
}

loc_80316398:
{
    if ((static_cast<uint32_t>(r23) != static_cast<uint32_t>(1))) {
        goto loc_803163B0;
    }
}

loc_8031639C:
{
    r0 = (r4 + 6);
    r25 = (r0 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r0 = (r3 - r0);
    r24 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
}

loc_803163B0:
{
    r3 = r30;
    ctx->lr = 0x803163B8u;
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

loc_803163BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8031647C;
    }
}

loc_803163C0:
{
    r4 = MemoryInline::FlatRead8((r3 + 14));
}

loc_803163C8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8031647C;
    }
}

loc_803163CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_803163D8:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_803163F0;
    }
}

loc_803163DC:
{
    r0 = (r4 + 6);
    r27 = (r0 & 255);
    r26 = r3;
    r29 = (r29 | 1);
    goto loc_8031647C;
}

loc_803163F0:
{
}

loc_803163F4:
{
    if ((static_cast<uint32_t>(r23) != static_cast<uint32_t>(1))) {
        goto loc_8031647C;
    }
}

loc_803163F8:
{
    r0 = (r4 + 6);
    r27 = (r0 & 255);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r0 = (r3 - r0);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r28 = 1;
    r29 = (r29 | 1);
    goto loc_8031647C;
}

loc_80316418:
{
    r3 = r30;
    ctx->lr = 0x80316420u;
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

loc_80316424:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8031647C;
    }
}

loc_80316428:
{
    r4 = MemoryInline::FlatRead8((r3 + 14));
}

loc_80316430:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8031647C;
    }
}

loc_80316434:
{
    r0 = MemoryInline::FlatRead8((r3 + 15));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80316440:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80316458;
    }
}

loc_80316444:
{
    r0 = (r4 + 6);
    r27 = (r0 & 255);
    r26 = r3;
    r29 = (r29 | 1);
    goto loc_8031647C;
}

loc_80316458:
{
}

loc_8031645C:
{
    if ((static_cast<uint32_t>(r23) != static_cast<uint32_t>(1))) {
        goto loc_8031647C;
    }
}

loc_80316460:
{
    r0 = (r4 + 6);
    r27 = (r0 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r0 = (r3 - r0);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r28 = 1;
    r29 = (r29 | 1);
}

loc_8031647C:
{
    r0 = (r24 * 10);
    r24 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r26 * 10);
    r26 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r0 = (r29 & 255);
    r0 = (r0 & 1);
}

loc_80316498:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80316518;
    }
}

loc_8031649C:
{
    r3 = (r20 & 255);
    r0 = (r3 & 8);
}

loc_803164A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803164E0;
    }
}

loc_803164AC:
{
    r0 = (r3 & 1);
}

loc_803164B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803164E0;
    }
}

loc_803164B8:
{
}

loc_803164BC:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_803164E0;
    }
}

loc_803164C0:
{
}

loc_803164C4:
{
    if ((static_cast<uint32_t>(r25) != static_cast<uint32_t>(r27))) {
        goto loc_803164E0;
    }
}

loc_803164C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r26));
}

loc_803164CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_803164E0;
    }
}

loc_803164D0:
{
    r0 = 4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803164DC;
    }
}

loc_803164D8:
{
    r0 = 2;
}

loc_803164DC:
{
    r29 = (r29 | r0);
}

loc_803164E0:
{
    r0 = (r20 & 255);
    r0 = (r0 & 4);
}

loc_803164EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80316510;
    }
}

loc_803164F0:
{
}

loc_803164F4:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(1))) {
        goto loc_80316504;
    }
}

loc_803164F8:
{
}

loc_803164FC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(2))) {
        goto loc_8031650C;
    }
}

loc_80316500:
{
    goto loc_80316510;
}

loc_80316504:
{
    r29 = (r29 | 8);
    goto loc_80316510;
}

loc_8031650C:
{
    r29 = (r29 | 16);
}

loc_80316510:
{
    MemoryInline::FlatWrite8(r21, static_cast<uint8_t>(r27));
    MemoryInline::FlatWrite16(r22, static_cast<uint16_t>(r26));
}

loc_80316518:
{
    r3 = r29;
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
// RECOMP_REGISTRATION base 0x80316290 func_80316290 preserves=true fpr_mask=0x00000000
