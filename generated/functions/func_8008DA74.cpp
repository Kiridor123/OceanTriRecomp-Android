#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_8008DA74_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x8008DA74u);
    goto loc_8008DA74;

loc_8008DA74:
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

loc_8008DAB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008DACC;
    }
}

loc_8008DAB8:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_8008DAC4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008DACC;
    }
}

loc_8008DAC8:
{
    r10 = 0;
}

loc_8008DACC:
{
}

loc_8008DAD0:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_8008DAE8;
    }
}

loc_8008DAD4:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_8008DAE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008DAE8;
    }
}

loc_8008DAE4:
{
    r9 = 0;
}

loc_8008DAE8:
{
}

loc_8008DAEC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008DB00;
    }
}

loc_8008DAF0:
{
    r0 = (r11 + 1073741824);
}

loc_8008DAF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008DB00;
    }
}

loc_8008DAFC:
{
    r8 = 0;
}

loc_8008DB00:
{
}

loc_8008DB04:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008DB1C;
    }
}

loc_8008DB08:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_8008DB14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008DB1C;
    }
}

loc_8008DB18:
{
    r7 = 0;
}

loc_8008DB1C:
{
}

loc_8008DB20:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008DB38;
    }
}

loc_8008DB24:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_8008DB30:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008DB38;
    }
}

loc_8008DB34:
{
    r6 = 0;
}

loc_8008DB38:
{
}

loc_8008DB3C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008DB54;
    }
}

loc_8008DB40:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008DB4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008DB54;
    }
}

loc_8008DB50:
{
    r5 = 0;
}

loc_8008DB54:
{
}

loc_8008DB58:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008DB7C;
    }
}

loc_8008DB5C:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1177;
    r5 = 0x80590000u;
    r5 = (r5 + 2496);
    r6 = r30;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008DB7Cu;
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

loc_8008DB7C:
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

loc_8008DBA0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008DBB8;
    }
}

loc_8008DBA4:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 2130706432);
}

loc_8008DBB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008DBB8;
    }
}

loc_8008DBB4:
{
    r9 = 0;
}

loc_8008DBB8:
{
}

loc_8008DBBC:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_8008DBD4;
    }
}

loc_8008DBC0:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 1879048192);
}

loc_8008DBCC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008DBD4;
    }
}

loc_8008DBD0:
{
    r8 = 0;
}

loc_8008DBD4:
{
}

loc_8008DBD8:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_8008DBEC;
    }
}

loc_8008DBDC:
{
    r0 = (r10 + 1073741824);
}

loc_8008DBE4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008DBEC;
    }
}

loc_8008DBE8:
{
    r7 = 0;
}

loc_8008DBEC:
{
}

loc_8008DBF0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_8008DC08;
    }
}

loc_8008DBF4:
{
    r3 = (r31 & -8388608);
    r0 = (r3 + 1056964608);
}

loc_8008DC00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008DC08;
    }
}

loc_8008DC04:
{
    r6 = 0;
}

loc_8008DC08:
{
}

loc_8008DC0C:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8008DC24;
    }
}

loc_8008DC10:
{
    r3 = (r31 & -134217728);
    r0 = (r3 + 805306368);
}

loc_8008DC1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008DC24;
    }
}

loc_8008DC20:
{
    r5 = 0;
}

loc_8008DC24:
{
}

loc_8008DC28:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_8008DC40;
    }
}

loc_8008DC2C:
{
    r3 = (r31 & -16384);
    r0 = (r3 + 536870912);
}

loc_8008DC38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8008DC40;
    }
}

loc_8008DC3C:
{
    r4 = 0;
}

loc_8008DC40:
{
}

loc_8008DC44:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_8008DC68;
    }
}

loc_8008DC48:
{
    r3 = 0x80590000u;
    r3 = (r3 + 2000);
    r4 = 1178;
    r5 = 0x80590000u;
    r5 = (r5 + 2724);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8008DC68u;
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

loc_8008DC68:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 8);
}

loc_8008DC74:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8008DC8C;
    }
}

loc_8008DC78:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31672));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r31 + 8), f0.d);
    goto loc_8008DC98;
}

loc_8008DC8C:
{
    r3 = r31;
    r4 = (r30 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
}

loc_8008DC98:
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_8008DA74(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_8008DA74_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFF gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8008DA74 func_8008DA74 preserves=true fpr_mask=0x00000000
