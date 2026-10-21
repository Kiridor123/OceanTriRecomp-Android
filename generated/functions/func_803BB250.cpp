#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005A944(CpuContext* ctx);
extern "C" uint32_t func_8005A944_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8005A980(CpuContext* ctx);
extern "C" uint64_t func_8005A980_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80064150(CpuContext* ctx);
extern "C" uint32_t func_80064150_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80291CB4(CpuContext* ctx);
extern "C" uint64_t func_80291CB4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803BB250_ra38_2_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x803BB250u);
    goto loc_803BB250;

loc_803BB250:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r29 = r3;
    r3 = (r1 + 48);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = MemoryInline::FlatRead8((r29 + 5));
    r0 = (r3 + -10);
}

loc_803BB280:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_803BB554;
    }
}

loc_803BB284:
{
    r0 = (r3 + -16);
}

loc_803BB28C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_803BB554;
    }
}

loc_803BB290:
{
}

loc_803BB294:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(255))) {
        goto loc_803BB29C;
    }
}

loc_803BB298:
{
    goto loc_803BB554;
}

loc_803BB29C:
{
    r3 = (r1 + 48);
    r4 = (r29 + 20);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5320));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f0.d);
    r3 = (r1 + 48);
    r4 = MemoryInline::FlatRead8((r29 + 4));
    r5 = (r29 + 520);
    r6 = -5;
    ctx->lr = 0x803BB2CCu;
    if constexpr (KnownRegArgsCpuCall<0x80291CB4u>(&func_80291CB4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80291CB4_C91 = func_80291CB4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80291CB4_C91);
        r4 = static_cast<uint32_t>(regargs_result_80291CB4_C91 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80291CB4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
    MemoryInline::FlatWrite8((r29 + 540), static_cast<uint8_t>(r0));
}

loc_803BB2D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BB554;
    }
}

loc_803BB2DC:
{
    r3 = 0;
    r0 = MemoryInline::FlatRead16((r29 + 520));
}

loc_803BB2E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_803BB300;
    }
}

loc_803BB2EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -5312));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_803BB2F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_803BB300;
    }
}

loc_803BB2FC:
{
    r3 = 3;
}

loc_803BB300:
{
    r0 = MemoryInline::FlatRead8((r29 + 527));
    r0 = (r3 + r0);
    r30 = (r0 & 255);
    r4 = 1;
    r5 = MemoryInline::FlatRead8((r29 + 4));
    // inline leaf 0x802B02F4 (13 guest instruction(s))
    r6 = 0x806C0000u;
    r6 = (r6 + -21440);
    r0 = (r5 & 255);
    r0 = (r0 * 476);
    r5 = (r6 + r0);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r3 = (r5 + r0);
    r0 = (r4 & 255);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 3108));
    // end of inlined leaf 0x802B02F4
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 44);
    r4 = (r1 + 24);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r3 = r30;
    r4 = 1;
    r5 = MemoryInline::FlatRead8((r29 + 4));
    // inline leaf 0x802B02F4 (13 guest instruction(s))
    r6 = 0x806C0000u;
    r6 = (r6 + -21440);
    r0 = (r5 & 255);
    r0 = (r0 * 476);
    r5 = (r6 + r0);
    r0 = (r3 & 255);
    r0 = (r0 * 48);
    r3 = (r5 + r0);
    r0 = (r4 & 255);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 3108));
    // end of inlined leaf 0x802B02F4
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 40);
    r4 = (r1 + 20);
    // inline leaf 0x8004C554 (9 guest instruction(s))
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 2));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x8004C554
    r3 = (r29 + 332);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800988CCu>(ctx);
    r3 = ctx->gpr[3];
    r31 = r3;
    r30 = 0;
    goto loc_803BB54C;
}

