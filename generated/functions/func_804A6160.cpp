#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_804CDD30(CpuContext* ctx);
extern "C" void func_804CDD30_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_804A6160_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r25_rot_3 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r9_addr_0 = 0;
    uint32_t r9_addr_1 = 0;
    uint32_t r9_addr_10 = 0;
    uint32_t r9_addr_2 = 0;
    uint32_t r9_addr_3 = 0;
    uint32_t r9_addr_4 = 0;
    uint32_t r9_addr_5 = 0;
    uint32_t r9_addr_6 = 0;
    uint32_t r9_addr_7 = 0;
    uint32_t r9_addr_8 = 0;
    uint32_t r9_addr_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
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

    MKW_GUEST_ENTER(0x804A6160u);
    goto loc_804A6160;

loc_804A6160:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r26 = r3;
    r31 = 0x80610000u;
    r29 = MemoryInline::FlatRead32((r13 + -15792));
    r28 = r26;
    r31 = (r31 + -2448);
    r30 = 0x80620000u;
}

loc_804A618C:
{
    r0 = MemoryInline::FlatRead8(r26);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A61A0;
    }
}

loc_804A6198:
{
    r3 = r29;
    goto loc_804A6450;
}

loc_804A61A0:
{
}

loc_804A61A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_804A61B4;
    }
}

loc_804A61A8:
{
    r29 = 0;
    r26 = (r26 + 1);
    goto loc_804A618C;
}

loc_804A61B4:
{
}

loc_804A61B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_804A6230;
    }
}

loc_804A61BC:
{
    r0 = MemoryInline::FlatRead8((r26 + 1));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804A61C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_804A6210;
    }
}

loc_804A61CC:
{
    r0 = MemoryInline::FlatRead8((r26 + 2));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_804A61D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_804A61F4;
    }
}

loc_804A61DC:
{
    r0 = (r29 * 12);
    r3 = MemoryInline::FlatRead32((r13 + -15768));
    r26 = (r26 + 3);
    r3 = (r3 + r0);
    r29 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_804A618C;
}

loc_804A61F4:
{
}

loc_804A61F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A6230;
    }
}

loc_804A61FC:
{
    r0 = (r29 * 12);
    r3 = MemoryInline::FlatRead32((r13 + -15768));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_804A6450;
}

loc_804A6210:
{
}

loc_804A6214:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_804A6220;
    }
}

loc_804A6218:
{
    r26 = (r26 + 2);
    goto loc_804A618C;
}

loc_804A6220:
{
}

loc_804A6224:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A6230;
    }
}

loc_804A6228:
{
    r3 = r29;
    goto loc_804A6450;
}

loc_804A6230:
{
    r0 = MemoryInline::FlatRead32((r13 + -20552));
}

loc_804A6238:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804A62E4;
    }
}

loc_804A623C:
{
    r23 = r26;
    r5 = 0;
    r4 = 0;
    goto loc_804A6294;
}

loc_804A6250:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_804A6258:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(46))) {
        goto loc_804A6284;
    }
}

loc_804A625C:
{
    r0 = (r23 - r26);
}

loc_804A6264:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(8))) {
        goto loc_804A6270;
    }
}

loc_804A6268:
{
}

loc_804A626C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_804A6278;
    }
}

loc_804A6270:
{
    r4 = 1;
    goto loc_804A62A8;
}

loc_804A6278:
{
    r27 = (r23 + 1);
    r5 = 1;
    goto loc_804A6290;
}

loc_804A6284:
{
}

loc_804A6288:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(32))) {
        goto loc_804A6290;
    }
}

loc_804A628C:
{
    r4 = 1;
}

loc_804A6290:
{
    r23 = (r23 + 1);
}

loc_804A6294:
{
    r3 = MemoryInline::FlatRead8(r23);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A62A8;
    }
}

loc_804A62A0:
{
}

loc_804A62A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_804A6250;
    }
}

loc_804A62A8:
{
}

loc_804A62AC:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(1))) {
        goto loc_804A62C0;
    }
}

loc_804A62B0:
{
    r0 = (r23 - r27);
}

loc_804A62B8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(3))) {
        goto loc_804A62C0;
    }
}

loc_804A62BC:
{
    r4 = 1;
}

loc_804A62C0:
{
}

loc_804A62C4:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_804A6308;
    }
}

loc_804A62C8:
{
    r6 = r28;
    r5 = (r30 + -28792);
    r3 = (r13 + -20544);
    r4 = 443;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x804A62E0u;
    if constexpr (KnownRegArgsCpuCall<0x804CDD30u>(&func_804CDD30)) {
        ctx->gpr[1] = r1;
        func_804CDD30_ra38_0_0_0(ctx, r3, r4, r5);
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x804CDD30u>(ctx);
    }
    goto loc_804A6308;
}

loc_804A62E4:
{
    r23 = r26;
    goto loc_804A62F4;
}

