#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80456C40(CpuContext* ctx);
extern "C" uint64_t func_80456C40_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" uint64_t func_804DC2B0_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r22_addr_0 = 0;
    uint32_t r22_addr_1 = 0;
    uint32_t r22_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    ctx->fpr[1].d = arg_f1;
    ctx->fpr[2].d = arg_f2;
    ctx->fpr[3].d = arg_f3;
    ctx->fpr[4].d = arg_f4;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_804DC2B0;

loc_804DC2B0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457474 (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    // end of inlined leaf 0x80457474
    r0 = MemoryInline::FlatRead32((r13 + -14796));
    r31 = 0x80750000u;
    r7 = 0x80630000u;
    r23 = r3;
}

loc_804DC2D8:
{
    r24 = r4;
    r25 = r5;
    r26 = r6;
    r31 = (r31 + 2752);
    r7 = (r7 + -23048);
    r29 = 1;
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_804DC50C;
    }
}

loc_804DC2F4:
{
    r0 = 0;
}

loc_804DC2FC:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_804DC50C;
    }
}

loc_804DC300:
{
    r0 = MemoryInline::FlatRead32((r13 + -14800));
}

loc_804DC308:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(65535))) {
        goto loc_804DC50C;
    }
}

loc_804DC30C:
{
    r0 = MemoryInline::FlatRead32((r13 + -14792));
}

loc_804DC314:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804DC50C;
    }
}

loc_804DC318:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(160));
}

loc_804DC31C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DC370;
    }
}

loc_804DC320:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DC348;
    }
}

loc_804DC324:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(96));
}

loc_804DC328:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DC360;
    }
}

loc_804DC32C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DC33C;
    }
}

loc_804DC330:
{
}

loc_804DC334:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(64))) {
        goto loc_804DC380;
    }
}

loc_804DC338:
{
    goto loc_804DC50C;
}

loc_804DC33C:
{
}

loc_804DC340:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(128))) {
        goto loc_804DC368;
    }
}

loc_804DC344:
{
    goto loc_804DC50C;
}

loc_804DC348:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(224));
}

loc_804DC34C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_804DC360;
    }
}

loc_804DC350:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_804DC50C;
    }
}

loc_804DC354:
{
}

loc_804DC358:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(192))) {
        goto loc_804DC378;
    }
}

loc_804DC35C:
{
    goto loc_804DC50C;
}

loc_804DC360:
{
    r26 = 1;
    goto loc_804DC3AC;
}

loc_804DC368:
{
    r26 = 2;
    goto loc_804DC3AC;
}

loc_804DC370:
{
    r26 = 4;
    goto loc_804DC3AC;
}

loc_804DC378:
{
    r26 = 8;
    goto loc_804DC3AC;
}

loc_804DC380:
{
}

loc_804DC384:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804DC50C;
    }
}

loc_804DC388:
{
    r0 = 65536;
}

loc_804DC390:
{
    if ((static_cast<uint32_t>(r6) > static_cast<uint32_t>(r0))) {
        goto loc_804DC50C;
    }
}

loc_804DC394:
{
}

loc_804DC398:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(256))) {
        goto loc_804DC3A8;
    }
}

loc_804DC39C:
{
    r24 = 32;
    r29 = 3;
    goto loc_804DC3AC;
}

loc_804DC3A8:
{
    r29 = 2;
}

loc_804DC3AC:
{
    r29 = (r29 + r26);
    r0 = 0;
    goto loc_804DC3C8;
}

loc_804DC3B8:
{
    r4 = MemoryInline::FlatRead32((r7 + 4));
}

loc_804DC3C0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(r3))) {
        goto loc_804DC3D4;
    }
}

loc_804DC3C4:
{
    r7 = (r7 + 8);
}

loc_804DC3C8:
{
    r28 = MemoryInline::FlatRead32(r7);
}

loc_804DC3D0:
{
    if ((static_cast<uint32_t>(r28) != static_cast<uint32_t>(r0))) {
        goto loc_804DC3B8;
    }
}

loc_804DC3D4:
{
    r0 = 0;
}

loc_804DC3DC:
{
    if ((static_cast<uint32_t>(r28) == static_cast<uint32_t>(r0))) {
        goto loc_804DC50C;
    }
}

