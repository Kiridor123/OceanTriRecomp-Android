#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052364(CpuContext* ctx);
extern "C" uint32_t func_80052364_ra8_32_8_0(CpuContext*, uint32_t, double, double, double);
extern "C" void func_800DB590(CpuContext* ctx);
extern "C" uint64_t func_800DB590_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_802AB2F8(CpuContext* ctx);
extern "C" uint64_t func_802AB2F8_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);

extern "C" void func_809EE338(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];

    goto loc_809EE338;

loc_809EE338:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r30 = r3;
    r31 = MemoryInline::FlatRead32((r3 + 256));
    r3 = (r1 + 24);
    // inline leaf 0x809ED8C4 (1 guest instruction(s))
    // end of inlined leaf 0x809ED8C4
    r3 = (r1 + 8);
    // inline leaf 0x809EA85C (1 guest instruction(s))
    // end of inlined leaf 0x809EA85C
    r3 = (r1 + 24);
    ctx->lr = 0x809EE36Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x809EE5D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    r0 = MemoryInline::FlatRead8((r30 + 6));
}

loc_809EE374:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_809EE384;
    }
}

loc_809EE378:
{
}

loc_809EE37C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_809EE3B4;
    }
}

loc_809EE380:
{
    goto loc_809EE598;
}

loc_809EE384:
{
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r3 = (r3 + -5461);
    MemoryInline::FlatWrite32((r30 + 40), r3);
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800502E0u>(ctx);
    r3 = (r31 + 48);
    r4 = (r30 + 24);
    ctx->lr = 0x809EE3A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    r3 = (r1 + 24);
    r4 = (r31 + 48);
    // inline leaf 0x809EDFF4 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x809EDFF4
    goto loc_809EE598;
}

loc_809EE3B4:
{
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r0 = (r3 + -546);
    MemoryInline::FlatWrite32((r30 + 36), r0);
    r3 = MemoryInline::FlatRead32((r30 + 44));
    r0 = (r3 + -364);
    MemoryInline::FlatWrite32((r30 + 44), r0);
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_809EE3D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809EE44C;
    }
}

loc_809EE3D8:
{
    r3 = 0x80A20000u;
    r3 = (r3 + 30792);
    r0 = MemoryInline::FlatRead32((r30 + 16));
    r4 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat64((r4 + -6672));
    r0 = (r0 ^ -2147483648);
    stackword4 = r0;
    MemoryInline::FlatWriteRam32((r1 + 76), r0);
    r0 = 1127219200;
    stackword5 = r0;
    MemoryInline::FlatWriteRam32((r1 + 72), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if constexpr (KnownRegArgsCpuCall<0x80052364u>(&func_80052364)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_80052364_137C = func_80052364_ra8_32_8_0(ctx, r3, f1.d, f4.d, f5.d);
        r3 = regargs_result_80052364_137C;
        r0 = ctx->gpr[0];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x80052364u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
    }
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6632));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6628));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6636));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f0.d);
    r0 = fctiwzword0;
    r3 = (r0 & 65535);
    r0 = MemoryInline::FlatRead32((r30 + 40));
    r0 = (r0 - r3);
    MemoryInline::FlatWrite32((r30 + 40), r0);
    goto loc_809EE458;
}

loc_809EE44C:
{
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r0 = (r3 + -5461);
    MemoryInline::FlatWrite32((r30 + 40), r0);
}

loc_809EE458:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_809EE460:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809EE494;
    }
}

loc_809EE464:
{
    r0 = MemoryInline::FlatRead32((r30 + 16));
}

loc_809EE46C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(20))) {
        goto loc_809EE494;
    }
}

loc_809EE470:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_809EE480:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809EE494;
    }
}

loc_809EE484:
{
    r3 = MemoryInline::FlatRead8((r30 + 6));
    r4 = 1;
    r5 = (r30 + 24);
    ctx->lr = 0x809EE494u;
    if constexpr (KnownRegArgsCpuCall<0x800DB590u>(&func_800DB590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DB590_1E22 = func_800DB590_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DB590_1E22);
        r4 = static_cast<uint32_t>(regargs_result_800DB590_1E22 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DB590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
}

loc_809EE494:
{
    r0 = MemoryInline::FlatRead8((r30 + 5));
}

loc_809EE49C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(1))) {
        goto loc_809EE4F0;
    }
}

loc_809EE4A0:
{
    r4 = MemoryInline::FlatRead32((r30 + 16));
    r3 = 715849728;
    r0 = (r3 + -21845);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 12);
    r0 = (r4 - r0);
}

loc_809EE4C8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_809EE4F0;
    }
}

loc_809EE4CC:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r30 + 8));
}

loc_809EE4DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_809EE4F0;
    }
}

loc_809EE4E0:
{
    r3 = MemoryInline::FlatRead8((r30 + 6));
    r4 = 2;
    r5 = (r30 + 24);
    ctx->lr = 0x809EE4F0u;
    if constexpr (KnownRegArgsCpuCall<0x800DB590u>(&func_800DB590)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DB590_2695 = func_800DB590_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800DB590_2695);
        r4 = static_cast<uint32_t>(regargs_result_800DB590_2695 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        InvokeDirectCpu<0x800DB590u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
    }
}

loc_809EE4F0:
{
    r3 = MemoryInline::FlatRead32((r30 + 40));
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800502E0u>(ctx);
    r3 = MemoryInline::FlatRead32((r30 + 36));
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80050130u>(ctx);
    r3 = MemoryInline::FlatRead32((r30 + 44));
    r4 = (r1 + 24);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800503C8u>(ctx);
    r3 = (r31 + 48);
    r4 = (r30 + 24);
    ctx->lr = 0x809EE520u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x809EB13Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    r0 = MemoryInline::FlatRead16((r31 + 46));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r0 = (r0 & 65535);
    r3 = 0x80A20000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + -6672));
    r0 = (r0 ^ -2147483648);
    stackword6 = r0;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r0 = 1127219200;
    stackword7 = r0;
    MemoryInline::FlatWriteRam32((r1 + 80), r0);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6620));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6632));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x809EE5C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = 0x80A20000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -6624));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 52));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 52), f0.d);
    r3 = (r1 + 24);
    r4 = (r31 + 48);
    // inline leaf 0x809EDFF4 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 44), f0.d);
    // end of inlined leaf 0x809EDFF4
    r3 = MemoryInline::FlatRead16((r31 + 46));
    r0 = (r3 + 128);
    MemoryInline::FlatWrite16((r31 + 46), static_cast<uint16_t>(r0));
}

loc_809EE598:
{
    r3 = r30;
    r4 = MemoryInline::FlatRead32(r31);
    r5 = (r1 + 24);
    ctx->lr = 0x809EE5A8u;
    if constexpr (KnownRegArgsCpuCall<0x802AB2F8u>(&func_802AB2F8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        const auto regargs_result_802AB2F8_365D = func_802AB2F8_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_802AB2F8_365D);
        r4 = static_cast<uint32_t>(regargs_result_802AB2F8_365D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x802AB2F8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        f5 = ctx->fpr[5];
        f6 = ctx->fpr[6];
        f7 = ctx->fpr[7];
        f8 = ctx->fpr[8];
    }
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809EE338 func_809EE338 preserves=true fpr_mask=0x00000000
