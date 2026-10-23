#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CED74(CpuContext* ctx);
extern "C" uint64_t func_800CED74_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803BD424(CpuContext* ctx);
extern "C" uint64_t func_803BD424_ra38_1fe_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double, double, double, double, double);
extern "C" void func_803BE508(CpuContext* ctx);
extern "C" uint32_t func_803BE508_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_803BE858(CpuContext* ctx);
extern "C" uint32_t func_803BE858_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_803BE37C_ra38_1fe_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4, double arg_f5, double arg_f6, double arg_f7, double arg_f8)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r25 = ctx->gpr[25];
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
    PPC_FPR f5; f5.d = arg_f5;
    PPC_FPR f6; f6.d = arg_f6;
    PPC_FPR f7; f7.d = arg_f7;
    PPC_FPR f8; f8.d = arg_f8;
    const uint32_t r25_entry = r25;
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    const uint32_t r29_entry = r29;

    goto loc_803BE37C;

loc_803BE37C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r28 = r3;
    r26 = r4;
    r3 = (r1 + 8);
    ctx->lr = 0x803BE3A0u;
    if constexpr (KnownRegArgsCpuCall<0x803BE508u>(&func_803BE508)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_803BE508_AB3 = func_803BE508_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803BE508_AB3;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        InvokeDirectCpu<0x803BE508u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r25 = MemoryInline::FlatRead32((r28 + 336));
}

loc_803BE3A8:
{
    if ((static_cast<int32_t>(r25) == static_cast<int32_t>(0))) {
        goto loc_803BE4F0;
    }
}

loc_803BE3AC:
{
    r3 = r26;
    r4 = r25;
    r5 = 18432;
    ctx->lr = 0x803BE3BCu;
    if constexpr (KnownRegArgsCpuCall<0x800CED74u>(&func_800CED74)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        const auto regargs_result_800CED74_E85 = func_800CED74_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_800CED74_E85);
        r4 = static_cast<uint32_t>(regargs_result_800CED74_E85 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
        ctx->gpr[11] = r11;
        ctx->gpr[25] = r25;
        ctx->gpr[26] = r26;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->fpr[5] = f5;
        ctx->fpr[6] = f6;
        ctx->fpr[7] = f7;
        ctx->fpr[8] = f8;
        InvokeDirectCpu<0x800CED74u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r25 = ctx->gpr[25];
        r26 = ctx->gpr[26];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
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
}

loc_803BE3C0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_803BE4F0;
    }
}

loc_803BE3C4:
{
    r29 = MemoryInline::FlatRead32((r25 + 4));
    r31 = (r25 + 8);
    r30 = 0;
    r27 = 65536;
    r25 = -1;
    r26 = 0;
    goto loc_803BE4E8;
}

loc_803BE3E0:
{
    r0 = MemoryInline::FlatRead16(r31);
}

loc_803BE3E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_803BE4E0;
    }
}

loc_803BE3EC:
{
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 52;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80004350u>(ctx);
    r3 = ctx->gpr[3];
    r3 = (r1 + 8);
    r4 = (r31 + 4);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80041EA4u>(ctx);
    r3 = (r1 + 20);
    r4 = (r31 + 16);
    // inline leaf 0x800FC138 (7 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + -14), 0, 54u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 14u, r4);
    guest_range_2 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 18u, (r4 + 4));
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 22u, (r4 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r3 + 8), r0);
    // end of inlined leaf 0x800FC138
    r3 = MemoryInline::ReadResolved8(guest_range_1, 47u, (r31 + 49));
    MemoryInline::WriteResolved16(guest_range_2, 20u, (r1 + 40), static_cast<uint16_t>(r3));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 47u, (r31 + 49));
    MemoryInline::WriteResolved16(guest_range_2, 22u, (r1 + 42), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 34u, (r31 + 36));
    MemoryInline::WriteResolved16(guest_range_2, 24u, (r1 + 44), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 36u, (r31 + 38));
    MemoryInline::WriteResolved16(guest_range_2, 26u, (r1 + 46), static_cast<uint16_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 38u, (r31 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r1 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 42u, (r31 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 16u, (r1 + 36), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 46u, (r31 + 48));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    MemoryInline::WriteResolved8(guest_range_2, 32u, (r1 + 52), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 0u, (r31 + 2));
    r0 = (r0 & 255);
    MemoryInline::WriteResolved8(guest_range_2, 33u, (r1 + 53), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r31 + 28));
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 56), r0);
    r0 = MemoryInline::ReadResolved16(guest_range_1, 50u, (r31 + 52));
    MemoryInline::WriteResolved16(guest_range_2, 28u, (r1 + 48), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 52u, (r31 + 54));
    MemoryInline::WriteResolved16(guest_range_2, 30u, (r1 + 50), static_cast<uint16_t>(r0));
    r0 = (r3 + -5);
}

