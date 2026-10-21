#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800A5C6C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x800A5C6Cu);
    goto loc_800A5C6C;

loc_800A5C6C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r30 = r3;
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

loc_800A5CAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A5CC4;
    }
}

loc_800A5CB0:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_800A5CBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A5CC4;
    }
}

loc_800A5CC0:
{
    r10 = 0;
}

loc_800A5CC4:
{
}

loc_800A5CC8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800A5CE0;
    }
}

loc_800A5CCC:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_800A5CD8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A5CE0;
    }
}

loc_800A5CDC:
{
    r9 = 0;
}

loc_800A5CE0:
{
}

loc_800A5CE4:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800A5CF8;
    }
}

loc_800A5CE8:
{
    r0 = (r11 + 1073741824);
}

loc_800A5CF0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A5CF8;
    }
}

loc_800A5CF4:
{
    r8 = 0;
}

loc_800A5CF8:
{
}

loc_800A5CFC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800A5D14;
    }
}

loc_800A5D00:
{
    r3 = (r4 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_800A5D0C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A5D14;
    }
}

loc_800A5D10:
{
    r7 = 0;
}

loc_800A5D14:
{
}

loc_800A5D18:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800A5D30;
    }
}

loc_800A5D1C:
{
    r3 = (r4 & -134217728);
    r0 = (r3 + 805306368);
}

loc_800A5D28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A5D30;
    }
}

loc_800A5D2C:
{
    r6 = 0;
}

loc_800A5D30:
{
}

loc_800A5D34:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800A5D4C;
    }
}

loc_800A5D38:
{
    r3 = (r4 & -16384);
    r0 = (r3 + 536870912);
}

loc_800A5D44:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800A5D4C;
    }
}

loc_800A5D48:
{
    r5 = 0;
}

loc_800A5D4C:
{
}

loc_800A5D50:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800A5D74;
    }
}

loc_800A5D54:
{
    r3 = 0x80590000u;
    r3 = (r3 + 11864);
    r4 = 159;
    r5 = 0x80590000u;
    r5 = (r5 + 11988);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A5D74u;
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

loc_800A5D74:
{
    r0 = MemoryInline::FlatRead32((r31 + 32));
}

loc_800A5D7C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r30))) {
        goto loc_800A5D9C;
    }
}

loc_800A5D80:
{
    r3 = 0x80590000u;
    r3 = (r3 + 11864);
    r4 = 160;
    r5 = 0x80590000u;
    r5 = (r5 + 12140);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800A5D9Cu;
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

loc_800A5D9C:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
}

loc_800A5DA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_800A5DB0;
    }
}

loc_800A5DA8:
{
    r3 = 0;
    goto loc_800A5DD8;
}

loc_800A5DB0:
{
    r3 = (r30 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -16360));
    r0 = MemoryInline::FlatRead32((r31 + 64));
    r0 = (r0 * 28);
    r3 = (r3 + r0);
    r4 = r31;
    // inline leaf 0x800A4A80 (4 guest instruction(s))
    r4 = MemoryInline::FlatRead16((r3 + 24));
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x800A4A80
    r3 = r31;
    ctx->lr = 0x800A5DD4u;
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
    InvokeDirectCpu<0x800A4A1Cu>(ctx);
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
    r3 = 1;
}

loc_800A5DD8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
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
// RECOMP_REGISTRATION base 0x800A5C6C func_800A5C6C preserves=true fpr_mask=0x00000000
