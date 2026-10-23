#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800B2C1C_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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

    goto loc_800B2C1C;

loc_800B2C1C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
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

loc_800B2C54:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2C6C;
    }
}

loc_800B2C58:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800B2C64:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2C6C;
    }
}

loc_800B2C68:
{
    r10 = 0;
}

loc_800B2C6C:
{
}

loc_800B2C70:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B2C88;
    }
}

loc_800B2C74:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800B2C80:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2C88;
    }
}

loc_800B2C84:
{
    r9 = 0;
}

loc_800B2C88:
{
}

loc_800B2C8C:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B2CA0;
    }
}

loc_800B2C90:
{
    r0 = (r11 + 1073741824);
}

loc_800B2C98:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2CA0;
    }
}

loc_800B2C9C:
{
    r8 = 0;
}

loc_800B2CA0:
{
}

loc_800B2CA4:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B2CBC;
    }
}

loc_800B2CA8:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800B2CB4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2CBC;
    }
}

loc_800B2CB8:
{
    r7 = 0;
}

loc_800B2CBC:
{
}

loc_800B2CC0:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B2CD8;
    }
}

loc_800B2CC4:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800B2CD0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2CD8;
    }
}

loc_800B2CD4:
{
    r6 = 0;
}

loc_800B2CD8:
{
}

loc_800B2CDC:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B2CF4;
    }
}

loc_800B2CE0:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B2CEC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2CF4;
    }
}

loc_800B2CF0:
{
    r5 = 0;
}

loc_800B2CF4:
{
}

loc_800B2CF8:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B2D1C;
    }
}

loc_800B2CFC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 15952);
    r4 = 151;
    r5 = 0x80590000u;
    r5 = (r5 + 15968);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B2D1Cu;
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

loc_800B2D1C:
{
    r0 = MemoryInline::FlatRead32(r31);
    r3 = (r31 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 4));
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

extern "C" void func_800B2C1C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800B2C1C_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B2C1C func_800B2C1C preserves=true fpr_mask=0x00000000