loc_804DC3E0:
{
    r3 = r28;
    if constexpr (KnownRegArgsCpuCall<0x80456C40u>(&func_80456C40)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80456C40_188B = func_80456C40_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80456C40_188B);
        r4 = static_cast<uint32_t>(regargs_result_80456C40_188B >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80456C40u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
}

loc_804DC3EC:
{
    r30 = r3;
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(32))) {
        goto loc_804DC50C;
    }
}

loc_804DC3F4:
{
    r29 = (r29 + r3);
    r3 = MemoryInline::FlatRead32((r13 + -14804));
    r0 = (r29 + 2);
}

loc_804DC404:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_804DC50C;
    }
}

loc_804DC408:
{
    r3 = MemoryInline::FlatRead32((r13 + -14800));
    r22 = (r31 + 6);
    r0 = MemoryInline::FlatRead16((r31 + 6));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & -2);
    r22_addr_0 = (r22 + r3);
    r5 = MemoryInline::FlatRead16(r22_addr_0);
    r4 = (r0 + r31);
    r27 = (r22 + r3);
    r3 = (r4 + 2);
    r5 = (r5 - r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x8045BC18u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804DC430:
{
    r3 = MemoryInline::FlatRead16(r22);
    r0 = (r3 + 2);
    MemoryInline::FlatWrite16(r22, static_cast<uint16_t>(r0));
    r22 = (r22 + 2);
}

loc_804DC444:
{
    if ((static_cast<uint32_t>(r22) <= static_cast<uint32_t>(r27))) {
        goto loc_804DC430;
    }
}

loc_804DC448:
{
    r5 = MemoryInline::FlatRead16(r27);
    r0 = (r30 + -1);
    r4 = r28;
    r28 = (r31 + r5);
    r0 = (r24 | r0);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    r5 = r30;
    r3 = (r28 + 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
}

loc_804DC470:
{
    r3 = (r30 + r28);
    r28 = (r3 + 1);
    if ((static_cast<uint32_t>(r24) != static_cast<uint32_t>(64))) {
        goto loc_804DC48C;
    }
}

loc_804DC47C:
{
    r0 = (r26 + -1);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    r28 = (r28 + 1);
    goto loc_804DC4A8;
}

loc_804DC48C:
{
}

loc_804DC490:
{
    if ((static_cast<uint32_t>(r24) != static_cast<uint32_t>(32))) {
        goto loc_804DC4A8;
    }
}

loc_804DC494:
{
    r3 = (r26 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 255);
    MemoryInline::FlatWrite8(r28, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r28 + 1), static_cast<uint8_t>(r3));
    r28 = (r28 + 2);
}

loc_804DC4A8:
{
    r3 = r28;
    r4 = r25;
    r5 = r26;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004000u>(ctx);
    r3 = ctx->gpr[3];
    r5 = MemoryInline::FlatRead32((r13 + -14792));
    r4 = (0 - r23);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r13 + -14800));
    r6 = (r31 + r5);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & -2);
    r5 = (r27 - r31);
    r6_addr_0 = (r6 + r4);
    MemoryInline::FlatWrite16(r6_addr_0, static_cast<uint16_t>(r5));
    r4 = (r3 + 1);
    r3 = MemoryInline::FlatRead32((r13 + -14804));
    r6 = MemoryInline::FlatRead16(r27);
    r5 = (r29 + 2);
    r3 = (r3 - r5);
    MemoryInline::FlatWrite32((r13 + -14804), r3);
    r5 = (r6 + r29);
    MemoryInline::FlatWrite16((r27 + 2), static_cast<uint16_t>(r5));
    r3 = 1;
    MemoryInline::FlatWrite32((r13 + -14800), r4);
    MemoryInline::FlatWriteRam16((r31 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite8((r13 + -14787), static_cast<uint8_t>(r0));
    goto loc_804DC510;
}

loc_804DC50C:
{
    r3 = 0;
}

loc_804DC510:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574C0 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    // end of inlined leaf 0x804574C0
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804DC2B0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804DC2B0_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000020FB gpr_write=0x000008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804DC2B0 func_804DC2B0 preserves=true fpr_mask=0x00000000
