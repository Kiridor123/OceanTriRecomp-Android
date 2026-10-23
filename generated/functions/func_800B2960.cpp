#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B2AFC(CpuContext* ctx);
extern "C" uint32_t func_800B2AFC_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800B2960_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

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

    goto loc_800B2960;

loc_800B2960:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
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

loc_800B29A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B29B8;
    }
}

loc_800B29A4:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800B29B0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B29B8;
    }
}

loc_800B29B4:
{
    r10 = 0;
}

loc_800B29B8:
{
}

loc_800B29BC:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B29D4;
    }
}

loc_800B29C0:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800B29CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B29D4;
    }
}

loc_800B29D0:
{
    r9 = 0;
}

loc_800B29D4:
{
}

loc_800B29D8:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B29EC;
    }
}

loc_800B29DC:
{
    r0 = (r11 + 1073741824);
}

loc_800B29E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B29EC;
    }
}

loc_800B29E8:
{
    r8 = 0;
}

loc_800B29EC:
{
}

loc_800B29F0:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B2A08;
    }
}

loc_800B29F4:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800B2A00:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2A08;
    }
}

loc_800B2A04:
{
    r7 = 0;
}

loc_800B2A08:
{
}

loc_800B2A0C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B2A24;
    }
}

loc_800B2A10:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800B2A1C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2A24;
    }
}

loc_800B2A20:
{
    r6 = 0;
}

loc_800B2A24:
{
}

loc_800B2A28:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B2A40;
    }
}

loc_800B2A2C:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B2A38:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B2A40;
    }
}

loc_800B2A3C:
{
    r5 = 0;
}

loc_800B2A40:
{
}

loc_800B2A44:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B2A68;
    }
}

loc_800B2A48:
{
    r3 = 0x80590000u;
    r3 = (r3 + 15952);
    r4 = 112;
    r5 = 0x80590000u;
    r5 = (r5 + 15968);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B2A68u;
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

loc_800B2A68:
{
    r0 = MemoryInline::FlatRead32(r31);
    r31 = (r31 + r0);
    r30 = (r31 + 8);
    r29 = 0;
    goto loc_800B2AD4;
}

loc_800B2A7C:
{
    r0 = MemoryInline::FlatRead8(r30);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & -256);
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0 = (r3 + r0);
    r30 = (r30 + 2);
    r6 = r30;
    r30 = (r30 + r0);
    r5 = MemoryInline::FlatRead8((r30 + 3));
    r0 = MemoryInline::FlatRead8((r30 + 2));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & -256);
    r0 = MemoryInline::FlatRead8(r30);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_2 & -16777216);
    r0 = MemoryInline::FlatRead8((r30 + 1));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & -65536);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    r30 = (r30 + 8);
    r3 = (r31 + r0);
    MemoryInline::FlatWrite32(r3, r6);
    ctx->lr = 0x800B2AD0u;
    if constexpr (KnownRegArgsCpuCall<0x800B2AFCu>(&func_800B2AFC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        const auto regargs_result_800B2AFC_1794 = func_800B2AFC_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800B2AFC_1794;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x800B2AFCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r29 = (r29 + 1);
}

loc_800B2AD4:
{
    r0 = MemoryInline::FlatRead16((r31 + 4));
}

loc_800B2ADC:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(r0))) {
        goto loc_800B2A7C;
    }
}

loc_800B2AE0:
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

extern "C" void func_800B2960(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800B2960_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B2960 func_800B2960 preserves=true fpr_mask=0x00000000
