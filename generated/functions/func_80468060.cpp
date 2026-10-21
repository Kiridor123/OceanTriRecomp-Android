#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_80468060_ra38_6_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t stackword1 = 0;
    uint32_t stackword2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80468060u);
    goto loc_80468060;

loc_80468060:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r6 = MemoryInline::FlatRead32((r1 + 12));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(12));
    r3 = (r3_rot_0 & 2047);
    r7 = (r3 + -1023);
}

loc_8046807C:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(52))) {
        goto loc_80468094;
    }
}

loc_80468080:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r7), static_cast<int32_t>(20));
}

loc_80468084:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_80468138;
    }
}

loc_80468088:
{
}

loc_8046808C:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(0))) {
        goto loc_804680E0;
    }
}

loc_80468090:
{
    goto loc_804680A0;
}

loc_80468094:
{
}

loc_80468098:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(1024))) {
        goto loc_8046812C;
    }
}

loc_8046809C:
{
    goto loc_804681A8;
}

loc_804680A0:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -3000));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2992));
    f1.d = (f2.d + f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_804680B0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8046819C;
    }
}

loc_804680B4:
{
}

loc_804680B8:
{
    if ((static_cast<int32_t>(r5) < static_cast<int32_t>(0))) {
        goto loc_804680C8;
    }
}

loc_804680BC:
{
    r6 = 0;
    r5 = 0;
    goto loc_8046819C;
}

loc_804680C8:
{
    r0 = (r5 & 2147483647);
    r0 = (r0 | r6);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8046819C;
    }
}

loc_804680D4:
{
    r5 = -1074790400;
    r6 = 0;
    goto loc_8046819C;
}

loc_804680E0:
{
    r3 = 1048576;
    r0 = (r3 + -1);
    r4 = PPC_Sraw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r7));
    r0 = (r5 & r4);
    r0 = (r6 | r0);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_804680FC;
    }
}

loc_804680F8:
{
    goto loc_804681A8;
}

loc_804680FC:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -3000));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2992));
    f1.d = (f2.d + f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8046810C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8046819C;
    }
}

loc_80468110:
{
}

loc_80468114:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80468120;
    }
}

loc_80468118:
{
    r0 = PPC_Sraw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r7));
    r5 = (r5 + r0);
}

loc_80468120:
{
    r5 = (r5 & ~r4);
    r6 = 0;
    goto loc_8046819C;
}

loc_8046812C:
{
    f1.d = (f1.d + f1.d);
    goto loc_804681A8;
}

loc_80468138:
{
    r0 = (r7 + -20);
    r3 = -1;
    r4 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r6 & r4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80468150;
    }
}

loc_8046814C:
{
    goto loc_804681A8;
}

loc_80468150:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -3000));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -2992));
    f1.d = (f2.d + f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80468160:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8046819C;
    }
}

loc_80468164:
{
}

loc_80468168:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(0))) {
        goto loc_80468198;
    }
}

loc_8046816C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80468178;
    }
}

loc_80468170:
{
    r5 = (r5 + 1);
    goto loc_80468198;
}

loc_80468178:
{
    r0 = (52 - r7);
    r3 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r6 + r0);
}

loc_8046818C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r6))) {
        goto loc_80468194;
    }
}

loc_80468190:
{
    r5 = (r5 + 1);
}

loc_80468194:
{
    r6 = r0;
}

loc_80468198:
{
    r6 = (r6 & ~r4);
}

loc_8046819C:
{
    stackword1 = r5;
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    stackword2 = r6;
    MemoryInline::FlatWriteRam32((r1 + 12), r6);
    f1.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword1), static_cast<uint32_t>(stackword2));
}

loc_804681A8:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80468060(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80468060_ra38_6_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80468060 func_80468060 preserves=true fpr_mask=0x00000000
