#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB6BC(CpuContext* ctx);
extern "C" uint64_t func_800AB6BC_ra18_1a_18_0(CpuContext*, uint32_t, uint32_t, double, double, double);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" void func_800AB460(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t stackword4 = 0;
    uint32_t stackword5 = 0;
    uint32_t stackword6 = 0;
    uint32_t stackword7 = 0;
    uint32_t stackword8 = 0;
    uint32_t stackword9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_800AB460;

loc_800AB460:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r30 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 200));
    r3 = MemoryInline::FlatRead32((r3 + 36));
    // inline leaf 0x800A48C8 (2 guest instruction(s))
    r3 = (r3 + 8);
    // end of inlined leaf 0x800A48C8
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 261), 0, 5u, true, false);
    r6 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r3 + 261));
}

loc_800AB490:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_800AB49C;
    }
}

loc_800AB494:
{
    r3 = 255;
    goto loc_800AB6A4;
}

loc_800AB49C:
{
    r5 = MemoryInline::ReadResolved16(guest_range_0, 1u, (r3 + 262));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r3 + 264));
    r4 = (r0 * r5);
    r0 = MemoryInline::FlatRead8((r30 + 153));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r4 * r0);
    r4 = 346292224;
    r4 = (r4 + 10651);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r4)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 10);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    r0 = (r0 + r4);
    r5 = (r5 + r0);
}

loc_800AB4D4:
{
    r4 = 65536;
    r0 = (r4 + -1);
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(65535))) {
        goto loc_800AB4E4;
    }
}

loc_800AB4E0:
{
    r0 = (r5 & 65535);
}

loc_800AB4E4:
{
    r4 = MemoryInline::FlatRead16((r30 + 220));
    r5 = (r4 + -1);
    r4 = (r0 & 65535);
    r0 = PPC_Divw(static_cast<int32_t>(r5), static_cast<int32_t>(r4));
    r0 = (r0 * r4);
    r0 = (r5 - r0);
    r7 = (r0 & 65535);
    r30 = 0;
}

loc_800AB508:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(1))) {
        goto loc_800AB530;
    }
}

loc_800AB50C:
{
}

loc_800AB510:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(2))) {
        goto loc_800AB588;
    }
}

loc_800AB514:
{
}

loc_800AB518:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_800AB5AC;
    }
}

loc_800AB51C:
{
}

loc_800AB520:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(4))) {
        goto loc_800AB5CC;
    }
}

loc_800AB524:
{
}

loc_800AB528:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(5))) {
        goto loc_800AB5F8;
    }
}

loc_800AB52C:
{
    goto loc_800AB664;
}

loc_800AB530:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
}

loc_800AB538:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r4))) {
        goto loc_800AB55C;
    }
}

loc_800AB53C:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 265));
    r3 = (128 - r5);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r0 = (r5 * r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (r3 + r0);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_800AB680;
}

loc_800AB55C:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 265));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & -4);
    r3 = (r0 - r5);
    r0 = (r5 * r7);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_7 & -4);
    r0 = (0 - r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r3 = (r3 + r0);
    r0 = (r3 + 128);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_800AB680;
}

loc_800AB588:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 265));
    r0 = (r3 * r7);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & -2);
    r0 = (0 - r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r3 = (r3 + r0);
    r0 = (r3 + 128);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_800AB680;
}

loc_800AB5AC:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 265));
    r3 = (128 - r5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r0 = (r5 * r0);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (r3 + r0);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_800AB680;
}

loc_800AB5CC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
}

loc_800AB5D4:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(r4))) {
        goto loc_800AB5E8;
    }
}

loc_800AB5D8:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 265));
    r0 = (r3 + 128);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_800AB680;
}

loc_800AB5E8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r3 + 265));
    r0_subfic_ra_1 = r0;
    r0 = (128 - r0_subfic_ra_1);
    r30 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    goto loc_800AB680;
}

loc_800AB5F8:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31280));
    stackword4 = r7;
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    r30 = 1127219200;
    stackword5 = r30;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword5), static_cast<uint32_t>(stackword4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31232));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    stackword6 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    stackword7 = r30;
    MemoryInline::FlatWriteRam32((r1 + 16), r30);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword7), static_cast<uint32_t>(stackword6));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if constexpr (KnownRegArgsCpuCall<0x800AB6BCu>(&func_800AB6BC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        const auto regargs_result_800AB6BC_20FA = func_800AB6BC_ra18_1a_18_0(ctx, r3, r4, f1.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800AB6BC_20FA);
        r4 = static_cast<uint32_t>(regargs_result_800AB6BC_20FA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->cr = cr;
        InvokeDirectCpu<0x800AB6BCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead8((r31 + 265));
    f2.d = MemoryInline::FlatReadFloat64((r2 + -31280));
    stackword8 = r0;
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    stackword9 = r30;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    f0.d = PpcDoubleFromWordsInline(static_cast<uint32_t>(stackword9), static_cast<uint32_t>(stackword8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -31272));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r30 = fctiwzword0;
    goto loc_800AB680;
}

loc_800AB664:
{
    r3 = 0x80590000u;
    r3 = (r3 + 13584);
    r4 = 353;
    r5 = 0x80590000u;
    r5 = (r5 + 13780);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800AB680u;
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

loc_800AB680:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_800AB688:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(0))) {
        goto loc_800AB690;
    }
}

loc_800AB68C:
{
    r30 = 0;
}

loc_800AB690:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r30)));
}

loc_800AB698:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_800AB6A0;
    }
}

loc_800AB69C:
{
    r30 = 255;
}

loc_800AB6A0:
{
    r3 = (r30 & 255);
}

loc_800AB6A4:
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FF gpr_write=0x000000FB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800AB460 func_800AB460 preserves=true fpr_mask=0x00000000
