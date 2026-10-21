#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800D754C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;

    MKW_GUEST_ENTER(0x800D754Cu);
    goto loc_800D754C;

loc_800D754C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800D759C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D75B4;
    }
}

loc_800D75A0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800D75AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D75B4;
    }
}

loc_800D75B0:
{
    r10 = 0;
}

loc_800D75B4:
{
}

loc_800D75B8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800D75D0;
    }
}

loc_800D75BC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800D75C8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D75D0;
    }
}

loc_800D75CC:
{
    r9 = 0;
}

loc_800D75D0:
{
}

loc_800D75D4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800D75E8;
    }
}

loc_800D75D8:
{
    r0 = (r11 + 1073741824);
}

loc_800D75E0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D75E8;
    }
}

loc_800D75E4:
{
    r8 = 0;
}

loc_800D75E8:
{
}

loc_800D75EC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800D7604;
    }
}

loc_800D75F0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800D75FC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7604;
    }
}

loc_800D7600:
{
    r7 = 0;
}

loc_800D7604:
{
}

loc_800D7608:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800D7620;
    }
}

loc_800D760C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800D7618:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7620;
    }
}

loc_800D761C:
{
    r6 = 0;
}

loc_800D7620:
{
}

loc_800D7624:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800D763C;
    }
}

loc_800D7628:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800D7634:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D763C;
    }
}

loc_800D7638:
{
    r5 = 0;
}

loc_800D763C:
{
}

loc_800D7640:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800D7664;
    }
}

loc_800D7644:
{
    r3 = 0x80590000u;
    r3 = (r3 + 24400);
    r4 = 404;
    r5 = 0x80590000u;
    r5 = (r5 + 24412);
    r6 = r28;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D7664u;
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

loc_800D7664:
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

loc_800D7688:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D76A0;
    }
}

loc_800D768C:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800D7698:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D76A0;
    }
}

loc_800D769C:
{
    r9 = 0;
}

loc_800D76A0:
{
}

loc_800D76A4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800D76BC;
    }
}

loc_800D76A8:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800D76B4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D76BC;
    }
}

loc_800D76B8:
{
    r8 = 0;
}

loc_800D76BC:
{
}

loc_800D76C0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800D76D4;
    }
}

loc_800D76C4:
{
    r0 = (r10 + 1073741824);
}

loc_800D76CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D76D4;
    }
}

loc_800D76D0:
{
    r7 = 0;
}

loc_800D76D4:
{
}

loc_800D76D8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800D76F0;
    }
}

loc_800D76DC:
{
    r3 = (r30 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800D76E8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D76F0;
    }
}

loc_800D76EC:
{
    r6 = 0;
}

loc_800D76F0:
{
}

loc_800D76F4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800D770C;
    }
}

loc_800D76F8:
{
    r3 = (r30 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800D7704:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D770C;
    }
}

loc_800D7708:
{
    r5 = 0;
}

loc_800D770C:
{
}

loc_800D7710:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800D7728;
    }
}

loc_800D7714:
{
    r3 = (r30 & -16384);
    r0 = (r3 + 536870912);
}

loc_800D7720:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800D7728;
    }
}

loc_800D7724:
{
    r4 = 0;
}

loc_800D7728:
{
}

loc_800D772C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800D7750;
    }
}

loc_800D7730:
{
    r3 = 0x80590000u;
    r3 = (r3 + 24400);
    r4 = 405;
    r5 = 0x80590000u;
    r5 = (r5 + 24464);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D7750u;
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

loc_800D7750:
{
    r0 = (r31 & 1);
}

loc_800D7758:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D7778;
    }
}

loc_800D775C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 24400);
    r4 = 406;
    r5 = 0x80590000u;
    r5 = (r5 + 24516);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800D7778u;
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

loc_800D7778:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 7);
}

loc_800D7780:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7))) {
        goto loc_800D778C;
    }
}

loc_800D7784:
{
    r3 = 0;
    goto loc_800D77F4;
}

loc_800D778C:
{
}

loc_800D7790:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800D77B8;
    }
}

loc_800D7794:
{
    r3 = r28;
    r4 = r30;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r5 = 0x80570000u;
    r5 = (r5 + -16);
    r5_addr_1 = (r5 + r0);
    r12 = MemoryInline::FlatRead32(r5_addr_1);
    ctr = r12;
    ctx->lr = 0x800D77B4u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_800D77D8;
}

loc_800D77B8:
{
    r3 = r28;
    r4 = r30;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r5 = 0x80570000u;
    r5 = (r5 + 12);
    r5_addr_2 = (r5 + r0);
    r12 = MemoryInline::FlatRead32(r5_addr_2);
    ctr = r12;
    ctx->lr = 0x800D77D8u;
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
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
    r12 = ctx->gpr[12];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_800D77D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30424));
    MemoryInline::FlatWriteFloat32((r28 + 32), f1.d);
    MemoryInline::FlatWriteFloat32((r28 + 36), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30420));
    MemoryInline::FlatWriteFloat32((r28 + 40), f0.d);
    MemoryInline::FlatWriteFloat32((r28 + 44), f1.d);
    r3 = 1;
}

loc_800D77F4:
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
    ctx->gpr[12] = r12;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800D754C func_800D754C preserves=true fpr_mask=0x00000000
