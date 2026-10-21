#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052BE8(CpuContext* ctx);
extern "C" uint32_t func_80052BE8_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80053AF4(CpuContext* ctx);
extern "C" uint32_t func_80053AF4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80062DBC(CpuContext* ctx);
extern "C" uint32_t func_80062DBC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80069C3C(CpuContext* ctx);
extern "C" uint32_t func_80069C3C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80069C78(CpuContext* ctx);
extern "C" uint32_t func_80069C78_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8009135C(CpuContext* ctx);
extern "C" uint64_t func_8009135C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800915E8(CpuContext* ctx);
extern "C" uint64_t func_800915E8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80092730(CpuContext* ctx);
extern "C" uint64_t func_80092730_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800929F4(CpuContext* ctx);
extern "C" uint64_t func_800929F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80062DBC_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80091404_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    MKW_GUEST_ENTER(0x80091404u);
    goto loc_80091404;

loc_80091404:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457478 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    // end of inlined leaf 0x80457478
    r24 = r3;
    r23 = r4;
    ctx->lr = 0x80091424u;
    if constexpr (KnownRegArgsCpuCall<0x8009135Cu>(&func_8009135C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_8009135C_B67 = func_8009135C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009135C_B67);
        r4 = static_cast<uint32_t>(regargs_result_8009135C_B67 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8009135Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = MemoryInline::FlatRead16((r3 + 52));
    r30 = MemoryInline::FlatRead16((r3 + 54));
    r3 = r24;
    // inline leaf 0x800913C0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800913C0
    r4 = r3;
    r3 = r24;
    r4 = MemoryInline::FlatRead32((r4 + 20));
    // inline leaf 0x8009165C (7 guest instruction(s))
}

loc_inl2_0x8009165C:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x80091664:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x80091670;
    }
}

loc_inl2_0x80091668:
{
    r3 = (r0 + r4);
    goto loc_inl2_cont_8009165C;
}

loc_inl2_0x80091670:
{
    r3 = 0;
}

loc_inl2_cont_8009165C:
{
    // end of inlined leaf 0x8009165C
    r29 = r3;
    r3 = r24;
    // inline leaf 0x800913C0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800913C0
    r4 = r3;
    r3 = r24;
    r4 = MemoryInline::FlatRead32((r4 + 24));
    // inline leaf 0x8009165C (7 guest instruction(s))
}

loc_inl4_0x8009165C:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl4_0x80091664:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x80091670;
    }
}

loc_inl4_0x80091668:
{
    r3 = (r0 + r4);
    goto loc_inl4_cont_8009165C;
}

loc_inl4_0x80091670:
{
    r3 = 0;
}

loc_inl4_cont_8009165C:
{
    // end of inlined leaf 0x8009165C
    r28 = r3;
    r3 = r24;
    // inline leaf 0x800913C0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800913C0
    r4 = r3;
    r3 = r24;
    r4 = MemoryInline::FlatRead32((r4 + 28));
    // inline leaf 0x80091640 (7 guest instruction(s))
}

loc_inl6_0x80091640:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl6_0x80091648:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl6_0x80091654;
    }
}

loc_inl6_0x8009164C:
{
    r3 = (r0 + r4);
    goto loc_inl6_cont_80091640;
}

loc_inl6_0x80091654:
{
    r3 = 0;
}

loc_inl6_cont_80091640:
{
    // end of inlined leaf 0x80091640
    r27 = r3;
    r3 = r24;
    // inline leaf 0x800913C0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800913C0
    r4 = r3;
    r3 = r24;
    r4 = MemoryInline::FlatRead32((r4 + 32));
    // inline leaf 0x80091624 (7 guest instruction(s))
}

loc_inl8_0x80091624:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl8_0x8009162C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_inl8_0x80091638;
    }
}

loc_inl8_0x80091630:
{
    r3 = (r0 + r4);
    goto loc_inl8_cont_80091624;
}

loc_inl8_0x80091638:
{
    r3 = 0;
}

loc_inl8_cont_80091624:
{
    // end of inlined leaf 0x80091624
    r26 = r3;
    r25 = 0;
    r24 = 0;
    goto loc_80091528;
}

loc_800914A8:
{
    r3 = r27;
    // inline leaf 0x800529E8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    // end of inlined leaf 0x800529E8
}

loc_800914B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800914C0;
    }
}

loc_800914B8:
{
    r25 = (r25 + 1);
    goto loc_80091520;
}

