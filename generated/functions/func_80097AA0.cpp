#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052940(CpuContext* ctx);
extern "C" uint64_t func_80052940_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80062DBC(CpuContext* ctx);
extern "C" uint32_t func_80062DBC_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80069C3C(CpuContext* ctx);
extern "C" uint32_t func_80069C3C_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80069C78(CpuContext* ctx);
extern "C" uint32_t func_80069C78_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80092730(CpuContext* ctx);
extern "C" uint64_t func_80092730_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_800929F4(CpuContext* ctx);
extern "C" uint64_t func_800929F4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80097868(CpuContext* ctx);
extern "C" uint64_t func_80097868_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80097924(CpuContext* ctx);
extern "C" uint64_t func_80097924_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80097C4C(CpuContext* ctx);
extern "C" uint64_t func_80097C4C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80097CA4(CpuContext* ctx);
extern "C" uint64_t func_80097CA4_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80501130(CpuContext* ctx);
extern "C" void func_80501130_ra38_0_0_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_80062DBC_statefree(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80097AA0_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;

    goto loc_80097AA0;

loc_80097AA0:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    r11 = (r1 + 96);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r31 = 1;
    ctx->lr = 0x80097ACCu;
    if constexpr (KnownRegArgsCpuCall<0x80097CA4u>(&func_80097CA4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80097CA4_BCC = func_80097CA4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80097CA4_BCC);
        r4 = static_cast<uint32_t>(regargs_result_80097CA4_BCC >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80097CA4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 44), r3);
    r3 = (r1 + 60);
    r4 = (r1 + 44);
    ctx->lr = 0x80097ADCu;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80062DBCu) && KnownTranslatedCpuCall<0x80062DBCu>::kAvailable && !KnownTranslatedCpuCall<0x80062DBCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80062DBCu>()) {
        const auto state_free_result_80062DBC_103F = func_80062DBC_statefree(r1, r3, r4, 0x80097ADCu);
        r1 = static_cast<uint32_t>(state_free_result_80062DBC_103F[0]);
        ctx->lr = static_cast<uint32_t>(state_free_result_80062DBC_103F[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80062DBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = (r1 + 60);
    // inline leaf 0x80091678 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80091678
}

loc_80097AE8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80097B08;
    }
}

loc_80097AEC:
{
    r3 = 0x80590000u;
    r3 = (r3 + 5432);
    r4 = 3061;
    r5 = 0x80590000u;
    r5 = (r5 + 6384);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x80097B08u;
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

loc_80097B08:
{
    r3 = r27;
    ctx->lr = 0x80097B10u;
    if constexpr (KnownRegArgsCpuCall<0x80097924u>(&func_80097924)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80097924_1805 = func_80097924_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80097924_1805);
        r4 = static_cast<uint32_t>(regargs_result_80097924_1805 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80097924u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80097B18:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80097B98;
    }
}

loc_80097B1C:
{
    r0 = MemoryInline::FlatRead32((r1 + 60));
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r3 = r28;
    r4 = (r1 + 36);
    ctx->lr = 0x80097B30u;
    if constexpr (KnownRegArgsCpuCall<0x800929F4u>(&func_800929F4)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_800929F4_1D01 = func_800929F4_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_800929F4_1D01);
        r4 = static_cast<uint32_t>(regargs_result_800929F4_1D01 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x800929F4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r3 = (r1 + 56);
    r4 = (r1 + 40);
    ctx->lr = 0x80097B40u;
    if constexpr (KnownRegArgsCpuCall<0x80069C78u>(&func_80069C78)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80069C78_20FC = func_80069C78_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80069C78_20FC;
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
    r3 = (r1 + 56);
    // inline leaf 0x800529E8 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800529E8
}

loc_80097B4C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80097B94;
    }
}

loc_80097B50:
{
    r3 = r27;
    ctx->lr = 0x80097B58u;
    if constexpr (KnownRegArgsCpuCall<0x80097868u>(&func_80097868)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80097868_253D = func_80097868_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80097868_253D);
        r4 = static_cast<uint32_t>(regargs_result_80097868_253D >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80097868u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_80097B5C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80097B70;
    }
}

loc_80097B60:
{
    r3 = (r1 + 56);
    ctx->lr = 0x80097B68u;
    if constexpr (KnownRegArgsCpuCall<0x80052940u>(&func_80052940)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80052940_299B = func_80052940_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80052940_299B);
        r4 = static_cast<uint32_t>(regargs_result_80052940_299B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80052940u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
}

loc_80097B6C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80097B94;
    }
}