loc_803BE47C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(3))) {
        goto loc_803BE494;
    }
}

loc_803BE480:
{
    r0 = (r3 + -16);
}

loc_803BE488:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(2))) {
        goto loc_803BE494;
    }
}

loc_803BE48C:
{
}

loc_803BE490:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(10))) {
        goto loc_803BE4AC;
    }
}

loc_803BE494:
{
    MemoryInline::FlatWriteRam8((r1 + 52), static_cast<uint8_t>(r25));
    r0 = (r27 + -1);
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 56), r26);
    goto loc_803BE4D4;
}

loc_803BE4AC:
{
    ctx->lr = 0x803BE4B0u;
    if constexpr (KnownRegArgsCpuCall<0x803BE858u>(&func_803BE858)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[4] = r4;
        const auto regargs_result_803BE858_271F = func_803BE858_ra8_0_8_0(ctx, r3);
        r3 = regargs_result_803BE858_271F;
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
    r0 = (r3 & 255);
}

loc_803BE4B8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BE4D4;
    }
}

loc_803BE4BC:
{
    r0 = MemoryInline::FlatRead8((r28 + 234));
}

loc_803BE4C4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_803BE4D4;
    }
}

loc_803BE4C8:
{
    r0 = (r27 + -1);
    MemoryInline::FlatWriteRam16((r1 + 44), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 46), static_cast<uint16_t>(r0));
}

loc_803BE4D4:
{
    r3 = (r1 + 8);
    r4 = MemoryInline::FlatRead8((r1 + 53));
    ctx->lr = 0x803BE4E0u;
    if constexpr (KnownRegArgsCpuCall<0x803BD424u>(&func_803BD424)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[11] = r11;
        ctx->gpr[27] = r27;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->fpr[0] = f0;
        const auto regargs_result_803BD424_2C9F = func_803BD424_ra38_1fe_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d, f5.d, f6.d, f7.d, f8.d);
        r3 = static_cast<uint32_t>(regargs_result_803BD424_2C9F);
        r4 = static_cast<uint32_t>(regargs_result_803BD424_2C9F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
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
        InvokeDirectCpu<0x803BD424u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r27 = ctx->gpr[27];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
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
}

loc_803BE4E0:
{
    r30 = (r30 + 1);
    r31 = (r31 + 56);
}

loc_803BE4E8:
{
}

loc_803BE4EC:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r29))) {
        goto loc_803BE3E0;
    }
}

loc_803BE4F0:
{
    r11 = (r1 + 96);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_3 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
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
    ctx->gpr[25] = r25_entry;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    ctx->gpr[29] = r29_entry;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_803BE37C(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_803BE37C_ra38_1fe_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d, ctx->fpr[5].d, ctx->fpr[6].d, ctx->fpr[7].d, ctx->fpr[8].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x01FFFFFF gpr_return=0x00000018 fpr_read=0xFF803FFF fpr_write=0xFF803FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x803BE37C func_803BE37C preserves=true fpr_mask=0x00000000
