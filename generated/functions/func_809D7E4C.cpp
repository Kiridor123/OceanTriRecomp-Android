#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80092678(CpuContext* ctx);
extern "C" uint64_t func_80092678_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8009293C(CpuContext* ctx);
extern "C" uint64_t func_8009293C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D530C(CpuContext* ctx);
extern "C" uint64_t func_800D530C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800D55B4(CpuContext* ctx);
extern "C" uint64_t func_800D55B4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_809D81B8_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_809D81F4_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" void func_809D7E4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    const uint32_t r26_entry = r26;
    const uint32_t r27_entry = r27;
    const uint32_t r28_entry = r28;
    uint32_t cr = ctx->cr;

    MKW_GUEST_ENTER(0x809D7E4Cu);
    goto loc_809D7E4C;

loc_809D7E4C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x80457484 (7 guest instruction(s))
    // end of inlined leaf 0x80457484
    r31 = r3;
    r3 = (r1 + 72);
    r4 = 0;
    ctx->lr = 0x809D7E70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D7DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = (r1 + 68);
    r4 = 0;
    ctx->lr = 0x809D7E7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D7D74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r29 = 0x80A20000u;
    r3 = (r29 + 13060);
    r4 = MemoryInline::FlatRead32((r31 + 104));
    ctx->lr = 0x809D7E8Cu;
    if constexpr (KnownRegArgsCpuCall<0x800D55B4u>(&func_800D55B4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800D55B4_BFF = func_800D55B4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D55B4_BFF);
        r4 = static_cast<uint32_t>(regargs_result_800D55B4_BFF >> 32);
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
        InvokeDirectCpu<0x800D55B4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWrite32((r31 + 100), r3);
    r3 = (r29 + 13060);
    ctx->lr = 0x809D7E98u;
    if constexpr (KnownRegArgsCpuCall<0x800D530Cu>(&func_800D530C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800D530C_FA9 = func_800D530C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800D530C_FA9);
        r4 = static_cast<uint32_t>(regargs_result_800D530C_FA9 >> 32);
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
        InvokeDirectCpu<0x800D530Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    r29 = r3;
}

loc_809D7EA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_809D7EFC;
    }
}

loc_809D7EA4:
{
    r3 = (r1 + 64);
    r4 = MemoryInline::FlatRead32((r29 + 68));
    ctx->lr = 0x809D7EB0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D7DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4 = r3;
    r3 = (r1 + 72);
    ctx->lr = 0x809D7EBCu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x809D81F4u) && KnownTranslatedCpuCall<0x809D81F4u>::kAvailable && !KnownTranslatedCpuCall<0x809D81F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x809D81F4u>()) {
        const auto state_free_result_809D81F4_15AD = func_809D81F4_statefree(r1, r3, r4, 0x809D7EBCu);
        r1 = static_cast<uint32_t>(state_free_result_809D81F4_15AD);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x809D81F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = (r1 + 72);
    r30 = 0x80A20000u;
    r4 = (r30 + 13080);
    ctx->lr = 0x809D7ECCu;
    if constexpr (KnownRegArgsCpuCall<0x8009293Cu>(&func_8009293C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8009293C_18ED = func_8009293C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009293C_18ED);
        r4 = static_cast<uint32_t>(regargs_result_8009293C_18ED >> 32);
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
        InvokeDirectCpu<0x8009293Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    r3 = (r31 + 88);
    r4 = (r1 + 60);
    ctx->lr = 0x809D7EDCu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x809D81B8u) && KnownTranslatedCpuCall<0x809D81B8u>::kAvailable && !KnownTranslatedCpuCall<0x809D81B8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x809D81B8u>()) {
        const auto state_free_result_809D81B8_1D12 = func_809D81B8_statefree(r1, r3, r4, 0x809D7EDCu);
        r1 = static_cast<uint32_t>(state_free_result_809D81B8_1D12);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x809D81B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = (r1 + 72);
    r4 = (r30 + 13080);
    ctx->lr = 0x809D7EE8u;
    if constexpr (KnownRegArgsCpuCall<0x80092678u>(&func_80092678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80092678_203B = func_80092678_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092678_203B);
        r4 = static_cast<uint32_t>(regargs_result_80092678_203B >> 32);
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
        InvokeDirectCpu<0x80092678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 56), r3);
    r3 = (r31 + 92);
    r4 = (r1 + 56);
    ctx->lr = 0x809D7EF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D817Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    goto loc_809D7F04;
}

