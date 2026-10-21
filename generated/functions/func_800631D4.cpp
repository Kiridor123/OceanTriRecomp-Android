#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800631D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;

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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800631D4u);
    goto loc_800631D4;

loc_800631D4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8006321C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063234;
    }
}

loc_80063220:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8006322C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063234;
    }
}

loc_80063230:
{
    r10 = 0;
}

loc_80063234:
{
}

loc_80063238:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80063250;
    }
}

loc_8006323C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80063248:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063250;
    }
}

loc_8006324C:
{
    r9 = 0;
}

loc_80063250:
{
}

loc_80063254:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80063268;
    }
}

loc_80063258:
{
    r0 = (r11 + 1073741824);
}

loc_80063260:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063268;
    }
}

loc_80063264:
{
    r8 = 0;
}

loc_80063268:
{
}

loc_8006326C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80063284;
    }
}

loc_80063270:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8006327C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063284;
    }
}

loc_80063280:
{
    r7 = 0;
}

loc_80063284:
{
}

loc_80063288:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800632A0;
    }
}

loc_8006328C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80063298:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800632A0;
    }
}

loc_8006329C:
{
    r6 = 0;
}

loc_800632A0:
{
}

loc_800632A4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800632BC;
    }
}

loc_800632A8:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800632B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800632BC;
    }
}

loc_800632B8:
{
    r5 = 0;
}

loc_800632BC:
{
}

loc_800632C0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800632E4;
    }
}

loc_800632C4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 1297;
    r5 = 0x80590000u;
    r5 = (r5 + -17356);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800632E4u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_800632E4:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r7 = (r3 + -1);
}

loc_800632F0:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(r7))) {
        goto loc_80063314;
    }
}

loc_800632F4:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 1298;
    r5 = 0x80590000u;
    r5 = (r5 + -17304);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80063314u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80063314:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r30 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_80063338:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063350;
    }
}

loc_8006333C:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_80063348:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063350;
    }
}

loc_8006334C:
{
    r9 = 0;
}

loc_80063350:
{
}

loc_80063354:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8006336C;
    }
}

loc_80063358:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_80063364:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006336C;
    }
}

loc_80063368:
{
    r8 = 0;
}

loc_8006336C:
{
}

loc_80063370:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80063384;
    }
}

loc_80063374:
{
    r0 = (r10 + 1073741824);
}

loc_8006337C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063384;
    }
}

loc_80063380:
{
    r7 = 0;
}

loc_80063384:
{
}

loc_80063388:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800633A0;
    }
}

loc_8006338C:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80063398:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800633A0;
    }
}

loc_8006339C:
{
    r6 = 0;
}

loc_800633A0:
{
}

loc_800633A4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800633BC;
    }
}

loc_800633A8:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800633B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800633BC;
    }
}

loc_800633B8:
{
    r5 = 0;
}

loc_800633BC:
{
}

loc_800633C0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800633D8;
    }
}

loc_800633C4:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_800633D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800633D8;
    }
}

loc_800633D4:
{
    r4 = 0;
}

loc_800633D8:
{
}

loc_800633DC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80063400;
    }
}

loc_800633E0:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 1299;
    r5 = 0x80590000u;
    r5 = (r5 + -16124);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80063400u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80063400:
{
    r3 = MemoryInline::FlatRead32((r29 + 20));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3_addr_0 = (r3 + r0);
    r31 = MemoryInline::FlatRead16(r3_addr_0);
    r0 = (r31 & 49152);
}

loc_80063414:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80063428;
    }
}

loc_80063418:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r30, r0);
    r3 = r30;
    goto loc_80063484;
}

loc_80063428:
{
    r0 = (r31 & 16383);
}

loc_80063430:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r0))) {
        goto loc_80063450;
    }
}

loc_80063434:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 1309;
    r5 = 0x80590000u;
    r5 = (r5 + -15376);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80063450u;
    if constexpr (KnownRegArgsCpuCall<0x80501130u>(&func_80501130)) {
        ctx->gpr[1] = r1;
        func_80501130_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80501130u>(ctx);
    }
}

loc_80063450:
{
    r3 = MemoryInline::FlatRead32((r29 + 48));
}

loc_80063458:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80063468;
    }
}

loc_8006345C:
{
    r0 = (r31 * 76);
    r3 = (r3 + r0);
    goto loc_80063484;
}

loc_80063468:
{
    r3 = (r29 + 24);
    // inline leaf 0x80062088 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32(r3);
    // end of inlined leaf 0x80062088
    r3 = (r29 + 44);
    r4 = r30;
    r5 = r31;
    ctx->lr = 0x80063480u;
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
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008D660u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r3 = r30;
}

loc_80063484:
{
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
    ctx->gpr[11] = r11;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800631D4 func_800631D4 preserves=true fpr_mask=0x00000000
