#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800505FC(CpuContext* ctx);
extern "C" uint64_t func_800505FC_ra18_18_18_0(CpuContext*, uint32_t, uint32_t, double, double);
extern "C" void func_800DCE20(CpuContext* ctx);
extern "C" uint64_t func_800DCE20_ra18_2_18_0(CpuContext*, uint32_t, uint32_t, double);

extern "C" uint64_t func_801E22C4_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r3_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    ctx->fpr[5].d = arg_f5;
    ctx->fpr[6].d = arg_f6;
    ctx->fpr[7].d = arg_f7;
    ctx->fpr[8].d = arg_f8;

    goto loc_801E22C4;

loc_801E22C4:
{
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + -208), 0, 216u, false, true);
    MemoryInline::WriteResolved32(guest_range_6, 0u, (r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_6, 212u, (r1 + 212), r0);
    r11 = (r1 + 208);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = MemoryInline::FlatRead32((r3 + 44));
    r30 = MemoryInline::FlatRead32((r31 + 56));
    r3 = (r1 + 120);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 72);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 56);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 32);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r29 = MemoryInline::FlatRead32((r31 + 48));
    r26 = MemoryInline::FlatRead32((r29 + 364));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 56u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_6, 56u, (r1 + 56), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_6, 60u, (r1 + 60), f0.d);
    }
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17068));
    MemoryInline::WriteResolvedFloat32(guest_range_6, 64u, (r1 + 64), f0.d);
    r3 = (r1 + 56);
    r4 = MemoryInline::FlatRead32((r26 + 88));
    ctx->lr = 0x801E2338u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f1.d = MemoryInline::FlatReadFloat32((r26 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17064));
    f0.d = MemoryInline::FlatReadFloat32((r26 + 96));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r26 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17060));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    r3 = MemoryInline::FlatRead32((r26 + 88));
    r27 = (r3 + 65536);
    r27 = (r27 + -16384);
    r27 = (r27 & 65535);
    r3 = (r1 + 56);
    r4 = r27;
    ctx->lr = 0x801E2398u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f0.d);
    r3 = r26;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r0 = (r3 & 65535);
}

loc_801E23D8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(350))) {
        goto loc_801E2458;
    }
}

loc_801E23DC:
{
    r3 = r26;
    r4 = 3;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -17056));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -17052));
    ctx->lr = 0x801E23F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8026A378u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
}

loc_801E23F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E2428;
    }
}

loc_801E23F8:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17048));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17044));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    r3 = MemoryInline::FlatRead32((r26 + 316));
    r3 = (r3 + 4);
    r4 = 11;
    r5 = (r1 + 120);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    goto loc_801E2484;
}

loc_801E2428:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17040));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17044));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    r3 = MemoryInline::FlatRead32((r26 + 316));
    r3 = (r3 + 4);
    r4 = 7;
    r5 = (r1 + 120);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
    goto loc_801E2484;
}

loc_801E2458:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17040));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17172));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17044));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    r3 = MemoryInline::FlatRead32((r26 + 316));
    r3 = (r3 + 4);
    r4 = 7;
    r5 = (r1 + 120);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800E0A78u>(ctx);
}

loc_801E2484:
{
    r3 = (r1 + 56);
    r4 = (r1 + 120);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800514A4u>(ctx);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 60));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 148));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 164));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f0.d);
    r0 = MemoryInline::FlatRead8((r30 + 43));
}

loc_801E24E0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_801E24F0;
    }
}

loc_801E24E4:
{
}

loc_801E24E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_801E2578;
    }
}

loc_801E24EC:
{
    goto loc_801E25C4;
}