loc_80097B70:
{
    r0 = MemoryInline::FlatRead32(r29);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r0 = MemoryInline::FlatRead32((r1 + 56));
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r3 = r27;
    r4 = (r1 + 32);
    r5 = (r1 + 28);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x800976C0u>(ctx);
    goto loc_80097B98;
}

loc_80097B94:
{
    r31 = 0;
}

loc_80097B98:
{
    r3 = r27;
    ctx->lr = 0x80097BA0u;
    if constexpr (KnownRegArgsCpuCall<0x80097924u>(&func_80097924)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80097924_2FC0 = func_80097924_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80097924_2FC0);
        r4 = static_cast<uint32_t>(regargs_result_80097924_2FC0 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80097924u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80097BA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80097C30;
    }
}

loc_80097BAC:
{
    r3 = r27;
    ctx->lr = 0x80097BB4u;
    if constexpr (KnownRegArgsCpuCall<0x80097C4Cu>(&func_80097C4C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80097C4C_3447 = func_80097C4C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80097C4C_3447);
        r4 = static_cast<uint32_t>(regargs_result_80097C4C_3447 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80097C4Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    r3 = (r1 + 52);
    r4 = (r1 + 24);
    ctx->lr = 0x80097BC4u;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x80062DBCu) && KnownTranslatedCpuCall<0x80062DBCu>::kAvailable && !KnownTranslatedCpuCall<0x80062DBCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80062DBCu>()) {
        const auto state_free_result_80062DBC_38BD = func_80062DBC_statefree(r1, r3, r4, 0x80097BC4u);
        r1 = static_cast<uint32_t>(state_free_result_80062DBC_38BD[0]);
        ctx->lr = static_cast<uint32_t>(state_free_result_80062DBC_38BD[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x80062DBCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r11 = ctx->gpr[11];
        cr = ctx->cr;
    }
    r3 = (r1 + 52);
    // inline leaf 0x80091678 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    // end of inlined leaf 0x80091678
}

loc_80097BD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80097C30;
    }
}

loc_80097BD4:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = r28;
    r4 = (r1 + 16);
    ctx->lr = 0x80097BE8u;
    if constexpr (KnownRegArgsCpuCall<0x80092730u>(&func_80092730)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_80092730_3E8B = func_80092730_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80092730_3E8B);
        r4 = static_cast<uint32_t>(regargs_result_80092730_3E8B >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x80092730u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        cr = ctx->cr;
    }
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 48);
    r4 = (r1 + 20);
    ctx->lr = 0x80097BF8u;
    if constexpr (KnownRegArgsCpuCall<0x80069C3Cu>(&func_80069C3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80069C3C_4286 = func_80069C3C_ra18_0_8_0(ctx, r3, r4);
        r3 = regargs_result_80069C3C_4286;
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
    r3 = (r1 + 48);
    // inline leaf 0x80052F54 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_4 & 1);
    // end of inlined leaf 0x80052F54
}

loc_80097C04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80097C2C;
    }
}

loc_80097C08:
{
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r0 = MemoryInline::FlatRead32((r1 + 48));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = r27;
    r4 = (r1 + 12);
    r5 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80097990u>(ctx);
    goto loc_80097C30;
}

loc_80097C2C:
{
    r31 = 0;
}

loc_80097C30:
{
    r3 = r31;
    r11 = (r1 + 96);
    // inline leaf 0x804574D4 (6 guest instruction(s))
    // end of inlined leaf 0x804574D4
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80097AA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80097AA0_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x000001FB gpr_write=0x000009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80097AA0 func_80097AA0 preserves=true fpr_mask=0x00000000
