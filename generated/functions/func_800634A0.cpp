#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800634A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

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
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800634A0u);
    goto loc_800634A0;

loc_800634A0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f31.d);
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

loc_800634E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800634FC;
    }
}

loc_800634E8:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800634F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800634FC;
    }
}

loc_800634F8:
{
    r10 = 0;
}

loc_800634FC:
{
}

loc_80063500:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80063518;
    }
}

loc_80063504:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80063510:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063518;
    }
}

loc_80063514:
{
    r9 = 0;
}

loc_80063518:
{
}

loc_8006351C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80063530;
    }
}

loc_80063520:
{
    r0 = (r11 + 1073741824);
}

loc_80063528:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063530;
    }
}

loc_8006352C:
{
    r8 = 0;
}

loc_80063530:
{
}

loc_80063534:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006354C;
    }
}

loc_80063538:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_80063544:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006354C;
    }
}

loc_80063548:
{
    r7 = 0;
}

loc_8006354C:
{
}

loc_80063550:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80063568;
    }
}

loc_80063554:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80063560:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063568;
    }
}

loc_80063564:
{
    r6 = 0;
}

loc_80063568:
{
}

loc_8006356C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80063584;
    }
}

loc_80063570:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006357C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063584;
    }
}

loc_80063580:
{
    r5 = 0;
}

loc_80063584:
{
}

loc_80063588:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800635AC;
    }
}

loc_8006358C:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 1326;
    r5 = 0x80590000u;
    r5 = (r5 + -17356);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800635ACu;
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

loc_800635AC:
{
    r4 = 1;
    r5 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r6 = MemoryInline::FlatRead32((r31 + 48));
    r11 = (r6 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800635D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800635EC;
    }
}

loc_800635D8:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800635E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800635EC;
    }
}

loc_800635E8:
{
    r10 = 0;
}

loc_800635EC:
{
}

loc_800635F0:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80063608;
    }
}

loc_800635F4:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_80063600:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063608;
    }
}

loc_80063604:
{
    r9 = 0;
}

loc_80063608:
{
}

loc_8006360C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80063620;
    }
}

loc_80063610:
{
    r0 = (r11 + 1073741824);
}

loc_80063618:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063620;
    }
}

loc_8006361C:
{
    r8 = 0;
}

loc_80063620:
{
}

loc_80063624:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8006363C;
    }
}

loc_80063628:
{
    r3 = (r6 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_80063634:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8006363C;
    }
}

loc_80063638:
{
    r7 = 0;
}

loc_8006363C:
{
}

loc_80063640:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80063658;
    }
}

loc_80063644:
{
    r3 = (r6 & -134217728);
    r0 = (r3 + 805306368);
}

loc_80063650:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063658;
    }
}

loc_80063654:
{
    r5 = 0;
}

loc_80063658:
{
}

loc_8006365C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80063674;
    }
}

loc_80063660:
{
    r3 = (r6 & -16384);
    r0 = (r3 + 536870912);
}

loc_8006366C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063674;
    }
}

loc_80063670:
{
    r4 = 0;
}

loc_80063674:
{
}

loc_80063678:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80063698;
    }
}

loc_8006367C:
{
    r3 = 0x80590000u;
    r3 = (r3 + -17456);
    r4 = 1327;
    r5 = 0x80590000u;
    r5 = (r5 + -15316);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80063698u;
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

loc_80063698:
{
    r3 = (r31 + 24);
    // inline leaf 0x80062088 (2 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32(r3);
    // end of inlined leaf 0x80062088
    f31.d = f1.d;
    r29 = 0;
    r30 = 0;
    goto loc_800636E8;
}

loc_800636B0:
{
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r3_addr_2 = (r3 + r30);
    r3 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r3 & 32768);
}

loc_800636C0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800636E0;
    }
}

loc_800636C4:
{
    r5 = (r3 & 16383);
    r3 = (r31 + 44);
    r4 = MemoryInline::FlatRead32((r31 + 48));
    r0 = (r5 * 76);
    r4 = (r4 + r0);
    f1.d = f31.d;
    ctx->lr = 0x800636E0u;
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
}

loc_800636E0:
{
    r30 = (r30 + 2);
    r29 = (r29 + 1);
}

loc_800636E8:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
}

loc_800636F0:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(r0))) {
        goto loc_800636B0;
    }
}

loc_800636F4:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 24));
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
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800634A0 func_800634A0 preserves=true fpr_mask=0x00000000
