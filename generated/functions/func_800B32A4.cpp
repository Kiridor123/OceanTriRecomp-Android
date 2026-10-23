#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_800B32A4_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_800B32A4;

loc_800B32A4:
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

loc_800B32DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B32F4;
    }
}

loc_800B32E0:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 2130706432);
}

loc_800B32EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B32F4;
    }
}

loc_800B32F0:
{
    r10 = 0;
}

loc_800B32F4:
{
}

loc_800B32F8:
{
    if ((static_cast<int32_t>(r10) != static_cast<int32_t>(0))) {
        goto loc_800B3310;
    }
}

loc_800B32FC:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 1879048192);
}

loc_800B3308:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B3310;
    }
}

loc_800B330C:
{
    r9 = 0;
}

loc_800B3310:
{
}

loc_800B3314:
{
    if ((static_cast<int32_t>(r9) != static_cast<int32_t>(0))) {
        goto loc_800B3328;
    }
}

loc_800B3318:
{
    r0 = (r11 + 1073741824);
}

loc_800B3320:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B3328;
    }
}

loc_800B3324:
{
    r8 = 0;
}

loc_800B3328:
{
}

loc_800B332C:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(0))) {
        goto loc_800B3344;
    }
}

loc_800B3330:
{
    r4 = (r3 & -8388608);
    r0 = (r4 + 1056964608);
}

loc_800B333C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B3344;
    }
}

loc_800B3340:
{
    r7 = 0;
}

loc_800B3344:
{
}

loc_800B3348:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(0))) {
        goto loc_800B3360;
    }
}

loc_800B334C:
{
    r4 = (r3 & -134217728);
    r0 = (r4 + 805306368);
}

loc_800B3358:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B3360;
    }
}

loc_800B335C:
{
    r6 = 0;
}

loc_800B3360:
{
}

loc_800B3364:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800B337C;
    }
}

loc_800B3368:
{
    r3 = (r3 & -16384);
    r0 = (r3 + 536870912);
}

loc_800B3374:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_800B337C;
    }
}

loc_800B3378:
{
    r5 = 0;
}

loc_800B337C:
{
}

loc_800B3380:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_800B33A4;
    }
}

loc_800B3384:
{
    r3 = 0x80590000u;
    r3 = (r3 + 15952);
    r4 = 310;
    r5 = 0x80590000u;
    r5 = (r5 + 15968);
    r6 = r31;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800B33A4u;
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

loc_800B33A4:
{
    r0 = MemoryInline::FlatRead32(r31);
    r6 = (r31 + r0);
    r7 = (r6 + 8);
    r8 = 0;
    goto loc_800B3420;
}

loc_800B33B8:
{
    r0 = MemoryInline::FlatRead8(r7);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_2 & -256);
    r0 = MemoryInline::FlatRead8((r7 + 1));
    r0 = (r3 + r0);
    r7 = (r7 + 2);
    r9 = r7;
    r7 = (r7 + r0);
    r5 = MemoryInline::FlatRead8((r7 + 3));
    r0 = MemoryInline::FlatRead8((r7 + 2));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3 = (r3_rot_3 & -256);
    r0 = MemoryInline::FlatRead8(r7);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_2 & -16777216);
    r0 = MemoryInline::FlatRead8((r7 + 1));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & -65536);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    r7 = (r7 + 8);
    r4 = (r6 + r0);
    MemoryInline::FlatWrite32(r4, r9);
    r3 = (r4 + 64);
    MemoryInline::FlatWrite32((r4 + 28), r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 32), r0);
    r8 = (r8 + 1);
}

loc_800B3420:
{
    r0 = MemoryInline::FlatRead16((r6 + 4));
}

loc_800B3428:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(r0))) {
        goto loc_800B33B8;
    }
}

loc_800B342C:
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
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_800B32A4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_800B32A4_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00000FFB gpr_write=0x00000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800B32A4 func_800B32A4 preserves=true fpr_mask=0x00000000