loc_809D7EFC:
{
    ctx->lr = 0x809D7F00u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D8230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    cr = ctx->cr;
    goto loc_809D8148;
}

loc_809D7F04:
{
    r26 = 0;
    r3 = 0x80A20000u;
    r27 = (r3 + 12712);
    r28 = (r31 + 108);
    r30 = (r31 + 140);
}

loc_809D7F18:
{
}

loc_809D7F1C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_809D7F74;
    }
}

loc_809D7F20:
{
    r3 = (r1 + 52);
    r4 = MemoryInline::FlatRead32((r29 + 68));
    ctx->lr = 0x809D7F2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D7DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4 = r3;
    r3 = (r1 + 72);
    ctx->lr = 0x809D7F38u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x809D81F4u) && KnownTranslatedCpuCall<0x809D81F4u>::kAvailable && !KnownTranslatedCpuCall<0x809D81F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x809D81F4u>()) {
        const auto state_free_result_809D81F4_2A3D = func_809D81F4_statefree(r1, r3, r4, 0x809D7F38u);
        r1 = static_cast<uint32_t>(state_free_result_809D81F4_2A3D);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x809D81F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = (r1 + 72);
    r4 = MemoryInline::FlatRead32(r27);
    ctx->lr = 0x809D7F44u;
    if constexpr (KnownRegArgsCpuCall<0x8009293Cu>(&func_8009293C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8009293C_2D76 = func_8009293C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009293C_2D76);
        r4 = static_cast<uint32_t>(regargs_result_8009293C_2D76 >> 32);
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
        InvokeDirectCpu<0x8009293Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 48), r3);
    r3 = r28;
    r4 = (r1 + 48);
    ctx->lr = 0x809D7F54u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x809D81B8u) && KnownTranslatedCpuCall<0x809D81B8u>::kAvailable && !KnownTranslatedCpuCall<0x809D81B8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x809D81B8u>()) {
        const auto state_free_result_809D81B8_3194 = func_809D81B8_statefree(r1, r3, r4, 0x809D7F54u);
        r1 = static_cast<uint32_t>(state_free_result_809D81B8_3194);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x809D81B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = (r1 + 72);
    r4 = MemoryInline::FlatRead32(r27);
    ctx->lr = 0x809D7F60u;
    if constexpr (KnownRegArgsCpuCall<0x80092678u>(&func_80092678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80092678_34CD = func_80092678_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092678_34CD);
        r4 = static_cast<uint32_t>(regargs_result_80092678_34CD >> 32);
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
        InvokeDirectCpu<0x80092678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r3 = r30;
    r4 = (r1 + 44);
    ctx->lr = 0x809D7F70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D817Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    goto loc_809D7F7C;
}

loc_809D7F74:
{
    ctx->lr = 0x809D7F78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D8230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    cr = ctx->cr;
    goto loc_809D8148;
}

loc_809D7F7C:
{
    r27 = (r27 + 4);
    r28 = (r28 + 4);
    r30 = (r30 + 4);
    r26 = (r26 + 1);
}

loc_809D7F90:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(8))) {
        goto loc_809D7F18;
    }
}

loc_809D7F94:
{
    r26 = 0;
    r3 = 0x80A20000u;
    r27 = (r3 + 12828);
    r28 = (r31 + 172);
    r30 = (r31 + 200);
}

loc_809D7FA8:
{
}

loc_809D7FAC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_809D8004;
    }
}

