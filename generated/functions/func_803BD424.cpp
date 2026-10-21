#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8007892C(CpuContext* ctx);
extern "C" uint32_t func_8007892C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80078A94(CpuContext* ctx);
extern "C" uint64_t func_80078A94_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007B8DC(CpuContext* ctx);
extern "C" uint64_t func_8007B8DC_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8007BA6C(CpuContext* ctx);
extern "C" uint32_t func_8007BA6C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_800CF2E4(CpuContext* ctx);
extern "C" uint32_t func_800CF2E4_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_800E05C4(CpuContext* ctx);
extern "C" uint64_t func_800E05C4_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_800E228C(CpuContext* ctx);
extern "C" uint64_t func_800E228C_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_80223608(CpuContext* ctx);
extern "C" uint64_t func_80223608_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_803BA104(CpuContext* ctx);
extern "C" uint32_t func_803BA104_ra28_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_803BE858(CpuContext* ctx);
extern "C" uint32_t func_803BE858_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" MkwStateFreeResult2 func_8007BA6C_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_803BD424_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;

    MKW_GUEST_ENTER(0x803BD424u);
    goto loc_803BD424;

loc_803BD424:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457488 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    // end of inlined leaf 0x80457488
    r28 = r3;
    r27 = r4;
    r3 = (r1 + 16);
    r4 = 0;
    ctx->lr = 0x803BD44Cu;
    if constexpr (KnownRegArgsCpuCall<0x8007B8DCu>(&func_8007B8DC)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007B8DC_EBC = func_8007B8DC_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8007B8DC_EBC);
        r4 = static_cast<uint32_t>(regargs_result_8007B8DC_EBC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8007B8DCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r3 = (r1 + 12);
    r4 = 0;
    ctx->lr = 0x803BD458u;
    if constexpr (KnownRegArgsCpuCall<0x80078A94u>(&func_80078A94)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80078A94_11E6 = func_80078A94_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80078A94_11E6);
        r4 = static_cast<uint32_t>(regargs_result_80078A94_11E6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80078A94u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r30 = MemoryInline::FlatRead32((r13 + -16840));
}

loc_803BD460:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_803BD46C;
    }
}

loc_803BD464:
{
    r3 = 0;
    goto loc_803BD7E4;
}

loc_803BD46C:
{
    if constexpr (KnownRegArgsCpuCall<0x803BA104u>(&func_803BA104)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803BA104_15E5 = func_803BA104_ra28_0_8_0(ctx, r3, r5);
        r3 = regargs_result_803BA104_15E5;
        r0 = ctx->gpr[0];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x803BA104u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r29 = r3;
}

loc_803BD478:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803BD484;
    }
}

loc_803BD47C:
{
    r3 = 0;
    goto loc_803BD7E4;
}

loc_803BD484:
{
    r3 = 0;
    // inline leaf 0x800CFAF4 (16 guest instruction(s))
}

loc_inl1_0x800CFAF4:
{
    r4 = 0x80660000u;
    r4 = (r4 + -21920);
    r4 = MemoryInline::FlatRead32((r4 + 164));
}

loc_inl1_0x800CFB04:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800CFB10;
    }
}

loc_inl1_0x800CFB08:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB10:
{
    r0 = (r3 & 255);
}

loc_inl1_0x800CFB18:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(7))) {
        goto loc_inl1_0x800CFB24;
    }
}

loc_inl1_0x800CFB1C:
{
    r3 = 0;
    goto loc_inl1_cont_800CFAF4;
}

loc_inl1_0x800CFB24:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 16));
}

