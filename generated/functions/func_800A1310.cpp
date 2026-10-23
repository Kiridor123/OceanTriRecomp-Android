#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800A1310_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint32_t r27_addr_4 = 0;
    uint32_t r27_addr_5 = 0;
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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800A1310;

loc_800A1310:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r25 = r3;
    r26 = r4;
    r27 = r5;
    r28 = r6;
    r29 = r7;
    r30 = r8;
    r31 = r9;
    r4 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r5 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800A1364:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A137C;
    }
}

loc_800A1368:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A1374:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A137C;
    }
}

loc_800A1378:
{
    r10 = 0;
}

loc_800A137C:
{
}

loc_800A1380:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A1398;
    }
}

loc_800A1384:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A1390:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1398;
    }
}

loc_800A1394:
{
    r9 = 0;
}

loc_800A1398:
{
}

loc_800A139C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A13B0;
    }
}

loc_800A13A0:
{
    r0 = (r11 + 1073741824);
}

loc_800A13A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A13B0;
    }
}

loc_800A13AC:
{
    r8 = 0;
}

loc_800A13B0:
{
}

loc_800A13B4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A13CC;
    }
}

loc_800A13B8:
{
    r3 = (r5 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A13C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A13CC;
    }
}

loc_800A13C8:
{
    r7 = 0;
}

loc_800A13CC:
{
}

loc_800A13D0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A13E8;
    }
}

loc_800A13D4:
{
    r3 = (r5 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A13E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A13E8;
    }
}

loc_800A13E4:
{
    r6 = 0;
}

loc_800A13E8:
{
}

loc_800A13EC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A1404;
    }
}

loc_800A13F0:
{
    r3 = (r5 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A13FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A1404;
    }
}

loc_800A1400:
{
    r4 = 0;
}

loc_800A1404:
{
}

loc_800A1408:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800A142C;
    }
}

loc_800A140C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 10784);
    r4 = 588;
    r5 = 0x80590000u;
    r5 = (r5 + 10728);
    r6 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A142Cu;
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

loc_800A142C:
{
    r3 = (r29 + r30);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r29 * r28);
    r27_addr_0 = (r27 + r0);
    r0 = MemoryInline::FlatRead16(r27_addr_0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(r0));
}

loc_800A1448:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800A1458;
    }
}

loc_800A144C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800A1460;
    }
}

loc_800A1450:
{
}

loc_800A1454:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800A1460;
    }
}

loc_800A1458:
{
    MemoryInline::FlatWrite32(r25, r29);
    goto loc_800A14F0;
}

loc_800A1460:
{
    r0 = (r30 * r28);
    r27_addr_1 = (r27 + r0);
    r0 = MemoryInline::FlatRead16(r27_addr_1);
}

loc_800A146C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r26))) {
        goto loc_800A1480;
    }
}

loc_800A1470:
{
}

loc_800A1474:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(r0))) {
        goto loc_800A1488;
    }
}

loc_800A1478:
{
}

loc_800A147C:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_800A1488;
    }
}

loc_800A1480:
{
    MemoryInline::FlatWrite32(r25, r30);
    goto loc_800A14F0;
}

loc_800A1488:
{
    r0 = (r3 * r28);
    r27_addr_2 = (r27 + r0);
    r0 = MemoryInline::FlatRead16(r27_addr_2);
    goto loc_800A14E4;
}

loc_800A1494:
{
}

loc_800A1498:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(r0))) {
        goto loc_800A14B4;
    }
}

loc_800A149C:
{
}

loc_800A14A0:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_800A14AC;
    }
}

loc_800A14A4:
{
    r30 = r3;
    goto loc_800A14CC;
}

loc_800A14AC:
{
    r29 = r3;
    goto loc_800A14CC;
}

loc_800A14B4:
{
}

loc_800A14B8:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r26))) {
        goto loc_800A14C0;
    }
}

loc_800A14BC:
{
    r29 = r3;
}

loc_800A14C0:
{
}

loc_800A14C4:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r26))) {
        goto loc_800A14CC;
    }
}

loc_800A14C8:
{
    r30 = r3;
}

loc_800A14CC:
{
    r3 = (r29 + r30);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r3);
    r3 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r3 * r28);
    r27_addr_4 = (r27 + r0);
    r0 = MemoryInline::FlatRead16(r27_addr_4);
}

loc_800A14E4:
{
}

loc_800A14E8:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r3))) {
        goto loc_800A1494;
    }
}

loc_800A14EC:
{
    MemoryInline::FlatWrite32(r25, r29);
}

loc_800A14F0:
{
    r11 = (r1 + 48);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800A1310(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800A1310_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800A1310 func_800A1310 preserves=true fpr_mask=0x00000000
