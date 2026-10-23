#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80049240(CpuContext* ctx);
extern "C" uint64_t func_80049240_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_8005A3D0(CpuContext* ctx);
extern "C" uint64_t func_8005A3D0_ra38_1e_18_0(CpuContext*, uint32_t, uint32_t, uint32_t, double, double, double, double);
extern "C" void func_80440078(CpuContext* ctx);
extern "C" uint32_t func_80440078_ra0_0_8_0(CpuContext*);

extern "C" MkwStateFreeResult2 func_80440078_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_80440078_statefree_v0(uint32_t, uint32_t, uint32_t);

extern "C" uint64_t func_80059BA0_ra38_1e_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5, double arg_f1, double arg_f2, double arg_f3, double arg_f4)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1; f1.d = arg_f1;
    PPC_FPR f2; f2.d = arg_f2;
    PPC_FPR f3; f3.d = arg_f3;
    PPC_FPR f4; f4.d = arg_f4;
    uint32_t xer = ctx->xer;

    goto loc_80059BA0;

loc_80059BA0:
{
    ctx->lr = 0x80059BA4u;
    ctx->gpr[1] = r1;
    ctx->xer = xer;
    if (MkwStateFreeAbiEnabled(0x80440078u) && KnownTranslatedCpuCall<0x80440078u>::kAvailable && !KnownTranslatedCpuCall<0x80440078u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x80440078u>()) {
        const auto state_free_result_80440078_790 = func_80440078_statefree_v0(r1, r31, 0x80059BA4u);
        r1 = static_cast<uint32_t>(state_free_result_80440078_790[0]);
        ctx->lr = static_cast<uint32_t>(state_free_result_80440078_790[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->xer = xer;
        InvokeDirectCpu<0x80440078u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r13 = ctx->gpr[13];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
        xer = ctx->xer;
    }
    r0 = 1;
    r3 = 0x80660000u;
    r3 = (r3 + -21920);
    MemoryInline::FlatWriteRam8((r3 + 2149), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r29 + 10));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r29 + 10), static_cast<uint8_t>(r0));
}

loc_80059E30:
{
    r3 = MemoryInline::FlatRead8((r29 + 10));
}

loc_80059E38:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(1))) {
        goto loc_80059E68;
    }
}

loc_80059E3C:
{
    r3 = 0;
    r4 = 0;
    ctx->lr = 0x80059E48u;
    if constexpr (KnownRegArgsCpuCall<0x8005A3D0u>(&func_8005A3D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_8005A3D0_DB6 = func_8005A3D0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005A3D0_DB6);
        r4 = static_cast<uint32_t>(regargs_result_8005A3D0_DB6 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005A3D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r0 = -200;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = 0x80060000u;
    r3 = (r3 + -22868);
    r4 = 1;
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_80049240_12DC = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_12DC);
        r4 = static_cast<uint32_t>(regargs_result_80049240_12DC >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    goto loc_8005A304;
}

loc_80059E68:
{
    r0 = (r3 + 254);
    r3 = (r0 & 255);
    r0 = 7;
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0_ca_1 = (xer >> 29) & 1u;
    r0 = (r3 + r0_ca_1);
    r3 = (r3 - r0);
    r3 = (r3 + 6);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = MemoryInline::FlatRead8((r13 + -17748));
}

loc_80059E98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8005A304;
    }
}

loc_80059E9C:
{
    r4 = 0;
    ctx->lr = 0x80059EA4u;
    if constexpr (KnownRegArgsCpuCall<0x8005A3D0u>(&func_8005A3D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_8005A3D0_18BF = func_8005A3D0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005A3D0_18BF);
        r4 = static_cast<uint32_t>(regargs_result_8005A3D0_18BF >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005A3D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = 0x80060000u;
    r3 = (r3 + -22868);
    r4 = 2;
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_80049240_1DA7 = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_1DA7);
        r4 = static_cast<uint32_t>(regargs_result_80049240_1DA7 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8005A304:
{
    r3 = MemoryInline::FlatRead8((r29 + 9));
}

loc_8005A30C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(2))) {
        goto loc_8005A31C;
    }
}

loc_8005A310:
{
    r0 = MemoryInline::FlatRead32((r13 + -17752));
}

loc_8005A318:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8005A324;
    }
}

loc_8005A31C:
{
}

loc_8005A320:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(6))) {
        goto loc_8005A3B0;
    }
}

loc_8005A324:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = 0x8005A330u;
    if constexpr (KnownRegArgsCpuCall<0x8005A3D0u>(&func_8005A3D0)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_8005A3D0_235A = func_8005A3D0_ra38_1e_18_0(ctx, r3, r4, r5, f1.d, f2.d, f3.d, f4.d);
        r3 = static_cast<uint32_t>(regargs_result_8005A3D0_235A);
        r4 = static_cast<uint32_t>(regargs_result_8005A3D0_235A >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->fpr[1] = f1;
        ctx->fpr[2] = f2;
        ctx->fpr[3] = f3;
        ctx->fpr[4] = f4;
        ctx->xer = xer;
        InvokeDirectCpu<0x8005A3D0u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        f1 = ctx->fpr[1];
        f2 = ctx->fpr[2];
        f3 = ctx->fpr[3];
        f4 = ctx->fpr[4];
    }
    r3 = 0x80060000u;
    r3 = (r3 + -22868);
    r4 = 2;
    r5 = (r1 + 8);
    if constexpr (KnownRegArgsCpuCall<0x80049240u>(&func_80049240)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->xer = xer;
        const auto regargs_result_80049240_2842 = func_80049240_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80049240_2842);
        r4 = static_cast<uint32_t>(regargs_result_80049240_2842 >> 32);
        r0 = ctx->gpr[0];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->xer = xer;
        InvokeDirectCpu<0x80049240u>(ctx);
        r0 = ctx->gpr[0];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
}

loc_8005A3B0:
{
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->xer = xer;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80059BA0(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80059BA0_ra38_1e_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5], ctx->fpr[1].d, ctx->fpr[2].d, ctx->fpr[3].d, ctx->fpr[4].d);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x20003FFF gpr_write=0xF0001FFB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xE3 cr_write=0xE3 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80059BA0 func_80059BA0 preserves=true fpr_mask=0x00000000