loc_inl1_cont_800CFAF4:
{
    // end of inlined leaf 0x800CFAF4
    ctx->lr = 0x803BD490u;
    if constexpr (KnownRegArgsCpuCall<0x803BE858u>(&func_803BE858)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803BE858_1CE7 = func_803BE858_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803BE858_1CE7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x803BE858u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r31 = r3;
    r0 = 1;
    MemoryInline::FlatWriteRam8(r29, static_cast<uint8_t>(r0));
    r0 = 0;
    MemoryInline::FlatWriteRam8((r29 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r29 + 3), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r29 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r29 + 4), static_cast<uint8_t>(r27));
    r3 = (r29 + 464);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r29 + 476);
    r4 = (r28 + 12);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r3 = (r29 + 20);
    r4 = r28;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r29 + 32);
    r4 = (r28 + 12);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    guest_range_0 = MemoryInline::ResolveRangeHost((r28 + 24), 0, 28u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r28 + 24));
    MemoryInline::FlatWriteRamFloat32((r29 + 496), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r28 + 28));
    MemoryInline::FlatWriteRamFloat32((r29 + 500), f0.d);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r28 + 32));
    MemoryInline::FlatWriteRam16((r29 + 504), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r28 + 36));
    MemoryInline::FlatWriteRam16((r29 + 506), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r28 + 34));
    MemoryInline::FlatWriteRam16((r29 + 508), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r28 + 38));
    MemoryInline::FlatWriteRam16((r29 + 510), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 16u, (r28 + 40));
    MemoryInline::FlatWriteRam16((r29 + 516), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 18u, (r28 + 42));
    MemoryInline::FlatWriteRam16((r29 + 518), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r13 + -16832));
    r4 = (r31 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r28 + 48));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_2);
    MemoryInline::FlatWriteRam32((r29 + 492), r0);
    r3 = MemoryInline::FlatRead16((r29 + 504));
    r0 = (r3 + -5);
}

loc_803BD54C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_803BD620;
    }
}

loc_803BD550:
{
}

loc_803BD554:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(8))) {
        goto loc_803BD574;
    }
}

loc_803BD558:
{
}

loc_803BD55C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(10))) {
        goto loc_803BD620;
    }
}

loc_803BD560:
{
}

loc_803BD564:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(16))) {
        goto loc_803BD620;
    }
}

loc_803BD568:
{
}

loc_803BD56C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(17))) {
        goto loc_803BD62C;
    }
}

loc_803BD570:
{
    goto loc_803BD650;
}

loc_803BD574:
{
    ctx->lr = 0x803BD578u;
    if constexpr (KnownRegArgsCpuCall<0x800CF2E4u>(&func_800CF2E4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_800CF2E4_2F44 = func_800CF2E4_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_800CF2E4_2F44;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x800CF2E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
}

loc_803BD57C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803BD5BC;
    }
}

loc_803BD580:
{
    // inline leaf 0x803B33F8 (7 guest instruction(s))
}

loc_inl4_0x803B33F8:
{
    r3 = 0x806C0000u;
    r3 = (r3 + 31960);
    r3 = MemoryInline::FlatRead32((r3 + 60));
}

loc_inl4_0x803B3408:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_inl4_return;
    }
}

loc_inl4_0x803B340C:
{
    r3 = 0;
    goto loc_inl4_cont_803B33F8;
}

loc_inl4_return:
{
}

loc_inl4_cont_803B33F8:
{
    // end of inlined leaf 0x803B33F8
}

loc_803BD588:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803BD5A4;
    }
}

loc_803BD58C:
{
    r0 = MemoryInline::FlatRead8((r3 + 139));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_1 & -16);
    r3 = 0x80600000u;
    r0 = (r3 + -29792);
    r28 = (r0 + r4);
    goto loc_803BD5C8;
}

loc_803BD5A4:
{
    r0 = (r31 & 255);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r4 = (r4_rot_2 & -16);
    r3 = 0x80600000u;
    r0 = (r3 + -29792);
    r28 = (r0 + r4);
    goto loc_803BD5C8;
}

loc_803BD5BC:
{
    r3 = 0x80600000u;
    r3 = (r3 + -29792);
    r28 = (r3 + 16);
}

