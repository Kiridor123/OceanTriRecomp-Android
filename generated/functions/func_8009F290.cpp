#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_8009F290(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_8009F290;

loc_8009F290:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r26 = r3;
    r27 = r4;
    r28 = r5;
    r29 = r6;
    r30 = r7;
    r31 = r8;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_8009F2E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F2F8;
    }
}

loc_8009F2E4:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8009F2F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F2F8;
    }
}

loc_8009F2F4:
{
    r10 = 0;
}

loc_8009F2F8:
{
}

loc_8009F2FC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8009F314;
    }
}

loc_8009F300:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8009F30C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F314;
    }
}

loc_8009F310:
{
    r9 = 0;
}

loc_8009F314:
{
}

loc_8009F318:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009F32C;
    }
}

loc_8009F31C:
{
    r0 = (r11 + 1073741824);
}

loc_8009F324:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F32C;
    }
}

loc_8009F328:
{
    r8 = 0;
}

loc_8009F32C:
{
}

loc_8009F330:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009F348;
    }
}

loc_8009F334:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8009F340:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F348;
    }
}

loc_8009F344:
{
    r7 = 0;
}

loc_8009F348:
{
}

loc_8009F34C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009F364;
    }
}

loc_8009F350:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8009F35C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F364;
    }
}

loc_8009F360:
{
    r6 = 0;
}

loc_8009F364:
{
}

loc_8009F368:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009F380;
    }
}

loc_8009F36C:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009F378:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F380;
    }
}

loc_8009F37C:
{
    r5 = 0;
}

loc_8009F380:
{
}

loc_8009F384:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009F3A8;
    }
}

loc_8009F388:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 112;
    r5 = 0x80590000u;
    r5 = (r5 + 10356);
    r6 = r26;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009F3A8u;
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

loc_8009F3A8:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r27 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8009F3CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F3E4;
    }
}

loc_8009F3D0:
{
    r3 = (r27 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009F3DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F3E4;
    }
}

loc_8009F3E0:
{
    r9 = 0;
}

loc_8009F3E4:
{
}

loc_8009F3E8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009F400;
    }
}

loc_8009F3EC:
{
    r3 = (r27 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009F3F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F400;
    }
}

loc_8009F3FC:
{
    r8 = 0;
}

loc_8009F400:
{
}

loc_8009F404:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009F418;
    }
}

loc_8009F408:
{
    r0 = (r10 + 1073741824);
}

loc_8009F410:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F418;
    }
}

loc_8009F414:
{
    r7 = 0;
}

loc_8009F418:
{
}

loc_8009F41C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009F434;
    }
}

loc_8009F420:
{
    r3 = (r27 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009F42C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F434;
    }
}

loc_8009F430:
{
    r6 = 0;
}

loc_8009F434:
{
}

loc_8009F438:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009F450;
    }
}

loc_8009F43C:
{
    r3 = (r27 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009F448:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F450;
    }
}

loc_8009F44C:
{
    r5 = 0;
}

loc_8009F450:
{
}

loc_8009F454:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009F46C;
    }
}

loc_8009F458:
{
    r3 = (r27 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009F464:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F46C;
    }
}

loc_8009F468:
{
    r4 = 0;
}

loc_8009F46C:
{
}

loc_8009F470:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009F494;
    }
}

loc_8009F474:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 113;
    r5 = 0x80590000u;
    r5 = (r5 + 9788);
    r6 = r27;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009F494u;
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

loc_8009F494:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r28 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8009F4B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F4D0;
    }
}

loc_8009F4BC:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009F4C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F4D0;
    }
}

loc_8009F4CC:
{
    r9 = 0;
}

loc_8009F4D0:
{
}

loc_8009F4D4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009F4EC;
    }
}

loc_8009F4D8:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009F4E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F4EC;
    }
}

loc_8009F4E8:
{
    r8 = 0;
}

loc_8009F4EC:
{
}

loc_8009F4F0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009F504;
    }
}

loc_8009F4F4:
{
    r0 = (r10 + 1073741824);
}

loc_8009F4FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F504;
    }
}

loc_8009F500:
{
    r7 = 0;
}

loc_8009F504:
{
}

loc_8009F508:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009F520;
    }
}

loc_8009F50C:
{
    r3 = (r28 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009F518:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F520;
    }
}

loc_8009F51C:
{
    r6 = 0;
}

loc_8009F520:
{
}

loc_8009F524:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009F53C;
    }
}

loc_8009F528:
{
    r3 = (r28 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009F534:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F53C;
    }
}

loc_8009F538:
{
    r5 = 0;
}

loc_8009F53C:
{
}

loc_8009F540:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009F558;
    }
}

loc_8009F544:
{
    r3 = (r28 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009F550:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F558;
    }
}

loc_8009F554:
{
    r4 = 0;
}

loc_8009F558:
{
}

loc_8009F55C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009F580;
    }
}

loc_8009F560:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 114;
    r5 = 0x80590000u;
    r5 = (r5 + 10200);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009F580u;
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

loc_8009F580:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r29 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8009F5A4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F5BC;
    }
}

loc_8009F5A8:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009F5B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F5BC;
    }
}

loc_8009F5B8:
{
    r9 = 0;
}

