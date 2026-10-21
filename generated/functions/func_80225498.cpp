#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80224E8C(CpuContext* ctx);
extern "C" uint64_t func_80224E8C_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80225148(CpuContext* ctx);
extern "C" uint64_t func_80225148_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_802252E4(CpuContext* ctx);
extern "C" uint64_t func_802252E4_ra38_e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double);
extern "C" void func_80226B44(CpuContext* ctx);
extern "C" uint64_t func_80226B44_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80274150(CpuContext* ctx);
extern "C" uint64_t func_80274150_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);

extern "C" void func_80225498(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x80225498u);
    goto loc_80225498;

loc_80225498:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -160), 0, 168u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r26 = r3;
    r25 = r4;
    r27 = r5;
    r29 = MemoryInline::FlatRead32(r3);
    r3 = (r1 + 80);
    // inline leaf 0x80050570 (1 guest instruction(s))
    // end of inlined leaf 0x80050570
    r3 = (r1 + 44);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r3 = (r1 + 20);
    // inline leaf 0x80043F0C (1 guest instruction(s))
    // end of inlined leaf 0x80043F0C
    r28 = 0;
    r31 = (r25 * 272);
    r3 = (r26 + r31);
    r30 = (r3 + 4676);
    r25 = r30;
}

loc_802254E8:
{
    r3 = r26;
    r4 = r25;
    // inline leaf 0x8022312C (12 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, r4, f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r4 + 4), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r4 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r4 + 12), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r4 + 16), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r4 + 20), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r4 + 24), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r4 + 28), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 32u, (r4 + 32), f0.d);
    }
    // end of inlined leaf 0x8022312C
    r25 = (r25 + 36);
    r28 = (r28 + 1);
}

loc_80225500:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(7))) {
        goto loc_802254E8;
    }
}

loc_80225504:
{
    r3 = r29;
    // inline leaf 0x8026A36C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 316));
    r3 = MemoryInline::FlatRead16((r3 + 84));
    // end of inlined leaf 0x8026A36C
    r25 = r3;
    r0 = (r27 + -9);
}

loc_80225518:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80225530;
    }
}

loc_8022551C:
{
}

loc_80225520:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(5))) {
        goto loc_80225538;
    }
}

loc_80225524:
{
}

loc_80225528:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(6))) {
        goto loc_80225570;
    }
}

loc_8022552C:
{
    goto loc_80225578;
}

loc_80225530:
{
    r28 = 4;
    goto loc_80225588;
}

loc_80225538:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15796));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f0.d);
    r3 = (r29 + 464);
    ctx->lr = 0x80225550u;
    if constexpr (KnownRegArgsCpuCall<0x80225148u>(&func_80225148)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        const auto regargs_result_80225148_16F5 = func_80225148_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80225148_16F5);
        r4 = static_cast<uint32_t>(regargs_result_80225148_16F5 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80225148u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f1.d);
    r25 = (r1 + 32);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    goto loc_80225750;
}

loc_80225570:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    goto loc_80225780;
}

loc_80225578:
{
    r3 = r29;
    r4 = r27;
    ctx->lr = 0x80225584u;
    if constexpr (KnownRegArgsCpuCall<0x80224E8Cu>(&func_80224E8C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_80224E8C_1C99 = func_80224E8C_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_80224E8C_1C99);
        r4 = static_cast<uint32_t>(regargs_result_80224E8C_1C99 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x80224E8Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r28 = r3;
}

loc_80225588:
{
    // inline leaf 0x800D0788 (4 guest instruction(s))
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    r3 = MemoryInline::FlatRead8((r3 + 2167));
    // end of inlined leaf 0x800D0788
    r0 = (r3 & 255);
}

loc_80225594:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(2))) {
        goto loc_802255B0;
    }
}

loc_80225598:
{
    r3 = r29;
    r4 = r27;
    r5 = 0;
    // inline leaf 0x80226A70 (16 guest instruction(s))
}

loc_inl7_0x80226A70:
{
    r0 = (r5 & 255);
}

loc_inl7_0x80226A78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl7_0x80226A88;
    }
}

loc_inl7_0x80226A7C:
{
}

loc_inl7_0x80226A80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_inl7_0x80226A9C;
    }
}

loc_inl7_0x80226A84:
{
    goto loc_inl7_0x80226AA8;
}

loc_inl7_0x80226A88:
{
    r4 = (r4 * 24);
    r3 = 0x805C0000u;
    r0 = (r3 + -18456);
    r3 = (r0 + r4);
    goto loc_inl7_cont_80226A70;
}

loc_inl7_0x80226A9C:
{
    r3 = 0x805C0000u;
    r3 = (r3 + -18192);
    goto loc_inl7_cont_80226A70;
}

loc_inl7_0x80226AA8:
{
    r3 = 0;
}

loc_inl7_cont_80226A70:
{
    // end of inlined leaf 0x80226A70
    r25 = r3;
    goto loc_80225674;
}

loc_802255B0:
{
    r0 = (r25 & 65535);
}

loc_802255B8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(313))) {
        goto loc_802255C4;
    }
}

loc_802255BC:
{
}

loc_802255C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(356))) {
        goto loc_802255E8;
    }
}

loc_802255C4:
{
    r0 = (r28 & 255);
}

loc_802255CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_802255E8;
    }
}

loc_802255D0:
{
    r3 = r29;
    r4 = r27;
    r5 = 3;
    ctx->lr = 0x802255E0u;
    if constexpr (KnownRegArgsCpuCall<0x80226B44u>(&func_80226B44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80226B44_2870 = func_80226B44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80226B44_2870);
        r4 = static_cast<uint32_t>(regargs_result_80226B44_2870 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80226B44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r25 = r3;
    goto loc_80225674;
}

loc_802255E8:
{
    r3 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r3 + -4);
}

loc_802255F4:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_80225660;
    }
}

