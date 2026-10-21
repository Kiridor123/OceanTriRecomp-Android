#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80457360(CpuContext* ctx);
extern "C" uint32_t func_80457360_ra8_1e_8_0(CpuContext*, uint32_t, double, double, double, double);

extern "C" void func_80843AF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t stackword3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];

    MKW_GUEST_ENTER(0x80843AF0u);
    goto loc_80843AF0;

loc_80843AF0:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r8 = 0x80840000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r8 = (r8 + 18896);
    r31 = r4;
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r6 = MemoryInline::FlatRead8(r5);
}

loc_80843B18:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(128))) {
        goto loc_80843B28;
    }
}

loc_80843B1C:
{
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r4 + 16), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_80843B28:
{
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_80843B30:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(240))) {
        goto loc_80843B48;
    }
}

loc_80843B34:
{
}

loc_80843B38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(247))) {
        goto loc_80843B48;
    }
}

loc_80843B3C:
{
}

loc_80843B40:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(255))) {
        goto loc_80843B90;
    }
}

loc_80843B44:
{
    goto loc_80843CF8;
}

loc_80843B48:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r5 = MemoryInline::FlatRead8(r3);
    r6 = (r5 & 127);
    goto loc_80843B74;
}

loc_80843B58:
{
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(7));
    r3 = (r3_rot_4 & -128);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r4 + 12), r5);
    r5 = MemoryInline::FlatRead8(r5);
    r0 = (r5 & 127);
    r6 = (r3 + r0);
}

loc_80843B74:
{
    r0 = (r5 & 128);
}

loc_80843B78:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80843B58;
    }
}

loc_80843B7C:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r3 + 1);
    r0 = (r0 + r6);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    goto loc_80843D64;
}

loc_80843B90:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
}

loc_80843BA0:
{
    MemoryInline::FlatWrite32((r4 + 12), r3);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(47))) {
        goto loc_80843BB4;
    }
}

loc_80843BA8:
{
}

loc_80843BAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(81))) {
        goto loc_80843BE4;
    }
}

loc_80843BB0:
{
    goto loc_80843CB4;
}

loc_80843BB4:
{
    r5 = MemoryInline::FlatRead32(r4);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r5 + 12));
    r3 = (r3 + -1);
    MemoryInline::FlatWrite32((r5 + 12), r3);
    MemoryInline::FlatWrite32((r4 + 36), r0);
    r0 = MemoryInline::FlatRead32((r5 + 12));
}

loc_80843BD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80843D64;
    }
}

loc_80843BD8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r5 + 16), r0);
    goto loc_80843D64;
}

loc_80843BE4:
{
    r0 = MemoryInline::FlatRead8(r3);
    goto loc_80843C00;
}

loc_80843BF0:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r3 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 12), r3);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80843C00:
{
    r0 = (r0 & 128);
}

loc_80843C04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80843BF0;
    }
}

loc_80843C08:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = 1127219200;
    stackword3 = r0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r3 + 1);
    f6.d = MemoryInline::FlatReadFloat64((r8 + 16));
    MemoryInline::FlatWrite32((r4 + 12), r3);
    r5 = (r3 + 1);
    r6 = (r5 + 1);
    f4.d = MemoryInline::FlatReadFloat32(r8);
    r7 = MemoryInline::FlatRead8(r3);
    r3 = (r6 + 1);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(8));
    r7 = (r7_rot_1 & -256);
    f2.d = MemoryInline::FlatReadFloat32((r8 + 12));
    MemoryInline::FlatWrite32((r4 + 12), r5);
    r9 = MemoryInline::FlatRead32(r4);
    r5 = MemoryInline::FlatRead8(r5);
    f3.d = MemoryInline::FlatReadFloat64((r8 + 24));
    r0 = (r7 + r5);
    MemoryInline::FlatWrite32((r4 + 12), r6);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r5 = (r5_rot_1 & -256);
    f1.d = MemoryInline::FlatReadFloat32((r8 + 8));
    r0 = MemoryInline::FlatRead8(r6);
    f0.d = MemoryInline::FlatReadFloat32((r8 + 4));
    r0 = (r5 + r0);
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f5.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword3), static_cast<uint32_t>(stackword5));
    MemoryInline::FlatWrite32((r4 + 12), r3);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f6.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f5.d));
    MemoryInline::FlatWriteFloat32((r4 + 20), f4.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f4.d));
    r0 = MemoryInline::FlatRead16((r9 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    f2.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword4), static_cast<uint32_t>(stackword6));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    if constexpr (KnownRegArgsCpuCall<0x80457360u>(&func_80457360)) {
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        const auto regargs_result_80457360_1B4A = func_80457360_ra8_1e_8_0(ctx, r3, f1.d, f2.d, f3.d, f4.d);
        r3 = regargs_result_80457360_1B4A;
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x80457360u>(ctx);
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    MemoryInline::FlatWrite32((r31 + 28), r3);
    goto loc_80843D64;
}

loc_80843CB4:
{
    r5 = MemoryInline::FlatRead8(r3);
    r6 = (r5 & 127);
    goto loc_80843CDC;
}

loc_80843CC0:
{
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(7));
    r3 = (r3_rot_2 & -128);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r4 + 12), r5);
    r5 = MemoryInline::FlatRead8(r5);
    r0 = (r5 & 127);
    r6 = (r3 + r0);
}

loc_80843CDC:
{
    r0 = (r5 & 128);
}

loc_80843CE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80843CC0;
    }
}

loc_80843CE4:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r3 + 1);
    r0 = (r0 + r6);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    goto loc_80843D64;
}

loc_80843CF8:
{
    r5 = 0x80850000u;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r0));
    r5 = (r5 + -28112);
    r5 = (r0 + r5);
    r0 = MemoryInline::FlatRead8((r5 + -128));
}

loc_80843D10:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80843D20;
    }
}

loc_80843D14:
{
}

loc_80843D18:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_80843D38;
    }
}

loc_80843D1C:
{
    goto loc_80843D5C;
}

loc_80843D20:
{
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r5 = MemoryInline::FlatRead8(r6);
    r0 = (r6 + 1);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r4 + 12), r0);
    goto loc_80843D5C;
}

loc_80843D38:
{
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8(r5);
    r5 = (r5 + 1);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r4 + 12), r5);
    r5 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_80843D5C:
{
    r4 = (r1 + 8);
    // inline leaf 0x80842600 (20 guest instruction(s))
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 1020), r5);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r5 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 1020), r5);
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r3 + 1020));
    r4 = MemoryInline::FlatRead32((r3 + 1024));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite32((r3 + 1020), r0);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 1024), r0);
    // end of inlined leaf 0x80842600
}

loc_80843D64:
{
    r3 = MemoryInline::FlatRead32((r31 + 12));
    r0 = MemoryInline::FlatRead32((r31 + 8));
}

loc_80843D70:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r0))) {
        goto loc_80843DA0;
    }
}

loc_80843D74:
{
    r4 = MemoryInline::FlatRead32(r31);
    r0 = 0;
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r3 = (r3 + -1);
    MemoryInline::FlatWrite32((r4 + 12), r3);
    MemoryInline::FlatWrite32((r31 + 36), r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
}

loc_80843D94:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80843DA0;
    }
}

loc_80843D98:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r4 + 16), r0);
}

loc_80843DA0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x000003FB gpr_return=0x00000018 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80843AF0 func_80843AF0 preserves=true fpr_mask=0x00000000