loc_800914C0:
{
    r3 = r29;
    r4 = r24;
    ctx->lr = 0x800914CCu;
    if constexpr (KnownRegArgsCpuCall<0x800915E8u>(&func_800915E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800915E8_1BA7 = func_800915E8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800915E8_1BA7);
        r4 = static_cast<uint32_t>(regargs_result_800915E8_1BA7 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800915E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r3 = (r1 + 44);
    r4 = (r1 + 28);
    ctx->lr = 0x800914DCu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80062DBCu) && KnownTranslatedCpuCall<0x80062DBCu>::kAvailable && !KnownTranslatedCpuCall<0x80062DBCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80062DBCu>()) {
        const auto state_free_result_80062DBC_1F85 = func_80062DBC_statefree(r1, r3, r4, 0x800914DCu);
        r1 = static_cast<uint32_t>(state_free_result_80062DBC_1F85[0]);
        ctx->lr = static_cast<uint32_t>(state_free_result_80062DBC_1F85[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80062DBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = MemoryInline::FlatRead32((r1 + 44));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r3 = r23;
    r4 = (r1 + 20);
    ctx->lr = 0x800914F0u;
    if constexpr (KnownRegArgsCpuCall<0x800929F4u>(&func_800929F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_800929F4_2311 = func_800929F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800929F4_2311);
        r4 = static_cast<uint32_t>(regargs_result_800929F4_2311 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800929F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 40);
    r4 = (r1 + 24);
    ctx->lr = 0x80091500u;
    if constexpr (KnownRegArgsCpuCall<0x80069C78u>(&func_80069C78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80069C78_2677 = func_80069C78_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80069C78_2677;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80069C78u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 40);
    // inline leaf 0x800529E8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x800529E8
}

loc_8009150C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80091520;
    }
}

loc_80091510:
{
    r3 = r27;
    r4 = (r1 + 40);
    ctx->lr = 0x8009151Cu;
    if constexpr (KnownRegArgsCpuCall<0x80052BE8u>(&func_80052BE8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80052BE8_2A8F = func_80052BE8_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80052BE8_2A8F;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80052BE8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r25 = (r25 + 1);
}

loc_80091520:
{
    r27 = (r27 + 4);
    r24 = (r24 + 1);
}

loc_80091528:
{
}

loc_8009152C:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r31))) {
        goto loc_800914A8;
    }
}

loc_80091530:
{
    r24 = 0;
    goto loc_800915B8;
}

loc_80091538:
{
    r3 = r26;
    // inline leaf 0x80052F54 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    // end of inlined leaf 0x80052F54
}

loc_80091544:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80091550;
    }
}

loc_80091548:
{
    r25 = (r25 + 1);
    goto loc_800915B0;
}

loc_80091550:
{
    r3 = r28;
    r4 = r24;
    ctx->lr = 0x8009155Cu;
    if constexpr (KnownRegArgsCpuCall<0x800915E8u>(&func_800915E8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[5] = r5;
        const auto regargs_result_800915E8_301A = func_800915E8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_800915E8_301A);
        r4 = static_cast<uint32_t>(regargs_result_800915E8_301A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x800915E8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 36);
    r4 = (r1 + 16);
    ctx->lr = 0x8009156Cu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80062DBCu) && KnownTranslatedCpuCall<0x80062DBCu>::kAvailable && !KnownTranslatedCpuCall<0x80062DBCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80062DBCu>()) {
        const auto state_free_result_80062DBC_33F8 = func_80062DBC_statefree(r1, r3, r4, 0x8009156Cu);
        r1 = static_cast<uint32_t>(state_free_result_80062DBC_33F8[0]);
        ctx->lr = static_cast<uint32_t>(state_free_result_80062DBC_33F8[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        InvokeDirectCpu<0x80062DBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
    }
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = r23;
    r4 = (r1 + 8);
    ctx->lr = 0x80091580u;
    if constexpr (KnownRegArgsCpuCall<0x80092730u>(&func_80092730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80092730_3782 = func_80092730_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092730_3782);
        r4 = static_cast<uint32_t>(regargs_result_80092730_3782 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80092730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = (r1 + 32);
    r4 = (r1 + 12);
    ctx->lr = 0x80091590u;
    if constexpr (KnownRegArgsCpuCall<0x80069C3Cu>(&func_80069C3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80069C3C_3AE8 = func_80069C3C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80069C3C_3AE8;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80069C3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r3 = (r1 + 32);
    // inline leaf 0x80052F54 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    // end of inlined leaf 0x80052F54
}

loc_8009159C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800915B0;
    }
}

loc_800915A0:
{
    r3 = r26;
    r4 = (r1 + 32);
    ctx->lr = 0x800915ACu;
    if constexpr (KnownRegArgsCpuCall<0x80053AF4u>(&func_80053AF4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80053AF4_3F00 = func_80053AF4_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80053AF4_3F00;
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80053AF4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
    }
    r25 = (r25 + 1);
}

loc_800915B0:
{
    r26 = (r26 + 4);
    r24 = (r24 + 1);
}

loc_800915B8:
{
}

loc_800915BC:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r30))) {
        goto loc_80091538;
    }
}

loc_800915C0:
{
    r0 = (r31 + r30);
    r0 = (r0 - r25);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_9 & 134217727);
    r11 = (r1 + 96);
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80091404(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80091404_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80091404 func_80091404 preserves=true fpr_mask=0x00000000