loc_803BB35C:
{
    r3 = (r29 + 332);
    r4 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098864u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 32);
    r4 = (r1 + 16);
    ctx->lr = 0x803BB378u;
    if constexpr (KnownRegArgsCpuCall<0x80064150u>(&func_80064150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80064150_1EF4 = func_80064150_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80064150_1EF4;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80064150u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 32);
    ctx->lr = 0x803BB380u;
    if constexpr (KnownRegArgsCpuCall<0x8005A980u>(&func_8005A980)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        const auto regargs_result_8005A980_2193 = func_8005A980_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8005A980_2193);
        r4 = static_cast<uint32_t>(regargs_result_8005A980_2193 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->cr = cr;
        InvokeDirectCpu<0x8005A980u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 28);
    r4 = (r1 + 12);
    ctx->lr = 0x803BB390u;
    if constexpr (KnownRegArgsCpuCall<0x8005A944u>(&func_8005A944)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8005A944_25D7 = func_8005A944_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8005A944_25D7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8005A944u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 28);
    r4 = 4;
    r5 = (r1 + 36);
    ctx->lr = 0x803BB3A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80096EF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 11u, true, false);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r1 + 40));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r1 + 36));
    r3 = (r3 * r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r1 + 44));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    r7 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r1 + 41));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r1 + 37));
    r3 = (r3 * r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 9u, (r1 + 45));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    r6 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r1 + 42));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r1 + 38));
    r3 = (r3 * r0);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 10u, (r1 + 46));
    r0 = PPC_Divw(static_cast<int32_t>(r3), static_cast<int32_t>(r0));
    r5 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r4 = 0;
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
}

loc_803BB3F4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(255))) {
        goto loc_803BB408;
    }
}

loc_803BB3F8:
{
    r0 = 0;
}

loc_803BB400:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_803BB408;
    }
}

loc_803BB404:
{
    r4 = r3;
}

loc_803BB408:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
}

loc_803BB410:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(255))) {
        goto loc_803BB424;
    }
}

loc_803BB414:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_803BB41C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_803BB424;
    }
}

loc_803BB420:
{
    r4 = r3;
}

loc_803BB424:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_803BB42C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(255))) {
        goto loc_803BB440;
    }
}

loc_803BB430:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_803BB438:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(r3))) {
        goto loc_803BB440;
    }
}

loc_803BB43C:
{
    r4 = r3;
}

loc_803BB440:
{
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
}

loc_803BB448:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(255))) {
        goto loc_803BB464;
    }
}

loc_803BB44C:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_4 & -256);
    r0 = (r0 - r3);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r7 = r0;
}

loc_803BB464:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
}

loc_803BB46C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_803BB478;
    }
}

loc_803BB470:
{
    r7 = 255;
    goto loc_803BB484;
}

loc_803BB478:
{
}

loc_803BB47C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(60))) {
        goto loc_803BB484;
    }
}

loc_803BB480:
{
    r7 = 60;
}

loc_803BB484:
{
}

loc_803BB488:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(255))) {
        goto loc_803BB4A4;
    }
}

loc_803BB48C:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_6 & -256);
    r0 = (r0 - r3);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r6 = r0;
}

loc_803BB4A4:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
}

loc_803BB4AC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_803BB4B8;
    }
}

loc_803BB4B0:
{
    r6 = 255;
    goto loc_803BB4C4;
}

loc_803BB4B8:
{
}

loc_803BB4BC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(60))) {
        goto loc_803BB4C4;
    }
}

loc_803BB4C0:
{
    r6 = 60;
}

loc_803BB4C4:
{
}

loc_803BB4C8:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(255))) {
        goto loc_803BB4E4;
    }
}

loc_803BB4CC:
{
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r0 = (r0_rot_8 & -256);
    r0 = (r0 - r3);
    r0 = PPC_Divw(static_cast<int32_t>(r0), static_cast<int32_t>(r4));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    r5 = r0;
}

loc_803BB4E4:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
}

loc_803BB4EC:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(255))) {
        goto loc_803BB4F8;
    }
}

loc_803BB4F0:
{
    r5 = 255;
    goto loc_803BB504;
}

loc_803BB4F8:
{
}

loc_803BB4FC:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(60))) {
        goto loc_803BB504;
    }
}

loc_803BB500:
{
    r5 = 60;
}

loc_803BB504:
{
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r7)));
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 36), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r6)));
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 37), static_cast<uint8_t>(r0));
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r5)));
    r0 = (r0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 38), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r29 + 56);
    r4 = r30;
    r5 = 0;
    r6 = (r1 + 8);
    r7 = 0;
    ctx->lr = 0x803BB548u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800E2950u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r30 = (r30 + 1);
}

loc_803BB54C:
{
}

loc_803BB550:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r31))) {
        goto loc_803BB35C;
    }
}

loc_803BB554:
{
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BB250(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BB250_ra38_2_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803BB250 func_803BB250 preserves=true fpr_mask=0x00000000