loc_802255F8:
{
    r3 = r29;
    ctx->lr = 0x80225600u;
    if constexpr (KnownRegArgsCpuCall<0x80274150u>(&func_80274150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80274150_2CFF = func_80274150_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80274150_2CFF);
        r4 = static_cast<uint32_t>(regargs_result_80274150_2CFF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80274150u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80225608:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80225648;
    }
}

loc_8022560C:
{
    r3 = MemoryInline::FlatRead32((r29 + 316));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -15812));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022561C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80225648;
    }
}

loc_80225624:
{
    r5 = (r28 & 255);
}

loc_8022562C:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(1))) {
        goto loc_80225648;
    }
}

loc_80225630:
{
    r3 = r29;
    r4 = (r25 & 65535);
    r6 = (r1 + 56);
    ctx->lr = 0x80225640u;
    if constexpr (KnownRegArgsCpuCall<0x802252E4u>(&func_802252E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->cr = cr;
        const auto regargs_result_802252E4_337D = func_802252E4_ra38_e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d);
        r3 = static_cast<uint32_t>(regargs_result_802252E4_337D);
        r4 = static_cast<uint32_t>(regargs_result_802252E4_337D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x802252E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        cr = ctx->cr;
    }
    r25 = r3;
    goto loc_80225674;
}

loc_80225648:
{
    r3 = r29;
    r4 = r27;
    r5 = (r28 & 255);
    ctx->lr = 0x80225658u;
    if constexpr (KnownRegArgsCpuCall<0x80226B44u>(&func_80226B44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80226B44_38CA = func_80226B44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80226B44_38CA);
        r4 = static_cast<uint32_t>(regargs_result_80226B44_38CA >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80226B44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r25 = r3;
    goto loc_80225674;
}

loc_80225660:
{
    r3 = r29;
    r4 = r27;
    r5 = (r28 & 255);
    ctx->lr = 0x80225670u;
    if constexpr (KnownRegArgsCpuCall<0x80226B44u>(&func_80226B44)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        const auto regargs_result_80226B44_3CCD = func_80226B44_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80226B44_3CCD);
        r4 = static_cast<uint32_t>(regargs_result_80226B44_3CCD >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->cr = cr;
        InvokeDirectCpu<0x80226B44u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r25 = r3;
}

loc_80225674:
{
    r3 = (r1 + 8);
    r4 = (r25 + 12);
    // inline leaf 0x80045394 (7 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32(r4);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80045394
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    r0 = (r28 & 255);
}

loc_8022568C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(4))) {
        goto loc_802256A4;
    }
}

loc_80225690:
{
}

loc_80225694:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_802256AC;
    }
}

loc_80225698:
{
}

loc_8022569C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_802256B4;
    }
}

loc_802256A0:
{
    goto loc_802256BC;
}

loc_802256A4:
{
    r27 = 10;
    goto loc_80225744;
}

loc_802256AC:
{
    r27 = 11;
    goto loc_80225744;
}

loc_802256B4:
{
    r27 = 7;
    goto loc_80225744;
}

loc_802256BC:
{
}

loc_802256C0:
{
    if ((static_cast<uint32_t>(r27) == static_cast<uint32_t>(1))) {
        goto loc_802256CC;
    }
}

loc_802256C4:
{
}

loc_802256C8:
{
    if ((static_cast<uint32_t>(r27) != static_cast<uint32_t>(8))) {
        goto loc_802256D4;
    }
}

loc_802256CC:
{
    r27 = 2;
    goto loc_802256D8;
}

loc_802256D4:
{
    r27 = 3;
}

loc_802256D8:
{
    r3 = MemoryInline::FlatRead8((r29 + 2));
    r0 = (r3 + -4);
}

loc_802256E4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_80225704;
    }
}

loc_802256E8:
{
}

loc_802256EC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_80225730;
    }
}

loc_802256F0:
{
}

loc_802256F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_80225738;
    }
}

loc_802256F8:
{
}

loc_802256FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(8))) {
        goto loc_80225740;
    }
}

loc_80225700:
{
    goto loc_80225728;
}

loc_80225704:
{
    r3 = r29;
    ctx->lr = 0x8022570Cu;
    if constexpr (KnownRegArgsCpuCall<0x80274150u>(&func_80274150)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80274150_48E7 = func_80274150_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80274150_48E7);
        r4 = static_cast<uint32_t>(regargs_result_80274150_48E7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->cr = cr;
        InvokeDirectCpu<0x80274150u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_80225714:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_80225720;
    }
}

loc_80225718:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15792));
    goto loc_80225744;
}

loc_80225720:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15788));
    goto loc_80225744;
}

loc_80225728:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15792));
    goto loc_80225744;
}

loc_80225730:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15816));
    goto loc_80225744;
}

loc_80225738:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15788));
    goto loc_80225744;
}

loc_80225740:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -15788));
}

loc_80225744:
{
    r3 = (r26 + r31);
    MemoryInline::FlatWrite32((r3 + 4668), r27);
    MemoryInline::FlatWrite8((r3 + 4673), static_cast<uint8_t>(r28));
}

loc_80225750:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32(r25);
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 4));
    MemoryInline::FlatWriteFloat32((r30 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r25 + 8));
    MemoryInline::FlatWriteFloat32((r30 + 20), f0.d);
}

loc_80225780:
{
    r11 = (r1 + 160);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000207F gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0xC000000F fpr_write=0xC000000F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80225498 func_80225498 preserves=true fpr_mask=0x00000000
