#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB3EC(CpuContext* ctx);
extern "C" uint32_t func_800AB3EC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800B8430_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800B8430u);
    goto loc_800B8430;

loc_800B8430:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r31 = r4;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800B8468:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8480;
    }
}

loc_800B846C:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800B8478:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8480;
    }
}

loc_800B847C:
{
    r10 = 0;
}

loc_800B8480:
{
}

loc_800B8484:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B849C;
    }
}

loc_800B8488:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800B8494:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B849C;
    }
}

loc_800B8498:
{
    r9 = 0;
}

loc_800B849C:
{
}

loc_800B84A0:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B84B4;
    }
}

loc_800B84A4:
{
    r0 = (r11 + 1073741824);
}

loc_800B84AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B84B4;
    }
}

loc_800B84B0:
{
    r8 = 0;
}

loc_800B84B4:
{
}

loc_800B84B8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B84D0;
    }
}

loc_800B84BC:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800B84C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B84D0;
    }
}

loc_800B84CC:
{
    r7 = 0;
}

loc_800B84D0:
{
}

loc_800B84D4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B84EC;
    }
}

loc_800B84D8:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800B84E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B84EC;
    }
}

loc_800B84E8:
{
    r6 = 0;
}

loc_800B84EC:
{
}

loc_800B84F0:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B8508;
    }
}

loc_800B84F4:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B8500:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8508;
    }
}

loc_800B8504:
{
    r5 = 0;
}

loc_800B8508:
{
}

loc_800B850C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B8530;
    }
}

loc_800B8510:
{
    r3 = 0x80590000u;
    r3 = (r3 + 16808);
    r4 = 949;
    r5 = 0x80590000u;
    r5 = (r5 + 17252);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B8530u;
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

loc_800B8530:
{
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryInline::FlatRead32((r31 + 36));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800B8558:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8570;
    }
}

loc_800B855C:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800B8568:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8570;
    }
}

loc_800B856C:
{
    r10 = 0;
}

loc_800B8570:
{
}

loc_800B8574:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B858C;
    }
}

loc_800B8578:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800B8584:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B858C;
    }
}

loc_800B8588:
{
    r9 = 0;
}

loc_800B858C:
{
}

loc_800B8590:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B85A4;
    }
}

loc_800B8594:
{
    r0 = (r11 + 1073741824);
}

loc_800B859C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B85A4;
    }
}

loc_800B85A0:
{
    r8 = 0;
}

loc_800B85A4:
{
}

loc_800B85A8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B85C0;
    }
}

loc_800B85AC:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800B85B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B85C0;
    }
}

loc_800B85BC:
{
    r7 = 0;
}

loc_800B85C0:
{
}

loc_800B85C4:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B85DC;
    }
}

loc_800B85C8:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800B85D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B85DC;
    }
}

loc_800B85D8:
{
    r5 = 0;
}

loc_800B85DC:
{
}

loc_800B85E0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B85F8;
    }
}

loc_800B85E4:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B85F0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B85F8;
    }
}

loc_800B85F4:
{
    r4 = 0;
}

loc_800B85F8:
{
}

loc_800B85FC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800B861C;
    }
}

loc_800B8600:
{
    r3 = 0x80590000u;
    r3 = (r3 + 16808);
    r4 = 950;
    r5 = 0x80590000u;
    r5 = (r5 + 17304);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B861Cu;
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

loc_800B861C:
{
    r3 = MemoryInline::FlatRead32((r31 + 36));
    ctx->lr = 0x800B8624u;
    if constexpr (KnownRegArgsCpuCall<0x800AB3ECu>(&func_800AB3EC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800AB3EC_1CEA = func_800AB3EC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800AB3EC_1CEA;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x800AB3ECu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r31 = r3;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800B864C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8664;
    }
}

loc_800B8650:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800B865C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8664;
    }
}

loc_800B8660:
{
    r10 = 0;
}

loc_800B8664:
{
}

loc_800B8668:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B8680;
    }
}

loc_800B866C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800B8678:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8680;
    }
}

loc_800B867C:
{
    r9 = 0;
}

loc_800B8680:
{
}

loc_800B8684:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B8698;
    }
}

loc_800B8688:
{
    r0 = (r11 + 1073741824);
}

loc_800B8690:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B8698;
    }
}

loc_800B8694:
{
    r8 = 0;
}

loc_800B8698:
{
}

loc_800B869C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B86B4;
    }
}

loc_800B86A0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800B86AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B86B4;
    }
}

loc_800B86B0:
{
    r7 = 0;
}

loc_800B86B4:
{
}

loc_800B86B8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B86D0;
    }
}

loc_800B86BC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800B86C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B86D0;
    }
}

loc_800B86CC:
{
    r6 = 0;
}

loc_800B86D0:
{
}

loc_800B86D4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B86EC;
    }
}

loc_800B86D8:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B86E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B86EC;
    }
}

loc_800B86E8:
{
    r5 = 0;
}

loc_800B86EC:
{
}

loc_800B86F0:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B8714;
    }
}

loc_800B86F4:
{
    r3 = 0x80590000u;
    r3 = (r3 + 16808);
    r4 = 953;
    r5 = 0x80590000u;
    r5 = (r5 + 17364);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B8714u;
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

loc_800B8714:
{
    r0 = MemoryInline::FlatRead8((r31 + 174));
}

loc_800B871C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800B8754;
    }
}

loc_800B8720:
{
}

loc_800B8724:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800B8760;
    }
}

loc_800B8728:
{
}

loc_800B872C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800B876C;
    }
}

loc_800B8730:
{
}

loc_800B8734:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_800B8778;
    }
}

loc_800B8738:
{
}

loc_800B873C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_800B8784;
    }
}

loc_800B8740:
{
}

loc_800B8744:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_800B8784;
    }
}

loc_800B8748:
{
}

loc_800B874C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_800B8790;
    }
}

loc_800B8750:
{
    goto loc_800B87D0;
}

loc_800B8754:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30576);
    goto loc_800B87D8;
}

loc_800B8760:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30668);
    goto loc_800B87D8;
}

loc_800B876C:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30676);
    goto loc_800B87D8;
}

loc_800B8778:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30128);
    goto loc_800B87D8;
}

loc_800B8784:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30740);
    goto loc_800B87D8;
}

loc_800B8790:
{
    r0 = MemoryInline::FlatRead8((r31 + 178));
    r0 = (r0 & 7);
}

loc_800B879C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800B87AC;
    }
}

loc_800B87A0:
{
}

loc_800B87A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_800B87B8;
    }
}

loc_800B87A8:
{
    goto loc_800B87C4;
}

loc_800B87AC:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -28124);
    goto loc_800B87D8;
}

loc_800B87B8:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -26988);
    goto loc_800B87D8;
}

loc_800B87C4:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -29148);
    goto loc_800B87D8;
}

loc_800B87D0:
{
    r3 = 0x800C0000u;
    r3 = (r3 + -30576);
}

loc_800B87D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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

extern "C" void func_800B8430(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800B8430_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B8430 func_800B8430 preserves=true fpr_mask=0x00000000