loc_803BD5C8:
{
    r3 = (r1 + 20);
    f1.d = MemoryInline::FlatReadFloat32(r28);
    f2.d = MemoryInline::FlatReadFloat32((r28 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r28 + 8));
    // inline leaf 0x80041EF0 (4 guest instruction(s))
    MemoryInline::FlatWriteRamFloat32(r3, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    // end of inlined leaf 0x80041EF0
    r4 = r3;
    r3 = (r29 + 464);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r29 + 20);
    r4 = (r29 + 464);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r29 + 484), r0);
    MemoryInline::FlatWriteRam32((r29 + 476), r0);
    r0 = MemoryInline::FlatRead32((r28 + 12));
    MemoryInline::FlatWriteRam32((r29 + 480), r0);
    r3 = (r29 + 32);
    r4 = (r29 + 476);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam32(r3, r0);
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r0 = 255;
    MemoryInline::FlatWriteRam8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_803BD6CC;
}

loc_803BD620:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_803BD6CC;
}

loc_803BD62C:
{
    r4 = (r30 + 196608);
    r0 = MemoryInline::FlatRead8((r4 + 19014));
    MemoryInline::FlatWriteRam8((r29 + 542), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r4 + 19014));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r4 + 19014), static_cast<uint8_t>(r0));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_803BD6CC;
}

loc_803BD650:
{
    r3 = MemoryInline::ReadResolved8(guest_range_0, 20u, (r28 + 44));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_803BD65C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(255))) {
        goto loc_803BD66C;
    }
}

loc_803BD660:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_803BD6CC;
}

loc_803BD66C:
{
}

loc_803BD670:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(1))) {
        goto loc_803BD69C;
    }
}

loc_803BD674:
{
}

loc_803BD678:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(18))) {
        goto loc_803BD688;
    }
}

loc_803BD67C:
{
    r0 = 129;
    MemoryInline::FlatWriteRam8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_803BD6CC;
}

loc_803BD688:
{
    r3 = 0x80600000u;
    r3 = (r3 + -30220);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
    MemoryInline::FlatWriteRam8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_803BD6CC;
}

loc_803BD69C:
{
}

loc_803BD6A0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(6))) {
        goto loc_803BD6B8;
    }
}

loc_803BD6A4:
{
}

loc_803BD6A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(19))) {
        goto loc_803BD6B8;
    }
}

loc_803BD6AC:
{
    r0 = 255;
    MemoryInline::FlatWriteRam8((r29 + 5), static_cast<uint8_t>(r0));
    goto loc_803BD6CC;
}

loc_803BD6B8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r3 = 0x80600000u;
    r3 = (r3 + -30220);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_4);
    MemoryInline::FlatWriteRam8((r29 + 5), static_cast<uint8_t>(r0));
}

loc_803BD6CC:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_803BD6D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_803BD7CC;
    }
}

loc_803BD6D8:
{
    r3 = (r29 + 56);
    ctx->lr = 0x803BD6E0u;
    if constexpr (KnownRegArgsCpuCall<0x800E05C4u>(&func_800E05C4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        const auto regargs_result_800E05C4_4641 = func_800E05C4_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_800E05C4_4641);
        r4 = static_cast<uint32_t>(regargs_result_800E05C4_4641 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        InvokeDirectCpu<0x800E05C4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
    }
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_803BD6E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(13))) {
        goto loc_803BD6F4;
    }
}

loc_803BD6EC:
{
    r0 = 12;
    MemoryInline::FlatWriteRam8((r29 + 5), static_cast<uint8_t>(r0));
}

loc_803BD6F4:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_803BD6FC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(17))) {
        goto loc_803BD708;
    }
}

loc_803BD700:
{
    r0 = 16;
    MemoryInline::FlatWriteRam8((r29 + 5), static_cast<uint8_t>(r0));
}

loc_803BD708:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_803BD710:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(11))) {
        goto loc_803BD71C;
    }
}

