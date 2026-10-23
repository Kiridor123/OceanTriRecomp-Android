#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80126098(CpuContext* ctx);
extern "C" uint64_t func_80126098_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_801296D8(CpuContext* ctx);
extern "C" uint64_t func_801296D8_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80135B28(CpuContext* ctx);
extern "C" uint64_t func_80135B28_ra8_0_18_0(CpuContext*, uint32_t);
extern "C" void func_8029F528(CpuContext* ctx);
extern "C" uint32_t func_8029F528_ra38_0_10_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801293A0_ra38_e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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
    uint32_t cr = ctx->cr;

    goto loc_801293A0;

loc_801293A0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x80457480 (8 guest instruction(s))
    // end of inlined leaf 0x80457480
    r27 = r3;
    r28 = r4;
    r25 = r5;
    r29 = r6;
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
    r0 = 1127219200;
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80126098_A3C = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_A3C);
        r4 = static_cast<uint32_t>(regargs_result_80126098_A3C >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r3 + 160));
    r31 = MemoryInline::FlatRead32((r3 + 84));
    r0 = (r28 & 255);
    r0 = (r0 * 92);
    r3 = (r27 + r0);
    r30 = (r3 + 2568);
    r3 = r27;
    if constexpr (KnownRegArgsCpuCall<0x80126098u>(&func_80126098)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80126098_E42 = func_80126098_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80126098_E42);
        r4 = static_cast<uint32_t>(regargs_result_80126098_E42 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80126098u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r3 = MemoryInline::FlatRead32((r3 + 160));
    r26 = MemoryInline::FlatRead32((r3 + 80));
}

loc_80129404:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_801296B4;
    }
}

loc_80129408:
{
}

loc_8012940C:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_80129414;
    }
}

loc_80129410:
{
    goto loc_801296B4;
}

loc_80129414:
{
    r3 = r30;
    // inline leaf 0x8029F59C (3 guest instruction(s))
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // end of inlined leaf 0x8029F59C
    r0 = (r25 * 26);
    r31 = (r31 + r0);
    r0 = MemoryInline::FlatRead8((r31 + 15));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r26_addr_1 = (r26 + r0);
    r0 = MemoryInline::FlatRead32(r26_addr_1);
    MemoryInline::FlatWrite32((r30 + 8), r0);
    r0 = (r28 & 255);
    r3 = (r27 + r0);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 2796), static_cast<uint8_t>(r0));
    r0 = (r29 & 65535);
    r0 = (r0 & 2);
}

loc_80129450:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80129460;
    }
}

loc_80129454:
{
    r0 = MemoryInline::FlatRead8((r3 + 2796));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8((r3 + 2796), static_cast<uint8_t>(r0));
}

loc_80129460:
{
    r0 = (r29 & 65535);
    r0 = (r0 & 1);
}

loc_8012946C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80129494;
    }
}

loc_80129470:
{
    r3 = r27;
    // inline leaf 0x8012F960 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead16((r3 + 116));
    // end of inlined leaf 0x8012F960
    r0 = r3;
    r3 = r30;
    r4 = (r0 & 65535);
    r5 = 0;
    r6 = 0;
    r7 = 0;
    ctx->lr = 0x80129494u;
    if constexpr (KnownRegArgsCpuCall<0x8029F528u>(&func_8029F528)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        const auto regargs_result_8029F528_1902 = func_8029F528_ra38_0_10_0(ctx, r3, r4, r5);
        r4 = regargs_result_8029F528_1902;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r11 = ctx->gpr[11];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x8029F528u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r4 = ctx->gpr[4];
        r11 = ctx->gpr[11];
    }
}

loc_80129494:
{
    r0 = (r29 & 65535);
    r0 = (r0 & 4);
}

loc_801294A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801294B0;
    }
}

loc_801294A4:
{
    r3 = r30;
    r4 = 512;
    // inline leaf 0x8029F5A8 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // end of inlined leaf 0x8029F5A8
}

loc_801294B0:
{
    r3 = r30;
    r4 = 16;
    // inline leaf 0x8029F5A8 (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    // end of inlined leaf 0x8029F5A8
    r3 = MemoryInline::FlatRead16(r31);
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
}

loc_801294C4:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_80129574;
    }
}

loc_801294C8:
{
    f1.d = MemoryInline::FlatReadFloat32((r27 + 104));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28224));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_801294DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801294F0;
    }
}

loc_801294E0:
{
    r0 = MemoryInline::FlatRead32((r27 + 112));
    r0 = (r0 & 1);
}

loc_801294EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801294F4;
    }
}

loc_801294F0:
{
    f2.d = MemoryInline::FlatReadFloat32((r2 + -28232));
}