loc_8009F5BC:
{
}

loc_8009F5C0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009F5D8;
    }
}

loc_8009F5C4:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009F5D0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F5D8;
    }
}

loc_8009F5D4:
{
    r8 = 0;
}

loc_8009F5D8:
{
}

loc_8009F5DC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009F5F0;
    }
}

loc_8009F5E0:
{
    r0 = (r10 + 1073741824);
}

loc_8009F5E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F5F0;
    }
}

loc_8009F5EC:
{
    r7 = 0;
}

loc_8009F5F0:
{
}

loc_8009F5F4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009F60C;
    }
}

loc_8009F5F8:
{
    r3 = (r29 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009F604:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F60C;
    }
}

loc_8009F608:
{
    r6 = 0;
}

loc_8009F60C:
{
}

loc_8009F610:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009F628;
    }
}

loc_8009F614:
{
    r3 = (r29 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009F620:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F628;
    }
}

loc_8009F624:
{
    r5 = 0;
}

loc_8009F628:
{
}

loc_8009F62C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009F644;
    }
}

loc_8009F630:
{
    r3 = (r29 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009F63C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F644;
    }
}

loc_8009F640:
{
    r4 = 0;
}

loc_8009F644:
{
}

loc_8009F648:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009F66C;
    }
}

loc_8009F64C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 115;
    r5 = 0x80590000u;
    r5 = (r5 + 10408);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009F66Cu;
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

loc_8009F66C:
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

loc_8009F690:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F6A8;
    }
}

loc_8009F694:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009F6A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F6A8;
    }
}

loc_8009F6A4:
{
    r9 = 0;
}

loc_8009F6A8:
{
}

loc_8009F6AC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009F6C4;
    }
}

loc_8009F6B0:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009F6BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F6C4;
    }
}

loc_8009F6C0:
{
    r8 = 0;
}

loc_8009F6C4:
{
}

loc_8009F6C8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009F6DC;
    }
}

loc_8009F6CC:
{
    r0 = (r10 + 1073741824);
}

loc_8009F6D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F6DC;
    }
}

loc_8009F6D8:
{
    r7 = 0;
}

loc_8009F6DC:
{
}

loc_8009F6E0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009F6F8;
    }
}

loc_8009F6E4:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009F6F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F6F8;
    }
}

loc_8009F6F4:
{
    r6 = 0;
}

loc_8009F6F8:
{
}

loc_8009F6FC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009F714;
    }
}

loc_8009F700:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009F70C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F714;
    }
}

loc_8009F710:
{
    r5 = 0;
}

loc_8009F714:
{
}

loc_8009F718:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009F730;
    }
}

loc_8009F71C:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009F728:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F730;
    }
}

loc_8009F72C:
{
    r4 = 0;
}

loc_8009F730:
{
}

loc_8009F734:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009F758;
    }
}

loc_8009F738:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 116;
    r5 = 0x80590000u;
    r5 = (r5 + 10464);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009F758u;
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

loc_8009F758:
{
    r4 = 1;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = (r31 & -16777216);
    r0 = (r10 + -2147483648);
}

loc_8009F77C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F794;
    }
}

loc_8009F780:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8009F78C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F794;
    }
}

loc_8009F790:
{
    r9 = 0;
}

loc_8009F794:
{
}

loc_8009F798:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8009F7B0;
    }
}

loc_8009F79C:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8009F7A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F7B0;
    }
}

loc_8009F7AC:
{
    r8 = 0;
}

loc_8009F7B0:
{
}

loc_8009F7B4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8009F7C8;
    }
}

loc_8009F7B8:
{
    r0 = (r10 + 1073741824);
}

loc_8009F7C0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F7C8;
    }
}

loc_8009F7C4:
{
    r7 = 0;
}

loc_8009F7C8:
{
}

loc_8009F7CC:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8009F7E4;
    }
}

loc_8009F7D0:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8009F7DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F7E4;
    }
}

loc_8009F7E0:
{
    r6 = 0;
}

loc_8009F7E4:
{
}

loc_8009F7E8:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8009F800;
    }
}

loc_8009F7EC:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8009F7F8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F800;
    }
}

loc_8009F7FC:
{
    r5 = 0;
}

loc_8009F800:
{
}

loc_8009F804:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8009F81C;
    }
}

loc_8009F808:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8009F814:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8009F81C;
    }
}

loc_8009F818:
{
    r4 = 0;
}

loc_8009F81C:
{
}

loc_8009F820:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8009F844;
    }
}

loc_8009F824:
{
    r3 = 0x80590000u;
    r3 = (r3 + 9768);
    r4 = 117;
    r5 = 0x80590000u;
    r5 = (r5 + 10528);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8009F844u;
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

loc_8009F844:
{
    MemoryInline::FlatWrite32(r27, r26);
    r4 = (r26 + 32);
    MemoryInline::FlatWrite32(r28, r4);
    r3 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32(r29, r4);
    r3 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32(r30, r4);
    r3 = MemoryInline::FlatRead32(r27);
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r4 + r0);
    MemoryInline::FlatWrite32(r31, r0);
    r11 = (r1 + 32);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8009F290 func_8009F290 preserves=true fpr_mask=0x00000000