loc_804A62F0:
{
    r23 = (r23 + 1);
}

loc_804A62F4:
{
    r0 = MemoryInline::FlatRead8(r23);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_804A6308;
    }
}

loc_804A6300:
{
}

loc_804A6304:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(47))) {
        goto loc_804A62F0;
    }
}

loc_804A6308:
{
    r0 = MemoryInline::FlatRead8(r23);
    r3 = (r29 * 12);
    r7 = MemoryInline::FlatRead32((r13 + -15768));
    r8 = (r23 - r26);
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = MemoryInline::FlatRead32((r13 + -15772));
    r4 = (0 - r5);
    r5 = (r4 | r5);
    r3 = (r7 + r3);
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r25_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r25 = (r25_rot_2 & 1);
    r10 = MemoryInline::FlatRead32((r31 + 56));
    r3 = (r29 + 1);
    goto loc_804A6424;
}

loc_804A6340:
{
    r5 = (r3 * 12);
    r5_addr_3 = (r5 + r7);
    r9 = MemoryInline::FlatRead32(r5_addr_3);
    r5 = r5_addr_3;
    r6 = (r9 & -16777216);
}

loc_804A634C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_804A6358;
    }
}

loc_804A6350:
{
}

loc_804A6354:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(1))) {
        goto loc_804A6410;
    }
}

loc_804A6358:
{
    r9 = (r9 & 16777215);
    r11 = r26;
    r12 = (r0 + r9);
    goto loc_804A63D8;
}

loc_804A6368:
{
    r9 = MemoryInline::FlatRead8(r12);
    r29 = 1;
    r12 = (r12 + 1);
    r24 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
}

loc_804A637C:
{
    if ((static_cast<uint32_t>(r24) > static_cast<uint32_t>(255))) {
        goto loc_804A6384;
    }
}

loc_804A6380:
{
    r29 = 0;
}

loc_804A6384:
{
}

loc_804A6388:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_804A6390;
    }
}

loc_804A638C:
{
    goto loc_804A6398;
}

loc_804A6390:
{
    r9 = MemoryInline::FlatRead32((r10 + 16));
    r9_addr_4 = (r9 + r24);
    r24 = MemoryInline::FlatRead8(r9_addr_4);
}

loc_804A6398:
{
    r9 = MemoryInline::FlatRead8(r11);
    r23 = 1;
    r11 = (r11 + 1);
    r29 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
}

loc_804A63AC:
{
    if ((static_cast<uint32_t>(r29) > static_cast<uint32_t>(255))) {
        goto loc_804A63B4;
    }
}

loc_804A63B0:
{
    r23 = 0;
}

loc_804A63B4:
{
}

loc_804A63B8:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_804A63C0;
    }
}

loc_804A63BC:
{
    goto loc_804A63C8;
}

loc_804A63C0:
{
    r9 = MemoryInline::FlatRead32((r10 + 16));
    r9_addr_6 = (r9 + r29);
    r29 = MemoryInline::FlatRead8(r9_addr_6);
}

loc_804A63C8:
{
}

loc_804A63CC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(r24))) {
        goto loc_804A63D8;
    }
}

loc_804A63D0:
{
    r9 = 0;
    goto loc_804A6408;
}

loc_804A63D8:
{
    r9 = MemoryInline::FlatRead8(r12);
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_804A6368;
    }
}

loc_804A63E4:
{
    r9 = MemoryInline::FlatRead8(r11);
    r9 = (static_cast<int32_t>(static_cast<int8_t>(r9)));
}

loc_804A63F0:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(47))) {
        goto loc_804A63FC;
    }
}

loc_804A63F4:
{
}

loc_804A63F8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_804A6404;
    }
}

loc_804A63FC:
{
    r9 = 1;
    goto loc_804A6408;
}

loc_804A6404:
{
    r9 = 0;
}

loc_804A6408:
{
}

loc_804A640C:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(1))) {
        goto loc_804A6434;
    }
}

loc_804A6410:
{
}

loc_804A6414:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_804A6420;
    }
}

loc_804A6418:
{
    r3 = MemoryInline::FlatRead32((r5 + 8));
    goto loc_804A6424;
}

loc_804A6420:
{
    r3 = (r3 + 1);
}

loc_804A6424:
{
}

loc_804A6428:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r4))) {
        goto loc_804A6340;
    }
}

loc_804A642C:
{
    r3 = -1;
    goto loc_804A6450;
}

loc_804A6434:
{
}

loc_804A6438:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(0))) {
        goto loc_804A6440;
    }
}

loc_804A643C:
{
    goto loc_804A6450;
}

loc_804A6440:
{
    r4 = (r8 + r26);
    r29 = r3;
    r26 = (r4 + 1);
    goto loc_804A618C;
}

loc_804A6450:
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_804A6160(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_804A6160_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFB gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x804A6160 func_804A6160 preserves=true fpr_mask=0x00000000
