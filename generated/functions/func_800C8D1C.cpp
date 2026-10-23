#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800C8D1C(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_800C8D1C;

loc_800C8D1C:
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

loc_800C8D5C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C8D74;
    }
}

loc_800C8D60:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800C8D6C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C8D74;
    }
}

loc_800C8D70:
{
    r10 = 0;
}

loc_800C8D74:
{
}

loc_800C8D78:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800C8D90;
    }
}

loc_800C8D7C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800C8D88:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C8D90;
    }
}

loc_800C8D8C:
{
    r9 = 0;
}

loc_800C8D90:
{
}

loc_800C8D94:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800C8DA8;
    }
}

loc_800C8D98:
{
    r0 = (r11 + 1073741824);
}

loc_800C8DA0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C8DA8;
    }
}

loc_800C8DA4:
{
    r8 = 0;
}

loc_800C8DA8:
{
}

loc_800C8DAC:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800C8DC4;
    }
}

loc_800C8DB0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800C8DBC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C8DC4;
    }
}

loc_800C8DC0:
{
    r7 = 0;
}

loc_800C8DC4:
{
}

loc_800C8DC8:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800C8DE0;
    }
}

loc_800C8DCC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800C8DD8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C8DE0;
    }
}

loc_800C8DDC:
{
    r6 = 0;
}

loc_800C8DE0:
{
}

loc_800C8DE4:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800C8DFC;
    }
}

loc_800C8DE8:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800C8DF4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800C8DFC;
    }
}

loc_800C8DF8:
{
    r5 = 0;
}

loc_800C8DFC:
{
}

loc_800C8E00:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800C8E24;
    }
}

loc_800C8E04:
{
    r3 = 0x80590000u;
    r3 = (r3 + 20496);
    r4 = 1204;
    r5 = 0x80590000u;
    r5 = (r5 + 20724);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800C8E24u;
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

loc_800C8E24:
{
    r3 = r30;
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800B8DACu>(ctx);
    r3 = ctx->gpr[3];
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
// RECOMP_REGISTRATION base 0x800C8D1C func_800C8D1C preserves=true fpr_mask=0x00000000
