#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_80063EC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;

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

    goto loc_80063EC4;

loc_80063EC4:
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
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_80063F04:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063F1C;
    }
}

loc_80063F08:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_80063F14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063F1C;
    }
}

loc_80063F18:
{
    r10 = 0;
}

loc_80063F1C:
{
}

loc_80063F20:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80063F38;
    }
}

loc_80063F24:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80063F30:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063F38;
    }
}

loc_80063F34:
{
    r9 = 0;
}

loc_80063F38:
{
}

loc_80063F3C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80063F50;
    }
}

loc_80063F40:
{
    r0 = (r11 + 1073741824);
}

loc_80063F48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063F50;
    }
}

loc_80063F4C:
{
    r8 = 0;
}

loc_80063F50:
{
}

loc_80063F54:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80063F6C;
    }
}

loc_80063F58:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_80063F64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063F6C;
    }
}

loc_80063F68:
{
    r7 = 0;
}

loc_80063F6C:
{
}

loc_80063F70:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80063F88;
    }
}

loc_80063F74:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80063F80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063F88;
    }
}

loc_80063F84:
{
    r6 = 0;
}

loc_80063F88:
{
}

loc_80063F8C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80063FA4;
    }
}

loc_80063F90:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_80063F9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80063FA4;
    }
}

loc_80063FA0:
{
    r5 = 0;
}

loc_80063FA4:
{
}

loc_80063FA8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80063FCC;
    }
}

loc_80063FAC:
{
    r3 = 0x80590000u;
    r3 = (r3 + -14120);
    r4 = 52;
    r5 = 0x80590000u;
    r5 = (r5 + -14104);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80063FCCu;
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

loc_80063FCC:
{
    r3 = MemoryInline::FlatRead32((r30 + 16));
    r7 = (r3 + -1);
}

loc_80063FD8:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(r7))) {
        goto loc_80063FFC;
    }
}

loc_80063FDC:
{
    r3 = 0x80590000u;
    r3 = (r3 + -14120);
    r4 = 53;
    r5 = 0x80590000u;
    r5 = (r5 + -14048);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80063FFCu;
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

loc_80063FFC:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r3_addr_0 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_0);
    r0 = (r0 & 49152);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
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

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80063EC4 func_80063EC4 preserves=true fpr_mask=0x00000000
