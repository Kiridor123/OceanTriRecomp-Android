#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004AF70(CpuContext* ctx);
extern "C" uint32_t func_8004AF70_ra8_0_8_0(CpuContext*, uint32_t);
extern "C" void func_8004AFC4(CpuContext* ctx);
extern "C" uint32_t func_8004AFC4_ra18_0_8_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8004B02C(CpuContext* ctx);
extern "C" uint64_t func_8004B02C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8004BA64(CpuContext* ctx);
extern "C" uint64_t func_8004BA64_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);

extern "C" MkwStateFreeResult2 func_8004AF70_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8004AFC4_statefree(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8004AF70_statefree_v0(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_8004AFC4_statefree_v0(uint32_t, uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_801EDB98_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801EDB98;

loc_801EDB98:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x80457488 (6 guest instruction(s))
    // end of inlined leaf 0x80457488
    r29 = r4;
    r27 = r5;
    r0 = MemoryInline::FlatRead8((r3 + 5));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    r28 = (r0 & 255);
    r3 = (r5 & 65535);
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl1_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl1_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl1_0x8029F758;
    }
}

loc_inl1_0x8029F754:
{
    r3 = 0;
}

loc_inl1_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl1_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r0 = (r29 & 65535);
}

loc_801EDBD4:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(24))) {
        goto loc_801EDBEC;
    }
}

loc_801EDBD8:
{
    r0 = MemoryInline::FlatRead8(r3);
}

loc_801EDBE0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_801EDBEC;
    }
}

loc_801EDBE4:
{
    r3 = 1;
    goto loc_801EDC98;
}

loc_801EDBEC:
{
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = (r29 & 65535);
    ctx->lr = 0x801EDBF8u;
    if constexpr (KnownRegArgsCpuCall<0x8004B02Cu>(&func_8004B02C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004B02C_D90 = func_8004B02C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004B02C_D90);
        r4 = static_cast<uint32_t>(regargs_result_8004B02C_D90 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004B02Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r29 = r3;
    r3 = (r3 & 65535);
}

loc_801EDC04:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801EDC94;
    }
}

loc_801EDC08:
{
    // inline leaf 0x8029F740 (10 guest instruction(s))
}

loc_inl2_0x8029F740:
{
    r4 = 0x806B0000u;
    r4 = MemoryInline::FlatRead32((r4 + -4808));
    r0 = (r3 & 65535);
}

loc_inl2_0x8029F750:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(747))) {
        goto loc_inl2_0x8029F758;
    }
}

loc_inl2_0x8029F754:
{
    r3 = 0;
}

loc_inl2_0x8029F758:
{
    r0 = (r3 & 65535);
    r0 = (r0 * 20);
    r3 = (r4 + r0);
}

loc_inl2_cont_8029F740:
{
    // end of inlined leaf 0x8029F740
    r30 = r3;
    r3 = r28;
    // inline leaf 0x8004AF70 (5 guest instruction(s))
}

loc_inl3_0x8004AF70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_inl3_0x8004AF74:
{
    r3 = 24;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8004AF7C:
{
    r3 = 32;
    goto loc_inl3_cont_8004AF70;
}

loc_inl3_return:
{
}

loc_inl3_cont_8004AF70:
{
    // end of inlined leaf 0x8004AF70
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004AFC4u) && KnownTranslatedCpuCall<0x8004AFC4u>::kAvailable && !KnownTranslatedCpuCall<0x8004AFC4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004AFC4u>()) {
        const auto state_free_result_8004AFC4_169A = func_8004AFC4_statefree_v0(r3, r4, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_8004AFC4_169A[0]);
        cr = static_cast<uint32_t>(state_free_result_8004AFC4_169A[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004AFC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = (r27 & 65535);
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8004BA64u>(&func_8004BA64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004BA64_1A46 = func_8004BA64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BA64_1A46);
        r4 = static_cast<uint32_t>(regargs_result_8004BA64_1A46 >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004BA64u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_801EDC40:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(24))) {
        goto loc_801EDC58;
    }
}

loc_801EDC44:
{
    r0 = MemoryInline::FlatRead8(r30);
}

loc_801EDC4C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_801EDC58;
    }
}

loc_801EDC50:
{
    r3 = 2;
    goto loc_801EDC98;
}

loc_801EDC58:
{
    r3 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004AF70u) && KnownTranslatedCpuCall<0x8004AF70u>::kAvailable && !KnownTranslatedCpuCall<0x8004AF70u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004AF70u>()) {
        const auto state_free_result_8004AF70_1F79 = func_8004AF70_statefree_v0(r3, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_8004AF70_1F79[0]);
        cr = static_cast<uint32_t>(state_free_result_8004AF70_1F79[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004AF70u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r13 + -17824));
    r4 = r28;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8004AFC4u) && KnownTranslatedCpuCall<0x8004AFC4u>::kAvailable && !KnownTranslatedCpuCall<0x8004AFC4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8004AFC4u>()) {
        const auto state_free_result_8004AFC4_23A1 = func_8004AFC4_statefree_v0(r3, r4, cr, xer);
        r3 = static_cast<uint32_t>(state_free_result_8004AFC4_23A1[0]);
        cr = static_cast<uint32_t>(state_free_result_8004AFC4_23A1[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[11] = r11;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004AFC4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r11 = ctx->gpr[11];
        r13 = ctx->gpr[13];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    r4 = r3;
    r3 = (r29 & 65535);
    r5 = r31;
    if constexpr (KnownRegArgsCpuCall<0x8004BA64u>(&func_8004BA64)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->cr = cr;
        const auto regargs_result_8004BA64_274D = func_8004BA64_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_8004BA64_274D);
        r4 = static_cast<uint32_t>(regargs_result_8004BA64_274D >> 32);
        r0 = ctx->gpr[0];
        cr = ctx->cr;
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->cr = cr;
        InvokeDirectCpu<0x8004BA64u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        cr = ctx->cr;
    }
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r3)));
}

loc_801EDC88:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_801EDC94;
    }
}

loc_801EDC8C:
{
    r3 = 3;
    goto loc_801EDC98;
}

loc_801EDC94:
{
    r3 = 0;
}

loc_801EDC98:
{
    r11 = (r1 + 32);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->cr = cr;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_801EDB98(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_801EDB98_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000207B gpr_write=0x0000087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801EDB98 func_801EDB98 preserves=true fpr_mask=0x00000000
