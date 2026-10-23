#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80068DA0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_80068DA0;

loc_80068DA0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r29 = r3;
    r30 = r4;
    r31 = r5;
    r5 = 1;
    r6 = 1;
    r7 = 1;
    r8 = 1;
    r9 = 1;
    r10 = 1;
    r11 = (r3 & -16777216);
    r0 = (r11 + -2147483648);
}

loc_80068DE8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80068E00;
    }
}

loc_80068DEC:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_80068DF8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80068E00;
    }
}

loc_80068DFC:
{
    r10 = 0;
}

loc_80068E00:
{
}

loc_80068E04:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_80068E1C;
    }
}

loc_80068E08:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_80068E14:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80068E1C;
    }
}

loc_80068E18:
{
    r9 = 0;
}

loc_80068E1C:
{
}

loc_80068E20:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_80068E34;
    }
}

loc_80068E24:
{
    r0 = (r11 + 1073741824);
}

loc_80068E2C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80068E34;
    }
}

loc_80068E30:
{
    r8 = 0;
}

loc_80068E34:
{
}

loc_80068E38:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_80068E50;
    }
}

loc_80068E3C:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_80068E48:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80068E50;
    }
}

loc_80068E4C:
{
    r7 = 0;
}

loc_80068E50:
{
}

loc_80068E54:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_80068E6C;
    }
}

loc_80068E58:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_80068E64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80068E6C;
    }
}

loc_80068E68:
{
    r6 = 0;
}

loc_80068E6C:
{
}

loc_80068E70:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_80068E88;
    }
}

loc_80068E74:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_80068E80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80068E88;
    }
}

loc_80068E84:
{
    r5 = 0;
}

loc_80068E88:
{
}

loc_80068E8C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80068EB0;
    }
}

loc_80068E90:
{
    r3 = 0x80590000u;
    r3 = (r3 + -13752);
    r4 = 1689;
    r5 = 0x80590000u;
    r5 = (r5 + -13672);
    r6 = r29;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80068EB0u;
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

loc_80068EB0:
{
}

loc_80068EB4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_80068EC8;
    }
}

loc_80068EB8:
{
    r0 = MemoryInline::FlatRead32((r29 + 36));
    r0 = (r0 | r30);
    MemoryInline::FlatWrite32((r29 + 36), r0);
    goto loc_80068ED8;
}

loc_80068EC8:
{
    r3 = MemoryInline::FlatRead32((r29 + 36));
    r0 = ~(r30 | r30);
    r0 = (r3 & r0);
    MemoryInline::FlatWrite32((r29 + 36), r0);
}

loc_80068ED8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

extern "C" void func_80068DA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80068DA0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80068DA0 func_80068DA0 preserves=true fpr_mask=0x00000000
