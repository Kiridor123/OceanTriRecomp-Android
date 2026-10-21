#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802E2770(CpuContext* ctx);
extern "C" uint64_t func_802E2770_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_802E32D0_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r29_addr_0 = 0;
    uint32_t r29_addr_1 = 0;
    uint32_t r29_addr_2 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x802E32D0u);
    goto loc_802E32D0;

loc_802E32D0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r31 = r3;
    r29 = MemoryInline::FlatRead32((r4 + 4));
    r30 = r29;
    r28 = MemoryInline::FlatRead16((r4 + 2));
    r28 = (r28 << 16);
    r28 = (static_cast<int32_t>(r28) >> 16);
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 & 32768);
}

loc_802E3308:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802E3324;
    }
}

loc_802E330C:
{
    r0 = (r28 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r29_addr_1 = (r29 + r0);
    r3 = MemoryInline::FlatRead16(r29_addr_1);
    r4 = (r5 & 65535);
    // inline leaf 0x802E2750 (8 guest instruction(s))
    r4 = (r4 & 65535);
    r3 = (r3 & 65535);
    r3 = (r3 + 1);
    r0 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r3));
    r0 = (r0 * r3);
    r0 = (r4 - r0);
    r3 = (r0 & 65535);
    // end of inlined leaf 0x802E2750
    r5 = r3;
}

loc_802E3324:
{
    r3 = (r5 & 65535);
}

loc_802E332C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802E3340;
    }
}

loc_802E3330:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32(r31, r0);
    r3 = 1;
    goto loc_802E33F8;
}

loc_802E3340:
{
    r4 = MemoryInline::FlatRead16(r29);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
}

loc_802E3348:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802E335C;
    }
}

loc_802E334C:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32(r31, r0);
    r3 = 1;
    goto loc_802E33F8;
}

loc_802E335C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_802E338C;
    }
}

loc_802E3360:
{
    r28 = (r28 + -1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_802E336C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802E3380;
    }
}

loc_802E3370:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32(r31, r0);
    r3 = 0;
    goto loc_802E33F8;
}

loc_802E3380:
{
    r30 = r29;
    r29 = (r29 + 8);
    goto loc_802E3340;
}

loc_802E338C:
{
    r0 = MemoryInline::FlatRead16((r30 + 2));
}

loc_802E3394:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_802E33A4;
    }
}

loc_802E3398:
{
    r0 = MemoryInline::FlatRead32((r30 + 4));
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_802E33F4;
}

loc_802E33A4:
{
    r5 = MemoryInline::FlatRead16(r30);
    r0 = (r3 - r5);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -12760));
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = 1127219200;
    stackword7 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    r0 = (r4 - r5);
    r0 = (r0 ^ -2147483648);
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    stackword9 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r4 = MemoryInline::FlatRead32((r29 + 4));
    if constexpr (KnownRegArgsCpuCall<0x802E2770u>(&func_802E2770)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        const auto regargs_result_802E2770_13A4 = func_802E2770_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_802E2770_13A4);
        r4 = static_cast<uint32_t>(regargs_result_802E2770_13A4 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        InvokeDirectCpu<0x802E2770u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
    }
    MemoryInline::FlatWrite32(r31, r3);
}

loc_802E33F4:
{
    r3 = 1;
}

loc_802E33F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_802E32D0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_802E32D0_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x802E32D0 func_802E32D0 preserves=true fpr_mask=0x00000000