loc_809D7FB0:
{
    r3 = (r1 + 40);
    r4 = MemoryInline::FlatRead32((r29 + 68));
    ctx->lr = 0x809D7FBCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D7DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4 = r3;
    r3 = (r1 + 72);
    ctx->lr = 0x809D7FC8u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x809D81F4u) && KnownTranslatedCpuCall<0x809D81F4u>::kAvailable && !KnownTranslatedCpuCall<0x809D81F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x809D81F4u>()) {
        const auto state_free_result_809D81F4_3FA4 = func_809D81F4_statefree(r1, r3, r4, 0x809D7FC8u);
        r1 = static_cast<uint32_t>(state_free_result_809D81F4_3FA4);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x809D81F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = (r1 + 72);
    r4 = MemoryInline::FlatRead32(r27);
    ctx->lr = 0x809D7FD4u;
    if constexpr (KnownRegArgsCpuCall<0x8009293Cu>(&func_8009293C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8009293C_42DD = func_8009293C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009293C_42DD);
        r4 = static_cast<uint32_t>(regargs_result_8009293C_42DD >> 32);
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
        InvokeDirectCpu<0x8009293Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 36), r3);
    r3 = r28;
    r4 = (r1 + 36);
    ctx->lr = 0x809D7FE4u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x809D81B8u) && KnownTranslatedCpuCall<0x809D81B8u>::kAvailable && !KnownTranslatedCpuCall<0x809D81B8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x809D81B8u>()) {
        const auto state_free_result_809D81B8_46FB = func_809D81B8_statefree(r1, r3, r4, 0x809D7FE4u);
        r1 = static_cast<uint32_t>(state_free_result_809D81B8_46FB);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x809D81B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = (r1 + 72);
    r4 = MemoryInline::FlatRead32(r27);
    ctx->lr = 0x809D7FF0u;
    if constexpr (KnownRegArgsCpuCall<0x80092678u>(&func_80092678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80092678_4A34 = func_80092678_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092678_4A34);
        r4 = static_cast<uint32_t>(regargs_result_80092678_4A34 >> 32);
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
        InvokeDirectCpu<0x80092678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 32), r3);
    r3 = r30;
    r4 = (r1 + 32);
    ctx->lr = 0x809D8000u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D817Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    goto loc_809D800C;
}

loc_809D8004:
{
    ctx->lr = 0x809D8008u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D8230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    cr = ctx->cr;
    goto loc_809D8148;
}

loc_809D800C:
{
    r27 = (r27 + 4);
    r28 = (r28 + 4);
    r30 = (r30 + 4);
    r26 = (r26 + 1);
}

loc_809D8020:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(7))) {
        goto loc_809D7FA8;
    }
}

loc_809D8024:
{
    r26 = 0;
    r3 = 0x80A20000u;
    r28 = (r3 + 13036);
    r30 = (r31 + 228);
    r27 = (r31 + 240);
}

loc_809D8038:
{
}

loc_809D803C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_809D8094;
    }
}

loc_809D8040:
{
    r3 = (r1 + 28);
    r4 = MemoryInline::FlatRead32((r29 + 68));
    ctx->lr = 0x809D804Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D7DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4 = r3;
    r3 = (r1 + 72);
    ctx->lr = 0x809D8058u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x809D81F4u) && KnownTranslatedCpuCall<0x809D81F4u>::kAvailable && !KnownTranslatedCpuCall<0x809D81F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x809D81F4u>()) {
        const auto state_free_result_809D81F4_550B = func_809D81F4_statefree(r1, r3, r4, 0x809D8058u);
        r1 = static_cast<uint32_t>(state_free_result_809D81F4_550B);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x809D81F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = (r1 + 72);
    r4 = MemoryInline::FlatRead32(r28);
    ctx->lr = 0x809D8064u;
    if constexpr (KnownRegArgsCpuCall<0x8009293Cu>(&func_8009293C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8009293C_5844 = func_8009293C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009293C_5844);
        r4 = static_cast<uint32_t>(regargs_result_8009293C_5844 >> 32);
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
        InvokeDirectCpu<0x8009293Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = r30;
    r4 = (r1 + 24);
    ctx->lr = 0x809D8074u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x809D81B8u) && KnownTranslatedCpuCall<0x809D81B8u>::kAvailable && !KnownTranslatedCpuCall<0x809D81B8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x809D81B8u>()) {
        const auto state_free_result_809D81B8_5C62 = func_809D81B8_statefree(r1, r3, r4, 0x809D8074u);
        r1 = static_cast<uint32_t>(state_free_result_809D81B8_5C62);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x809D81B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = (r1 + 72);
    r4 = MemoryInline::FlatRead32(r28);
    ctx->lr = 0x809D8080u;
    if constexpr (KnownRegArgsCpuCall<0x80092678u>(&func_80092678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80092678_5F9B = func_80092678_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092678_5F9B);
        r4 = static_cast<uint32_t>(regargs_result_80092678_5F9B >> 32);
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
        InvokeDirectCpu<0x80092678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = r27;
    r4 = (r1 + 20);
    ctx->lr = 0x809D8090u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D817Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    goto loc_809D809C;
}

loc_809D8094:
{
    ctx->lr = 0x809D8098u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D8230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    cr = ctx->cr;
    goto loc_809D8148;
}

loc_809D809C:
{
    r28 = (r28 + 4);
    r30 = (r30 + 4);
    r27 = (r27 + 4);
    r26 = (r26 + 1);
}

loc_809D80B0:
{
    if ((static_cast<int32_t>(r26) < static_cast<int32_t>(3))) {
        goto loc_809D8038;
    }
}

loc_809D80B4:
{
    r27 = 0;
    r3 = 0x80A20000u;
    r30 = (r3 + 12952);
    r28 = (r31 + 252);
    r31 = (r31 + 300);
}

loc_809D80C8:
{
}

loc_809D80CC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_809D8124;
    }
}