loc_801E24F0:
{
    r3 = (r1 + 56);
    r28 = 65536;
    r4 = (r28 - r27);
    ctx->lr = 0x801E2500u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x800510C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f1.d = MemoryInline::FlatReadFloat32((r1 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 60));
    ctx->gpr[1] = r1;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x80464488u>(ctx);
    f1 = ctx->fpr[1];
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17104));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17100));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -17140));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 168), f0.d);
    r0 = fctiwzword0;
    r27 = (r0 & 65535);
    r3 = (r1 + 120);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = (r1 + 72);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = MemoryInline::FlatRead32((r26 + 88));
    r4 = (r1 + 120);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800502E0u>(ctx);
    r3 = r27;
    r4 = (r1 + 120);
    ctx->lr = 0x801E255Cu;
    if constexpr (KnownRegArgsCpuCall<0x800505FCu>(&func_800505FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800505FC_3496 = func_800505FC_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800505FC_3496);
        r4 = static_cast<uint32_t>(regargs_result_800505FC_3496 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800505FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = MemoryInline::FlatRead32((r26 + 88));
    r4 = (r1 + 72);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800502E0u>(ctx);
    r3 = (r28 - r27);
    r4 = (r1 + 72);
    ctx->lr = 0x801E2574u;
    if constexpr (KnownRegArgsCpuCall<0x800505FCu>(&func_800505FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800505FC_3A36 = func_800505FC_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800505FC_3A36);
        r4 = static_cast<uint32_t>(regargs_result_800505FC_3A36 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800505FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    goto loc_801E25C4;
}

loc_801E2578:
{
    r0 = MemoryInline::FlatRead32((r30 + 84));
    r27 = (r0 * 546);
    r3 = (r1 + 120);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = (r1 + 72);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80050538u>(ctx);
    r3 = MemoryInline::FlatRead32((r29 + 404));
    r4 = (r1 + 120);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800502E0u>(ctx);
    r3 = r27;
    r4 = (r1 + 120);
    ctx->lr = 0x801E25A8u;
    if constexpr (KnownRegArgsCpuCall<0x800505FCu>(&func_800505FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800505FC_411E = func_800505FC_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800505FC_411E);
        r4 = static_cast<uint32_t>(regargs_result_800505FC_411E >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800505FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = MemoryInline::FlatRead32((r29 + 404));
    r4 = (r1 + 72);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x800502E0u>(ctx);
    r0 = 65536;
    r3 = (r0 - r27);
    r4 = (r1 + 72);
    ctx->lr = 0x801E25C4u;
    if constexpr (KnownRegArgsCpuCall<0x800505FCu>(&func_800505FC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        const auto regargs_result_800505FC_46CF = func_800505FC_ra18_18_18_0(ctx, r3, r4, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_800505FC_46CF);
        r4 = static_cast<uint32_t>(regargs_result_800505FC_46CF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        InvokeDirectCpu<0x800505FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
}

loc_801E25C4:
{
    r0 = MemoryInline::FlatRead8((r30 + 90));
    r4 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = 1717960704;
    r0 = (r3 + 26215);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 4);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 40);
    r0 = (r4 - r0);
}

loc_801E25F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E2614;
    }
}

loc_801E25F4:
{
    // inline leaf 0x802AFCE8 (4 guest instruction(s))
    r3 = 0x806C0000u;
    r3 = (r3 + -21440);
    r3 = MemoryInline::FlatRead8((r3 + 3014));
    // end of inlined leaf 0x802AFCE8
    r3 = (r3 & 255);
    r0 = MemoryInline::FlatRead8((r31 + 68));
}

loc_801E2604:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_801E2614;
    }
}

loc_801E2608:
{
    r3 = MemoryInline::FlatRead32((r29 + 1176));
    r4 = (r31 + 24);
    ctx->lr = 0x801E2614u;
    if constexpr (KnownRegArgsCpuCall<0x800DCE20u>(&func_800DCE20)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800DCE20_501C = func_800DCE20_ra18_2_18_0(ctx, r3, r4, f1.d);
        r3 = static_cast<uint32_t>(regargs_result_800DCE20_501C);
        r4 = static_cast<uint32_t>(regargs_result_800DCE20_501C >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800DCE20u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
}

loc_801E2614:
{
    r3 = MemoryInline::FlatRead8((r30 + 90));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r30 + 90), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 280));
    // inline leaf 0x800E0AF0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 236));
    // end of inlined leaf 0x800E0AF0
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r3 = (r3 + 276);
    r4 = 5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F14u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 16);
    ctx->lr = 0x801E264Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8006FE30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = (r3 * 48);
    r3 = (r29 + r0);
    r4 = (r1 + 120);
    // inline leaf 0x80051758 (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r3, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r3 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r3 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r3 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r4 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r4 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r3 + 40), f0.d);
    // end of inlined leaf 0x80051758
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r3 = (r3 + 276);
    r4 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F14u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 12);
    ctx->lr = 0x801E2678u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8006FE30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = (r3 * 48);
    r3 = (r29 + r0);
    r4 = (r1 + 72);
    // inline leaf 0x80051758 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost(r4, 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, r4);
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_3, 0u, r3, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 4u, (r3 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 8u, (r3 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r4 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 16u, (r3 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r4 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 20u, (r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r4 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 24u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r4 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r4 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r4 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_3, 40u, (r3 + 40), f0.d);
    // end of inlined leaf 0x80051758
    r0 = MemoryInline::FlatRead8((r30 + 43));
}

loc_801E2690:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_801E26C0;
    }
}

loc_801E2694:
{
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r3 = (r3 + 276);
    r4 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80097F14u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 8);
    ctx->lr = 0x801E26B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8006FE30u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r0 = (r3 * 48);
    r3 = (r29 + r0);
    r4 = (r1 + 72);
    // inline leaf 0x80051758 (19 guest instruction(s))
    guest_range_4 = MemoryInline::ResolveRangeHost(r4, 0, 44u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 0u, r4);
    guest_range_5 = MemoryInline::ResolveRangeHost(r3, 0, 44u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_5, 0u, r3, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 4u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 4u, (r3 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 8u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 8u, (r3 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 16u, (r4 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 16u, (r3 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 20u, (r4 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 20u, (r3 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 24u, (r4 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 24u, (r3 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 32u, (r4 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 32u, (r3 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 36u, (r4 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 36u, (r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_4, 40u, (r4 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_5, 40u, (r3 + 40), f0.d);
    // end of inlined leaf 0x80051758
}

loc_801E26C0:
{
    r11 = (r1 + 208);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 212));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801E22C4(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801E22C4_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801E22C4 func_801E22C4 preserves=true fpr_mask=0x00000000