loc_803BD714:
{
    r0 = 10;
    MemoryInline::FlatWriteRam8((r29 + 5), static_cast<uint8_t>(r0));
}

loc_803BD71C:
{
    r0 = MemoryInline::FlatRead8((r29 + 5));
}

loc_803BD724:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(129))) {
        goto loc_803BD740;
    }
}

loc_803BD728:
{
    r3 = (r29 + 56);
    r4 = (r30 + 24);
    r5 = 100;
    r6 = 7;
    ctx->lr = 0x803BD73Cu;
    if constexpr (KnownRegArgsCpuCall<0x800E228Cu>(&func_800E228C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800E228C_4E3A = func_800E228C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E228C_4E3A);
        r4 = static_cast<uint32_t>(regargs_result_800E228C_4E3A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800E228Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    goto loc_803BD7CC;
}

loc_803BD740:
{
    r3 = (r29 + 56);
    r4 = (r30 + 12);
    r5 = 108;
    r6 = 7;
    ctx->lr = 0x803BD754u;
    if constexpr (KnownRegArgsCpuCall<0x800E228Cu>(&func_800E228C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        const auto regargs_result_800E228C_5597 = func_800E228C_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800E228C_5597);
        r4 = static_cast<uint32_t>(regargs_result_800E228C_5597 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800E228Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
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
    r3 = (r1 + 16);
    r4 = (r29 + 332);
    ctx->lr = 0x803BD760u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8007BA6Cu) && KnownTranslatedCpuCall<0x8007BA6Cu>::kAvailable && !KnownTranslatedCpuCall<0x8007BA6Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8007BA6Cu>()) {
        const auto state_free_result_8007BA6C_5CDC = func_8007BA6C_statefree(r1, r3, r4, 0x803BD760u);
        r0 = static_cast<uint32_t>(state_free_result_8007BA6C_5CDC[0]);
        r1 = static_cast<uint32_t>(state_free_result_8007BA6C_5CDC[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[11] = r11;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x8007BA6Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
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
    r3 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x800988CCu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    r31 = 0;
    r28 = 0x80600000u;
    goto loc_803BD7C4;
}

loc_803BD778:
{
    r3 = (r1 + 16);
    r4 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80098864u>(ctx);
    r3 = ctx->gpr[3];
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    ctx->lr = 0x803BD794u;
    if constexpr (KnownRegArgsCpuCall<0x8007892Cu>(&func_8007892C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8007892C_63D7 = func_8007892C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_8007892C_63D7;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x8007892Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 12);
    ctx->lr = 0x803BD79Cu;
    if constexpr (KnownRegArgsCpuCall<0x80223608u>(&func_80223608)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        const auto regargs_result_80223608_6646 = func_80223608_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80223608_6646);
        r4 = static_cast<uint32_t>(regargs_result_80223608_6646 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        InvokeDirectCpu<0x80223608u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
    }
}

loc_803BD7A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803BD7C0;
    }
}

loc_803BD7A4:
{
    r4 = (r28 + -29584);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8045FD04u>(ctx);
    r3 = ctx->gpr[3];
}

loc_803BD7B0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_803BD7C0;
    }
}

loc_803BD7B4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r31)));
    MemoryInline::FlatWriteRam8((r29 + 541), static_cast<uint8_t>(r0));
    goto loc_803BD7CC;
}

loc_803BD7C0:
{
    r31 = (r31 + 1);
}

loc_803BD7C4:
{
}

loc_803BD7C8:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r30))) {
        goto loc_803BD778;
    }
}

loc_803BD7CC:
{
    r3 = 0x803C0000u;
    r0 = (r3 + -18044);
    MemoryInline::FlatWriteRam32((r29 + 444), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam8((r29 + 540), static_cast<uint8_t>(r0));
    r3 = r29;
}

loc_803BD7E4:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BD424(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BD424_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x38003FFF gpr_write=0x38001FFB gpr_return=0x00000018 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803BD424 func_803BD424 preserves=true fpr_mask=0x00000000
