#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800C72D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x800C72D4u);
    goto loc_800C72D4;

loc_800C72D4:
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
    r11 = (r4 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_800C7324:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C733C;
    }
}

loc_800C7328:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800C7334:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C733C;
    }
}

loc_800C7338:
{
    r10 = 0;
}

loc_800C733C:
{
}

loc_800C7340:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800C7358;
    }
}

loc_800C7344:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800C7350:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7358;
    }
}

loc_800C7354:
{
    r9 = 0;
}

loc_800C7358:
{
}

loc_800C735C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C7370;
    }
}

loc_800C7360:
{
    r0 = (r11 + 1073741824);
}

loc_800C7368:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C7370;
    }
}

loc_800C736C:
{
    r8 = 0;
}

loc_800C7370:
{
}

loc_800C7374:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C738C;
    }
}

loc_800C7378:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800C7384:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C738C;
    }
}

loc_800C7388:
{
    r7 = 0;
}

loc_800C738C:
{
}

loc_800C7390:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C73A8;
    }
}

loc_800C7394:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800C73A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C73A8;
    }
}

loc_800C73A4:
{
    r6 = 0;
}

loc_800C73A8:
{
}

loc_800C73AC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C73C4;
    }
}

loc_800C73B0:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C73BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C73C4;
    }
}

loc_800C73C0:
{
    r5 = 0;
}

loc_800C73C4:
{
}

loc_800C73C8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C73EC;
    }
}

loc_800C73CC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 20496);
    r4 = 591;
    r5 = 0x80590000u;
    r5 = (r5 + 20564);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C73ECu;
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

loc_800C73EC:
{
}

loc_800C73F0:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_800C7408;
    }
}

loc_800C73F4:
{
    r0 = MemoryInline::FlatRead8((r29 + 151));
    r3 = MemoryInline::FlatRead32((r28 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_800C7400:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800C7408;
    }
}

loc_800C7404:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800C7438;
    }
}

loc_800C7408:
{
    r0 = MemoryInline::FlatRead8((r29 + 151));
    MemoryInline::FlatWrite32((r28 + 176), r0);
    r0 = MemoryInline::FlatRead8((r29 + 151));
    MemoryInline::FlatWrite32((r28 + 180), r0);
    r3 = MemoryInline::FlatRead8((r30 + 2));
    r4 = MemoryInline::FlatRead8((r29 + 151));
    r5 = MemoryInline::FlatRead8((r30 + 4));
    r6 = MemoryInline::FlatRead8((r30 + 3));
    r7 = MemoryInline::FlatRead8((r29 + 152));
    ctx->lr = 0x800C7430u;
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
    InvokeDirectCpu<0x804B9E50u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 1;
    goto loc_800C743C;
}

loc_800C7438:
{
    r3 = 0;
}

loc_800C743C:
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800C72D4 func_800C72D4 preserves=true fpr_mask=0x00000000