loc_809D80D0:
{
    r3 = (r1 + 16);
    r4 = MemoryInline::FlatRead32((r29 + 68));
    ctx->lr = 0x809D80DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D7DE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r4 = r3;
    r3 = (r1 + 72);
    ctx->lr = 0x809D80E8u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x809D81F4u) && KnownTranslatedCpuCall<0x809D81F4u>::kAvailable && !KnownTranslatedCpuCall<0x809D81F4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x809D81F4u>()) {
        const auto state_free_result_809D81F4_6A72 = func_809D81F4_statefree(r1, r3, r4, 0x809D80E8u);
        r1 = static_cast<uint32_t>(state_free_result_809D81F4_6A72);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x809D81F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = (r1 + 72);
    r4 = MemoryInline::FlatRead32(r30);
    ctx->lr = 0x809D80F4u;
    if constexpr (KnownRegArgsCpuCall<0x8009293Cu>(&func_8009293C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8009293C_6DAB = func_8009293C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8009293C_6DAB);
        r4 = static_cast<uint32_t>(regargs_result_8009293C_6DAB >> 32);
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
        InvokeDirectCpu<0x8009293Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r3 = r28;
    r4 = (r1 + 12);
    ctx->lr = 0x809D8104u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x809D81B8u) && KnownTranslatedCpuCall<0x809D81B8u>::kAvailable && !KnownTranslatedCpuCall<0x809D81B8u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x809D81B8u>()) {
        const auto state_free_result_809D81B8_71C9 = func_809D81B8_statefree(r1, r3, r4, 0x809D8104u);
        r1 = static_cast<uint32_t>(state_free_result_809D81B8_71C9);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x809D81B8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = (r1 + 72);
    r4 = MemoryInline::FlatRead32(r30);
    ctx->lr = 0x809D8110u;
    if constexpr (KnownRegArgsCpuCall<0x80092678u>(&func_80092678)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80092678_7502 = func_80092678_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092678_7502);
        r4 = static_cast<uint32_t>(regargs_result_80092678_7502 >> 32);
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
        InvokeDirectCpu<0x80092678u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r3 = r31;
    r4 = (r1 + 8);
    ctx->lr = 0x809D8120u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x809D817Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    goto loc_809D812C;
}

loc_809D8124:
{
    ctx->lr = 0x809D8128u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->cr = cr;
    InvokeDirectCpu<0x809D8230u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    cr = ctx->cr;
    goto loc_809D8148;
}

loc_809D812C:
{
    r30 = (r30 + 4);
    r28 = (r28 + 4);
    r31 = (r31 + 4);
    r27 = (r27 + 1);
}

loc_809D8140:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(12))) {
        goto loc_809D80C8;
    }
}

loc_809D8144:
{
    goto loc_809D8164;
}

loc_809D8148:
{
    r3 = 0x80A20000u;
    r3 = (r3 + 13088);
    r4 = 2013;
    r5 = 0x80A20000u;
    r5 = (r5 + 13104);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x809D8164u;
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

loc_809D8164:
{
    r11 = (r1 + 112);
    // inline leaf 0x804574D0 (7 guest instruction(s))
    // end of inlined leaf 0x804574D0
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    ctx->gpr[26] = r26_entry;
    ctx->gpr[27] = r27_entry;
    ctx->gpr[28] = r28_entry;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000021FA gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x809D7E4C func_809D7E4C preserves=true fpr_mask=0x00000000
