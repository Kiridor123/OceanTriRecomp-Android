#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80217B68(CpuContext* ctx);
extern "C" uint64_t func_80217B68_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80217C48(CpuContext* ctx);
extern "C" uint64_t func_80217C48_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_80217E3C(CpuContext* ctx);
extern "C" uint64_t func_80217E3C_ra38_0_18_0(CpuContext*, uint32_t, uint32_t, uint32_t);
extern "C" void func_80217EF8(CpuContext* ctx);
extern "C" uint64_t func_80217EF8_ra18_0_18_0(CpuContext*, uint32_t, uint32_t);
extern "C" void func_8027F018(CpuContext* ctx);
extern "C" uint32_t func_8027F018_ra8_0_8_0(CpuContext*, uint32_t);

extern "C" uint64_t func_8027F018_statefree(uint32_t, uint32_t, uint32_t);
extern "C" uint64_t func_8027F018_statefree_v0(uint32_t, uint32_t);

extern "C" uint64_t func_80217CCC_ra38_0_18_0(CpuContext* MKW_RESTRICT ctx, uint32_t arg_r3, uint32_t arg_r4, uint32_t arg_r5)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = arg_r3;
    uint32_t r4 = arg_r4;
    uint32_t r5 = arg_r5;
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t xer = ctx->xer;

    MKW_GUEST_ENTER(0x80217CCCu);
    goto loc_80217CCC;

loc_80217CCC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r28 = r3;
    r3 = MemoryInline::FlatRead8(r3);
    r4 = MemoryInline::FlatRead16((r28 + 2));
    ctx->lr = 0x80217CF8u;
    if constexpr (KnownRegArgsCpuCall<0x80217B68u>(&func_80217B68)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80217B68_73F = func_80217B68_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217B68_73F);
        r4 = static_cast<uint32_t>(regargs_result_80217B68_73F >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80217B68u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r31 = r3;
    r29 = 0;
    r3 = MemoryInline::FlatRead8(r28);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8027F018u) && KnownTranslatedCpuCall<0x8027F018u>::kAvailable && !KnownTranslatedCpuCall<0x8027F018u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8027F018u>()) {
        const auto state_free_result_8027F018_AEC = func_8027F018_statefree_v0(r3, xer);
        r3 = static_cast<uint32_t>(state_free_result_8027F018_AEC);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x8027F018u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        xer = ctx->xer;
    }
    r0 = (r3 & 255);
}

loc_80217D10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80217D20;
    }
}

loc_80217D14:
{
}

loc_80217D18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80217D64;
    }
}

loc_80217D1C:
{
    goto loc_80217DA4;
}

loc_80217D20:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80217D28:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_80217DA4;
    }
}

loc_80217D2C:
{
    r0 = MemoryInline::FlatRead8((r28 + 1));
}

loc_80217D34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80217DA4;
    }
}

loc_80217D38:
{
    r30 = 1;
    goto loc_80217D54;
}

loc_80217D40:
{
    r3 = r28;
    r4 = (r30 & 255);
    ctx->lr = 0x80217D4Cu;
    if constexpr (KnownRegArgsCpuCall<0x80217E3Cu>(&func_80217E3C)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80217E3C_1088 = func_80217E3C_ra38_0_18_0(ctx, r3, r4, r5);
        r3 = static_cast<uint32_t>(regargs_result_80217E3C_1088);
        r4 = static_cast<uint32_t>(regargs_result_80217E3C_1088 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r5 = ctx->gpr[5];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        InvokeDirectCpu<0x80217E3Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
    }
    r29 = (r29 + r3);
    r30 = (r30 + 1);
}

loc_80217D54:
{
    r0 = MemoryInline::FlatRead8((r28 + 1));
}

loc_80217D5C:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80217D40;
    }
}

loc_80217D60:
{
    goto loc_80217DA4;
}

loc_80217D64:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80217D6C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_80217DA4;
    }
}

loc_80217D70:
{
    r0 = MemoryInline::FlatRead8((r28 + 1));
}

loc_80217D78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80217DA4;
    }
}

loc_80217D7C:
{
    r30 = 1;
    goto loc_80217D98;
}

loc_80217D84:
{
    r3 = r28;
    r4 = (r30 & 255);
    ctx->lr = 0x80217D90u;
    if constexpr (KnownRegArgsCpuCall<0x80217EF8u>(&func_80217EF8)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80217EF8_1673 = func_80217EF8_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80217EF8_1673);
        r4 = static_cast<uint32_t>(regargs_result_80217EF8_1673 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80217EF8u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r29 = (r29 + r3);
    r30 = (r30 + 1);
}

loc_80217D98:
{
    r0 = MemoryInline::FlatRead8((r28 + 1));
}

loc_80217DA0:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r0))) {
        goto loc_80217D84;
    }
}

loc_80217DA4:
{
    r0 = MemoryInline::FlatRead8(r28);
}

loc_80217DAC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(6))) {
        goto loc_80217DC4;
    }
}

loc_80217DB0:
{
    r3 = r28;
    r4 = 3;
    ctx->lr = 0x80217DBCu;
    if constexpr (KnownRegArgsCpuCall<0x80217C48u>(&func_80217C48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80217C48_1AED = func_80217C48_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80217C48_1AED);
        r4 = static_cast<uint32_t>(regargs_result_80217C48_1AED >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80217C48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r31 + r3);
    goto loc_80217DD4;
}

loc_80217DC4:
{
    r3 = r28;
    r4 = MemoryInline::FlatRead8((r28 + 1));
    ctx->lr = 0x80217DD0u;
    if constexpr (KnownRegArgsCpuCall<0x80217C48u>(&func_80217C48)) {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        const auto regargs_result_80217C48_1E22 = func_80217C48_ra18_0_18_0(ctx, r3, r4);
        r3 = static_cast<uint32_t>(regargs_result_80217C48_1E22);
        r4 = static_cast<uint32_t>(regargs_result_80217C48_1E22 >> 32);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        InvokeDirectCpu<0x80217C48u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
    }
    r3 = (r31 + r3);
}

loc_80217DD4:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r0 = (r0 + r29);
    r0 = (static_cast<int32_t>(r0) >> 1);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[5] = r5;
    return (static_cast<uint64_t>(r4) << 32) | r3;
}

}

extern "C" void func_80217CCC(CpuContext* MKW_RESTRICT ctx)
{
    uint64_t result;
    [[clang::noinline]] result = func_80217CCC_ra38_0_18_0(ctx, ctx->gpr[3], ctx->gpr[4], ctx->gpr[5]);
    ctx->gpr[3] = static_cast<uint32_t>(result);
    ctx->gpr[4] = static_cast<uint32_t>(result >> 32);
}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x0000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80217CCC func_80217CCC preserves=true fpr_mask=0x00000000