loc_801294F4:
{
    f3.d = MemoryInline::FlatReadFloat32((r27 + 152));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    r0 = MemoryInline::FlatRead16((r31 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 60), f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -28232));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_80129544:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801295A8;
    }
}

loc_80129548:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 60));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 60), f0.d);
    MemoryInline::FlatWriteFloat32((r30 + 56), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 60));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80129560:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801295A8;
    }
}

loc_80129568:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 5), static_cast<uint8_t>(r0));
    goto loc_801296B4;
}

loc_80129574:
{
    r0 = (0 - r3);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -28216));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 56), f0.d);
    r0 = MemoryInline::FlatRead16((r31 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 60), f0.d);
}

loc_801295A8:
{
    r3 = r30;
    r4 = r31;
    ctx->lr = 0x801295B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x8029F268u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    r0 = 23;
    MemoryInline::FlatWrite8((r30 + 49), static_cast<uint8_t>(r0));
    r3 = r27;
    ctx->lr = 0x801295C4u;
    if constexpr (KnownRegArgsCpuCall<0x80135B28u>(&func_80135B28)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        const auto regargs_result_80135B28_3076 = func_80135B28_ra8_0_18_0(ctx, r3);
        r3 = static_cast<uint32_t>(regargs_result_80135B28_3076);
        r4 = static_cast<uint32_t>(regargs_result_80135B28_3076 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80135B28u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r0 = (r3 & 255);
}

loc_801295CC:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_801295DC;
    }
}

loc_801295D0:
{
    r0 = MemoryInline::FlatRead8((r30 + 49));
    r0 = (r0 & 239);
}

loc_801295D8:
{
    MemoryInline::FlatWrite8((r30 + 49), static_cast<uint8_t>(r0));
}

loc_801295DC:
{
    r0 = (r29 & 65535);
    r0 = (r0 & 64);
}

loc_801295E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801295F4;
    }
}

loc_801295EC:
{
    r0 = 16;
    MemoryInline::FlatWrite8((r30 + 49), static_cast<uint8_t>(r0));
}

loc_801295F4:
{
    r0 = (r29 & 65535);
    r0 = (r0 & 256);
}

loc_80129600:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012960C;
    }
}

loc_80129604:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 49), static_cast<uint8_t>(r0));
}

loc_8012960C:
{
    r0 = (r29 & 65535);
    r0 = (r0 & 512);
}

loc_80129618:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80129624;
    }
}

loc_8012961C:
{
    r0 = 5;
    MemoryInline::FlatWrite8((r30 + 49), static_cast<uint8_t>(r0));
}

loc_80129624:
{
    r0 = (r29 & 65535);
    r0 = (r0 & 128);
}

loc_80129630:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80129640;
    }
}

loc_80129634:
{
    r0 = MemoryInline::FlatRead8((r30 + 49));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite8((r30 + 49), static_cast<uint8_t>(r0));
}

loc_80129640:
{
    r0 = 2;
    MemoryInline::FlatWrite8((r30 + 50), static_cast<uint8_t>(r0));
    r0 = (r29 & 65535);
    r0 = (r0 & 16);
}

loc_80129654:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012966C;
    }
}

loc_80129658:
{
    r0 = MemoryInline::FlatRead8((r27 + 2793));
}

loc_80129660:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_8012966C;
    }
}

loc_80129664:
{
    r0 = MemoryInline::FlatRead16((r27 + 2794));
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r0));
}

loc_8012966C:
{
    r3 = (r29 & 65535);
    r0 = (r3 & 8);
}

loc_80129678:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80129690;
    }
}

loc_8012967C:
{
    r0 = MemoryInline::FlatRead16((r30 + 12));
    MemoryInline::FlatWrite16((r27 + 2794), static_cast<uint16_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8((r27 + 2793), static_cast<uint8_t>(r0));
    goto loc_801296A8;
}

loc_80129690:
{
    r0 = (r3 & 32);
}

loc_80129698:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801296A8;
    }
}

loc_8012969C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r27 + 2794), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r27 + 2793), static_cast<uint8_t>(r0));
}

loc_801296A8:
{
    r3 = r27;
    r4 = r30;
    ctx->lr = 0x801296B4u;
    if constexpr (KnownRegArgsCpuCall<0x801296D8u>(&func_801296D8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_801296D8_3FD1 = func_801296D8_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_801296D8_3FD1);
        r4 = static_cast<uint32_t>(regargs_result_801296D8_3FD1 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x801296D8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
}

loc_801296B4:
{
    r11 = (r1 + 64);
    // inline leaf 0x804574CC (8 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    // end of inlined leaf 0x804574CC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801293A0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801293A0_ra38_e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x00003FFF gpr_write=0x00001FFB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801293A0 func_801293A0 preserves=true fpr_mask=0x00000000
